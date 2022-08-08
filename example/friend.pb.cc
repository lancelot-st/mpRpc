// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: friend.proto

#include "friend.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_friend_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_friend_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_ResultCode;
}  // namespace protobuf_friend_2eproto
namespace fixbug {
class ResultCodeDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ResultCode>
      _instance;
} _ResultCode_default_instance_;
class GetFriendListReqDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GetFriendListReq>
      _instance;
} _GetFriendListReq_default_instance_;
class GetFriendListRspDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GetFriendListRsp>
      _instance;
} _GetFriendListRsp_default_instance_;
}  // namespace fixbug
namespace protobuf_friend_2eproto {
static void InitDefaultsResultCode() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::fixbug::_ResultCode_default_instance_;
    new (ptr) ::fixbug::ResultCode();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::fixbug::ResultCode::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ResultCode =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsResultCode}, {}};

static void InitDefaultsGetFriendListReq() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::fixbug::_GetFriendListReq_default_instance_;
    new (ptr) ::fixbug::GetFriendListReq();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::fixbug::GetFriendListReq::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_GetFriendListReq =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsGetFriendListReq}, {}};

static void InitDefaultsGetFriendListRsp() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::fixbug::_GetFriendListRsp_default_instance_;
    new (ptr) ::fixbug::GetFriendListRsp();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::fixbug::GetFriendListRsp::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_GetFriendListRsp =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsGetFriendListRsp}, {
      &protobuf_friend_2eproto::scc_info_ResultCode.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_ResultCode.base);
  ::google::protobuf::internal::InitSCC(&scc_info_GetFriendListReq.base);
  ::google::protobuf::internal::InitSCC(&scc_info_GetFriendListRsp.base);
}

::google::protobuf::Metadata file_level_metadata[3];
const ::google::protobuf::ServiceDescriptor* file_level_service_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::fixbug::ResultCode, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::fixbug::ResultCode, code_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::fixbug::ResultCode, msg_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::fixbug::GetFriendListReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::fixbug::GetFriendListReq, userid_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::fixbug::GetFriendListRsp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::fixbug::GetFriendListRsp, result_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::fixbug::GetFriendListRsp, friends_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::fixbug::ResultCode)},
  { 7, -1, sizeof(::fixbug::GetFriendListReq)},
  { 13, -1, sizeof(::fixbug::GetFriendListRsp)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::fixbug::_ResultCode_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::fixbug::_GetFriendListReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::fixbug::_GetFriendListRsp_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "friend.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, file_level_service_descriptors);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\014friend.proto\022\006fixbug\"\'\n\nResultCode\022\014\n\004"
      "code\030\001 \001(\005\022\013\n\003msg\030\002 \001(\014\"\"\n\020GetFriendList"
      "Req\022\016\n\006userid\030\001 \001(\r\"G\n\020GetFriendListRsp\022"
      "\"\n\006result\030\001 \001(\0132\022.fixbug.ResultCode\022\017\n\007f"
      "riends\030\002 \003(\0142W\n\020FriendServiceRpc\022C\n\rGetF"
      "riendList\022\030.fixbug.GetFriendListReq\032\030.fi"
      "xbug.GetFriendListRspB\003\200\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 274);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "friend.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_friend_2eproto
namespace fixbug {

// ===================================================================

void ResultCode::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ResultCode::kCodeFieldNumber;
const int ResultCode::kMsgFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ResultCode::ResultCode()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_friend_2eproto::scc_info_ResultCode.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:fixbug.ResultCode)
}
ResultCode::ResultCode(const ResultCode& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.msg().size() > 0) {
    msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
  code_ = from.code_;
  // @@protoc_insertion_point(copy_constructor:fixbug.ResultCode)
}

void ResultCode::SharedCtor() {
  msg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  code_ = 0;
}

ResultCode::~ResultCode() {
  // @@protoc_insertion_point(destructor:fixbug.ResultCode)
  SharedDtor();
}

void ResultCode::SharedDtor() {
  msg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ResultCode::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ResultCode::descriptor() {
  ::protobuf_friend_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_friend_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ResultCode& ResultCode::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_friend_2eproto::scc_info_ResultCode.base);
  return *internal_default_instance();
}


void ResultCode::Clear() {
// @@protoc_insertion_point(message_clear_start:fixbug.ResultCode)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  code_ = 0;
  _internal_metadata_.Clear();
}

bool ResultCode::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fixbug.ResultCode)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 code = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &code_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes msg = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_msg()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fixbug.ResultCode)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fixbug.ResultCode)
  return false;
#undef DO_
}

void ResultCode::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fixbug.ResultCode)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 code = 1;
  if (this->code() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->code(), output);
  }

  // bytes msg = 2;
  if (this->msg().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->msg(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:fixbug.ResultCode)
}

::google::protobuf::uint8* ResultCode::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:fixbug.ResultCode)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 code = 1;
  if (this->code() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->code(), target);
  }

  // bytes msg = 2;
  if (this->msg().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->msg(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fixbug.ResultCode)
  return target;
}

