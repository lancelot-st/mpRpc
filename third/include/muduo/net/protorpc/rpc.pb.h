// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc.proto

#ifndef PROTOBUF_INCLUDED_rpc_2eproto
#define PROTOBUF_INCLUDED_rpc_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_rpc_2eproto 

namespace protobuf_rpc_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_rpc_2eproto
namespace muduo {
namespace net {
class RpcMessage;
class RpcMessageDefaultTypeInternal;
extern RpcMessageDefaultTypeInternal _RpcMessage_default_instance_;
}  // namespace net
}  // namespace muduo
namespace google {
namespace protobuf {
template<> ::muduo::net::RpcMessage* Arena::CreateMaybeMessage<::muduo::net::RpcMessage>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace muduo {
namespace net {

enum MessageType {
  REQUEST = 1,
  RESPONSE = 2,
  ERROR = 3
};
bool MessageType_IsValid(int value);
const MessageType MessageType_MIN = REQUEST;
const MessageType MessageType_MAX = ERROR;
const int MessageType_ARRAYSIZE = MessageType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MessageType_descriptor();
inline const ::std::string& MessageType_Name(MessageType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MessageType_descriptor(), value);
}
inline bool MessageType_Parse(
    const ::std::string& name, MessageType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MessageType>(
    MessageType_descriptor(), name, value);
}
enum ErrorCode {
  NO_ERROR = 0,
  WRONG_PROTO = 1,
  NO_SERVICE = 2,
  NO_METHOD = 3,
  INVALID_REQUEST = 4,
  INVALID_RESPONSE = 5,
  TIMEOUT = 6
};
bool ErrorCode_IsValid(int value);
const ErrorCode ErrorCode_MIN = NO_ERROR;
const ErrorCode ErrorCode_MAX = TIMEOUT;
const int ErrorCode_ARRAYSIZE = ErrorCode_MAX + 1;

const ::google::protobuf::EnumDescriptor* ErrorCode_descriptor();
inline const ::std::string& ErrorCode_Name(ErrorCode value) {
  return ::google::protobuf::internal::NameOfEnum(
    ErrorCode_descriptor(), value);
}
inline bool ErrorCode_Parse(
    const ::std::string& name, ErrorCode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ErrorCode>(
    ErrorCode_descriptor(), name, value);
}
// ===================================================================

class RpcMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:muduo.net.RpcMessage) */ {
 public:
  RpcMessage();
  virtual ~RpcMessage();

  RpcMessage(const RpcMessage& from);

