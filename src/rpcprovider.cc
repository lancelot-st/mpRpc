#include "rpcprovider.h"
#include "logger.h"
#include "mprpcapplication.h"
#include "rpcheader.pb.h"

RpcProvider::RpcProvider(/* args */) {}

RpcProvider::~RpcProvider() {}

/**
 * @brief 记录服务对象及其方法的映射关系
 *    service_name: service描述 => {service*: 记录服务对象; method_name:
 * method方法对象}
 *
 * @param service 服务对象
 */
void RpcProvider::NotifyService(google::protobuf::Service *service) {
  // 获取服务对象的描述信息
  const google::protobuf::ServiceDescriptor *pservice_desc =
      service->GetDescriptor();

  ServiceInfo service_info;
  service_info.service_ = service;

  // 获取服务对象的方法数量
  int method_size = pservice_desc->method_count();
  for (int i = 0; i < method_size; ++i) {
    // 获取了服务对象指定下标的服务方法的描述（抽象描述）
    auto pmethod_desc = pservice_desc->method(i);
    LOG("method_name:" + pmethod_desc->name());
    service_info.method_map_.emplace(pmethod_desc->name(), pmethod_desc);
  }

  //获取服务对象(类)名字  TODO:protobuf是如何得知类名的
  std::string service_name = pservice_desc->name();
  LOG("service_name:" + service_name);
  service_map_.emplace(service_name, service_info);
}

void RpcProvider::Run() {
  // 获取配置
  auto config = MprpcApplication::GetInstance().GetConfig();
  // 加载ip和port
  std::string ip = config.Load("rpcserver_ip");
  uint16_t port = atoi(config.Load("rpcserver_port").c_str());
  // 创建地址
  muduo::net::InetAddress address(ip, port);

  // 创建server
  muduo::net::TcpServer server(&event_loop_, address, "RpcProvider");
  // 绑定连接回调和消息读写回掉方法 分离了网络代码和业务代码
  server.setConnectionCallback(
      std::bind(&RpcProvider::OnConnection, this, std::placeholders::_1));
  server.setMessageCallback(
      std::bind(&RpcProvider::OnMessage, this, std::placeholders::_1,
                std::placeholders::_2, std::placeholders::_3));

  // 设置muduo库的线程数量， 自动分发工作线程和io线程
  server.setThreadNum(4);

  std::cout << "RpcProvider service start at " << ip << ":" << port
            << std::endl;

  // 启动网络服务
  server.start();
  // 启动了epool_wait等待远程连接
  event_loop_.loop();
}

// rpc请求是短连接请求，一次请求结束后就会断开
void RpcProvider::OnConnection(const muduo::net::TcpConnectionPtr &conn) {
  if (!conn->connected()) {
    // 和rpc client的连接断开
    conn->shutdown(); // TODO: why?
  }
}

/**
 * 在框架内部，RpcProvider和RpcConsumer协商好之间通信用的protobuf数据格式
 * 【service_name method_name args_size】【args】
 *                                          定义proto的message类型，进行数据的序列化和反序列化
 *                                          为什么要定义args_size，因为args已经在服务对象中封装好了，
 *                                          所以发的时候要记录其大小，防止粘包
 *
 * 16UserServiceLoginzhang san123456
 * header_size(4个字节) + header_str + args_str
 */
// 如果远程有一个rpc服务的调用请求，那么OnMessage方法就会响应
void RpcProvider::OnMessage(const muduo::net::TcpConnectionPtr &conn,
                            muduo::net::Buffer *buf, muduo::Timestamp time) {
  // 1.网络上接受的远程rpc调用求情的字符流
  std::string recv_buf = buf->retrieveAllAsString();

  // 从字符流中读取前四个字节作为header size
  uint32_t header_size = 0;
  recv_buf.copy((char *)&header_size, 4, 0);

  // 根据header_size 读取数据头的原始字符流
  std::string rpc_header_str = recv_buf.substr(4, header_size);

  // 2.反序列化得到rpc请求的详细信息
  mprpc::RpcHeader rpc_header;
  if (!rpc_header.ParseFromString(rpc_header_str)) {
    // 失败，记入日志
    LOG_ERROR("rpc_header_str: %s parse error!", rpc_header_str.c_str());
    return;
  }

  // 获取rpc方法参数的字符流数据
  std::string args_str =
      recv_buf.substr(4 + header_size, rpc_header.args_size());

  // 打印调试信息
  std::cout << "==============================================" << std::endl;
  std::cout << "header_size: " << header_size << std::endl;
  std::cout << "rpc_header_str: " << rpc_header_str << std::endl;
  std::cout << "service_name: " << rpc_header.service_name() << std::endl;
  std::cout << "method_name: " << rpc_header.method_name() << std::endl;
  std::cout << "args_size: " << rpc_header.args_size() << std::endl;
  std::cout << "args_str: " << args_str << std::endl;
  std::cout << "==============================================" << std::endl;

  // 3.获取service对象和method对象
  auto it = service_map_.find(rpc_header.service_name());
  if (it == service_map_.end()) {
    LOG_ERROR("%s is not exist!", rpc_header.service_name().c_str());
    return;
  }
  auto mit = it->second.method_map_.find(rpc_header.method_name());
  if (mit == it->second.method_map_.end()) {
    LOG_ERROR("%s:%s is not exist!", rpc_header.service_name().c_str(),
              rpc_header.method_name().c_str());
    return;
  }

  google::protobuf::Service *service =
      it->second.service_; // 得到service对象 传入的参数new UserService
  const google::protobuf::MethodDescriptor *method =
      mit->second; // 得到method对象

  // 4.生成rpc方法的请求request和响应response参数
  google::protobuf::Message *request =
      service->GetRequestPrototype(method).New();
  if (!request->ParseFromString(args_str)) {
    LOG_ERROR("request parse error! content: %s", args_str.c_str());
    return;
  }
  google::protobuf::Message *response =
      service->GetResponsePrototype(method).New();

  // 5.给下面的method方法的调用绑定一个Closure的回调函数
  google::protobuf::Closure *done =
      google::protobuf::NewCallback<RpcProvider,
                                    const muduo::net::TcpConnectionPtr &,
                                    google::protobuf::Message *>(
          this, &RpcProvider::SendRpcResponse, conn, response);

  // 6.在框架上根据远端rpc请求，调用当前rpc节点上发布的方法
  // 对应new UserService().Login(controller, request, response, done)
  service->CallMethod(method, nullptr, request, response, done);
}

// 结果写入响应后会执行此回调
void RpcProvider::SendRpcResponse(const muduo::net::TcpConnectionPtr &conn,
                                  google::protobuf::Message *response) {
  std::string response_str;
  if (response->SerializeToString(&response_str)) {
    // 序列化成功后，通过网络把rpc方法执行的结果response_str发送回rpc的调用方
    conn->send(response_str);
  } else {
    LOG_ERROR("Serialize response_str error!");
  }
  conn->shutdown(); // 模拟http的短连接服务，由rpcprovider主动断开连接
}
