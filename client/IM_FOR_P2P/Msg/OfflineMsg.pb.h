// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: OfflineMsg.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_OfflineMsg_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_OfflineMsg_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_OfflineMsg_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_OfflineMsg_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_OfflineMsg_2eproto;
namespace IM {
class OfflineMsg;
class OfflineMsgDefaultTypeInternal;
extern OfflineMsgDefaultTypeInternal _OfflineMsg_default_instance_;
}  // namespace IM
PROTOBUF_NAMESPACE_OPEN
template<> ::IM::OfflineMsg* Arena::CreateMaybeMessage<::IM::OfflineMsg>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace IM {

// ===================================================================

class OfflineMsg PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:IM.OfflineMsg) */ {
 public:
  inline OfflineMsg() : OfflineMsg(nullptr) {};
  virtual ~OfflineMsg();

  OfflineMsg(const OfflineMsg& from);
  OfflineMsg(OfflineMsg&& from) noexcept
    : OfflineMsg() {
    *this = ::std::move(from);
  }

  inline OfflineMsg& operator=(const OfflineMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline OfflineMsg& operator=(OfflineMsg&& from) noexcept {
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
  static const OfflineMsg& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OfflineMsg* internal_default_instance() {
    return reinterpret_cast<const OfflineMsg*>(
               &_OfflineMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(OfflineMsg& a, OfflineMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(OfflineMsg* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(OfflineMsg* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline OfflineMsg* New() const final {
    return CreateMaybeMessage<OfflineMsg>(nullptr);
  }

  OfflineMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<OfflineMsg>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const OfflineMsg& from);
  void MergeFrom(const OfflineMsg& from);
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
  void InternalSwap(OfflineMsg* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "IM.OfflineMsg";
  }
  protected:
  explicit OfflineMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_OfflineMsg_2eproto);
    return ::descriptor_table_OfflineMsg_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSendNameFieldNumber = 6,
    kSendtimeFieldNumber = 7,
    kContentFieldNumber = 8,
    kNetworkTypeFieldNumber = 1,
    kMsgIDFieldNumber = 2,
    kRecvIDFieldNumber = 3,
    kSendIDFieldNumber = 4,
  };
  // bytes sendName = 6;
  void clear_sendname();
  const std::string& sendname() const;
  void set_sendname(const std::string& value);
  void set_sendname(std::string&& value);
  void set_sendname(const char* value);
  void set_sendname(const void* value, size_t size);
  std::string* mutable_sendname();
  std::string* release_sendname();
  void set_allocated_sendname(std::string* sendname);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_sendname();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_sendname(
      std::string* sendname);
  private:
  const std::string& _internal_sendname() const;
  void _internal_set_sendname(const std::string& value);
  std::string* _internal_mutable_sendname();
  public:

  // string sendtime = 7;
  void clear_sendtime();
  const std::string& sendtime() const;
  void set_sendtime(const std::string& value);
  void set_sendtime(std::string&& value);
  void set_sendtime(const char* value);
  void set_sendtime(const char* value, size_t size);
  std::string* mutable_sendtime();
  std::string* release_sendtime();
  void set_allocated_sendtime(std::string* sendtime);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_sendtime();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_sendtime(
      std::string* sendtime);
  private:
  const std::string& _internal_sendtime() const;
  void _internal_set_sendtime(const std::string& value);
  std::string* _internal_mutable_sendtime();
  public:

  // bytes content = 8;
  void clear_content();
  const std::string& content() const;
  void set_content(const std::string& value);
  void set_content(std::string&& value);
  void set_content(const char* value);
  void set_content(const void* value, size_t size);
  std::string* mutable_content();
  std::string* release_content();
  void set_allocated_content(std::string* content);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_content();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_content(
      std::string* content);
  private:
  const std::string& _internal_content() const;
  void _internal_set_content(const std::string& value);
  std::string* _internal_mutable_content();
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

  // @@protoc_insertion_point(class_scope:IM.OfflineMsg)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sendname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sendtime_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr content_;
  ::PROTOBUF_NAMESPACE_ID::int32 networktype_;
  ::PROTOBUF_NAMESPACE_ID::int32 msgid_;
  ::PROTOBUF_NAMESPACE_ID::int32 recvid_;
  ::PROTOBUF_NAMESPACE_ID::int32 sendid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_OfflineMsg_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// OfflineMsg

// int32 networkType = 1;
inline void OfflineMsg::clear_networktype() {
  networktype_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OfflineMsg::_internal_networktype() const {
  return networktype_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OfflineMsg::networktype() const {
  // @@protoc_insertion_point(field_get:IM.OfflineMsg.networkType)
  return _internal_networktype();
}
inline void OfflineMsg::_internal_set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  networktype_ = value;
}
inline void OfflineMsg::set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_networktype(value);
  // @@protoc_insertion_point(field_set:IM.OfflineMsg.networkType)
}

// int32 msgID = 2;
inline void OfflineMsg::clear_msgid() {
  msgid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OfflineMsg::_internal_msgid() const {
  return msgid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OfflineMsg::msgid() const {
  // @@protoc_insertion_point(field_get:IM.OfflineMsg.msgID)
  return _internal_msgid();
}
inline void OfflineMsg::_internal_set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  msgid_ = value;
}
inline void OfflineMsg::set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_msgid(value);
  // @@protoc_insertion_point(field_set:IM.OfflineMsg.msgID)
}

// int32 recvID = 3;
inline void OfflineMsg::clear_recvid() {
  recvid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OfflineMsg::_internal_recvid() const {
  return recvid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OfflineMsg::recvid() const {
  // @@protoc_insertion_point(field_get:IM.OfflineMsg.recvID)
  return _internal_recvid();
}
inline void OfflineMsg::_internal_set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  recvid_ = value;
}
inline void OfflineMsg::set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_recvid(value);
  // @@protoc_insertion_point(field_set:IM.OfflineMsg.recvID)
}

// int32 sendID = 4;
inline void OfflineMsg::clear_sendid() {
  sendid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OfflineMsg::_internal_sendid() const {
  return sendid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OfflineMsg::sendid() const {
  // @@protoc_insertion_point(field_get:IM.OfflineMsg.sendID)
  return _internal_sendid();
}
inline void OfflineMsg::_internal_set_sendid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  sendid_ = value;
}
inline void OfflineMsg::set_sendid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_sendid(value);
  // @@protoc_insertion_point(field_set:IM.OfflineMsg.sendID)
}

// bytes sendName = 6;
inline void OfflineMsg::clear_sendname() {
  sendname_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& OfflineMsg::sendname() const {
  // @@protoc_insertion_point(field_get:IM.OfflineMsg.sendName)
  return _internal_sendname();
}
inline void OfflineMsg::set_sendname(const std::string& value) {
  _internal_set_sendname(value);
  // @@protoc_insertion_point(field_set:IM.OfflineMsg.sendName)
}
inline std::string* OfflineMsg::mutable_sendname() {
  // @@protoc_insertion_point(field_mutable:IM.OfflineMsg.sendName)
  return _internal_mutable_sendname();
}
inline const std::string& OfflineMsg::_internal_sendname() const {
  return sendname_.Get();
}
inline void OfflineMsg::_internal_set_sendname(const std::string& value) {
  
  sendname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void OfflineMsg::set_sendname(std::string&& value) {
  
  sendname_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:IM.OfflineMsg.sendName)
}
inline void OfflineMsg::set_sendname(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  sendname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:IM.OfflineMsg.sendName)
}
inline void OfflineMsg::set_sendname(const void* value,
    size_t size) {
  
  sendname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:IM.OfflineMsg.sendName)
}
inline std::string* OfflineMsg::_internal_mutable_sendname() {
  
  return sendname_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* OfflineMsg::release_sendname() {
  // @@protoc_insertion_point(field_release:IM.OfflineMsg.sendName)
  return sendname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void OfflineMsg::set_allocated_sendname(std::string* sendname) {
  if (sendname != nullptr) {
    
  } else {
    
  }
  sendname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sendname,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:IM.OfflineMsg.sendName)
}
inline std::string* OfflineMsg::unsafe_arena_release_sendname() {
  // @@protoc_insertion_point(field_unsafe_arena_release:IM.OfflineMsg.sendName)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return sendname_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void OfflineMsg::unsafe_arena_set_allocated_sendname(
    std::string* sendname) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (sendname != nullptr) {
    
  } else {
    
  }
  sendname_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      sendname, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:IM.OfflineMsg.sendName)
}

// string sendtime = 7;
inline void OfflineMsg::clear_sendtime() {
  sendtime_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& OfflineMsg::sendtime() const {
  // @@protoc_insertion_point(field_get:IM.OfflineMsg.sendtime)
  return _internal_sendtime();
}
inline void OfflineMsg::set_sendtime(const std::string& value) {
  _internal_set_sendtime(value);
  // @@protoc_insertion_point(field_set:IM.OfflineMsg.sendtime)
}
inline std::string* OfflineMsg::mutable_sendtime() {
  // @@protoc_insertion_point(field_mutable:IM.OfflineMsg.sendtime)
  return _internal_mutable_sendtime();
}
inline const std::string& OfflineMsg::_internal_sendtime() const {
  return sendtime_.Get();
}
inline void OfflineMsg::_internal_set_sendtime(const std::string& value) {
  
  sendtime_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void OfflineMsg::set_sendtime(std::string&& value) {
  
  sendtime_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:IM.OfflineMsg.sendtime)
}
inline void OfflineMsg::set_sendtime(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  sendtime_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:IM.OfflineMsg.sendtime)
}
inline void OfflineMsg::set_sendtime(const char* value,
    size_t size) {
  
  sendtime_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:IM.OfflineMsg.sendtime)
}
inline std::string* OfflineMsg::_internal_mutable_sendtime() {
  
  return sendtime_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* OfflineMsg::release_sendtime() {
  // @@protoc_insertion_point(field_release:IM.OfflineMsg.sendtime)
  return sendtime_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void OfflineMsg::set_allocated_sendtime(std::string* sendtime) {
  if (sendtime != nullptr) {
    
  } else {
    
  }
  sendtime_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sendtime,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:IM.OfflineMsg.sendtime)
}
inline std::string* OfflineMsg::unsafe_arena_release_sendtime() {
  // @@protoc_insertion_point(field_unsafe_arena_release:IM.OfflineMsg.sendtime)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return sendtime_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void OfflineMsg::unsafe_arena_set_allocated_sendtime(
    std::string* sendtime) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (sendtime != nullptr) {
    
  } else {
    
  }
  sendtime_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      sendtime, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:IM.OfflineMsg.sendtime)
}

// bytes content = 8;
inline void OfflineMsg::clear_content() {
  content_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& OfflineMsg::content() const {
  // @@protoc_insertion_point(field_get:IM.OfflineMsg.content)
  return _internal_content();
}
inline void OfflineMsg::set_content(const std::string& value) {
  _internal_set_content(value);
  // @@protoc_insertion_point(field_set:IM.OfflineMsg.content)
}
inline std::string* OfflineMsg::mutable_content() {
  // @@protoc_insertion_point(field_mutable:IM.OfflineMsg.content)
  return _internal_mutable_content();
}
inline const std::string& OfflineMsg::_internal_content() const {
  return content_.Get();
}
inline void OfflineMsg::_internal_set_content(const std::string& value) {
  
  content_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void OfflineMsg::set_content(std::string&& value) {
  
  content_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:IM.OfflineMsg.content)
}
inline void OfflineMsg::set_content(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  content_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:IM.OfflineMsg.content)
}
inline void OfflineMsg::set_content(const void* value,
    size_t size) {
  
  content_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:IM.OfflineMsg.content)
}
inline std::string* OfflineMsg::_internal_mutable_content() {
  
  return content_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* OfflineMsg::release_content() {
  // @@protoc_insertion_point(field_release:IM.OfflineMsg.content)
  return content_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void OfflineMsg::set_allocated_content(std::string* content) {
  if (content != nullptr) {
    
  } else {
    
  }
  content_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), content,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:IM.OfflineMsg.content)
}
inline std::string* OfflineMsg::unsafe_arena_release_content() {
  // @@protoc_insertion_point(field_unsafe_arena_release:IM.OfflineMsg.content)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return content_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void OfflineMsg::unsafe_arena_set_allocated_content(
    std::string* content) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (content != nullptr) {
    
  } else {
    
  }
  content_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      content, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:IM.OfflineMsg.content)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace IM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_OfflineMsg_2eproto