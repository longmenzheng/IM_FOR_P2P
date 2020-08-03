// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SignUp.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SignUp_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SignUp_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_SignUp_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SignUp_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SignUp_2eproto;
namespace IM {
class SignUp;
class SignUpDefaultTypeInternal;
extern SignUpDefaultTypeInternal _SignUp_default_instance_;
}  // namespace IM
PROTOBUF_NAMESPACE_OPEN
template<> ::IM::SignUp* Arena::CreateMaybeMessage<::IM::SignUp>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace IM {

// ===================================================================

class SignUp PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:IM.SignUp) */ {
 public:
  inline SignUp() : SignUp(nullptr) {};
  virtual ~SignUp();

  SignUp(const SignUp& from);
  SignUp(SignUp&& from) noexcept
    : SignUp() {
    *this = ::std::move(from);
  }

  inline SignUp& operator=(const SignUp& from) {
    CopyFrom(from);
    return *this;
  }
  inline SignUp& operator=(SignUp&& from) noexcept {
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
  static const SignUp& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SignUp* internal_default_instance() {
    return reinterpret_cast<const SignUp*>(
               &_SignUp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SignUp& a, SignUp& b) {
    a.Swap(&b);
  }
  inline void Swap(SignUp* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SignUp* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SignUp* New() const final {
    return CreateMaybeMessage<SignUp>(nullptr);
  }

  SignUp* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SignUp>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SignUp& from);
  void MergeFrom(const SignUp& from);
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
  void InternalSwap(SignUp* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "IM.SignUp";
  }
  protected:
  explicit SignUp(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_SignUp_2eproto);
    return ::descriptor_table_SignUp_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPasswordFieldNumber = 5,
    kNicknameFieldNumber = 6,
    kPhoneFieldNumber = 7,
    kDescFieldNumber = 8,
    kIconFieldNumber = 9,
    kNetworkTypeFieldNumber = 1,
    kMsgIDFieldNumber = 2,
    kRecvIDFieldNumber = 3,
    kUserIDFieldNumber = 4,
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

  // bytes nickname = 6;
  void clear_nickname();
  const std::string& nickname() const;
  void set_nickname(const std::string& value);
  void set_nickname(std::string&& value);
  void set_nickname(const char* value);
  void set_nickname(const void* value, size_t size);
  std::string* mutable_nickname();
  std::string* release_nickname();
  void set_allocated_nickname(std::string* nickname);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_nickname();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_nickname(
      std::string* nickname);
  private:
  const std::string& _internal_nickname() const;
  void _internal_set_nickname(const std::string& value);
  std::string* _internal_mutable_nickname();
  public:

  // bytes phone = 7;
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

  // bytes desc = 8;
  void clear_desc();
  const std::string& desc() const;
  void set_desc(const std::string& value);
  void set_desc(std::string&& value);
  void set_desc(const char* value);
  void set_desc(const void* value, size_t size);
  std::string* mutable_desc();
  std::string* release_desc();
  void set_allocated_desc(std::string* desc);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_desc();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_desc(
      std::string* desc);
  private:
  const std::string& _internal_desc() const;
  void _internal_set_desc(const std::string& value);
  std::string* _internal_mutable_desc();
  public:

  // bytes icon = 9;
  void clear_icon();
  const std::string& icon() const;
  void set_icon(const std::string& value);
  void set_icon(std::string&& value);
  void set_icon(const char* value);
  void set_icon(const void* value, size_t size);
  std::string* mutable_icon();
  std::string* release_icon();
  void set_allocated_icon(std::string* icon);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_icon();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_icon(
      std::string* icon);
  private:
  const std::string& _internal_icon() const;
  void _internal_set_icon(const std::string& value);
  std::string* _internal_mutable_icon();
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

  // int32 userID = 4;
  void clear_userid();
  ::PROTOBUF_NAMESPACE_ID::int32 userid() const;
  void set_userid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_userid() const;
  void _internal_set_userid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:IM.SignUp)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr password_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr nickname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr phone_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr desc_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr icon_;
  ::PROTOBUF_NAMESPACE_ID::int32 networktype_;
  ::PROTOBUF_NAMESPACE_ID::int32 msgid_;
  ::PROTOBUF_NAMESPACE_ID::int32 recvid_;
  ::PROTOBUF_NAMESPACE_ID::int32 userid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_SignUp_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SignUp

// int32 networkType = 1;
inline void SignUp::clear_networktype() {
  networktype_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignUp::_internal_networktype() const {
  return networktype_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignUp::networktype() const {
  // @@protoc_insertion_point(field_get:IM.SignUp.networkType)
  return _internal_networktype();
}
inline void SignUp::_internal_set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  networktype_ = value;
}
inline void SignUp::set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_networktype(value);
  // @@protoc_insertion_point(field_set:IM.SignUp.networkType)
}

// int32 msgID = 2;
inline void SignUp::clear_msgid() {
  msgid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignUp::_internal_msgid() const {
  return msgid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignUp::msgid() const {
  // @@protoc_insertion_point(field_get:IM.SignUp.msgID)
  return _internal_msgid();
}
inline void SignUp::_internal_set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  msgid_ = value;
}
inline void SignUp::set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_msgid(value);
  // @@protoc_insertion_point(field_set:IM.SignUp.msgID)
}

// int32 recvID = 3;
inline void SignUp::clear_recvid() {
  recvid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignUp::_internal_recvid() const {
  return recvid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignUp::recvid() const {
  // @@protoc_insertion_point(field_get:IM.SignUp.recvID)
  return _internal_recvid();
}
inline void SignUp::_internal_set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  recvid_ = value;
}
inline void SignUp::set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_recvid(value);
  // @@protoc_insertion_point(field_set:IM.SignUp.recvID)
}

// int32 userID = 4;
inline void SignUp::clear_userid() {
  userid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignUp::_internal_userid() const {
  return userid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 SignUp::userid() const {
  // @@protoc_insertion_point(field_get:IM.SignUp.userID)
  return _internal_userid();
}
inline void SignUp::_internal_set_userid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  userid_ = value;
}
inline void SignUp::set_userid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_userid(value);
  // @@protoc_insertion_point(field_set:IM.SignUp.userID)
}

// bytes password = 5;
inline void SignUp::clear_password() {
  password_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SignUp::password() const {
  // @@protoc_insertion_point(field_get:IM.SignUp.password)
  return _internal_password();
}
inline void SignUp::set_password(const std::string& value) {
  _internal_set_password(value);
  // @@protoc_insertion_point(field_set:IM.SignUp.password)
}
inline std::string* SignUp::mutable_password() {
  // @@protoc_insertion_point(field_mutable:IM.SignUp.password)
  return _internal_mutable_password();
}
inline const std::string& SignUp::_internal_password() const {
  return password_.Get();
}
inline void SignUp::_internal_set_password(const std::string& value) {
  
  password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SignUp::set_password(std::string&& value) {
  
  password_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:IM.SignUp.password)
}
inline void SignUp::set_password(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:IM.SignUp.password)
}
inline void SignUp::set_password(const void* value,
    size_t size) {
  
  password_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:IM.SignUp.password)
}
inline std::string* SignUp::_internal_mutable_password() {
  
  return password_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SignUp::release_password() {
  // @@protoc_insertion_point(field_release:IM.SignUp.password)
  return password_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SignUp::set_allocated_password(std::string* password) {
  if (password != nullptr) {
    
  } else {
    
  }
  password_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), password,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:IM.SignUp.password)
}
inline std::string* SignUp::unsafe_arena_release_password() {
  // @@protoc_insertion_point(field_unsafe_arena_release:IM.SignUp.password)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return password_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SignUp::unsafe_arena_set_allocated_password(
    std::string* password) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (password != nullptr) {
    
  } else {
    
  }
  password_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      password, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:IM.SignUp.password)
}

