// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LoadFriendInfo.proto

#include "LoadFriendInfo.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace IM {
class LoadFriendInfoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LoadFriendInfo> _instance;
} _LoadFriendInfo_default_instance_;
}  // namespace IM
static void InitDefaultsscc_info_LoadFriendInfo_LoadFriendInfo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::IM::_LoadFriendInfo_default_instance_;
    new (ptr) ::IM::LoadFriendInfo();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::IM::LoadFriendInfo::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_LoadFriendInfo_LoadFriendInfo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_LoadFriendInfo_LoadFriendInfo_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_LoadFriendInfo_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_LoadFriendInfo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_LoadFriendInfo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_LoadFriendInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::IM::LoadFriendInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::IM::LoadFriendInfo, networktype_),
  PROTOBUF_FIELD_OFFSET(::IM::LoadFriendInfo, msgid_),
  PROTOBUF_FIELD_OFFSET(::IM::LoadFriendInfo, recvid_),
  PROTOBUF_FIELD_OFFSET(::IM::LoadFriendInfo, sendid_),
  PROTOBUF_FIELD_OFFSET(::IM::LoadFriendInfo, userid_),
  PROTOBUF_FIELD_OFFSET(::IM::LoadFriendInfo, friendid_),
  PROTOBUF_FIELD_OFFSET(::IM::LoadFriendInfo, userremarkname_),
  PROTOBUF_FIELD_OFFSET(::IM::LoadFriendInfo, state_),
  PROTOBUF_FIELD_OFFSET(::IM::LoadFriendInfo, f_group_),
  PROTOBUF_FIELD_OFFSET(::IM::LoadFriendInfo, u_sex_),
  PROTOBUF_FIELD_OFFSET(::IM::LoadFriendInfo, f_sex_),
  PROTOBUF_FIELD_OFFSET(::IM::LoadFriendInfo, friendremarkname_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::IM::LoadFriendInfo)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::IM::_LoadFriendInfo_default_instance_),
};

const char descriptor_table_protodef_LoadFriendInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024LoadFriendInfo.proto\022\002IM\"\346\001\n\016LoadFrien"
  "dInfo\022\023\n\013networkType\030\001 \001(\005\022\r\n\005msgID\030\002 \001("
  "\005\022\016\n\006recvID\030\003 \001(\005\022\016\n\006sendId\030\004 \001(\005\022\016\n\006use"
  "rID\030\005 \001(\005\022\020\n\010friendID\030\006 \001(\005\022\026\n\016userRemar"
  "kName\030\007 \001(\014\022\r\n\005state\030\010 \001(\005\022\017\n\007f_group\030\t "
  "\001(\014\022\r\n\005u_sex\030\n \001(\005\022\r\n\005f_sex\030\013 \001(\005\022\030\n\020fri"
  "endRemarkName\030\014 \001(\014b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_LoadFriendInfo_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_LoadFriendInfo_2eproto_sccs[1] = {
  &scc_info_LoadFriendInfo_LoadFriendInfo_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_LoadFriendInfo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_LoadFriendInfo_2eproto = {
  false, false, descriptor_table_protodef_LoadFriendInfo_2eproto, "LoadFriendInfo.proto", 267,
  &descriptor_table_LoadFriendInfo_2eproto_once, descriptor_table_LoadFriendInfo_2eproto_sccs, descriptor_table_LoadFriendInfo_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_LoadFriendInfo_2eproto::offsets,
  file_level_metadata_LoadFriendInfo_2eproto, 1, file_level_enum_descriptors_LoadFriendInfo_2eproto, file_level_service_descriptors_LoadFriendInfo_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_LoadFriendInfo_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_LoadFriendInfo_2eproto)), true);
namespace IM {

// ===================================================================

void LoadFriendInfo::InitAsDefaultInstance() {
}
class LoadFriendInfo::_Internal {
 public:
};

LoadFriendInfo::LoadFriendInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:IM.LoadFriendInfo)
}
LoadFriendInfo::LoadFriendInfo(const LoadFriendInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  userremarkname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_userremarkname().empty()) {
    userremarkname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_userremarkname(),
      GetArena());
  }
  f_group_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_f_group().empty()) {
    f_group_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_f_group(),
      GetArena());
  }
  friendremarkname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_friendremarkname().empty()) {
    friendremarkname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_friendremarkname(),
      GetArena());
  }
  ::memcpy(&networktype_, &from.networktype_,
    static_cast<size_t>(reinterpret_cast<char*>(&f_sex_) -
    reinterpret_cast<char*>(&networktype_)) + sizeof(f_sex_));
  // @@protoc_insertion_point(copy_constructor:IM.LoadFriendInfo)
}

void LoadFriendInfo::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LoadFriendInfo_LoadFriendInfo_2eproto.base);
  userremarkname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  f_group_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  friendremarkname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&networktype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&f_sex_) -
      reinterpret_cast<char*>(&networktype_)) + sizeof(f_sex_));
}

LoadFriendInfo::~LoadFriendInfo() {
  // @@protoc_insertion_point(destructor:IM.LoadFriendInfo)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void LoadFriendInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  userremarkname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  f_group_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  friendremarkname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void LoadFriendInfo::ArenaDtor(void* object) {
  LoadFriendInfo* _this = reinterpret_cast< LoadFriendInfo* >(object);
  (void)_this;
}
void LoadFriendInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LoadFriendInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LoadFriendInfo& LoadFriendInfo::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LoadFriendInfo_LoadFriendInfo_2eproto.base);
  return *internal_default_instance();
}


void LoadFriendInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:IM.LoadFriendInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  userremarkname_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  f_group_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  friendremarkname_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::memset(&networktype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&f_sex_) -
      reinterpret_cast<char*>(&networktype_)) + sizeof(f_sex_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LoadFriendInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 networkType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          networktype_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 msgID = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          msgid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 recvID = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          recvid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 sendId = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          sendid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 userID = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          userid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 friendID = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          friendid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes userRemarkName = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_userremarkname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 state = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          state_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes f_group = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 74)) {
          auto str = _internal_mutable_f_group();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 u_sex = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 80)) {
          u_sex_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 f_sex = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 88)) {
          f_sex_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes friendRemarkName = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 98)) {
          auto str = _internal_mutable_friendremarkname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LoadFriendInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:IM.LoadFriendInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 networkType = 1;
  if (this->networktype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_networktype(), target);
  }

  // int32 msgID = 2;
  if (this->msgid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_msgid(), target);
  }

  // int32 recvID = 3;
  if (this->recvid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_recvid(), target);
  }

  // int32 sendId = 4;
  if (this->sendid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_sendid(), target);
  }

  // int32 userID = 5;
  if (this->userid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_userid(), target);
  }

  // int32 friendID = 6;
  if (this->friendid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(6, this->_internal_friendid(), target);
  }

  // bytes userRemarkName = 7;
  if (this->userremarkname().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        7, this->_internal_userremarkname(), target);
  }

  // int32 state = 8;
  if (this->state() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(8, this->_internal_state(), target);
  }

  // bytes f_group = 9;
  if (this->f_group().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        9, this->_internal_f_group(), target);
  }

  // int32 u_sex = 10;
  if (this->u_sex() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(10, this->_internal_u_sex(), target);
  }

  // int32 f_sex = 11;
  if (this->f_sex() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(11, this->_internal_f_sex(), target);
  }

  // bytes friendRemarkName = 12;
  if (this->friendremarkname().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        12, this->_internal_friendremarkname(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:IM.LoadFriendInfo)
  return target;
}

size_t LoadFriendInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:IM.LoadFriendInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes userRemarkName = 7;
  if (this->userremarkname().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_userremarkname());
  }

  // bytes f_group = 9;
  if (this->f_group().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_f_group());
  }

  // bytes friendRemarkName = 12;
  if (this->friendremarkname().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_friendremarkname());
  }

  // int32 networkType = 1;
  if (this->networktype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_networktype());
  }

  // int32 msgID = 2;
  if (this->msgid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_msgid());
  }

  // int32 recvID = 3;
  if (this->recvid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_recvid());
  }

  // int32 sendId = 4;
  if (this->sendid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_sendid());
  }

  // int32 userID = 5;
  if (this->userid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_userid());
  }

  // int32 friendID = 6;
  if (this->friendid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_friendid());
  }

  // int32 state = 8;
  if (this->state() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_state());
  }

  // int32 u_sex = 10;
  if (this->u_sex() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_u_sex());
  }

  // int32 f_sex = 11;
  if (this->f_sex() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_f_sex());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LoadFriendInfo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:IM.LoadFriendInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const LoadFriendInfo* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LoadFriendInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:IM.LoadFriendInfo)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:IM.LoadFriendInfo)
    MergeFrom(*source);
  }
}

void LoadFriendInfo::MergeFrom(const LoadFriendInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:IM.LoadFriendInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.userremarkname().size() > 0) {
    _internal_set_userremarkname(from._internal_userremarkname());
  }
  if (from.f_group().size() > 0) {
    _internal_set_f_group(from._internal_f_group());
  }
  if (from.friendremarkname().size() > 0) {
    _internal_set_friendremarkname(from._internal_friendremarkname());
  }
  if (from.networktype() != 0) {
    _internal_set_networktype(from._internal_networktype());
  }
  if (from.msgid() != 0) {
    _internal_set_msgid(from._internal_msgid());
  }
  if (from.recvid() != 0) {
    _internal_set_recvid(from._internal_recvid());
  }
  if (from.sendid() != 0) {
    _internal_set_sendid(from._internal_sendid());
  }
  if (from.userid() != 0) {
    _internal_set_userid(from._internal_userid());
  }
  if (from.friendid() != 0) {
    _internal_set_friendid(from._internal_friendid());
  }
  if (from.state() != 0) {
    _internal_set_state(from._internal_state());
  }
  if (from.u_sex() != 0) {
    _internal_set_u_sex(from._internal_u_sex());
  }
  if (from.f_sex() != 0) {
    _internal_set_f_sex(from._internal_f_sex());
  }
}

void LoadFriendInfo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:IM.LoadFriendInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoadFriendInfo::CopyFrom(const LoadFriendInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:IM.LoadFriendInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoadFriendInfo::IsInitialized() const {
  return true;
}

void LoadFriendInfo::InternalSwap(LoadFriendInfo* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  userremarkname_.Swap(&other->userremarkname_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  f_group_.Swap(&other->f_group_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  friendremarkname_.Swap(&other->friendremarkname_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LoadFriendInfo, f_sex_)
      + sizeof(LoadFriendInfo::f_sex_)
      - PROTOBUF_FIELD_OFFSET(LoadFriendInfo, networktype_)>(
          reinterpret_cast<char*>(&networktype_),
          reinterpret_cast<char*>(&other->networktype_));
}

::PROTOBUF_NAMESPACE_ID::Metadata LoadFriendInfo::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace IM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::IM::LoadFriendInfo* Arena::CreateMaybeMessage< ::IM::LoadFriendInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::IM::LoadFriendInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>