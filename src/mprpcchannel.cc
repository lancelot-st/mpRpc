#include "mprpcchannel.h"
#include "mprpcapplication.h"
#include "mprpccontroller.h"
#include "rpcheader.pb.h"
#include <arpa/inet.h>
#include <error.h>
#include <string>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * header_size(4个字节) + header_str + args_str
 *
 * header_size(4个字节) +【service_name method_name args_size】+【args】
 */

void MprpcChannel::CallMethod(const google::protobuf::MethodDescriptor *method,
                              google::protobuf::RpcController *controller,
                              const google::protobuf::Message *request,
                              google::protobuf::Message *response,
                              google::protobuf::Closure *done) {
  const google::protobuf::ServiceDescriptor *psd = method->service();
  std::string service_name = psd->name();
  std::string method_name = method->name();

  // 1.序列化参数agrs
  std::string args_str;
  if (!request->SerializeToString(&args_str)) {
    controller->SetFailed("serialize request error!");
    return;
  }
  uint32_t args_size = args_str.size(); // 获取参数的序列化字符串长度 args_size

  // 定义rpc的请求header
  mprpc::RpcHeader rpc_header;
  rpc_header.set_service_name(service_name);
  rpc_header.set_method_name(method_name);
  rpc_header.set_args_size(args_size);

  // 2.序列化rpc header
  std::string rpc_header_str;
  if (!rpc_header.SerializeToString(&rpc_header_str)) {
    controller->SetFailed("serialize rpc header error!");
    return;
  }
  uint32_t header_size = rpc_header_str.size();

  // 3.组织要发送的rpc请求的字符串
  std::string send_buf;
  send_buf.insert(0, (char *)&header_size, 4); // header_size
  send_buf += rpc_header_str;                  // rpc_header
  send_buf += args_str;                        // args

  // 打印调试信息
  std::cout << "==============================================" << std::endl;
  std::cout << "header_size: " << header_size << std::endl;
  std::cout << "rpc_header_str: " << rpc_header_str << std::endl;
  std::cout << "service_name: " << rpc_header.service_name() << std::endl;
  std::cout << "method_name: " << rpc_header.method_name() << std::endl;
  std::cout << "args_size: " << rpc_header.args_size() << std::endl;
  std::cout << "args_str: " << args_str << std::endl;
  std::cout << "==============================================" << std::endl;

  // ########################### 发起网络请求 #############################
  // 1.使用tcp编程，完成rpc方法的远程调用
  int clientfd = socket(AF_INET, SOCK_STREAM, 0);
  if (clientfd == -1) {
    // perror("create socket error!");
    controller->SetFailed("create socket error!" + std::to_string(errno));
    return;
  }

  // 获取配置
  auto config = MprpcApplication::GetInstance().GetConfig();
  // 加载ip和port
  std::string ip = config.Load("rpcserver_ip");
  uint16_t port = atoi(config.Load("rpcserver_port").c_str());
  // TODO: 这里为什么不用muduo
  struct sockaddr_in server_addr;
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(port);
  server_addr.sin_addr.s_addr = inet_addr(ip.c_str());

  // 2.连接rpc服务节点
  if (-1 ==
      connect(clientfd, (struct sockaddr *)&server_addr, sizeof(server_addr))) {
    // perror("connect error!");
    controller->SetFailed("connect error!" + std::to_string(errno));
    close(clientfd);
    return;
  }

  // 3.发送rpc请求
  if (-1 == send(clientfd, send_buf.c_str(), send_buf.size(), 0)) {
    // perror("send error!");
    controller->SetFailed("send error!" + std::to_string(errno));
    close(clientfd);
    return;
  }

  // 4.接受rpc请求的响应值
  char recv_buf[1024]{};
  int recv_size{};
  if (-1 == (recv_size = recv(clientfd, recv_buf, 1024, 0))) {
    // perror("receive error!");
    controller->SetFailed("receive error!" + std::to_string(errno));
    close(clientfd);
    return;
  }

  // 5.反序列化rpc调用的响应数据
  if (!response->ParseFromArray(recv_buf, recv_size)) {
    controller->SetFailed("parse error! response_str: " +
                          std::string(recv_buf, recv_size));
    close(clientfd);
    return;
  }
  close(clientfd);
}