// bytes nickname = 6;
inline void SignUp::clear_nickname() {
  nickname_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SignUp::nickname() const {
  // @@protoc_insertion_point(field_get:IM.SignUp.nickname)
  return _internal_nickname();
}
inline void SignUp::set_nickname(const std::string& value) {
  _internal_set_nickname(value);
  // @@protoc_insertion_point(field_set:IM.SignUp.nickname)
}
inline std::string* SignUp::mutable_nickname() {
  // @@protoc_insertion_point(field_mutable:IM.SignUp.nickname)
  return _internal_mutable_nickname();
}
inline const std::string& SignUp::_internal_nickname() const {
  return nickname_.Get();
}
inline void SignUp::_internal_set_nickname(const std::string& value) {
  
  nickname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SignUp::set_nickname(std::string&& value) {
  
  nickname_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:IM.SignUp.nickname)
}
inline void SignUp::set_nickname(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  nickname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:IM.SignUp.nickname)
}
inline void SignUp::set_nickname(const void* value,
    size_t size) {
  
  nickname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:IM.SignUp.nickname)
}
inline std::string* SignUp::_internal_mutable_nickname() {
  
  return nickname_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SignUp::release_nickname() {
  // @@protoc_insertion_point(field_release:IM.SignUp.nickname)
  return nickname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SignUp::set_allocated_nickname(std::string* nickname) {
  if (nickname != nullptr) {
    
  } else {
    
  }
  nickname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), nickname,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:IM.SignUp.nickname)
}
inline std::string* SignUp::unsafe_arena_release_nickname() {
  // @@protoc_insertion_point(field_unsafe_arena_release:IM.SignUp.nickname)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return nickname_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SignUp::unsafe_arena_set_allocated_nickname(
    std::string* nickname) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (nickname != nullptr) {
    
  } else {
    
  }
  nickname_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      nickname, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:IM.SignUp.nickname)
}