  inline RpcMessage& operator=(const RpcMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  RpcMessage(RpcMessage&& from) noexcept
    : RpcMessage() {
    *this = ::std::move(from);
  }

  inline RpcMessage& operator=(RpcMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RpcMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RpcMessage* internal_default_instance() {
    return reinterpret_cast<const RpcMessage*>(
               &_RpcMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(RpcMessage* other);
  friend void swap(RpcMessage& a, RpcMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline RpcMessage* New() const final {
    return CreateMaybeMessage<RpcMessage>(NULL);
  }

  RpcMessage* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<RpcMessage>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const RpcMessage& from);
  void MergeFrom(const RpcMessage& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RpcMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string service = 3;
  bool has_service() const;
  void clear_service();
  static const int kServiceFieldNumber = 3;
  const ::std::string& service() const;
  void set_service(const ::std::string& value);
  #if LANG_CXX11
  void set_service(::std::string&& value);
  #endif
  void set_service(const char* value);
  void set_service(const char* value, size_t size);
  ::std::string* mutable_service();
  ::std::string* release_service();
  void set_allocated_service(::std::string* service);

  // optional string method = 4;
  bool has_method() const;
  void clear_method();
  static const int kMethodFieldNumber = 4;
  const ::std::string& method() const;
  void set_method(const ::std::string& value);
  #if LANG_CXX11
  void set_method(::std::string&& value);
  #endif
  void set_method(const char* value);
  void set_method(const char* value, size_t size);
  ::std::string* mutable_method();
  ::std::string* release_method();
  void set_allocated_method(::std::string* method);

  // optional bytes request = 5;
  bool has_request() const;
  void clear_request();
  static const int kRequestFieldNumber = 5;
  const ::std::string& request() const;
  void set_request(const ::std::string& value);
  #if LANG_CXX11
  void set_request(::std::string&& value);
  #endif
  void set_request(const char* value);
  void set_request(const void* value, size_t size);
  ::std::string* mutable_request();
  ::std::string* release_request();
  void set_allocated_request(::std::string* request);

  // optional bytes response = 6;
  bool has_response() const;
  void clear_response();
  static const int kResponseFieldNumber = 6;
  const ::std::string& response() const;
  void set_response(const ::std::string& value);
  #if LANG_CXX11
  void set_response(::std::string&& value);
  #endif
  void set_response(const char* value);
  void set_response(const void* value, size_t size);
  ::std::string* mutable_response();
  ::std::string* release_response();
  void set_allocated_response(::std::string* response);

  // required fixed64 id = 2;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::uint64 id() const;
  void set_id(::google::protobuf::uint64 value);

  // optional .muduo.net.ErrorCode error = 7;
  bool has_error() const;
  void clear_error();
  static const int kErrorFieldNumber = 7;
  ::muduo::net::ErrorCode error() const;
  void set_error(::muduo::net::ErrorCode value);

  // required .muduo.net.MessageType type = 1;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::muduo::net::MessageType type() const;
  void set_type(::muduo::net::MessageType value);

  // @@protoc_insertion_point(class_scope:muduo.net.RpcMessage)
 private:
  void set_has_type();
  void clear_has_type();
  void set_has_id();
  void clear_has_id();
  void set_has_service();
  void clear_has_service();
  void set_has_method();
  void clear_has_method();
  void set_has_request();
  void clear_has_request();
  void set_has_response();
  void clear_has_response();
  void set_has_error();
  void clear_has_error();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr service_;
  ::google::protobuf::internal::ArenaStringPtr method_;
  ::google::protobuf::internal::ArenaStringPtr request_;
  ::google::protobuf::internal::ArenaStringPtr response_;
  ::google::protobuf::uint64 id_;
  int error_;
  int type_;
  friend struct ::protobuf_rpc_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RpcMessage

// required .muduo.net.MessageType type = 1;
inline bool RpcMessage::has_type() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void RpcMessage::set_has_type() {
  _has_bits_[0] |= 0x00000040u;
}
inline void RpcMessage::clear_has_type() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void RpcMessage::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::muduo::net::MessageType RpcMessage::type() const {
  // @@protoc_insertion_point(field_get:muduo.net.RpcMessage.type)
  return static_cast< ::muduo::net::MessageType >(type_);
}
inline void RpcMessage::set_type(::muduo::net::MessageType value) {
  assert(::muduo::net::MessageType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:muduo.net.RpcMessage.type)
}

// required fixed64 id = 2;
inline bool RpcMessage::has_id() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void RpcMessage::set_has_id() {
  _has_bits_[0] |= 0x00000010u;
}
inline void RpcMessage::clear_has_id() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void RpcMessage::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::uint64 RpcMessage::id() const {
  // @@protoc_insertion_point(field_get:muduo.net.RpcMessage.id)
  return id_;
}
inline void RpcMessage::set_id(::google::protobuf::uint64 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:muduo.net.RpcMessage.id)
}

// optional string service = 3;
inline bool RpcMessage::has_service() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RpcMessage::set_has_service() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RpcMessage::clear_has_service() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RpcMessage::clear_service() {
  service_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_service();
}
inline const ::std::string& RpcMessage::service() const {
  // @@protoc_insertion_point(field_get:muduo.net.RpcMessage.service)
  return service_.GetNoArena();
}
inline void RpcMessage::set_service(const ::std::string& value) {
  set_has_service();
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:muduo.net.RpcMessage.service)
}
#if LANG_CXX11
inline void RpcMessage::set_service(::std::string&& value) {
  set_has_service();
  service_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:muduo.net.RpcMessage.service)
}
#endif
inline void RpcMessage::set_service(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_service();
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:muduo.net.RpcMessage.service)
}
inline void RpcMessage::set_service(const char* value, size_t size) {
  set_has_service();
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:muduo.net.RpcMessage.service)
}
inline ::std::string* RpcMessage::mutable_service() {
  set_has_service();
  // @@protoc_insertion_point(field_mutable:muduo.net.RpcMessage.service)
  return service_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RpcMessage::release_service() {
  // @@protoc_insertion_point(field_release:muduo.net.RpcMessage.service)
  if (!has_service()) {
    return NULL;
  }
  clear_has_service();
  return service_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RpcMessage::set_allocated_service(::std::string* service) {
  if (service != NULL) {
    set_has_service();
  } else {
    clear_has_service();
  }
  service_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), service);
  // @@protoc_insertion_point(field_set_allocated:muduo.net.RpcMessage.service)
}

// optional string method = 4;
inline bool RpcMessage::has_method() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RpcMessage::set_has_method() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RpcMessage::clear_has_method() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RpcMessage::clear_method() {
  method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_method();
}
inline const ::std::string& RpcMessage::method() const {
  // @@protoc_insertion_point(field_get:muduo.net.RpcMessage.method)
  return method_.GetNoArena();
}
inline void RpcMessage::set_method(const ::std::string& value) {
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:muduo.net.RpcMessage.method)
}
#if LANG_CXX11
inline void RpcMessage::set_method(::std::string&& value) {
  set_has_method();
  method_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:muduo.net.RpcMessage.method)
}
#endif
inline void RpcMessage::set_method(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:muduo.net.RpcMessage.method)
}
inline void RpcMessage::set_method(const char* value, size_t size) {
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:muduo.net.RpcMessage.method)
}
inline ::std::string* RpcMessage::mutable_method() {
  set_has_method();
  // @@protoc_insertion_point(field_mutable:muduo.net.RpcMessage.method)
  return method_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RpcMessage::release_method() {
  // @@protoc_insertion_point(field_release:muduo.net.RpcMessage.method)
  if (!has_method()) {
    return NULL;
  }
  clear_has_method();
  return method_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RpcMessage::set_allocated_method(::std::string* method) {
  if (method != NULL) {
    set_has_method();
  } else {
    clear_has_method();
  }
  method_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), method);
  // @@protoc_insertion_point(field_set_allocated:muduo.net.RpcMessage.method)
}

