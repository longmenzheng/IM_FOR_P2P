// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BuildP2P.proto

#include "BuildP2P.pb.h"

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
class BuildP2PDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<BuildP2P> _instance;
} _BuildP2P_default_instance_;
}  // namespace IM
static void InitDefaultsscc_info_BuildP2P_BuildP2P_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::IM::_BuildP2P_default_instance_;
    new (ptr) ::IM::BuildP2P();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::IM::BuildP2P::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_BuildP2P_BuildP2P_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_BuildP2P_BuildP2P_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_BuildP2P_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_BuildP2P_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_BuildP2P_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_BuildP2P_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::IM::BuildP2P, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::IM::BuildP2P, networktype_),
  PROTOBUF_FIELD_OFFSET(::IM::BuildP2P, flag_),
  PROTOBUF_FIELD_OFFSET(::IM::BuildP2P, msgid_),
  PROTOBUF_FIELD_OFFSET(::IM::BuildP2P, recvid_),
  PROTOBUF_FIELD_OFFSET(::IM::BuildP2P, sendid_),
  PROTOBUF_FIELD_OFFSET(::IM::BuildP2P, peerid_),
  PROTOBUF_FIELD_OFFSET(::IM::BuildP2P, peerip_),
  PROTOBUF_FIELD_OFFSET(::IM::BuildP2P, peerposrt_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::IM::BuildP2P)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::IM::_BuildP2P_default_instance_),
};

const char descriptor_table_protodef_BuildP2P_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016BuildP2P.proto\022\002IM\"\217\001\n\010BuildP2P\022\023\n\013net"
  "workType\030\001 \001(\005\022\014\n\004flag\030\002 \001(\005\022\r\n\005msgID\030\003 "
  "\001(\005\022\016\n\006recvID\030\004 \001(\005\022\016\n\006sendID\030\010 \001(\005\022\016\n\006p"
  "eerID\030\005 \001(\005\022\016\n\006peerIP\030\006 \001(\t\022\021\n\tpeerPosrt"
  "\030\007 \001(\005b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_BuildP2P_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_BuildP2P_2eproto_sccs[1] = {
  &scc_info_BuildP2P_BuildP2P_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_BuildP2P_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_BuildP2P_2eproto = {
  false, false, descriptor_table_protodef_BuildP2P_2eproto, "BuildP2P.proto", 174,
  &descriptor_table_BuildP2P_2eproto_once, descriptor_table_BuildP2P_2eproto_sccs, descriptor_table_BuildP2P_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_BuildP2P_2eproto::offsets,
  file_level_metadata_BuildP2P_2eproto, 1, file_level_enum_descriptors_BuildP2P_2eproto, file_level_service_descriptors_BuildP2P_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_BuildP2P_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_BuildP2P_2eproto)), true);
namespace IM {

// ===================================================================

void BuildP2P::InitAsDefaultInstance() {
}
class BuildP2P::_Internal {
 public:
};

BuildP2P::BuildP2P(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:IM.BuildP2P)
}
BuildP2P::BuildP2P(const BuildP2P& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  peerip_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_peerip().empty()) {
    peerip_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_peerip(),
      GetArena());
  }
  ::memcpy(&networktype_, &from.networktype_,
    static_cast<size_t>(reinterpret_cast<char*>(&sendid_) -
    reinterpret_cast<char*>(&networktype_)) + sizeof(sendid_));
  // @@protoc_insertion_point(copy_constructor:IM.BuildP2P)
}

void BuildP2P::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_BuildP2P_BuildP2P_2eproto.base);
  peerip_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&networktype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sendid_) -
      reinterpret_cast<char*>(&networktype_)) + sizeof(sendid_));
}

BuildP2P::~BuildP2P() {
  // @@protoc_insertion_point(destructor:IM.BuildP2P)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void BuildP2P::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  peerip_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void BuildP2P::ArenaDtor(void* object) {
  BuildP2P* _this = reinterpret_cast< BuildP2P* >(object);
  (void)_this;
}
void BuildP2P::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void BuildP2P::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const BuildP2P& BuildP2P::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_BuildP2P_BuildP2P_2eproto.base);
  return *internal_default_instance();
}


