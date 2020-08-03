// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Connect.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Connect_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Connect_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_Connect_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Connect_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Connect_2eproto;
namespace IM {
class Connect;
class ConnectDefaultTypeInternal;
extern ConnectDefaultTypeInternal _Connect_default_instance_;
}  // namespace IM
PROTOBUF_NAMESPACE_OPEN
template<> ::IM::Connect* Arena::CreateMaybeMessage<::IM::Connect>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace IM {

// ===================================================================

class Connect PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:IM.Connect) */ {
 public:
  inline Connect() : Connect(nullptr) {};
  virtual ~Connect();

  Connect(const Connect& from);
  Connect(Connect&& from) noexcept
    : Connect() {
    *this = ::std::move(from);
  }

  inline Connect& operator=(const Connect& from) {
    CopyFrom(from);
    return *this;
  }
  inline Connect& operator=(Connect&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const Connect& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Connect* internal_default_instance() {
    return reinterpret_cast<const Connect*>(
               &_Connect_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Connect& a, Connect& b) {
    a.Swap(&b);
  }
  inline void Swap(Connect* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Connect* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Connect* New() const final {
    return CreateMaybeMessage<Connect>(nullptr);
  }

  Connect* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Connect>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Connect& from);
  void MergeFrom(const Connect& from);
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
  void InternalSwap(Connect* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "IM.Connect";
  }
  protected:
  explicit Connect(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Connect_2eproto);
    return ::descriptor_table_Connect_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNetworkTypeFieldNumber = 1,
    kRecvIDFieldNumber = 2,
    kMsgIDFieldNumber = 3,
  };
  // required int32 networkType = 1;
  bool has_networktype() const;
  private:
  bool _internal_has_networktype() const;
  public:
  void clear_networktype();
  ::PROTOBUF_NAMESPACE_ID::int32 networktype() const;
  void set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_networktype() const;
  void _internal_set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 recvID = 2;
  bool has_recvid() const;
  private:
  bool _internal_has_recvid() const;
  public:
  void clear_recvid();
  ::PROTOBUF_NAMESPACE_ID::int32 recvid() const;
  void set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_recvid() const;
  void _internal_set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required int32 msgID = 3;
  bool has_msgid() const;
  private:
  bool _internal_has_msgid() const;
  public:
  void clear_msgid();
  ::PROTOBUF_NAMESPACE_ID::int32 msgid() const;
  void set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_msgid() const;
  void _internal_set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:IM.Connect)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 networktype_;
  ::PROTOBUF_NAMESPACE_ID::int32 recvid_;
  ::PROTOBUF_NAMESPACE_ID::int32 msgid_;
  friend struct ::TableStruct_Connect_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Connect

// required int32 networkType = 1;
inline bool Connect::_internal_has_networktype() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Connect::has_networktype() const {
  return _internal_has_networktype();
}
inline void Connect::clear_networktype() {
  networktype_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Connect::_internal_networktype() const {
  return networktype_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Connect::networktype() const {
  // @@protoc_insertion_point(field_get:IM.Connect.networkType)
  return _internal_networktype();
}
inline void Connect::_internal_set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  networktype_ = value;
}
inline void Connect::set_networktype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_networktype(value);
  // @@protoc_insertion_point(field_set:IM.Connect.networkType)
}

// required int32 recvID = 2;
inline bool Connect::_internal_has_recvid() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Connect::has_recvid() const {
  return _internal_has_recvid();
}
inline void Connect::clear_recvid() {
  recvid_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Connect::_internal_recvid() const {
  return recvid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Connect::recvid() const {
  // @@protoc_insertion_point(field_get:IM.Connect.recvID)
  return _internal_recvid();
}
inline void Connect::_internal_set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  recvid_ = value;
}
inline void Connect::set_recvid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_recvid(value);
  // @@protoc_insertion_point(field_set:IM.Connect.recvID)
}

// required int32 msgID = 3;
inline bool Connect::_internal_has_msgid() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Connect::has_msgid() const {
  return _internal_has_msgid();
}
inline void Connect::clear_msgid() {
  msgid_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Connect::_internal_msgid() const {
  return msgid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Connect::msgid() const {
  // @@protoc_insertion_point(field_get:IM.Connect.msgID)
  return _internal_msgid();
}
inline void Connect::_internal_set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  msgid_ = value;
}
inline void Connect::set_msgid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_msgid(value);
  // @@protoc_insertion_point(field_set:IM.Connect.msgID)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace IM

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Connect_2eproto
