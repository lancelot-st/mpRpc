#pragma once
#include <unordered_map>

// rpcserver_ip rpcserver_port zookeeper_ip zookeeper_port
// 框架读取配置文件类
class MprpcConfig {
public:
  // 解析加载配置文件
  void LoadConfigFile(const std::string &config_file);
  // 查询配置信息
  std::string Load(const std::string &key);

private:
  std::unordered_map<std::string, std::string> config_map_;
};