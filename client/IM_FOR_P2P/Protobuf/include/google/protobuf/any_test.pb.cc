// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/any_test.proto

#include "google/protobuf/any_test.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fany_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Any_google_2fprotobuf_2fany_2eproto;
namespace protobuf_unittest {
class TestAnyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TestAny> _instance;
} _TestAny_default_instance_;
}  // namespace protobuf_unittest
static void InitDefaultsscc_info_TestAny_google_2fprotobuf_2fany_5ftest_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::protobuf_unittest::_TestAny_default_instance_;
    new (ptr) ::protobuf_unittest::TestAny();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protobuf_unittest::TestAny::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_TestAny_google_2fprotobuf_2fany_5ftest_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_TestAny_google_2fprotobuf_2fany_5ftest_2eproto}, {
      &scc_info_Any_google_2fprotobuf_2fany_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fprotobuf_2fany_5ftest_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fprotobuf_2fany_5ftest_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fprotobuf_2fany_5ftest_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fprotobuf_2fany_5ftest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::protobuf_unittest::TestAny, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::protobuf_unittest::TestAny, int32_value_),
  PROTOBUF_FIELD_OFFSET(::protobuf_unittest::TestAny, any_value_),
  PROTOBUF_FIELD_OFFSET(::protobuf_unittest::TestAny, repeated_any_value_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::protobuf_unittest::TestAny)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::protobuf_unittest::_TestAny_default_instance_),
};

const char descriptor_table_protodef_google_2fprotobuf_2fany_5ftest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036google/protobuf/any_test.proto\022\021protob"
  "uf_unittest\032\031google/protobuf/any.proto\"y"
  "\n\007TestAny\022\023\n\013int32_value\030\001 \001(\005\022\'\n\tany_va"
  "lue\030\002 \001(\0132\024.google.protobuf.Any\0220\n\022repea"
  "ted_any_value\030\003 \003(\0132\024.google.protobuf.An"
  "yb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fprotobuf_2fany_5ftest_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fany_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fprotobuf_2fany_5ftest_2eproto_sccs[1] = {
  &scc_info_TestAny_google_2fprotobuf_2fany_5ftest_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fprotobuf_2fany_5ftest_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2fany_5ftest_2eproto = {
  false, false, descriptor_table_protodef_google_2fprotobuf_2fany_5ftest_2eproto, "google/protobuf/any_test.proto", 209,
  &descriptor_table_google_2fprotobuf_2fany_5ftest_2eproto_once, descriptor_table_google_2fprotobuf_2fany_5ftest_2eproto_sccs, descriptor_table_google_2fprotobuf_2fany_5ftest_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_google_2fprotobuf_2fany_5ftest_2eproto::offsets,
  file_level_metadata_google_2fprotobuf_2fany_5ftest_2eproto, 1, file_level_enum_descriptors_google_2fprotobuf_2fany_5ftest_2eproto, file_level_service_descriptors_google_2fprotobuf_2fany_5ftest_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fprotobuf_2fany_5ftest_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fprotobuf_2fany_5ftest_2eproto)), true);
namespace protobuf_unittest {

// ===================================================================

void TestAny::InitAsDefaultInstance() {
  ::protobuf_unittest::_TestAny_default_instance_._instance.get_mutable()->any_value_ = const_cast< PROTOBUF_NAMESPACE_ID::Any*>(
      PROTOBUF_NAMESPACE_ID::Any::internal_default_instance());
}
class TestAny::_Internal {
 public:
  static const PROTOBUF_NAMESPACE_ID::Any& any_value(const TestAny* msg);
};

const PROTOBUF_NAMESPACE_ID::Any&
TestAny::_Internal::any_value(const TestAny* msg) {
  return *msg->any_value_;
}
void TestAny::clear_any_value() {
  if (GetArena() == nullptr && any_value_ != nullptr) {
    delete any_value_;
  }
  any_value_ = nullptr;
}
void TestAny::clear_repeated_any_value() {
  repeated_any_value_.Clear();
}
TestAny::TestAny(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  repeated_any_value_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:protobuf_unittest.TestAny)
}
TestAny::TestAny(const TestAny& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      repeated_any_value_(from.repeated_any_value_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_any_value()) {
    any_value_ = new PROTOBUF_NAMESPACE_ID::Any(*from.any_value_);
  } else {
    any_value_ = nullptr;
  }
  int32_value_ = from.int32_value_;
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest.TestAny)
}