// bytes phone = 7;
inline void SignUp::clear_phone() {
  phone_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SignUp::phone() const {
  // @@protoc_insertion_point(field_get:IM.SignUp.phone)
  return _internal_phone();
}
inline void SignUp::set_phone(const std::string& value) {
  _internal_set_phone(value);
  // @@protoc_insertion_point(field_set:IM.SignUp.phone)
}
inline std::string* SignUp::mutable_phone() {
  // @@protoc_insertion_point(field_mutable:IM.SignUp.phone)
  return _internal_mutable_phone();
}
inline const std::string& SignUp::_internal_phone() const {
  return phone_.Get();
}
inline void SignUp::_internal_set_phone(const std::string& value) {
  
  phone_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SignUp::set_phone(std::string&& value) {
  
  phone_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:IM.SignUp.phone)
}
inline void SignUp::set_phone(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  phone_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:IM.SignUp.phone)
}
inline void SignUp::set_phone(const void* value,
    size_t size) {
  
  phone_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:IM.SignUp.phone)
}
inline std::string* SignUp::_internal_mutable_phone() {
  
  return phone_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SignUp::release_phone() {
  // @@protoc_insertion_point(field_release:IM.SignUp.phone)
  return phone_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SignUp::set_allocated_phone(std::string* phone) {
  if (phone != nullptr) {
    
  } else {
    
  }
  phone_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), phone,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:IM.SignUp.phone)
}
inline std::string* SignUp::unsafe_arena_release_phone() {
  // @@protoc_insertion_point(field_unsafe_arena_release:IM.SignUp.phone)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return phone_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SignUp::unsafe_arena_set_allocated_phone(
    std::string* phone) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (phone != nullptr) {
    
  } else {
    
  }
  phone_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      phone, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:IM.SignUp.phone)
}

// bytes desc = 8;
inline void SignUp::clear_desc() {
  desc_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SignUp::desc() const {
  // @@protoc_insertion_point(field_get:IM.SignUp.desc)
  return _internal_desc();
}
inline void SignUp::set_desc(const std::string& value) {
  _internal_set_desc(value);
  // @@protoc_insertion_point(field_set:IM.SignUp.desc)
}
inline std::string* SignUp::mutable_desc() {
  // @@protoc_insertion_point(field_mutable:IM.SignUp.desc)
  return _internal_mutable_desc();
}
inline const std::string& SignUp::_internal_desc() const {
  return desc_.Get();
}
inline void SignUp::_internal_set_desc(const std::string& value) {
  
  desc_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SignUp::set_desc(std::string&& value) {
  
  desc_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:IM.SignUp.desc)
}
inline void SignUp::set_desc(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  desc_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:IM.SignUp.desc)
}
inline void SignUp::set_desc(const void* value,
    size_t size) {
  
  desc_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:IM.SignUp.desc)
}
inline std::string* SignUp::_internal_mutable_desc() {
  
  return desc_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SignUp::release_desc() {
  // @@protoc_insertion_point(field_release:IM.SignUp.desc)
  return desc_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SignUp::set_allocated_desc(std::string* desc) {
  if (desc != nullptr) {
    
  } else {
    
  }
  desc_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), desc,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:IM.SignUp.desc)
}
inline std::string* SignUp::unsafe_arena_release_desc() {
  // @@protoc_insertion_point(field_unsafe_arena_release:IM.SignUp.desc)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return desc_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SignUp::unsafe_arena_set_allocated_desc(
    std::string* desc) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (desc != nullptr) {
    
  } else {
    
  }
  desc_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      desc, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:IM.SignUp.desc)
}

// bytes icon = 9;
inline void SignUp::clear_icon() {
  icon_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SignUp::icon() const {
  // @@protoc_insertion_point(field_get:IM.SignUp.icon)
  return _internal_icon();
}
inline void SignUp::set_icon(const std::string& value) {
  _internal_set_icon(value);
  // @@protoc_insertion_point(field_set:IM.SignUp.icon)
}
inline std::string* SignUp::mutable_icon() {
  // @@protoc_insertion_point(field_mutable:IM.SignUp.icon)
  return _internal_mutable_icon();
}
inline const std::string& SignUp::_internal_icon() const {
  return icon_.Get();
}
inline void SignUp::_internal_set_icon(const std::string& value) {
  
  icon_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SignUp::set_icon(std::string&& value) {
  
  icon_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:IM.SignUp.icon)
}
inline void SignUp::set_icon(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  icon_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:IM.SignUp.icon)
}
inline void SignUp::set_icon(const void* value,
    size_t size) {
  
  icon_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:IM.SignUp.icon)
}
inline std::string* SignUp::_internal_mutable_icon() {
  
  return icon_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SignUp::release_icon() {
  // @@protoc_insertion_point(field_release:IM.SignUp.icon)
  return icon_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SignUp::set_allocated_icon(std::string* icon) {
  if (icon != nullptr) {
    
  } else {
    
  }
  icon_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), icon,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:IM.SignUp.icon)
}
inline std::string* SignUp::unsafe_arena_release_icon() {
  // @@protoc_insertion_point(field_unsafe_arena_release:IM.SignUp.icon)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return icon_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void SignUp::unsafe_arena_set_allocated_icon(
    std::string* icon) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (icon != nullptr) {
    
  } else {
    
  }
  icon_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      icon, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:IM.SignUp.icon)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace IM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SignUp_2eproto