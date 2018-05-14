// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: authorization.proto

#ifndef PROTOBUF_authorization_2eproto__INCLUDED
#define PROTOBUF_authorization_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

namespace protobuf_authorization_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsRequestImpl();
void InitDefaultsRequest();
void InitDefaultsResponseImpl();
void InitDefaultsResponse();
void InitDefaultsResultImpl();
void InitDefaultsResult();
inline void InitDefaults() {
  InitDefaultsRequest();
  InitDefaultsResponse();
  InitDefaultsResult();
}
}  // namespace protobuf_authorization_2eproto
namespace aspia {
namespace proto {
namespace auth {
class Request;
class RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
class Response;
class ResponseDefaultTypeInternal;
extern ResponseDefaultTypeInternal _Response_default_instance_;
class Result;
class ResultDefaultTypeInternal;
extern ResultDefaultTypeInternal _Result_default_instance_;
}  // namespace auth
}  // namespace proto
}  // namespace aspia
namespace aspia {
namespace proto {
namespace auth {

enum SessionType {
  SESSION_TYPE_UNKNOWN = 0,
  SESSION_TYPE_DESKTOP_MANAGE = 1,
  SESSION_TYPE_DESKTOP_VIEW = 2,
  SESSION_TYPE_FILE_TRANSFER = 4,
  SessionType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  SessionType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool SessionType_IsValid(int value);
const SessionType SessionType_MIN = SESSION_TYPE_UNKNOWN;
const SessionType SessionType_MAX = SESSION_TYPE_FILE_TRANSFER;
const int SessionType_ARRAYSIZE = SessionType_MAX + 1;

enum Status {
  STATUS_UNKNOWN = 0,
  STATUS_SUCCESS = 1,
  STATUS_ACCESS_DENIED = 2,
  STATUS_CANCELED = 3,
  Status_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Status_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Status_IsValid(int value);
const Status Status_MIN = STATUS_UNKNOWN;
const Status Status_MAX = STATUS_CANCELED;
const int Status_ARRAYSIZE = Status_MAX + 1;

enum Hashing {
  HASHING_UNKNOWN = 0,
  HASHING_SHA512 = 1,
  Hashing_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Hashing_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Hashing_IsValid(int value);
const Hashing Hashing_MIN = HASHING_UNKNOWN;
const Hashing Hashing_MAX = HASHING_SHA512;
const int Hashing_ARRAYSIZE = Hashing_MAX + 1;

// ===================================================================

class Request : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.auth.Request) */ {
 public:
  Request();
  virtual ~Request();

  Request(const Request& from);

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Request(Request&& from) noexcept
    : Request() {
    *this = ::std::move(from);
  }

  inline Request& operator=(Request&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Request& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
               &_Request_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(Request* other);
  friend void swap(Request& a, Request& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Request* New() const PROTOBUF_FINAL { return New(NULL); }

  Request* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Request* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes nonce = 3;
  void clear_nonce();
  static const int kNonceFieldNumber = 3;
  const ::std::string& nonce() const;
  void set_nonce(const ::std::string& value);
  #if LANG_CXX11
  void set_nonce(::std::string&& value);
  #endif
  void set_nonce(const char* value);
  void set_nonce(const void* value, size_t size);
  ::std::string* mutable_nonce();
  ::std::string* release_nonce();
  void set_allocated_nonce(::std::string* nonce);

  // .aspia.proto.auth.Hashing hashing = 1;
  void clear_hashing();
  static const int kHashingFieldNumber = 1;
  ::aspia::proto::auth::Hashing hashing() const;
  void set_hashing(::aspia::proto::auth::Hashing value);

  // uint32 rounds = 2;
  void clear_rounds();
  static const int kRoundsFieldNumber = 2;
  ::google::protobuf::uint32 rounds() const;
  void set_rounds(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:aspia.proto.auth.Request)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr nonce_;
  int hashing_;
  ::google::protobuf::uint32 rounds_;
  mutable int _cached_size_;
  friend struct ::protobuf_authorization_2eproto::TableStruct;
  friend void ::protobuf_authorization_2eproto::InitDefaultsRequestImpl();
};
// -------------------------------------------------------------------

class Response : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.auth.Response) */ {
 public:
  Response();
  virtual ~Response();

  Response(const Response& from);

