#include "mprpcapplication.h"
#include <iostream>
#include <string>
#include <unistd.h>

MprpcConfig MprpcApplication::config_;

void ShowArgsHelp() {
  std::cout << "format: command -i <configfile>" << std::endl;
}

void MprpcApplication::Init(int argc, char **argv) {
  if (argc < 2) {
    ShowArgsHelp();
    exit(EXIT_FAILURE);
  }
  // man 3 getopt
  int c = 0;
  std::string config_file;
  while ((c = getopt(argc, argv, "i:")) != -1) {
    switch (c) {
    case 'i':
      config_file = optarg;
      break;
    case '?':
      ShowArgsHelp();
      exit(EXIT_FAILURE);
    case ':': //有-i却没有参数
      ShowArgsHelp();
      exit(EXIT_FAILURE);
    default:
      break;
    }
  }
  //加载配置文件 rpcserver_ip rpcserver_port zookeeper_ip zookeeper_port
  config_.LoadConfigFile(config_file);
}

MprpcApplication &MprpcApplication::GetInstance() {
  static MprpcApplication app;
  return app;
}
MprpcConfig &MprpcApplication::GetConfig() { return config_; }
