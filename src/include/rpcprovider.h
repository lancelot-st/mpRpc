#pragma once
#include "google/protobuf/service.h"
#include "muduo/net/EventLoop.h"
#include "muduo/net/InetAddress.h"
#include "muduo/net/TcpConnection.h"
#include "muduo/net/TcpServer.h"
#include <functional>
#include <google/protobuf/descriptor.h>
#include <string>
#include <unordered_map>

// 框架提供的专门发布rpc服务的网络对象类
class RpcProvider {
public:
  RpcProvider(/* args */);
  ~RpcProvider();

  // 框架提供给外部使用的，可以发布rpc方法的函数接口
  void NotifyService(google::protobuf::Service *service);
  // 启动rpc服务节点，开始提供rpc远程网络调用服务
  void Run();

private:
  // 新socket连接回调
  void OnConnection(const muduo::net::TcpConnectionPtr &conn);
  // 已建立连接用户的读写回调
  void OnMessage(const muduo::net::TcpConnectionPtr &conn,
                 muduo::net::Buffer *buf, muduo::Timestamp time);
  // Closure的回调操作，用于序列化rpc的响应和网络发送
  void SendRpcResponse(const muduo::net::TcpConnectionPtr &conn,
                       google::protobuf::Message *response);

private:
  // 组合EventLoop
  muduo::net::EventLoop event_loop_;

  // 服务类型信息
  struct ServiceInfo {
    google::protobuf::Service *service_; //保存服务对象
    std::unordered_map<std::string, const google::protobuf::MethodDescriptor *>
        method_map_; // <方法名，描述指针> 保存服务方法
  };
  // 存储注册成功的服务对象和其服务方法的所有信息
  std::unordered_map<std::string, ServiceInfo> service_map_;
};
