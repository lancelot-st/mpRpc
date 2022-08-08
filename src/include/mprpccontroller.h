#pragma once
#include <google/protobuf/service.h>
#include <string>

class MprpcController : public google::protobuf::RpcController {
public:
  MprpcController();
  void Reset() override;
  bool Failed() const override;
  std::string ErrorText() const override;
  void SetFailed(const std::string &reason) override;

  // 目前未实现
  void StartCancel();
  bool IsCanceled() const override;
  void NotifyOnCancel(google::protobuf::Closure *callback) override;

private:
  bool failed_;
  std::string error_text_;
};
