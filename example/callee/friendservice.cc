#include "friend.pb.h"
#include "logger.h"
#include "mprpcapplication.h"
#include "rpcprovider.h"
#include <iostream>
#include <string>
#include <vector>

// 2. 继承生成的FriendServiceRpc类
class FriendService : public fixbug::FriendServiceRpc {
public:
  // 1.先有本地方法，然后实现proto文件
  std::vector<std::string> GetFriendList(uint32_t userid) {
    std::cout << "执行GetFriendList方法... userid:" << userid << std::endl;

    std::vector<std::string> friends;
    friends.emplace_back("alice");
    friends.emplace_back("bob");
    friends.emplace_back("clare");
    friends.emplace_back("david");

    return friends;
  }

  // 3.重写基类方法
  void GetFriendList(::google::protobuf::RpcController *controller,
                     const ::fixbug::GetFriendListReq *request,
                     ::fixbug::GetFriendListRsp *response,
                     ::google::protobuf::Closure *done) {
    uint32_t userid = request->userid();

    auto friends = GetFriendList(userid);

    response->mutable_result()->set_code(200);
    response->mutable_result()->set_msg("OK");
    for (auto &name : friends) {
      std::string *p = response->add_friends();
      *p = name;
    }

    done->Run();
  }
};

// 这些服务可以单独作为进程发布在一台或多台机器上
int main(int argc, char **argv) {

  LOG("调用框架的初始化操作");
  MprpcApplication::Init(argc, argv);

  RpcProvider provider;

  LOG("UserService对象发布到rpc节点上")
  provider.NotifyService(new FriendService());

  LOG_INFO("%s:%s:%d", __FILE__, __FUNCTION__, __LINE__);
  provider.Run();

  return 0;
}
