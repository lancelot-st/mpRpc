
# 环境
CentOS7的Linux系统


# 测试

## protobuf

在 protobuf 目录下，新建 main.cc 和 test.proto, package 对应 C++中的 namespace, message 对应类, string 和 bytes 可以相互替代，使用无区别

使用命令`protoc test.proto --cpp_out=./` 生成文件
使用命令`g++ main.cc test.pb.cc -lprotobuf -lpthread` 生成可执行文件，thread 是因为 proto 库用到了

```proto
message LoginRequest{
map<int32, string> test=1;
repeated User users = 2; //重复该字端，定义了列表类型
}
```

使用内部对象时，通过函数返回指针

protobuf 不提供 rpc 通信功能，而是做 rpc 方法的序列化和反序列化，通信功能由muduo网络库来辅助完成。
定义描述 rpc 方法的类型 - service

```proto
//定义下面的选项，表示生成service服务类和rpc方法描述，默认为false
option cc_generic_services = true;

service UserServiceRpc{
    rpc Login(LoginRequest) returns(LoginResponse);
    rpc Register(RegisterReq) returns(RegisterRsp);
}
```

```C++
class UserServiceRpc : public ::google::protobuf::Service; //服务提供者，有默认构造函数，有服务描述器

class UserServiceRpc_Stub : public UserServiceRpc;  //服务消费者，无默认构造函数，有channel_成员变量，通过channel的CallMethod通过网络调用对应的方法
```

# 框架设计

从使用倒推框架应有的功能

notifyservice 中需要生成一张表，记录服务对象和其发布的所有发布方法
Service 类：对象 Method 类：方法

```c++
// 服务类型信息
  struct ServiceInfo {
    google::protobuf::Service *service_; //保存服务对象
    std::unordered_map<std::string, const google::protobuf::MethodDescriptor *>
        method_map_; // <方法名，描述指针> 保存服务方法
  };
  // 存储注册成功的服务对象和其服务方法的所有信息
  std::unordered_map<std::string, ServiceInfo> service_map_;
```

协议格式设计:

```c++
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
```

服务端：

远端调用 rpc 方法，OnMessage 收到请求，解析出服务和方法名得到对应的对象，
生成 rpc 方法的请求 request 和响应 response 参数，request 由框架解析，response 由用户填写；
绑定回调函数 SendRpcResponse，然后 CallMethod 调用方法。
比如调用 UserService 的 Login 方法， 用户在 Login 方法中解析出参数，执行任务，将结果写入 response，然后调用回调函数 done。
done 绑定了 SendRpcResponse，在 SendRpcResponse 中，框架把用户写好的 respone 发送回 rpc 调用端，并断开连接。
流程结束

消费端：
继承 RpcChannel，实现 callMethod。
请求数组的组装，数据序列化，发送 rpc 请求，wait，接收 rpc 响应，响应的反序列化

controller 提供给用户执行过程信息

## 日志

写日志要异步进行，不能占用方法的执行时间，定义一个阻塞队列进行消息的接收，保证多线程读取消息下消息的同步，queue 要保证线程安全
