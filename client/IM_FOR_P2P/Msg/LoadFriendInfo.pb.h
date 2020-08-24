// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LoadFriendInfo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_LoadFriendInfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_LoadFriendInfo_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_LoadFriendInfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_LoadFriendInfo_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_LoadFriendInfo_2eproto;
namespace IM {
class LoadFriendInfo;
class LoadFriendInfoDefaultTypeInternal;
extern LoadFriendInfoDefaultTypeInternal _LoadFriendInfo_default_instance_;
}  // namespace IM
PROTOBUF_NAMESPACE_OPEN
template<> ::IM::LoadFriendInfo* Arena::CreateMaybeMessage<::IM::LoadFriendInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace IM {

// ===================================================================

class LoadFriendInfo PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:IM.LoadFriendInfo) */ {
 public:
  inline LoadFriendInfo() : LoadFriendInfo(nullptr) {};
  virtual ~LoadFriendInfo();

  LoadFriendInfo(const LoadFriendInfo& from);
  LoadFriendInfo(LoadFriendInfo&& from) noexcept
    : LoadFriendInfo() {
    *this = ::std::move(from);
  }

  inline LoadFriendInfo& operator=(const LoadFriendInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline LoadFriendInfo& operator=(LoadFriendInfo&& from) noexcept {
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
  static const LoadFriendInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LoadFriendInfo* internal_default_instance() {
    return reinterpret_cast<const LoadFriendInfo*>(
               &_LoadFriendInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LoadFriendInfo& a, LoadFriendInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(LoadFriendInfo* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(LoadFriendInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LoadFriendInfo* New() const final {
    return CreateMaybeMessage<LoadFriendInfo>(nullptr);
  }

  LoadFriendInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LoadFriendInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LoadFriendInfo& from);
  void MergeFrom(const LoadFriendInfo& from);
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
  void InternalSwap(LoadFriendInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "IM.LoadFriendInfo";
  }
  protected:
  explicit LoadFriendInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_LoadFriendInfo_2eproto);
    return ::descriptor_table_LoadFriendInfo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserRemarkNameFieldNumber = 7,
    kFGroupFieldNumber = 9,
    kFriendRemarkNameFieldNumber = 12,
    kNetworkTypeFieldNumber = 1,
    kMsgIDFieldNumber = 2,
    kRecvIDFieldNumber = 3,
    kSendIdFieldNumber = 4,
    kUserIDFieldNumber = 5,
    kFriendIDFieldNumber = 6,
    kStateFieldNumber = 8,
    kUSexFieldNumber = 10,
    kFSexFieldNumber = 11,
  };
  // bytes userRemarkName = 7;
  void clear_userremarkname();
  const std::string& userremarkname() const;
  void set_userremarkname(const std::string& value);
  void set_userremarkname(std::string&& value);
  void set_userremarkname(const char* value);
  void set_userremarkname(const void* value, size_t size);
  std::string* mutable_userremarkname();
  std::string* release_userremarkname();
  void set_allocated_userremarkname(std::string* userremarkname);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_userremarkname();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_userremarkname(
      std::string* userremarkname);
  private:
  const std::string& _internal_userremarkname() const;
  void _internal_set_userremarkname(const std::string& value);
  std::string* _internal_mutable_userremarkname();
  public:

  // bytes f_group = 9;
  void clear_f_group();
  const std::string& f_group() const;
  void set_f_group(const std::string& value);
  void set_f_group(std::string&& value);
  void set_f_group(const char* value);
  void set_f_group(const void* value, size_t size);
  std::string* mutable_f_group();
  std::string* release_f_group();
  void set_allocated_f_group(std::string* f_group);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_f_group();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_f_group(
      std::string* f_group);
  private:
  const std::string& _internal_f_group() const;
  void _internal_set_f_group(const std::string& value);
  std::string* _internal_mutable_f_group();
  public:

  // bytes friendRemarkName = 12;
  void clear_friendremarkname();
  const std::string& friendremarkname() const;
  void set_friendremarkname(const std::string& value);
  void set_friendremarkname(std::string&& value);
  void set_friendremarkname(const char* value);
  void set_friendremarkname(const void* value, size_t size);
  std::string* mutable_friendremarkname();
  std::string* release_friendremarkname();
  void set_allocated_friendremarkname(std::string* friendremarkname);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_friendremarkname();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_friendremarkname(
      std::string* friendremarkname);
  private:
  const std::string& _internal_friendremarkname() const;
  void _internal_set_friendremarkname(const std::string& value);
  std::string* _internal_mutable_friendremarkname();
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

  // int32 sendId = 4;
  void clear_sendid();
  ::PROTOBUF_NAMESPACE_ID::int32 sendid() const;
  void set_sendid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_sendid() const;
  void _internal_set_sendid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 userID = 5;
  void clear_userid();
  ::PROTOBUF_NAMESPACE_ID::int32 userid() const;
  void set_userid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_userid() const;
  void _internal_set_userid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 friendID = 6;
  void clear_friendid();
  ::PROTOBUF_NAMESPACE_ID::int32 friendid() const;
  void set_friendid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_friendid() const;
  void _internal_set_friendid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 state = 8;
  void clear_state();
  ::PROTOBUF_NAMESPACE_ID::int32 state() const;
  void set_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_state() const;
  void _internal_set_state(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 u_sex = 10;
  void clear_u_sex();
  ::PROTOBUF_NAMESPACE_ID::int32 u_sex() const;
  void set_u_sex(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_u_sex() const;
  void _internal_set_u_sex(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 f_sex = 11;
  void clear_f_sex();
  ::PROTOBUF_NAMESPACE_ID::int32 f_sex() const;
  void set_f_sex(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_f_sex() const;
  void _internal_set_f_sex(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:IM.LoadFriendInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr userremarkname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr f_group_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr friendremarkname_;
  ::PROTOBUF_NAMESPACE_ID::int32 networktype_;
  ::PROTOBUF_NAMESPACE_ID::int32 msgid_;
  ::PROTOBUF_NAMESPACE_ID::int32 recvid_;
  ::PROTOBUF_NAMESPACE_ID::int32 sendid_;
  ::PROTOBUF_NAMESPACE_ID::int32 userid_;
  ::PROTOBUF_NAMESPACE_ID::int32 friendid_;
  ::PROTOBUF_NAMESPACE_ID::int32 state_;
  ::PROTOBUF_NAMESPACE_ID::int32 u_sex_;
  ::PROTOBUF_NAMESPACE_ID::int32 f_sex_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_LoadFriendInfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LoadFriendInfo

// int32 networkType = 1;
inline void LoadFriendInfo::clear_networktype() {
  networktype_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::_internal_networktype() const {
  return networktype_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::networktype() const {
  // @@protoc_insertion_point(field_get:IM.LoadFriendInfo.networkType)
  return _internal_networktype();
}
inline void LoadFriendInfo::_internal_set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  networktype_ = value;
}
inline void LoadFriendInfo::set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_networktype(value);
  // @@protoc_insertion_point(field_set:IM.LoadFriendInfo.networkType)
}

// int32 msgID = 2;
inline void LoadFriendInfo::clear_msgid() {
  msgid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::_internal_msgid() const {
  return msgid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::msgid() const {
  // @@protoc_insertion_point(field_get:IM.LoadFriendInfo.msgID)
  return _internal_msgid();
}
inline void LoadFriendInfo::_internal_set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  msgid_ = value;
}
inline void LoadFriendInfo::set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_msgid(value);
  // @@protoc_insertion_point(field_set:IM.LoadFriendInfo.msgID)
}

// int32 recvID = 3;
inline void LoadFriendInfo::clear_recvid() {
  recvid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::_internal_recvid() const {
  return recvid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::recvid() const {
  // @@protoc_insertion_point(field_get:IM.LoadFriendInfo.recvID)
  return _internal_recvid();
}
inline void LoadFriendInfo::_internal_set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  recvid_ = value;
}
inline void LoadFriendInfo::set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_recvid(value);
  // @@protoc_insertion_point(field_set:IM.LoadFriendInfo.recvID)
}

// int32 sendId = 4;
inline void LoadFriendInfo::clear_sendid() {
  sendid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::_internal_sendid() const {
  return sendid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::sendid() const {
  // @@protoc_insertion_point(field_get:IM.LoadFriendInfo.sendId)
  return _internal_sendid();
}
inline void LoadFriendInfo::_internal_set_sendid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  sendid_ = value;
}
inline void LoadFriendInfo::set_sendid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_sendid(value);
  // @@protoc_insertion_point(field_set:IM.LoadFriendInfo.sendId)
}

// int32 userID = 5;
inline void LoadFriendInfo::clear_userid() {
  userid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::_internal_userid() const {
  return userid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::userid() const {
  // @@protoc_insertion_point(field_get:IM.LoadFriendInfo.userID)
  return _internal_userid();
}
inline void LoadFriendInfo::_internal_set_userid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  userid_ = value;
}
inline void LoadFriendInfo::set_userid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_userid(value);
  // @@protoc_insertion_point(field_set:IM.LoadFriendInfo.userID)
}

// int32 friendID = 6;
inline void LoadFriendInfo::clear_friendid() {
  friendid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::_internal_friendid() const {
  return friendid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::friendid() const {
  // @@protoc_insertion_point(field_get:IM.LoadFriendInfo.friendID)
  return _internal_friendid();
}
inline void LoadFriendInfo::_internal_set_friendid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  friendid_ = value;
}
inline void LoadFriendInfo::set_friendid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_friendid(value);
  // @@protoc_insertion_point(field_set:IM.LoadFriendInfo.friendID)
}

// bytes userRemarkName = 7;
inline void LoadFriendInfo::clear_userremarkname() {
  userremarkname_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& LoadFriendInfo::userremarkname() const {
  // @@protoc_insertion_point(field_get:IM.LoadFriendInfo.userRemarkName)
  return _internal_userremarkname();
}
inline void LoadFriendInfo::set_userremarkname(const std::string& value) {
  _internal_set_userremarkname(value);
  // @@protoc_insertion_point(field_set:IM.LoadFriendInfo.userRemarkName)
}
inline std::string* LoadFriendInfo::mutable_userremarkname() {
  // @@protoc_insertion_point(field_mutable:IM.LoadFriendInfo.userRemarkName)
  return _internal_mutable_userremarkname();
}
inline const std::string& LoadFriendInfo::_internal_userremarkname() const {
  return userremarkname_.Get();
}
inline void LoadFriendInfo::_internal_set_userremarkname(const std::string& value) {
  
  userremarkname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void LoadFriendInfo::set_userremarkname(std::string&& value) {
  
  userremarkname_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:IM.LoadFriendInfo.userRemarkName)
}
inline void LoadFriendInfo::set_userremarkname(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  userremarkname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:IM.LoadFriendInfo.userRemarkName)
}
inline void LoadFriendInfo::set_userremarkname(const void* value,
    size_t size) {
  
  userremarkname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:IM.LoadFriendInfo.userRemarkName)
}
inline std::string* LoadFriendInfo::_internal_mutable_userremarkname() {
  
  return userremarkname_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* LoadFriendInfo::release_userremarkname() {
  // @@protoc_insertion_point(field_release:IM.LoadFriendInfo.userRemarkName)
  return userremarkname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void LoadFriendInfo::set_allocated_userremarkname(std::string* userremarkname) {
  if (userremarkname != nullptr) {
    
  } else {
    
  }
  userremarkname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), userremarkname,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:IM.LoadFriendInfo.userRemarkName)
}
inline std::string* LoadFriendInfo::unsafe_arena_release_userremarkname() {
  // @@protoc_insertion_point(field_unsafe_arena_release:IM.LoadFriendInfo.userRemarkName)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return userremarkname_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void LoadFriendInfo::unsafe_arena_set_allocated_userremarkname(
    std::string* userremarkname) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (userremarkname != nullptr) {
    
  } else {
    
  }
  userremarkname_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      userremarkname, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:IM.LoadFriendInfo.userRemarkName)
}

// int32 state = 8;
inline void LoadFriendInfo::clear_state() {
  state_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::_internal_state() const {
  return state_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::state() const {
  // @@protoc_insertion_point(field_get:IM.LoadFriendInfo.state)
  return _internal_state();
}
inline void LoadFriendInfo::_internal_set_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  state_ = value;
}
inline void LoadFriendInfo::set_state(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_state(value);
  // @@protoc_insertion_point(field_set:IM.LoadFriendInfo.state)
}

// bytes f_group = 9;
inline void LoadFriendInfo::clear_f_group() {
  f_group_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& LoadFriendInfo::f_group() const {
  // @@protoc_insertion_point(field_get:IM.LoadFriendInfo.f_group)
  return _internal_f_group();
}
inline void LoadFriendInfo::set_f_group(const std::string& value) {
  _internal_set_f_group(value);
  // @@protoc_insertion_point(field_set:IM.LoadFriendInfo.f_group)
}
inline std::string* LoadFriendInfo::mutable_f_group() {
  // @@protoc_insertion_point(field_mutable:IM.LoadFriendInfo.f_group)
  return _internal_mutable_f_group();
}
inline const std::string& LoadFriendInfo::_internal_f_group() const {
  return f_group_.Get();
}
inline void LoadFriendInfo::_internal_set_f_group(const std::string& value) {
  
  f_group_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void LoadFriendInfo::set_f_group(std::string&& value) {
  
  f_group_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:IM.LoadFriendInfo.f_group)
}
inline void LoadFriendInfo::set_f_group(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  f_group_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:IM.LoadFriendInfo.f_group)
}
inline void LoadFriendInfo::set_f_group(const void* value,
    size_t size) {
  
  f_group_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:IM.LoadFriendInfo.f_group)
}
inline std::string* LoadFriendInfo::_internal_mutable_f_group() {
  
  return f_group_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* LoadFriendInfo::release_f_group() {
  // @@protoc_insertion_point(field_release:IM.LoadFriendInfo.f_group)
  return f_group_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void LoadFriendInfo::set_allocated_f_group(std::string* f_group) {
  if (f_group != nullptr) {
    
  } else {
    
  }
  f_group_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), f_group,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:IM.LoadFriendInfo.f_group)
}
inline std::string* LoadFriendInfo::unsafe_arena_release_f_group() {
  // @@protoc_insertion_point(field_unsafe_arena_release:IM.LoadFriendInfo.f_group)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return f_group_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void LoadFriendInfo::unsafe_arena_set_allocated_f_group(
    std::string* f_group) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (f_group != nullptr) {
    
  } else {
    
  }
  f_group_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      f_group, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:IM.LoadFriendInfo.f_group)
}

// int32 u_sex = 10;
inline void LoadFriendInfo::clear_u_sex() {
  u_sex_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::_internal_u_sex() const {
  return u_sex_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::u_sex() const {
  // @@protoc_insertion_point(field_get:IM.LoadFriendInfo.u_sex)
  return _internal_u_sex();
}
inline void LoadFriendInfo::_internal_set_u_sex(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  u_sex_ = value;
}
inline void LoadFriendInfo::set_u_sex(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_u_sex(value);
  // @@protoc_insertion_point(field_set:IM.LoadFriendInfo.u_sex)
}

// int32 f_sex = 11;
inline void LoadFriendInfo::clear_f_sex() {
  f_sex_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::_internal_f_sex() const {
  return f_sex_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LoadFriendInfo::f_sex() const {
  // @@protoc_insertion_point(field_get:IM.LoadFriendInfo.f_sex)
  return _internal_f_sex();
}
inline void LoadFriendInfo::_internal_set_f_sex(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  f_sex_ = value;
}
inline void LoadFriendInfo::set_f_sex(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_f_sex(value);
  // @@protoc_insertion_point(field_set:IM.LoadFriendInfo.f_sex)
}

// bytes friendRemarkName = 12;
inline void LoadFriendInfo::clear_friendremarkname() {
  friendremarkname_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& LoadFriendInfo::friendremarkname() const {
  // @@protoc_insertion_point(field_get:IM.LoadFriendInfo.friendRemarkName)
  return _internal_friendremarkname();
}
inline void LoadFriendInfo::set_friendremarkname(const std::string& value) {
  _internal_set_friendremarkname(value);
  // @@protoc_insertion_point(field_set:IM.LoadFriendInfo.friendRemarkName)
}
inline std::string* LoadFriendInfo::mutable_friendremarkname() {
  // @@protoc_insertion_point(field_mutable:IM.LoadFriendInfo.friendRemarkName)
  return _internal_mutable_friendremarkname();
}
inline const std::string& LoadFriendInfo::_internal_friendremarkname() const {
  return friendremarkname_.Get();
}
inline void LoadFriendInfo::_internal_set_friendremarkname(const std::string& value) {
  
  friendremarkname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void LoadFriendInfo::set_friendremarkname(std::string&& value) {
  
  friendremarkname_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:IM.LoadFriendInfo.friendRemarkName)
}
inline void LoadFriendInfo::set_friendremarkname(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  friendremarkname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:IM.LoadFriendInfo.friendRemarkName)
}
inline void LoadFriendInfo::set_friendremarkname(const void* value,
    size_t size) {
  
  friendremarkname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:IM.LoadFriendInfo.friendRemarkName)
}
inline std::string* LoadFriendInfo::_internal_mutable_friendremarkname() {
  
  return friendremarkname_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* LoadFriendInfo::release_friendremarkname() {
  // @@protoc_insertion_point(field_release:IM.LoadFriendInfo.friendRemarkName)
  return friendremarkname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void LoadFriendInfo::set_allocated_friendremarkname(std::string* friendremarkname) {
  if (friendremarkname != nullptr) {
    
  } else {
    
  }
  friendremarkname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), friendremarkname,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:IM.LoadFriendInfo.friendRemarkName)
}
inline std::string* LoadFriendInfo::unsafe_arena_release_friendremarkname() {
  // @@protoc_insertion_point(field_unsafe_arena_release:IM.LoadFriendInfo.friendRemarkName)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return friendremarkname_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void LoadFriendInfo::unsafe_arena_set_allocated_friendremarkname(
    std::string* friendremarkname) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (friendremarkname != nullptr) {
    
  } else {
    
  }
  friendremarkname_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      friendremarkname, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:IM.LoadFriendInfo.friendRemarkName)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace IM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_LoadFriendInfo_2eproto
