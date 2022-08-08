#include "mprpcapplication.h"
#include "rpcprovider.h"
#include "user.pb.h"
#include <iostream>
#include <string>

/**
 * @brief UserService
 * 本来是一个本地服务，提供了两个进程内的本地方法，Login和GetFriendList
 *
 */
class UserService
    : public fixbug::UserServiceRpc { //使用在rpc服务发布端（服务提供者）
public:
  bool Login(std::string name, std::string pwd) {
    std::cout << "doing local service : Login\n"
              << "name:" << name << " pwd:" << pwd << std::endl;
    return true;
  }

  bool Register(uint32_t id, std::string name, std::string pwd) {
    std::cout << "doing local service : Register\n"
              << "id:" << id << " name:" << name << " pwd:" << pwd << std::endl;
    return true;
  }

  //重写基类UserServiceRpc的虚函数， 下面这些方法都是框架直接调用
  // 1. caller ==> Login(LoginReq) ==> muduo ==> callee
  // 2. callee ==> Login(LoginReq) ==> 交到下面重写的这个Login方法上
  void Login(::google::protobuf::RpcController *controller,
             const ::fixbug::LoginReq *request, ::fixbug::LoginRsp *response,
             ::google::protobuf::Closure *done) override {
    // 1.框架给业务传递了请求参数request， 应用获取相应数据
    std::string name = request->name();
    std::string pwd = request->pwd();

    // 2.做本地业务
    bool login_result = Login(name, pwd);

    // 3.把结果写入响应 包括错误码 消息 返回值
    fixbug::ResultCode *code = response->mutable_result();
    code->set_code(200);
    code->set_msg("OK");
    response->set_data(login_result);

    // 4.执行回调操作 执行响应对象数据的序列化和网络发送（都是由框架完成）
    done->Run();
  }

  void Register(::google::protobuf::RpcController *controller,
                const ::fixbug::RegisterReq *request,
                ::fixbug::RegisterRsp *response,
                ::google::protobuf::Closure *done) override {
    uint32_t id = request->id();
    std::string name = request->name();
    std::string pwd = request->pwd();

    bool ret = Register(id, name, pwd);

    response->mutable_result()->set_code(200);
    response->mutable_result()->set_msg("OK");
    response->set_data(ret);

    done->Run();
  }
};

int main(int argc, char **argv) {
  // 调用框架的初始化操作 provider -i config.conf
  MprpcApplication::Init(argc, argv);

  // provider是一个rpc网络服务对象。
  RpcProvider provider;
  // 把UserService对象发布到rpc节点上
  provider.NotifyService(new UserService()); // TODO: 何时销毁呢？

  // 启动一个rpc服务发布节点，进程进入阻塞状态，等待远程rpc调用请求
  provider.Run();

  return 0;
}