void TestAny::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_TestAny_google_2fprotobuf_2fany_5ftest_2eproto.base);
  ::memset(&any_value_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&int32_value_) -
      reinterpret_cast<char*>(&any_value_)) + sizeof(int32_value_));
}

TestAny::~TestAny() {
  // @@protoc_insertion_point(destructor:protobuf_unittest.TestAny)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void TestAny::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete any_value_;
}

void TestAny::ArenaDtor(void* object) {
  TestAny* _this = reinterpret_cast< TestAny* >(object);
  (void)_this;
}
void TestAny::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TestAny::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TestAny& TestAny::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TestAny_google_2fprotobuf_2fany_5ftest_2eproto.base);
  return *internal_default_instance();
}


void TestAny::Clear() {
// @@protoc_insertion_point(message_clear_start:protobuf_unittest.TestAny)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  repeated_any_value_.Clear();
  if (GetArena() == nullptr && any_value_ != nullptr) {
    delete any_value_;
  }
  any_value_ = nullptr;
  int32_value_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TestAny::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 int32_value = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          int32_value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .google.protobuf.Any any_value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_any_value(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .google.protobuf.Any repeated_any_value = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_repeated_any_value(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* TestAny::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:protobuf_unittest.TestAny)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 int32_value = 1;
  if (this->int32_value() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_int32_value(), target);
  }

  // .google.protobuf.Any any_value = 2;
  if (this->has_any_value()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::any_value(this), target, stream);
  }

  // repeated .google.protobuf.Any repeated_any_value = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_repeated_any_value_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_repeated_any_value(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf_unittest.TestAny)
  return target;
}

size_t TestAny::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protobuf_unittest.TestAny)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .google.protobuf.Any repeated_any_value = 3;
  total_size += 1UL * this->_internal_repeated_any_value_size();
  for (const auto& msg : this->repeated_any_value_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .google.protobuf.Any any_value = 2;
  if (this->has_any_value()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *any_value_);
  }

  // int32 int32_value = 1;
  if (this->int32_value() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_int32_value());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TestAny::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protobuf_unittest.TestAny)
  GOOGLE_DCHECK_NE(&from, this);
  const TestAny* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TestAny>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protobuf_unittest.TestAny)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protobuf_unittest.TestAny)
    MergeFrom(*source);
  }
}

void TestAny::MergeFrom(const TestAny& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protobuf_unittest.TestAny)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  repeated_any_value_.MergeFrom(from.repeated_any_value_);
  if (from.has_any_value()) {
    _internal_mutable_any_value()->PROTOBUF_NAMESPACE_ID::Any::MergeFrom(from._internal_any_value());
  }
  if (from.int32_value() != 0) {
    _internal_set_int32_value(from._internal_int32_value());
  }
}

void TestAny::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protobuf_unittest.TestAny)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestAny::CopyFrom(const TestAny& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protobuf_unittest.TestAny)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestAny::IsInitialized() const {
  return true;
}

void TestAny::InternalSwap(TestAny* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  repeated_any_value_.InternalSwap(&other->repeated_any_value_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(TestAny, int32_value_)
      + sizeof(TestAny::int32_value_)
      - PROTOBUF_FIELD_OFFSET(TestAny, any_value_)>(
          reinterpret_cast<char*>(&any_value_),
          reinterpret_cast<char*>(&other->any_value_));
}

::PROTOBUF_NAMESPACE_ID::Metadata TestAny::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf_unittest
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::protobuf_unittest::TestAny* Arena::CreateMaybeMessage< ::protobuf_unittest::TestAny >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protobuf_unittest::TestAny >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