void BuildP2P::Clear() {
// @@protoc_insertion_point(message_clear_start:IM.BuildP2P)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  peerip_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::memset(&networktype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sendid_) -
      reinterpret_cast<char*>(&networktype_)) + sizeof(sendid_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* BuildP2P::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // int32 flag = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          flag_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 msgID = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          msgid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 recvID = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          recvid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 peerID = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          peerid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string peerIP = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_peerip();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "IM.BuildP2P.peerIP"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 peerPosrt = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          peerposrt_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 sendID = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          sendid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* BuildP2P::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:IM.BuildP2P)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 networkType = 1;
  if (this->networktype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_networktype(), target);
  }

  // int32 flag = 2;
  if (this->flag() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_flag(), target);
  }

  // int32 msgID = 3;
  if (this->msgid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_msgid(), target);
  }

  // int32 recvID = 4;
  if (this->recvid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(4, this->_internal_recvid(), target);
  }

  // int32 peerID = 5;
  if (this->peerid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_peerid(), target);
  }

  // string peerIP = 6;
  if (this->peerip().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_peerip().data(), static_cast<int>(this->_internal_peerip().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "IM.BuildP2P.peerIP");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_peerip(), target);
  }

  // int32 peerPosrt = 7;
  if (this->peerposrt() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(7, this->_internal_peerposrt(), target);
  }

  // int32 sendID = 8;
  if (this->sendid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(8, this->_internal_sendid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:IM.BuildP2P)
  return target;
}

size_t BuildP2P::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:IM.BuildP2P)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string peerIP = 6;
  if (this->peerip().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_peerip());
  }

  // int32 networkType = 1;
  if (this->networktype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_networktype());
  }

  // int32 flag = 2;
  if (this->flag() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_flag());
  }

  // int32 msgID = 3;
  if (this->msgid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_msgid());
  }

  // int32 recvID = 4;
  if (this->recvid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_recvid());
  }

  // int32 peerID = 5;
  if (this->peerid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_peerid());
  }

  // int32 peerPosrt = 7;
  if (this->peerposrt() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_peerposrt());
  }

  // int32 sendID = 8;
  if (this->sendid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_sendid());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void BuildP2P::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:IM.BuildP2P)
  GOOGLE_DCHECK_NE(&from, this);
  const BuildP2P* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<BuildP2P>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:IM.BuildP2P)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:IM.BuildP2P)
    MergeFrom(*source);
  }
}

void BuildP2P::MergeFrom(const BuildP2P& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:IM.BuildP2P)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.peerip().size() > 0) {
    _internal_set_peerip(from._internal_peerip());
  }
  if (from.networktype() != 0) {
    _internal_set_networktype(from._internal_networktype());
  }
  if (from.flag() != 0) {
    _internal_set_flag(from._internal_flag());
  }
  if (from.msgid() != 0) {
    _internal_set_msgid(from._internal_msgid());
  }
  if (from.recvid() != 0) {
    _internal_set_recvid(from._internal_recvid());
  }
  if (from.peerid() != 0) {
    _internal_set_peerid(from._internal_peerid());
  }
  if (from.peerposrt() != 0) {
    _internal_set_peerposrt(from._internal_peerposrt());
  }
  if (from.sendid() != 0) {
    _internal_set_sendid(from._internal_sendid());
  }
}

void BuildP2P::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:IM.BuildP2P)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BuildP2P::CopyFrom(const BuildP2P& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:IM.BuildP2P)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BuildP2P::IsInitialized() const {
  return true;
}

void BuildP2P::InternalSwap(BuildP2P* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  peerip_.Swap(&other->peerip_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(BuildP2P, sendid_)
      + sizeof(BuildP2P::sendid_)
      - PROTOBUF_FIELD_OFFSET(BuildP2P, networktype_)>(
          reinterpret_cast<char*>(&networktype_),
          reinterpret_cast<char*>(&other->networktype_));
}

::PROTOBUF_NAMESPACE_ID::Metadata BuildP2P::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace IM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::IM::BuildP2P* Arena::CreateMaybeMessage< ::IM::BuildP2P >(Arena* arena) {
  return Arena::CreateMessageInternal< ::IM::BuildP2P >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