size_t ResultCode::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:fixbug.ResultCode)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes msg = 2;
  if (this->msg().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->msg());
  }

  // int32 code = 1;
  if (this->code() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->code());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ResultCode::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:fixbug.ResultCode)
  GOOGLE_DCHECK_NE(&from, this);
  const ResultCode* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ResultCode>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:fixbug.ResultCode)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:fixbug.ResultCode)
    MergeFrom(*source);
  }
}

void ResultCode::MergeFrom(const ResultCode& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fixbug.ResultCode)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.msg().size() > 0) {

    msg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msg_);
  }
  if (from.code() != 0) {
    set_code(from.code());
  }
}

void ResultCode::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:fixbug.ResultCode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResultCode::CopyFrom(const ResultCode& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fixbug.ResultCode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResultCode::IsInitialized() const {
  return true;
}

void ResultCode::Swap(ResultCode* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ResultCode::InternalSwap(ResultCode* other) {
  using std::swap;
  msg_.Swap(&other->msg_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(code_, other->code_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ResultCode::GetMetadata() const {
  protobuf_friend_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_friend_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void GetFriendListReq::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GetFriendListReq::kUseridFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetFriendListReq::GetFriendListReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_friend_2eproto::scc_info_GetFriendListReq.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:fixbug.GetFriendListReq)
}
GetFriendListReq::GetFriendListReq(const GetFriendListReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  userid_ = from.userid_;
  // @@protoc_insertion_point(copy_constructor:fixbug.GetFriendListReq)
}

void GetFriendListReq::SharedCtor() {
  userid_ = 0u;
}

GetFriendListReq::~GetFriendListReq() {
  // @@protoc_insertion_point(destructor:fixbug.GetFriendListReq)
  SharedDtor();
}

void GetFriendListReq::SharedDtor() {
}

void GetFriendListReq::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* GetFriendListReq::descriptor() {
  ::protobuf_friend_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_friend_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GetFriendListReq& GetFriendListReq::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_friend_2eproto::scc_info_GetFriendListReq.base);
  return *internal_default_instance();
}


void GetFriendListReq::Clear() {
// @@protoc_insertion_point(message_clear_start:fixbug.GetFriendListReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  userid_ = 0u;
  _internal_metadata_.Clear();
}

bool GetFriendListReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fixbug.GetFriendListReq)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 userid = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &userid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fixbug.GetFriendListReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fixbug.GetFriendListReq)
  return false;
#undef DO_
}

void GetFriendListReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fixbug.GetFriendListReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 userid = 1;
  if (this->userid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->userid(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:fixbug.GetFriendListReq)
}

::google::protobuf::uint8* GetFriendListReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:fixbug.GetFriendListReq)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 userid = 1;
  if (this->userid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->userid(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fixbug.GetFriendListReq)
  return target;
}

size_t GetFriendListReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:fixbug.GetFriendListReq)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // uint32 userid = 1;
  if (this->userid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->userid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GetFriendListReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:fixbug.GetFriendListReq)
  GOOGLE_DCHECK_NE(&from, this);
  const GetFriendListReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GetFriendListReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:fixbug.GetFriendListReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:fixbug.GetFriendListReq)
    MergeFrom(*source);
  }
}

void GetFriendListReq::MergeFrom(const GetFriendListReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fixbug.GetFriendListReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.userid() != 0) {
    set_userid(from.userid());
  }
}

void GetFriendListReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:fixbug.GetFriendListReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetFriendListReq::CopyFrom(const GetFriendListReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fixbug.GetFriendListReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetFriendListReq::IsInitialized() const {
  return true;
}

void GetFriendListReq::Swap(GetFriendListReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetFriendListReq::InternalSwap(GetFriendListReq* other) {
  using std::swap;
  swap(userid_, other->userid_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata GetFriendListReq::GetMetadata() const {
  protobuf_friend_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_friend_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void GetFriendListRsp::InitAsDefaultInstance() {
  ::fixbug::_GetFriendListRsp_default_instance_._instance.get_mutable()->result_ = const_cast< ::fixbug::ResultCode*>(
      ::fixbug::ResultCode::internal_default_instance());
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GetFriendListRsp::kResultFieldNumber;
const int GetFriendListRsp::kFriendsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetFriendListRsp::GetFriendListRsp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_friend_2eproto::scc_info_GetFriendListRsp.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:fixbug.GetFriendListRsp)
}
GetFriendListRsp::GetFriendListRsp(const GetFriendListRsp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      friends_(from.friends_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_result()) {
    result_ = new ::fixbug::ResultCode(*from.result_);
  } else {
    result_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:fixbug.GetFriendListRsp)
}

void GetFriendListRsp::SharedCtor() {
  result_ = NULL;
}

GetFriendListRsp::~GetFriendListRsp() {
  // @@protoc_insertion_point(destructor:fixbug.GetFriendListRsp)
  SharedDtor();
}

void GetFriendListRsp::SharedDtor() {
  if (this != internal_default_instance()) delete result_;
}

void GetFriendListRsp::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* GetFriendListRsp::descriptor() {
  ::protobuf_friend_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_friend_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GetFriendListRsp& GetFriendListRsp::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_friend_2eproto::scc_info_GetFriendListRsp.base);
  return *internal_default_instance();
}


void GetFriendListRsp::Clear() {
// @@protoc_insertion_point(message_clear_start:fixbug.GetFriendListRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  friends_.Clear();
  if (GetArenaNoVirtual() == NULL && result_ != NULL) {
    delete result_;
  }
  result_ = NULL;
  _internal_metadata_.Clear();
}

bool GetFriendListRsp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:fixbug.GetFriendListRsp)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .fixbug.ResultCode result = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_result()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated bytes friends = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_friends()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:fixbug.GetFriendListRsp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:fixbug.GetFriendListRsp)
  return false;
#undef DO_
}

