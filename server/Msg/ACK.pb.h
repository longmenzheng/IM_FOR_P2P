// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ACK.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ACK_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ACK_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ACK_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ACK_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ACK_2eproto;
namespace IM {
class ACK;
class ACKDefaultTypeInternal;
extern ACKDefaultTypeInternal _ACK_default_instance_;
}  // namespace IM
PROTOBUF_NAMESPACE_OPEN
template<> ::IM::ACK* Arena::CreateMaybeMessage<::IM::ACK>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace IM {

// ===================================================================

class ACK PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:IM.ACK) */ {
 public:
  inline ACK() : ACK(nullptr) {};
  virtual ~ACK();

  ACK(const ACK& from);
  ACK(ACK&& from) noexcept
    : ACK() {
    *this = ::std::move(from);
  }

  inline ACK& operator=(const ACK& from) {
    CopyFrom(from);
    return *this;
  }
  inline ACK& operator=(ACK&& from) noexcept {
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
  static const ACK& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ACK* internal_default_instance() {
    return reinterpret_cast<const ACK*>(
               &_ACK_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ACK& a, ACK& b) {
    a.Swap(&b);
  }
  inline void Swap(ACK* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ACK* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ACK* New() const final {
    return CreateMaybeMessage<ACK>(nullptr);
  }

  ACK* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ACK>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ACK& from);
  void MergeFrom(const ACK& from);
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
  void InternalSwap(ACK* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "IM.ACK";
  }
  protected:
  explicit ACK(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ACK_2eproto);
    return ::descriptor_table_ACK_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNetworkTypeFieldNumber = 1,
    kRecvIDFieldNumber = 2,
    kSendIDFieldNumber = 3,
    kMsgIDFieldNumber = 4,
  };
  // int32 networkType = 1;
  void clear_networktype();
  ::PROTOBUF_NAMESPACE_ID::int32 networktype() const;
  void set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_networktype() const;
  void _internal_set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 recvID = 2;
  void clear_recvid();
  ::PROTOBUF_NAMESPACE_ID::int32 recvid() const;
  void set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_recvid() const;
  void _internal_set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 sendID = 3;
  void clear_sendid();
  ::PROTOBUF_NAMESPACE_ID::int32 sendid() const;
  void set_sendid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_sendid() const;
  void _internal_set_sendid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 msgID = 4;
  void clear_msgid();
  ::PROTOBUF_NAMESPACE_ID::int32 msgid() const;
  void set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_msgid() const;
  void _internal_set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:IM.ACK)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::int32 networktype_;
  ::PROTOBUF_NAMESPACE_ID::int32 recvid_;
  ::PROTOBUF_NAMESPACE_ID::int32 sendid_;
  ::PROTOBUF_NAMESPACE_ID::int32 msgid_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ACK_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ACK

// int32 networkType = 1;
inline void ACK::clear_networktype() {
  networktype_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ACK::_internal_networktype() const {
  return networktype_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ACK::networktype() const {
  // @@protoc_insertion_point(field_get:IM.ACK.networkType)
  return _internal_networktype();
}
inline void ACK::_internal_set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  networktype_ = value;
}
inline void ACK::set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_networktype(value);
  // @@protoc_insertion_point(field_set:IM.ACK.networkType)
}

// int32 recvID = 2;
inline void ACK::clear_recvid() {
  recvid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ACK::_internal_recvid() const {
  return recvid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ACK::recvid() const {
  // @@protoc_insertion_point(field_get:IM.ACK.recvID)
  return _internal_recvid();
}
inline void ACK::_internal_set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  recvid_ = value;
}
inline void ACK::set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_recvid(value);
  // @@protoc_insertion_point(field_set:IM.ACK.recvID)
}

// int32 sendID = 3;
inline void ACK::clear_sendid() {
  sendid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ACK::_internal_sendid() const {
  return sendid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ACK::sendid() const {
  // @@protoc_insertion_point(field_get:IM.ACK.sendID)
  return _internal_sendid();
}
inline void ACK::_internal_set_sendid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  sendid_ = value;
}
inline void ACK::set_sendid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_sendid(value);
  // @@protoc_insertion_point(field_set:IM.ACK.sendID)
}

// int32 msgID = 4;
inline void ACK::clear_msgid() {
  msgid_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ACK::_internal_msgid() const {
  return msgid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ACK::msgid() const {
  // @@protoc_insertion_point(field_get:IM.ACK.msgID)
  return _internal_msgid();
}
inline void ACK::_internal_set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  msgid_ = value;
}
inline void ACK::set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_msgid(value);
  // @@protoc_insertion_point(field_set:IM.ACK.msgID)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace IM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ACK_2eproto
