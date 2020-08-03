// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Connect.proto

#include "Connect.pb.h"

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
class ConnectDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Connect> _instance;
} _Connect_default_instance_;
}  // namespace IM
static void InitDefaultsscc_info_Connect_Connect_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::IM::_Connect_default_instance_;
    new (ptr) ::IM::Connect();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::IM::Connect::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Connect_Connect_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Connect_Connect_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Connect_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Connect_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Connect_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Connect_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::IM::Connect, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::IM::Connect, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::IM::Connect, networktype_),
  PROTOBUF_FIELD_OFFSET(::IM::Connect, recvid_),
  PROTOBUF_FIELD_OFFSET(::IM::Connect, msgid_),
  0,
  1,
  2,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::IM::Connect)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::IM::_Connect_default_instance_),
};

const char descriptor_table_protodef_Connect_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rConnect.proto\022\002IM\"=\n\007Connect\022\023\n\013networ"
  "kType\030\001 \002(\005\022\016\n\006recvID\030\002 \002(\005\022\r\n\005msgID\030\003 \002"
  "(\005"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Connect_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Connect_2eproto_sccs[1] = {
  &scc_info_Connect_Connect_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Connect_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Connect_2eproto = {
  false, false, descriptor_table_protodef_Connect_2eproto, "Connect.proto", 82,
  &descriptor_table_Connect_2eproto_once, descriptor_table_Connect_2eproto_sccs, descriptor_table_Connect_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_Connect_2eproto::offsets,
  file_level_metadata_Connect_2eproto, 1, file_level_enum_descriptors_Connect_2eproto, file_level_service_descriptors_Connect_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Connect_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Connect_2eproto)), true);
namespace IM {

// ===================================================================

void Connect::InitAsDefaultInstance() {
}
class Connect::_Internal {
 public:
  using HasBits = decltype(std::declval<Connect>()._has_bits_);
  static void set_has_networktype(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_recvid(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_msgid(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000007) ^ 0x00000007) != 0;
  }
};

Connect::Connect(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:IM.Connect)
}
Connect::Connect(const Connect& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&networktype_, &from.networktype_,
    static_cast<size_t>(reinterpret_cast<char*>(&msgid_) -
    reinterpret_cast<char*>(&networktype_)) + sizeof(msgid_));
  // @@protoc_insertion_point(copy_constructor:IM.Connect)
}

void Connect::SharedCtor() {
  ::memset(&networktype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&msgid_) -
      reinterpret_cast<char*>(&networktype_)) + sizeof(msgid_));
}

Connect::~Connect() {
  // @@protoc_insertion_point(destructor:IM.Connect)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Connect::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Connect::ArenaDtor(void* object) {
  Connect* _this = reinterpret_cast< Connect* >(object);
  (void)_this;
}
void Connect::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Connect::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Connect& Connect::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Connect_Connect_2eproto.base);
  return *internal_default_instance();
}


void Connect::Clear() {
// @@protoc_insertion_point(message_clear_start:IM.Connect)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&networktype_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&msgid_) -
        reinterpret_cast<char*>(&networktype_)) + sizeof(msgid_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Connect::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required int32 networkType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_networktype(&has_bits);
          networktype_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required int32 recvID = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_recvid(&has_bits);
          recvid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required int32 msgID = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_msgid(&has_bits);
          msgid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Connect::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:IM.Connect)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 networkType = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_networktype(), target);
  }

  // required int32 recvID = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_recvid(), target);
  }

  // required int32 msgID = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_msgid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:IM.Connect)
  return target;
}

size_t Connect::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:IM.Connect)
  size_t total_size = 0;

  if (_internal_has_networktype()) {
    // required int32 networkType = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_networktype());
  }

  if (_internal_has_recvid()) {
    // required int32 recvID = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_recvid());
  }

  if (_internal_has_msgid()) {
    // required int32 msgID = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_msgid());
  }

  return total_size;
}
size_t Connect::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:IM.Connect)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required int32 networkType = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_networktype());

    // required int32 recvID = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_recvid());

    // required int32 msgID = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_msgid());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Connect::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:IM.Connect)
  GOOGLE_DCHECK_NE(&from, this);
  const Connect* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Connect>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:IM.Connect)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:IM.Connect)
    MergeFrom(*source);
  }
}

void Connect::MergeFrom(const Connect& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:IM.Connect)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      networktype_ = from.networktype_;
    }
    if (cached_has_bits & 0x00000002u) {
      recvid_ = from.recvid_;
    }
    if (cached_has_bits & 0x00000004u) {
      msgid_ = from.msgid_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Connect::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:IM.Connect)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Connect::CopyFrom(const Connect& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:IM.Connect)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Connect::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void Connect::InternalSwap(Connect* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Connect, msgid_)
      + sizeof(Connect::msgid_)
      - PROTOBUF_FIELD_OFFSET(Connect, networktype_)>(
          reinterpret_cast<char*>(&networktype_),
          reinterpret_cast<char*>(&other->networktype_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Connect::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace IM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::IM::Connect* Arena::CreateMaybeMessage< ::IM::Connect >(Arena* arena) {
  return Arena::CreateMessageInternal< ::IM::Connect >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>