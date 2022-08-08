#include "mprpcapplication.h"
#include "mprpcchannel.h"
#include "user.pb.h"
#include <iostream>

int main(int argc, char **argv) {
  // 初始化mprpc环境
  MprpcApplication::Init(argc, argv);

  fixbug::UserServiceRpc_Stub stub(
      new MprpcChannel()); // stub相当于中介,任务由RpcChannel完成

  // 演示注册
  fixbug::RegisterReq req;
  req.set_id(101);
  req.set_name("mprpc");
  req.set_pwd("6666666");
  fixbug::RegisterRsp rsp;

  stub.Register(nullptr, &req, &rsp, nullptr);

  if (rsp.result().code() == 200) {
    std::cout << "调用rpc注册方法成功，调用结果：" << rsp.data() << std::endl;
  } else {
    std::cout << "调用rpc注册方法失败:" << rsp.result().msg() << std::endl;
  }
  //#############################################
  // 演示调用远程的rpc方法Login
  //   rpc方法的请求
  fixbug::LoginReq request;
  request.set_name("zevsee");
  request.set_pwd("123456");
  //   rpc的响应
  fixbug::LoginRsp response;

  // 发起rpc方法的调用， 同步的rpc调用过程
  // RpcChannel->callMethod()集中做所有rpc方法调用的参数序列化和网络发送
  stub.Login(nullptr, &request, &response, nullptr);

  // 结果显示
  if (response.result().code() == 200) {
    std::cout << "调用rpc登录方法成功，调用结果：" << response.data()
              << std::endl;
  } else {
    std::cout << "调用rpc登录方法失败: " << response.result().msg()
              << std::endl;
  }

  return 0;
}