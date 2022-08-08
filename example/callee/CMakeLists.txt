
# set(SRC_LIST  userservice.cc ../user.pb.cc)
set(SRC_LIST friendservice.cc  ../friend.pb.cc)

add_executable(provider ${SRC_LIST})
# 连接 mprpc 和 protobuf库
target_link_libraries(provider mprpc protobuf pthread)
