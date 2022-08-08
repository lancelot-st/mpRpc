#include "test.pb.h"
#include <iostream>
#include <string>

using namespace fixbug;

void test00() {
  // 封装login请求对象的数据
  LoginRequest req;
  req.set_name("zhang san");
  req.set_pwd("123456");

  // 对象数据序列化
  std::string send_str;
  if (req.SerializeToString(&send_str)) {
    std::cout << send_str.c_str() << std::endl;
  }

  // 从send_str反序列化对象
  LoginRequest reqB;
  if (reqB.ParseFromString(send_str)) {
    std::cout << reqB.name() << " " << reqB.pwd() << '\n';
  }
}
void test01() {
  LoginResponse rsp;
  ResultCode *rc = rsp.mutable_result(); //对象成员的设置
  rc->set_code(200);
  rc->set_msg("登录成功");
  rsp.set_data(true);

  FriendListRsp frsp;
  rc = frsp.mutable_result(); //对象成员的设置
  rc->set_code(200);
  rc->set_msg("获取成功");

  User *user1 = frsp.add_users(); //添加了一个user并返回该user的指针
  user1->set_name("li si");
  user1->set_age(20);
  user1->set_gender(User::MALE);

  User *user2 = frsp.add_users(); //添加了一个user并返回该user的指针
  user2->set_name("wang wu");
  user2->set_age(22);
  user2->set_gender(User::FEMALE);

  std::cout << frsp.users_size() << std::endl;

  User user = frsp.users(1);
  std::cout << user.name() << " " << user.age() << " " << user.gender()
            << std::endl;
}

int main() {
  test01();
  return 0;
}