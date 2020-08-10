// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RelationManage.proto

#include "RelationManage.pb.h"

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
class RelationManageDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<RelationManage> _instance;
} _RelationManage_default_instance_;
}  // namespace IM
static void InitDefaultsscc_info_RelationManage_RelationManage_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::IM::_RelationManage_default_instance_;
    new (ptr) ::IM::RelationManage();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::IM::RelationManage::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_RelationManage_RelationManage_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_RelationManage_RelationManage_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_RelationManage_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_RelationManage_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_RelationManage_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_RelationManage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::IM::RelationManage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::IM::RelationManage, networktype_),
  PROTOBUF_FIELD_OFFSET(::IM::RelationManage, msgid_),
  PROTOBUF_FIELD_OFFSET(::IM::RelationManage, recvid_),
  PROTOBUF_FIELD_OFFSET(::IM::RelationManage, sendid_),
  PROTOBUF_FIELD_OFFSET(::IM::RelationManage, applyerid_),
  PROTOBUF_FIELD_OFFSET(::IM::RelationManage, peerid_),
  PROTOBUF_FIELD_OFFSET(::IM::RelationManage, friendnickname_),
  PROTOBUF_FIELD_OFFSET(::IM::RelationManage, sign_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::IM::RelationManage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::IM::_RelationManage_default_instance_),
};

const char descriptor_table_protodef_RelationManage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024RelationManage.proto\022\002IM\"\235\001\n\016RelationM"
  "anage\022\023\n\013networkType\030\001 \001(\005\022\r\n\005msgID\030\002 \001("
  "\005\022\016\n\006recvID\030\003 \001(\005\022\016\n\006sendID\030\004 \001(\005\022\021\n\tapp"
  "lyerID\030\005 \001(\005\022\016\n\006peerID\030\006 \001(\005\022\026\n\016friendNi"
  "ckName\030\007 \001(\014\022\014\n\004sign\030\010 \001(\014b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_RelationManage_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_RelationManage_2eproto_sccs[1] = {
  &scc_info_RelationManage_RelationManage_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_RelationManage_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_RelationManage_2eproto = {
  false, false, descriptor_table_protodef_RelationManage_2eproto, "RelationManage.proto", 194,
  &descriptor_table_RelationManage_2eproto_once, descriptor_table_RelationManage_2eproto_sccs, descriptor_table_RelationManage_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_RelationManage_2eproto::offsets,
  file_level_metadata_RelationManage_2eproto, 1, file_level_enum_descriptors_RelationManage_2eproto, file_level_service_descriptors_RelationManage_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_RelationManage_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_RelationManage_2eproto)), true);
namespace IM {

// ===================================================================

void RelationManage::InitAsDefaultInstance() {
}
class RelationManage::_Internal {
 public:
};

RelationManage::RelationManage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:IM.RelationManage)
}
RelationManage::RelationManage(const RelationManage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  friendnickname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_friendnickname().empty()) {
    friendnickname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_friendnickname(),
      GetArena());
  }
  sign_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_sign().empty()) {
    sign_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_sign(),
      GetArena());
  }
  ::memcpy(&networktype_, &from.networktype_,
    static_cast<size_t>(reinterpret_cast<char*>(&peerid_) -
    reinterpret_cast<char*>(&networktype_)) + sizeof(peerid_));
  // @@protoc_insertion_point(copy_constructor:IM.RelationManage)
}

void RelationManage::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_RelationManage_RelationManage_2eproto.base);
  friendnickname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sign_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&networktype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&peerid_) -
      reinterpret_cast<char*>(&networktype_)) + sizeof(peerid_));
}

RelationManage::~RelationManage() {
  // @@protoc_insertion_point(destructor:IM.RelationManage)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void RelationManage::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  friendnickname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sign_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void RelationManage::ArenaDtor(void* object) {
  RelationManage* _this = reinterpret_cast< RelationManage* >(object);
  (void)_this;
}
void RelationManage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RelationManage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RelationManage& RelationManage::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_RelationManage_RelationManage_2eproto.base);
  return *internal_default_instance();
}


void RelationManage::Clear() {
// @@protoc_insertion_point(message_clear_start:IM.RelationManage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  friendnickname_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  sign_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::memset(&networktype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&peerid_) -
      reinterpret_cast<char*>(&networktype_)) + sizeof(peerid_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RelationManage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // int32 sendID = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          sendid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 applyerID = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          applyerid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 peerID = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          peerid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes friendNickName = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_friendnickname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes sign = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          auto str = _internal_mutable_sign();
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

::PROTOBUF_NAMESPACE_ID::uint8* RelationManage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:IM.RelationManage)
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

  // int32 sendID = 4;
  if (this->sendid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_sendid(), target);
  }

  // int32 applyerID = 5;
  if (this->applyerid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_applyerid(), target);
  }

  // int32 peerID = 6;
  if (this->peerid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(6, this->_internal_peerid(), target);
  }

  // bytes friendNickName = 7;
  if (this->friendnickname().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        7, this->_internal_friendnickname(), target);
  }

  // bytes sign = 8;
  if (this->sign().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        8, this->_internal_sign(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:IM.RelationManage)
  return target;
}

size_t RelationManage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:IM.RelationManage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes friendNickName = 7;
  if (this->friendnickname().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_friendnickname());
  }

  // bytes sign = 8;
  if (this->sign().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_sign());
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

  // int32 sendID = 4;
  if (this->sendid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_sendid());
  }

  // int32 applyerID = 5;
  if (this->applyerid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_applyerid());
  }

  // int32 peerID = 6;
  if (this->peerid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_peerid());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RelationManage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:IM.RelationManage)
  GOOGLE_DCHECK_NE(&from, this);
  const RelationManage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RelationManage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:IM.RelationManage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:IM.RelationManage)
    MergeFrom(*source);
  }
}

void RelationManage::MergeFrom(const RelationManage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:IM.RelationManage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.friendnickname().size() > 0) {
    _internal_set_friendnickname(from._internal_friendnickname());
  }
  if (from.sign().size() > 0) {
    _internal_set_sign(from._internal_sign());
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
  if (from.applyerid() != 0) {
    _internal_set_applyerid(from._internal_applyerid());
  }
  if (from.peerid() != 0) {
    _internal_set_peerid(from._internal_peerid());
  }
}

void RelationManage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:IM.RelationManage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RelationManage::CopyFrom(const RelationManage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:IM.RelationManage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RelationManage::IsInitialized() const {
  return true;
}

void RelationManage::InternalSwap(RelationManage* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  friendnickname_.Swap(&other->friendnickname_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  sign_.Swap(&other->sign_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RelationManage, peerid_)
      + sizeof(RelationManage::peerid_)
      - PROTOBUF_FIELD_OFFSET(RelationManage, networktype_)>(
          reinterpret_cast<char*>(&networktype_),
          reinterpret_cast<char*>(&other->networktype_));
}

::PROTOBUF_NAMESPACE_ID::Metadata RelationManage::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace IM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::IM::RelationManage* Arena::CreateMaybeMessage< ::IM::RelationManage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::IM::RelationManage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>