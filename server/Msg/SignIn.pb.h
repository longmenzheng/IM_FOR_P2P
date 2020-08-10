// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SignIn.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SignIn_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SignIn_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SignIn_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SignIn_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SignIn_2eproto;
namespace IM {
class SignIn;
class SignInDefaultTypeInternal;
extern SignInDefaultTypeInternal _SignIn_default_instance_;
}  // namespace IM
PROTOBUF_NAMESPACE_OPEN
template<> ::IM::SignIn* Arena::CreateMaybeMessage<::IM::SignIn>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace IM {

// ===================================================================

class SignIn PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:IM.SignIn) */ {
 public:
  inline SignIn() : SignIn(nullptr) {};
  virtual ~SignIn();

  SignIn(const SignIn& from);
  SignIn(SignIn&& from) noexcept
    : SignIn() {
    *this = ::std::move(from);
  }

  inline SignIn& operator=(const SignIn& from) {
    CopyFrom(from);
    return *this;
  }
  inline SignIn& operator=(SignIn&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SignIn& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SignIn* internal_default_instance() {
    return reinterpret_cast<const SignIn*>(
               &_SignIn_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SignIn& a, SignIn& b) {
    a.Swap(&b);
  }
  inline void Swap(SignIn* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SignIn* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SignIn* New() const final {
    return CreateMaybeMessage<SignIn>(nullptr);
  }

  SignIn* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SignIn>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SignIn& from);
  void MergeFrom(const SignIn& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SignIn* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "IM.SignIn";
  }
  protected:
  explicit SignIn(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_SignIn_2eproto);
    return ::descriptor_table_SignIn_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPasswordFieldNumber = 5,
    kPhoneFieldNumber = 6,
    kNetworkTypeFieldNumber = 1,
    kMsgIDFieldNumber = 2,
    kRecvIDFieldNumber = 3,
    kSendIDFieldNumber = 4,
    kStateFieldNumber = 7,
  };
  // bytes password = 5;
  void clear_password();
  const std::string& password() const;
  void set_password(const std::string& value);
  void set_password(std::string&& value);
  void set_password(const char* value);
  void set_password(const void* value, size_t size);
  std::string* mutable_password();
  std::string* release_password();
  void set_allocated_password(std::string* password);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_password();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_password(
      std::string* password);
  private:
  const std::string& _internal_password() const;
  void _internal_set_password(const std::string& value);
  std::string* _internal_mutable_password();
  public:

  // bytes phone = 6;
  void clear_phone();
  const std::string& phone() const;
  void set_phone(const std::string& value);
  void set_phone(std::string&& value);
  void set_phone(const char* value);
  void set_phone(const void* value, size_t size);
  std::string* mutable_phone();
  std::string* release_phone();
  void set_allocated_phone(std::string* phone);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_phone();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_phone(
      std::string* phone);
  private:
  const std::string& _internal_phone() const;
  void _internal_set_phone(const std::string& value);
  std::string* _internal_mutable_phone();
  public:

  // int32 networkType = 1;
  void clear_networktype();
  ::PROTOBUF_NAMESPACE_ID::int32 networktype() const;
  void set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_networktype() const;
  void _internal_set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 msgID = 2;
  void clear_msgid();
  ::PROTOBUF_NAMESPACE_ID::int32 msgid() const;
  void set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_msgid() const;
  void _internal_set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 recvID = 3;
  void clear_recvid();
  ::PROTOBUF_NAMESPACE_ID::int32 recvid() const;
  void set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_recvid() const;
  void _internal_set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 sendID = 4;
  void clear_sendid();
  ::PROTOBUF_NAMESPACE_ID::int32 sendid() const;
  void set_sendid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_sendid() const;
  void _internal_set_sendid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 state = 7;
  void clear_state();
  ::PROTOBUF_NAMESPACE_ID::int32 state() const;
  void set_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_state() const;
  void _internal_set_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:IM.SignIn)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr password_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr phone_;
  ::PROTOBUF_NAMESPACE_ID::int32 networktype_;
  ::PROTOBUF_NAMESPACE_ID::int32 msgid_;
  ::PROTOBUF_NAMESPACE_ID::int32 recvid_;
  ::PROTOBUF_NAMESPACE_ID::int32 sendid_;
  ::PROTOBUF_NAMESPACE_ID::int32 state_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_SignIn_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SignIn

// int32 networkType = 1;
inline void SignIn::clear_networktype() {
  networktype_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignIn::_internal_networktype() const {
  return networktype_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignIn::networktype() const {
  // @@protoc_insertion_point(field_get:IM.SignIn.networkType)
  return _internal_networktype();
}
inline void SignIn::_internal_set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  networktype_ = value;
}
inline void SignIn::set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_networktype(value);
  // @@protoc_insertion_point(field_set:IM.SignIn.networkType)
}

// int32 msgID = 2;
inline void SignIn::clear_msgid() {
  msgid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignIn::_internal_msgid() const {
  return msgid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignIn::msgid() const {
  // @@protoc_insertion_point(field_get:IM.SignIn.msgID)
  return _internal_msgid();
}
inline void SignIn::_internal_set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  msgid_ = value;
}
inline void SignIn::set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_msgid(value);
  // @@protoc_insertion_point(field_set:IM.SignIn.msgID)
}

// int32 recvID = 3;
inline void SignIn::clear_recvid() {
  recvid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignIn::_internal_recvid() const {
  return recvid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignIn::recvid() const {
  // @@protoc_insertion_point(field_get:IM.SignIn.recvID)
  return _internal_recvid();
}
inline void SignIn::_internal_set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  recvid_ = value;
}
inline void SignIn::set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_recvid(value);
  // @@protoc_insertion_point(field_set:IM.SignIn.recvID)
}

// int32 sendID = 4;
inline void SignIn::clear_sendid() {
  sendid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignIn::_internal_sendid() const {
  return sendid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignIn::sendid() const {
  // @@protoc_insertion_point(field_get:IM.SignIn.sendID)
  return _internal_sendid();
}
inline void SignIn::_internal_set_sendid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  sendid_ = value;
}
inline void SignIn::set_sendid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_sendid(value);
  // @@protoc_insertion_point(field_set:IM.SignIn.sendID)
}

// bytes phone = 6;
inline void SignIn::clear_phone() {
  phone_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SignIn::phone() const {
  // @@protoc_insertion_point(field_get:IM.SignIn.phone)
  return _internal_phone();
}
inline void SignIn::set_phone(const std::string& value) {
  _internal_set_phone(value);
  // @@protoc_insertion_point(field_set:IM.SignIn.phone)
}
inline std::string* SignIn::mutable_phone() {
  // @@protoc_insertion_point(field_mutable:IM.SignIn.phone)
  return _internal_mutable_phone();
}
inline const std::string& SignIn::_internal_phone() const {
  return phone_.Get();
}
inline void SignIn::_internal_set_phone(const std::string& value) {
  
  phone_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SignIn::set_phone(std::string&& value) {
  
  phone_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:IM.SignIn.phone)
}
inline void SignIn::set_phone(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  phone_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:IM.SignIn.phone)
}
inline void SignIn::set_phone(const void* value,
    size_t size) {
  
  phone_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:IM.SignIn.phone)
}
inline std::string* SignIn::_internal_mutable_phone() {
  
  return phone_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SignIn::release_phone() {
  // @@protoc_insertion_point(field_release:IM.SignIn.phone)
  return phone_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SignIn::set_allocated_phone(std::string* phone) {
  if (phone != nullptr) {
    
  } else {
    
  }
  phone_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), phone,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:IM.SignIn.phone)
}
inline std::string* SignIn::unsafe_arena_release_phone() {
  // @@protoc_insertion_point(field_unsafe_arena_release:IM.SignIn.phone)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return phone_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SignIn::unsafe_arena_set_allocated_phone(
    std::string* phone) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (phone != nullptr) {
    
  } else {
    
  }
  phone_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      phone, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:IM.SignIn.phone)
}