  inline Response& operator=(const Response& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Response(Response&& from) noexcept
    : Response() {
    *this = ::std::move(from);
  }

  inline Response& operator=(Response&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Response& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Response* internal_default_instance() {
    return reinterpret_cast<const Response*>(
               &_Response_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(Response* other);
  friend void swap(Response& a, Response& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Response* New() const PROTOBUF_FINAL { return New(NULL); }

  Response* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Response& from);
  void MergeFrom(const Response& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Response* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string username = 2;
  void clear_username();
  static const int kUsernameFieldNumber = 2;
  const ::std::string& username() const;
  void set_username(const ::std::string& value);
  #if LANG_CXX11
  void set_username(::std::string&& value);
  #endif
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  ::std::string* mutable_username();
  ::std::string* release_username();
  void set_allocated_username(::std::string* username);

  // bytes key = 3;
  void clear_key();
  static const int kKeyFieldNumber = 3;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const void* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // .aspia.proto.auth.SessionType session_type = 1;
  void clear_session_type();
  static const int kSessionTypeFieldNumber = 1;
  ::aspia::proto::auth::SessionType session_type() const;
  void set_session_type(::aspia::proto::auth::SessionType value);

  // @@protoc_insertion_point(class_scope:aspia.proto.auth.Response)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr username_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  int session_type_;
  mutable int _cached_size_;
  friend struct ::protobuf_authorization_2eproto::TableStruct;
  friend void ::protobuf_authorization_2eproto::InitDefaultsResponseImpl();
};
// -------------------------------------------------------------------

class Result : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.auth.Result) */ {
 public:
  Result();
  virtual ~Result();

  Result(const Result& from);

  inline Result& operator=(const Result& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Result(Result&& from) noexcept
    : Result() {
    *this = ::std::move(from);
  }

  inline Result& operator=(Result&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const Result& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Result* internal_default_instance() {
    return reinterpret_cast<const Result*>(
               &_Result_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(Result* other);
  friend void swap(Result& a, Result& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Result* New() const PROTOBUF_FINAL { return New(NULL); }

  Result* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const Result& from);
  void MergeFrom(const Result& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Result* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .aspia.proto.auth.Status status = 1;
  void clear_status();
  static const int kStatusFieldNumber = 1;
  ::aspia::proto::auth::Status status() const;
  void set_status(::aspia::proto::auth::Status value);

  // @@protoc_insertion_point(class_scope:aspia.proto.auth.Result)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  int status_;
  mutable int _cached_size_;
  friend struct ::protobuf_authorization_2eproto::TableStruct;
  friend void ::protobuf_authorization_2eproto::InitDefaultsResultImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Request

// .aspia.proto.auth.Hashing hashing = 1;
inline void Request::clear_hashing() {
  hashing_ = 0;
}
inline ::aspia::proto::auth::Hashing Request::hashing() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.Request.hashing)
  return static_cast< ::aspia::proto::auth::Hashing >(hashing_);
}
inline void Request::set_hashing(::aspia::proto::auth::Hashing value) {
  
  hashing_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.auth.Request.hashing)
}

// uint32 rounds = 2;
inline void Request::clear_rounds() {
  rounds_ = 0u;
}
inline ::google::protobuf::uint32 Request::rounds() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.Request.rounds)
  return rounds_;
}
inline void Request::set_rounds(::google::protobuf::uint32 value) {
  
  rounds_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.auth.Request.rounds)
}

// bytes nonce = 3;
inline void Request::clear_nonce() {
  nonce_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Request::nonce() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.Request.nonce)
  return nonce_.GetNoArena();
}
inline void Request::set_nonce(const ::std::string& value) {
  
  nonce_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.auth.Request.nonce)
}
#if LANG_CXX11
inline void Request::set_nonce(::std::string&& value) {
  
  nonce_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.auth.Request.nonce)
}
#endif
inline void Request::set_nonce(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  nonce_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.auth.Request.nonce)
}
inline void Request::set_nonce(const void* value, size_t size) {
  
  nonce_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.auth.Request.nonce)
}
inline ::std::string* Request::mutable_nonce() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.auth.Request.nonce)
  return nonce_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_nonce() {
  // @@protoc_insertion_point(field_release:aspia.proto.auth.Request.nonce)
  
  return nonce_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_nonce(::std::string* nonce) {
  if (nonce != NULL) {
    
  } else {
    
  }
  nonce_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), nonce);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.auth.Request.nonce)
}

// -------------------------------------------------------------------

// Response

// .aspia.proto.auth.SessionType session_type = 1;
inline void Response::clear_session_type() {
  session_type_ = 0;
}
inline ::aspia::proto::auth::SessionType Response::session_type() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.Response.session_type)
  return static_cast< ::aspia::proto::auth::SessionType >(session_type_);
}
inline void Response::set_session_type(::aspia::proto::auth::SessionType value) {
  
  session_type_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.auth.Response.session_type)
}

// string username = 2;
inline void Response::clear_username() {
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Response::username() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.Response.username)
  return username_.GetNoArena();
}
inline void Response::set_username(const ::std::string& value) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.auth.Response.username)
}
#if LANG_CXX11
inline void Response::set_username(::std::string&& value) {
  
  username_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.auth.Response.username)
}
#endif
inline void Response::set_username(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.auth.Response.username)
}
inline void Response::set_username(const char* value, size_t size) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.auth.Response.username)
}
inline ::std::string* Response::mutable_username() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.auth.Response.username)
  return username_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_username() {
  // @@protoc_insertion_point(field_release:aspia.proto.auth.Response.username)
  
  return username_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_username(::std::string* username) {
  if (username != NULL) {
    
  } else {
    
  }
  username_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.auth.Response.username)
}

// bytes key = 3;
inline void Response::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Response::key() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.Response.key)
  return key_.GetNoArena();
}
inline void Response::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:aspia.proto.auth.Response.key)
}
#if LANG_CXX11
inline void Response::set_key(::std::string&& value) {
  
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:aspia.proto.auth.Response.key)
}
#endif
inline void Response::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:aspia.proto.auth.Response.key)
}
inline void Response::set_key(const void* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:aspia.proto.auth.Response.key)
}
inline ::std::string* Response::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:aspia.proto.auth.Response.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_key() {
  // @@protoc_insertion_point(field_release:aspia.proto.auth.Response.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.auth.Response.key)
}

// -------------------------------------------------------------------

// Result

// .aspia.proto.auth.Status status = 1;
inline void Result::clear_status() {
  status_ = 0;
}
inline ::aspia::proto::auth::Status Result::status() const {
  // @@protoc_insertion_point(field_get:aspia.proto.auth.Result.status)
  return static_cast< ::aspia::proto::auth::Status >(status_);
}
inline void Result::set_status(::aspia::proto::auth::Status value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:aspia.proto.auth.Result.status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace auth
}  // namespace proto
}  // namespace aspia

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::aspia::proto::auth::SessionType> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::aspia::proto::auth::Status> : ::google::protobuf::internal::true_type {};
template <> struct is_proto_enum< ::aspia::proto::auth::Hashing> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_authorization_2eproto__INCLUDED
