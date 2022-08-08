#pragma once

#include "mprpcconfig.h"

// 统一包含，方便用户使用
#include "mprpcchannel.h"
#include "mprpccontroller.h"

// mprpc框架的基础类，负责框架的初始化。单例
class MprpcApplication {
public:
  static void Init(int argc, char **argv); //加载配置文件
  static MprpcApplication &GetInstance();
  static MprpcConfig &GetConfig();

private:
  MprpcApplication() {}
  MprpcApplication(const MprpcApplication &) = delete;
  MprpcApplication(MprpcApplication &&) = delete;

private:
  static MprpcConfig config_;
};
