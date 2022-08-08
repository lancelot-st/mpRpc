#pragma once
#include "lockqueue.h"
#include <string>

// Mprpc框架日志系统

enum class LogLevel {
  DEBUG,
  INFO,
  ERROR,
};

class Logger {
public:
  static Logger &GetInstance();  // 单例
  void SetLevel(LogLevel level); // 设置日志级别
  void Log(std::string msg);     // 写日志

private:
  Logger();
  Logger(const Logger &) = delete;
  Logger(Logger &&) = delete;

private:
  LogLevel level_ = LogLevel::INFO;
  LockQueue<std::string> lckque_;
};

// 定义宏
#define LOG(msg_str)                                                           \
  do {                                                                         \
    Logger &logger = Logger::GetInstance();                                    \
    logger.SetLevel(LogLevel::INFO);                                           \
    logger.Log(msg_str);                                                       \
  } while (0);

#define LOG_ERR(msg_str)                                                       \
  do {                                                                         \
    Logger &logger = Logger::GetInstance();                                    \
    logger.SetLevel(LogLevel::ERROR);                                          \
    logger.Log(msg_str);                                                       \
  } while (0);

#define LOG_DEBUG(msg_format, ...)                                             \
  do {                                                                         \
    Logger &logger = Logger::GetInstance();                                    \
    logger.SetLevel(LogLevel::DEBUG);                                          \
    char str[1024]{0};                                                         \
    snprintf(str, 1024, msg_format, ##__VA_ARGS__);                            \
    logger.Log(str);                                                           \
  } while (0);

#define LOG_INFO(msg_format, ...)                                              \
  do {                                                                         \
    Logger &logger = Logger::GetInstance();                                    \
    logger.SetLevel(LogLevel::INFO);                                           \
    char str[1024]{0};                                                         \
    snprintf(str, 1024, msg_format, ##__VA_ARGS__);                            \
    logger.Log(str);                                                           \
  } while (0);

#define LOG_ERROR(msg_format, ...)                                             \
  do {                                                                         \
    Logger &logger = Logger::GetInstance();                                    \
    logger.SetLevel(LogLevel::ERROR);                                          \
    char str[1024]{0};                                                         \
    snprintf(str, 1024, msg_format, ##__VA_ARGS__);                            \
    logger.Log(str);                                                           \
  } while (0);
