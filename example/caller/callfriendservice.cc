#include "friend.pb.h"
#include "mprpcapplication.h"
#include <iostream>

int main(int argc, char **argv) {
  MprpcApplication::Init(argc, argv);

  fixbug::FriendServiceRpc_Stub stub(new MprpcChannel());

  // 演示获取好友列表
  fixbug::GetFriendListReq req;
  req.set_userid(101);
  fixbug::GetFriendListRsp rsp;

  // controller的作用是获知调用过程中的一些信息，比如调用失败等。。
  MprpcController controller;
  stub.GetFriendList(&controller, &req, &rsp, nullptr);

  if (controller.Failed()) {
    std::cout << controller.ErrorText() << std::endl;
  } else {
    if (rsp.result().code() == 200) {
      std::cout << "调用rpc<获取好友列表>方法成功，调用结果：" << std::endl;

      for (auto &name : rsp.friends()) {
        std::cout << name << std::endl;
      }

      // for (int i = 0; i < rsp.friends_size(); ++i) {
      //   std::cout << "index: " << i << " name:" << rsp.friends(i) <<
      //   std::endl;
      // }

    } else {
      std::cout << "调用rpc<获取好友列表>方法失败:" << rsp.result().msg()
                << std::endl;
    }
  }

  return 0;
}