void GetFriendListRsp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:fixbug.GetFriendListRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .fixbug.ResultCode result = 1;
  if (this->has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_result(), output);
  }

  // repeated bytes friends = 2;
  for (int i = 0, n = this->friends_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->friends(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:fixbug.GetFriendListRsp)
}

::google::protobuf::uint8* GetFriendListRsp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:fixbug.GetFriendListRsp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .fixbug.ResultCode result = 1;
  if (this->has_result()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_result(), deterministic, target);
  }

  // repeated bytes friends = 2;
  for (int i = 0, n = this->friends_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBytesToArray(2, this->friends(i), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:fixbug.GetFriendListRsp)
  return target;
}

size_t GetFriendListRsp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:fixbug.GetFriendListRsp)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated bytes friends = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->friends_size());
  for (int i = 0, n = this->friends_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->friends(i));
  }

  // .fixbug.ResultCode result = 1;
  if (this->has_result()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *result_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GetFriendListRsp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:fixbug.GetFriendListRsp)
  GOOGLE_DCHECK_NE(&from, this);
  const GetFriendListRsp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GetFriendListRsp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:fixbug.GetFriendListRsp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:fixbug.GetFriendListRsp)
    MergeFrom(*source);
  }
}

void GetFriendListRsp::MergeFrom(const GetFriendListRsp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:fixbug.GetFriendListRsp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  friends_.MergeFrom(from.friends_);
  if (from.has_result()) {
    mutable_result()->::fixbug::ResultCode::MergeFrom(from.result());
  }
}

void GetFriendListRsp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:fixbug.GetFriendListRsp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetFriendListRsp::CopyFrom(const GetFriendListRsp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:fixbug.GetFriendListRsp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetFriendListRsp::IsInitialized() const {
  return true;
}

void GetFriendListRsp::Swap(GetFriendListRsp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetFriendListRsp::InternalSwap(GetFriendListRsp* other) {
  using std::swap;
  friends_.InternalSwap(CastToBase(&other->friends_));
  swap(result_, other->result_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata GetFriendListRsp::GetMetadata() const {
  protobuf_friend_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_friend_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

FriendServiceRpc::~FriendServiceRpc() {}

const ::google::protobuf::ServiceDescriptor* FriendServiceRpc::descriptor() {
  protobuf_friend_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_friend_2eproto::file_level_service_descriptors[0];
}

const ::google::protobuf::ServiceDescriptor* FriendServiceRpc::GetDescriptor() {
  return descriptor();
}

void FriendServiceRpc::GetFriendList(::google::protobuf::RpcController* controller,
                         const ::fixbug::GetFriendListReq*,
                         ::fixbug::GetFriendListRsp*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetFriendList() not implemented.");
  done->Run();
}

void FriendServiceRpc::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), protobuf_friend_2eproto::file_level_service_descriptors[0]);
  switch(method->index()) {
    case 0:
      GetFriendList(controller,
             ::google::protobuf::down_cast<const ::fixbug::GetFriendListReq*>(request),
             ::google::protobuf::down_cast< ::fixbug::GetFriendListRsp*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& FriendServiceRpc::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::fixbug::GetFriendListReq::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::google::protobuf::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::google::protobuf::Message& FriendServiceRpc::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::fixbug::GetFriendListRsp::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::google::protobuf::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

FriendServiceRpc_Stub::FriendServiceRpc_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
FriendServiceRpc_Stub::FriendServiceRpc_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
FriendServiceRpc_Stub::~FriendServiceRpc_Stub() {
  if (owns_channel_) delete channel_;
}

void FriendServiceRpc_Stub::GetFriendList(::google::protobuf::RpcController* controller,
                              const ::fixbug::GetFriendListReq* request,
                              ::fixbug::GetFriendListRsp* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace fixbug
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::fixbug::ResultCode* Arena::CreateMaybeMessage< ::fixbug::ResultCode >(Arena* arena) {
  return Arena::CreateInternal< ::fixbug::ResultCode >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::fixbug::GetFriendListReq* Arena::CreateMaybeMessage< ::fixbug::GetFriendListReq >(Arena* arena) {
  return Arena::CreateInternal< ::fixbug::GetFriendListReq >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::fixbug::GetFriendListRsp* Arena::CreateMaybeMessage< ::fixbug::GetFriendListRsp >(Arena* arena) {
  return Arena::CreateInternal< ::fixbug::GetFriendListRsp >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