// optional bytes request = 5;
inline bool RpcMessage::has_request() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RpcMessage::set_has_request() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RpcMessage::clear_has_request() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RpcMessage::clear_request() {
  request_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_request();
}
inline const ::std::string& RpcMessage::request() const {
  // @@protoc_insertion_point(field_get:muduo.net.RpcMessage.request)
  return request_.GetNoArena();
}
inline void RpcMessage::set_request(const ::std::string& value) {
  set_has_request();
  request_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:muduo.net.RpcMessage.request)
}
#if LANG_CXX11
inline void RpcMessage::set_request(::std::string&& value) {
  set_has_request();
  request_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:muduo.net.RpcMessage.request)
}
#endif
inline void RpcMessage::set_request(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_request();
  request_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:muduo.net.RpcMessage.request)
}
inline void RpcMessage::set_request(const void* value, size_t size) {
  set_has_request();
  request_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:muduo.net.RpcMessage.request)
}
inline ::std::string* RpcMessage::mutable_request() {
  set_has_request();
  // @@protoc_insertion_point(field_mutable:muduo.net.RpcMessage.request)
  return request_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RpcMessage::release_request() {
  // @@protoc_insertion_point(field_release:muduo.net.RpcMessage.request)
  if (!has_request()) {
    return NULL;
  }
  clear_has_request();
  return request_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RpcMessage::set_allocated_request(::std::string* request) {
  if (request != NULL) {
    set_has_request();
  } else {
    clear_has_request();
  }
  request_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), request);
  // @@protoc_insertion_point(field_set_allocated:muduo.net.RpcMessage.request)
}

// optional bytes response = 6;
inline bool RpcMessage::has_response() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RpcMessage::set_has_response() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RpcMessage::clear_has_response() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RpcMessage::clear_response() {
  response_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_response();
}
inline const ::std::string& RpcMessage::response() const {
  // @@protoc_insertion_point(field_get:muduo.net.RpcMessage.response)
  return response_.GetNoArena();
}
inline void RpcMessage::set_response(const ::std::string& value) {
  set_has_response();
  response_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:muduo.net.RpcMessage.response)
}
#if LANG_CXX11
inline void RpcMessage::set_response(::std::string&& value) {
  set_has_response();
  response_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:muduo.net.RpcMessage.response)
}
#endif
inline void RpcMessage::set_response(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_response();
  response_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:muduo.net.RpcMessage.response)
}
inline void RpcMessage::set_response(const void* value, size_t size) {
  set_has_response();
  response_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:muduo.net.RpcMessage.response)
}
inline ::std::string* RpcMessage::mutable_response() {
  set_has_response();
  // @@protoc_insertion_point(field_mutable:muduo.net.RpcMessage.response)
  return response_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RpcMessage::release_response() {
  // @@protoc_insertion_point(field_release:muduo.net.RpcMessage.response)
  if (!has_response()) {
    return NULL;
  }
  clear_has_response();
  return response_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RpcMessage::set_allocated_response(::std::string* response) {
  if (response != NULL) {
    set_has_response();
  } else {
    clear_has_response();
  }
  response_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), response);
  // @@protoc_insertion_point(field_set_allocated:muduo.net.RpcMessage.response)
}

// optional .muduo.net.ErrorCode error = 7;
inline bool RpcMessage::has_error() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void RpcMessage::set_has_error() {
  _has_bits_[0] |= 0x00000020u;
}
inline void RpcMessage::clear_has_error() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void RpcMessage::clear_error() {
  error_ = 0;
  clear_has_error();
}
inline ::muduo::net::ErrorCode RpcMessage::error() const {
  // @@protoc_insertion_point(field_get:muduo.net.RpcMessage.error)
  return static_cast< ::muduo::net::ErrorCode >(error_);
}
inline void RpcMessage::set_error(::muduo::net::ErrorCode value) {
  assert(::muduo::net::ErrorCode_IsValid(value));
  set_has_error();
  error_ = value;
  // @@protoc_insertion_point(field_set:muduo.net.RpcMessage.error)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace net
}  // namespace muduo

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::muduo::net::MessageType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::muduo::net::MessageType>() {
  return ::muduo::net::MessageType_descriptor();
}
template <> struct is_proto_enum< ::muduo::net::ErrorCode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::muduo::net::ErrorCode>() {
  return ::muduo::net::ErrorCode_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_rpc_2eproto
