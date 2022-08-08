#pragma once

#include <condition_variable> // pthread_condition_t
#include <mutex>              // pthread_mutex_t
#include <queue>
#include <thread>

// 异步写日志的日志队列
template <typename T> class LockQueue {
public:
  // 多个worker线程会写日志queue
  void Push(const T &data) {
    std::lock_guard<std::mutex> lock(mu_);
    queue_.emplace(data);
    condvar_.notify_one();
  }
  // 一个线程读日志queue， 写日志文件
  T Pop() {
    std::unique_lock<std::mutex> lock(mu_);

    while (queue_.empty()) { // 用while防止虚假唤醒
      condvar_.wait(lock);   // 日志队列为空，线程进入wait状态
    }

    T data = queue_.front();
    queue_.pop();

    return data;
  }

private:
  std::queue<T> queue_;
  std::mutex mu_;
  std::condition_variable condvar_;
};
