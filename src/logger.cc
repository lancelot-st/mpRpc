#include "logger.h"
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>

Logger &Logger::GetInstance() {
  static Logger logger;
  return logger;
}

Logger::Logger() {
  // 启动写日志线程
  std::thread write_log_task([&] {
    for (;;) {
      // 获取当前的日期，然后取日志信息，写入相应的日志文件当中 a+
      time_t now = time(0);
      tm *nowtm = localtime(&now);
      std::string filename = std::to_string(nowtm->tm_year + 1900) + "-" +
                             std::to_string(nowtm->tm_mon + 1) + "-" +
                             std::to_string(nowtm->tm_mday) + "-log.txt";

      std::ofstream fout(filename, std::ios::app);
      if (!fout) {
        std::cout << "logger file:" << filename << " open error!" << std::endl;
        exit(EXIT_FAILURE);
      }
      std::string msg = lckque_.Pop();
      fout << std::to_string(nowtm->tm_hour) + ":" +
                  std::to_string(nowtm->tm_min) + ":" +
                  std::to_string(nowtm->tm_sec);
      switch (level_) {
      case LogLevel::DEBUG:
        fout << "[DEBUG]";
        break;
      case LogLevel::ERROR:
        fout << "[ERROR]";
        break;
      default:
        fout << "[INFO]";
        break;
      }
      fout << "=> " + msg + '\n';

      fout.close();
    }
  });
  write_log_task.detach(); // 分离线程
}

void Logger::SetLevel(LogLevel level) { level_ = level; }

// 把日志信息写入lockqueue缓冲区中
void Logger::Log(std::string msg) { lckque_.Push(msg); }