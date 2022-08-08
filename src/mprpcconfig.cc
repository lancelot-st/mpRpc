#include "mprpcconfig.h"
#include <fstream>
#include <iostream>
// https://blog.csdn.net/qq_34097715/article/details/79970860

// TODO: 封装到utils类
std::string &trim(std::string &s) {
  if (!s.empty()) {
    s.erase(0, s.find_first_not_of(" "));
    s.erase(s.find_last_not_of(" ") + 1);
  }
  return s;
}

// 解析加载配置文件
void MprpcConfig::LoadConfigFile(const std::string &config_file) {
  std::ifstream fin(config_file);
  if (!fin) {
    std::cout << config_file << " is not exist!" << std::endl;
    exit(EXIT_FAILURE);
  }
  std::string buf;
  while (getline(fin, buf)) {
    //去掉多余的空格
    trim(buf);
    //判断注释
    if (buf.empty() || buf[0] == '#')
      continue;

    //解析配置项
    int idx = buf.find('=');
    if (idx != std::string::npos) {
      std::string k(buf, 0, idx); //获取0到idx个字符
      trim(k);
      std::string v(buf, idx + 1); //获取idx+1到最后的字符
      trim(v);
      config_map_.emplace(k, v);
    }
  }
  fin.close();

  // test
  //   std::cout << "rpcip:" << Load("rpcserver_ip") << "#" << std::endl;
  //   std::cout << "rpcport:" << Load("rpcserver_port") << "#" << std::endl;
  //   std::cout << "zkip:" << Load("zookeeper_ip") << "#" << std::endl;
  //   std::cout << "zkport:" << Load("zookeeper_port") << "#" << std::endl;
}

// 查询配置信息
std::string MprpcConfig::Load(const std::string &key) {
  auto it = config_map_.find(key);
  if (it == config_map_.end())
    return "";
  return it->second;
}