// bytes password = 5;
inline void SignIn::clear_password() {
  password_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SignIn::password() const {
  // @@protoc_insertion_point(field_get:IM.SignIn.password)
  return _internal_password();
}
inline void SignIn::set_password(const std::string& value) {
  _internal_set_password(value);
  // @@protoc_insertion_point(field_set:IM.SignIn.password)
}
inline std::string* SignIn::mutable_password() {
  // @@protoc_insertion_point(field_mutable:IM.SignIn.password)
  return _internal_mutable_password();
}
inline const std::string& SignIn::_internal_password() const {
  return password_.Get();
}
inline void SignIn::_internal_set_password(const std::string& value) {
  
  password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SignIn::set_password(std::string&& value) {
  
  password_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:IM.SignIn.password)
}
inline void SignIn::set_password(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:IM.SignIn.password)
}
inline void SignIn::set_password(const void* value,
    size_t size) {
  
  password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:IM.SignIn.password)
}
inline std::string* SignIn::_internal_mutable_password() {
  
  return password_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SignIn::release_password() {
  // @@protoc_insertion_point(field_release:IM.SignIn.password)
  return password_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SignIn::set_allocated_password(std::string* password) {
  if (password != nullptr) {
    
  } else {
    
  }
  password_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), password,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:IM.SignIn.password)
}
inline std::string* SignIn::unsafe_arena_release_password() {
  // @@protoc_insertion_point(field_unsafe_arena_release:IM.SignIn.password)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return password_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SignIn::unsafe_arena_set_allocated_password(
    std::string* password) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (password != nullptr) {
    
  } else {
    
  }
  password_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      password, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:IM.SignIn.password)
}

// int32 state = 7;
inline void SignIn::clear_state() {
  state_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignIn::_internal_state() const {
  return state_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignIn::state() const {
  // @@protoc_insertion_point(field_get:IM.SignIn.state)
  return _internal_state();
}
inline void SignIn::_internal_set_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  state_ = value;
}
inline void SignIn::set_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_state(value);
  // @@protoc_insertion_point(field_set:IM.SignIn.state)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace IM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SignIn_2eproto
