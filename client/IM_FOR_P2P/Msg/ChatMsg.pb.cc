// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChatMsg.proto

#include "ChatMsg.pb.h"

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
class ChatMsgDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ChatMsg> _instance;
} _ChatMsg_default_instance_;
}  // namespace IM
static void InitDefaultsscc_info_ChatMsg_ChatMsg_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::IM::_ChatMsg_default_instance_;
    new (ptr) ::IM::ChatMsg();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::IM::ChatMsg::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ChatMsg_ChatMsg_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ChatMsg_ChatMsg_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ChatMsg_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ChatMsg_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ChatMsg_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ChatMsg_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::IM::ChatMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::IM::ChatMsg, networktype_),
  PROTOBUF_FIELD_OFFSET(::IM::ChatMsg, msgid_),
  PROTOBUF_FIELD_OFFSET(::IM::ChatMsg, recvid_),
  PROTOBUF_FIELD_OFFSET(::IM::ChatMsg, sendid_),
  PROTOBUF_FIELD_OFFSET(::IM::ChatMsg, sendname_),
  PROTOBUF_FIELD_OFFSET(::IM::ChatMsg, sendtime_),
  PROTOBUF_FIELD_OFFSET(::IM::ChatMsg, content_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::IM::ChatMsg)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::IM::_ChatMsg_default_instance_),
};

const char descriptor_table_protodef_ChatMsg_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rChatMsg.proto\022\002IM\"\202\001\n\007ChatMsg\022\023\n\013netwo"
  "rkType\030\001 \001(\005\022\r\n\005msgID\030\002 \001(\005\022\016\n\006recvID\030\003 "
  "\001(\005\022\016\n\006sendID\030\004 \001(\005\022\020\n\010sendName\030\005 \001(\014\022\020\n"
  "\010sendtime\030\006 \001(\t\022\017\n\007content\030\007 \001(\014b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ChatMsg_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ChatMsg_2eproto_sccs[1] = {
  &scc_info_ChatMsg_ChatMsg_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ChatMsg_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ChatMsg_2eproto = {
  false, false, descriptor_table_protodef_ChatMsg_2eproto, "ChatMsg.proto", 160,
  &descriptor_table_ChatMsg_2eproto_once, descriptor_table_ChatMsg_2eproto_sccs, descriptor_table_ChatMsg_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_ChatMsg_2eproto::offsets,
  file_level_metadata_ChatMsg_2eproto, 1, file_level_enum_descriptors_ChatMsg_2eproto, file_level_service_descriptors_ChatMsg_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ChatMsg_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ChatMsg_2eproto)), true);
namespace IM {

// ===================================================================

void ChatMsg::InitAsDefaultInstance() {
}
class ChatMsg::_Internal {
 public:
};

ChatMsg::ChatMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:IM.ChatMsg)
}
ChatMsg::ChatMsg(const ChatMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  sendname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_sendname().empty()) {
    sendname_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_sendname(),
      GetArena());
  }
  sendtime_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_sendtime().empty()) {
    sendtime_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_sendtime(),
      GetArena());
  }
  content_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_content().empty()) {
    content_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_content(),
      GetArena());
  }
  ::memcpy(&networktype_, &from.networktype_,
    static_cast<size_t>(reinterpret_cast<char*>(&sendid_) -
    reinterpret_cast<char*>(&networktype_)) + sizeof(sendid_));
  // @@protoc_insertion_point(copy_constructor:IM.ChatMsg)
}

void ChatMsg::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ChatMsg_ChatMsg_2eproto.base);
  sendname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sendtime_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  content_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&networktype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sendid_) -
      reinterpret_cast<char*>(&networktype_)) + sizeof(sendid_));
}

ChatMsg::~ChatMsg() {
  // @@protoc_insertion_point(destructor:IM.ChatMsg)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ChatMsg::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  sendname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sendtime_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  content_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ChatMsg::ArenaDtor(void* object) {
  ChatMsg* _this = reinterpret_cast< ChatMsg* >(object);
  (void)_this;
}
void ChatMsg::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ChatMsg::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ChatMsg& ChatMsg::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ChatMsg_ChatMsg_2eproto.base);
  return *internal_default_instance();
}


void ChatMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:IM.ChatMsg)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  sendname_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  sendtime_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  content_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::memset(&networktype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sendid_) -
      reinterpret_cast<char*>(&networktype_)) + sizeof(sendid_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ChatMsg::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
      // bytes sendName = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_sendname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string sendtime = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          auto str = _internal_mutable_sendtime();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "IM.ChatMsg.sendtime"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes content = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_content();
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

::PROTOBUF_NAMESPACE_ID::uint8* ChatMsg::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:IM.ChatMsg)
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

  // bytes sendName = 5;
  if (this->sendname().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        5, this->_internal_sendname(), target);
  }

  // string sendtime = 6;
  if (this->sendtime().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_sendtime().data(), static_cast<int>(this->_internal_sendtime().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "IM.ChatMsg.sendtime");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_sendtime(), target);
  }

  // bytes content = 7;
  if (this->content().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        7, this->_internal_content(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:IM.ChatMsg)
  return target;
}

size_t ChatMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:IM.ChatMsg)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes sendName = 5;
  if (this->sendname().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_sendname());
  }

  // string sendtime = 6;
  if (this->sendtime().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_sendtime());
  }

  // bytes content = 7;
  if (this->content().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_content());
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

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ChatMsg::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:IM.ChatMsg)
  GOOGLE_DCHECK_NE(&from, this);
  const ChatMsg* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ChatMsg>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:IM.ChatMsg)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:IM.ChatMsg)
    MergeFrom(*source);
  }
}

void ChatMsg::MergeFrom(const ChatMsg& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:IM.ChatMsg)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.sendname().size() > 0) {
    _internal_set_sendname(from._internal_sendname());
  }
  if (from.sendtime().size() > 0) {
    _internal_set_sendtime(from._internal_sendtime());
  }
  if (from.content().size() > 0) {
    _internal_set_content(from._internal_content());
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
}

void ChatMsg::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:IM.ChatMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChatMsg::CopyFrom(const ChatMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:IM.ChatMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChatMsg::IsInitialized() const {
  return true;
}

void ChatMsg::InternalSwap(ChatMsg* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  sendname_.Swap(&other->sendname_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  sendtime_.Swap(&other->sendtime_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  content_.Swap(&other->content_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ChatMsg, sendid_)
      + sizeof(ChatMsg::sendid_)
      - PROTOBUF_FIELD_OFFSET(ChatMsg, networktype_)>(
          reinterpret_cast<char*>(&networktype_),
          reinterpret_cast<char*>(&other->networktype_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ChatMsg::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace IM
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::IM::ChatMsg* Arena::CreateMaybeMessage< ::IM::ChatMsg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::IM::ChatMsg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
