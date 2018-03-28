// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protos/ClientSocketMessages.proto

#ifndef PROTOBUF_Protos_2fClientSocketMessages_2eproto__INCLUDED
#define PROTOBUF_Protos_2fClientSocketMessages_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_Protos_2fClientSocketMessages_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[6];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsMessageFromClientImpl();
void InitDefaultsMessageFromClient();
void InitDefaultsArduinoActionImpl();
void InitDefaultsArduinoAction();
void InitDefaultsArduinoJoinImpl();
void InitDefaultsArduinoJoin();
void InitDefaultsArduinoWorkoutActionImpl();
void InitDefaultsArduinoWorkoutAction();
void InitDefaultsWebClientActionImpl();
void InitDefaultsWebClientAction();
void InitDefaultsWebClientActionJoinImpl();
void InitDefaultsWebClientActionJoin();
inline void InitDefaults() {
  InitDefaultsMessageFromClient();
  InitDefaultsArduinoAction();
  InitDefaultsArduinoJoin();
  InitDefaultsArduinoWorkoutAction();
  InitDefaultsWebClientAction();
  InitDefaultsWebClientActionJoin();
}
}  // namespace protobuf_Protos_2fClientSocketMessages_2eproto
class ArduinoAction;
class ArduinoActionDefaultTypeInternal;
extern ArduinoActionDefaultTypeInternal _ArduinoAction_default_instance_;
class ArduinoJoin;
class ArduinoJoinDefaultTypeInternal;
extern ArduinoJoinDefaultTypeInternal _ArduinoJoin_default_instance_;
class ArduinoWorkoutAction;
class ArduinoWorkoutActionDefaultTypeInternal;
extern ArduinoWorkoutActionDefaultTypeInternal _ArduinoWorkoutAction_default_instance_;
class MessageFromClient;
class MessageFromClientDefaultTypeInternal;
extern MessageFromClientDefaultTypeInternal _MessageFromClient_default_instance_;
class WebClientAction;
class WebClientActionDefaultTypeInternal;
extern WebClientActionDefaultTypeInternal _WebClientAction_default_instance_;
class WebClientActionJoin;
class WebClientActionJoinDefaultTypeInternal;
extern WebClientActionJoinDefaultTypeInternal _WebClientActionJoin_default_instance_;

enum ClientType {
  ARDUINO_CLIENT = 0,
  WEB_CLIENT = 1,
  ClientType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ClientType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ClientType_IsValid(int value);
const ClientType ClientType_MIN = ARDUINO_CLIENT;
const ClientType ClientType_MAX = WEB_CLIENT;
const int ClientType_ARRAYSIZE = ClientType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ClientType_descriptor();
inline const ::std::string& ClientType_Name(ClientType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ClientType_descriptor(), value);
}
inline bool ClientType_Parse(
    const ::std::string& name, ClientType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ClientType>(
    ClientType_descriptor(), name, value);
}
// ===================================================================

class MessageFromClient : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MessageFromClient) */ {
 public:
  MessageFromClient();
  virtual ~MessageFromClient();

  MessageFromClient(const MessageFromClient& from);

  inline MessageFromClient& operator=(const MessageFromClient& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MessageFromClient(MessageFromClient&& from) noexcept
    : MessageFromClient() {
    *this = ::std::move(from);
  }

  inline MessageFromClient& operator=(MessageFromClient&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MessageFromClient& default_instance();

  enum MessageCase {
    kArduinoAction = 2,
    kWebClientAction = 3,
    MESSAGE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MessageFromClient* internal_default_instance() {
    return reinterpret_cast<const MessageFromClient*>(
               &_MessageFromClient_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(MessageFromClient* other);
  friend void swap(MessageFromClient& a, MessageFromClient& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MessageFromClient* New() const PROTOBUF_FINAL { return New(NULL); }

  MessageFromClient* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MessageFromClient& from);
  void MergeFrom(const MessageFromClient& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(MessageFromClient* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .ClientType clientType = 1;
  void clear_clienttype();
  static const int kClientTypeFieldNumber = 1;
  ::ClientType clienttype() const;
  void set_clienttype(::ClientType value);

  // .ArduinoAction arduinoAction = 2;
  bool has_arduinoaction() const;
  void clear_arduinoaction();
  static const int kArduinoActionFieldNumber = 2;
  const ::ArduinoAction& arduinoaction() const;
  ::ArduinoAction* release_arduinoaction();
  ::ArduinoAction* mutable_arduinoaction();
  void set_allocated_arduinoaction(::ArduinoAction* arduinoaction);

  // .WebClientAction webClientAction = 3;
  bool has_webclientaction() const;
  void clear_webclientaction();
  static const int kWebClientActionFieldNumber = 3;
  const ::WebClientAction& webclientaction() const;
  ::WebClientAction* release_webclientaction();
  ::WebClientAction* mutable_webclientaction();
  void set_allocated_webclientaction(::WebClientAction* webclientaction);

  MessageCase message_case() const;
  // @@protoc_insertion_point(class_scope:MessageFromClient)
 private:
  void set_has_arduinoaction();
  void set_has_webclientaction();

  inline bool has_message() const;
  void clear_message();
  inline void clear_has_message();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  int clienttype_;
  union MessageUnion {
    MessageUnion() {}
    ::ArduinoAction* arduinoaction_;
    ::WebClientAction* webclientaction_;
  } message_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_Protos_2fClientSocketMessages_2eproto::TableStruct;
  friend void ::protobuf_Protos_2fClientSocketMessages_2eproto::InitDefaultsMessageFromClientImpl();
};
// -------------------------------------------------------------------

class ArduinoAction : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ArduinoAction) */ {
 public:
  ArduinoAction();
  virtual ~ArduinoAction();

  ArduinoAction(const ArduinoAction& from);

  inline ArduinoAction& operator=(const ArduinoAction& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ArduinoAction(ArduinoAction&& from) noexcept
    : ArduinoAction() {
    *this = ::std::move(from);
  }

  inline ArduinoAction& operator=(ArduinoAction&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ArduinoAction& default_instance();

  enum MessageCase {
    kArduinoJoin = 1,
    kArduinoWorkoutAction = 2,
    MESSAGE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ArduinoAction* internal_default_instance() {
    return reinterpret_cast<const ArduinoAction*>(
               &_ArduinoAction_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(ArduinoAction* other);
  friend void swap(ArduinoAction& a, ArduinoAction& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ArduinoAction* New() const PROTOBUF_FINAL { return New(NULL); }

  ArduinoAction* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ArduinoAction& from);
  void MergeFrom(const ArduinoAction& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ArduinoAction* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .ArduinoJoin arduinoJoin = 1;
  bool has_arduinojoin() const;
  void clear_arduinojoin();
  static const int kArduinoJoinFieldNumber = 1;
  const ::ArduinoJoin& arduinojoin() const;
  ::ArduinoJoin* release_arduinojoin();
  ::ArduinoJoin* mutable_arduinojoin();
  void set_allocated_arduinojoin(::ArduinoJoin* arduinojoin);

  // .ArduinoWorkoutAction arduinoWorkoutAction = 2;
  bool has_arduinoworkoutaction() const;
  void clear_arduinoworkoutaction();
  static const int kArduinoWorkoutActionFieldNumber = 2;
  const ::ArduinoWorkoutAction& arduinoworkoutaction() const;
  ::ArduinoWorkoutAction* release_arduinoworkoutaction();
  ::ArduinoWorkoutAction* mutable_arduinoworkoutaction();
  void set_allocated_arduinoworkoutaction(::ArduinoWorkoutAction* arduinoworkoutaction);

  MessageCase message_case() const;
  // @@protoc_insertion_point(class_scope:ArduinoAction)
 private:
  void set_has_arduinojoin();
  void set_has_arduinoworkoutaction();

  inline bool has_message() const;
  void clear_message();
  inline void clear_has_message();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  union MessageUnion {
    MessageUnion() {}
    ::ArduinoJoin* arduinojoin_;
    ::ArduinoWorkoutAction* arduinoworkoutaction_;
  } message_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_Protos_2fClientSocketMessages_2eproto::TableStruct;
  friend void ::protobuf_Protos_2fClientSocketMessages_2eproto::InitDefaultsArduinoActionImpl();
};
// -------------------------------------------------------------------

class ArduinoJoin : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ArduinoJoin) */ {
 public:
  ArduinoJoin();
  virtual ~ArduinoJoin();

  ArduinoJoin(const ArduinoJoin& from);

  inline ArduinoJoin& operator=(const ArduinoJoin& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ArduinoJoin(ArduinoJoin&& from) noexcept
    : ArduinoJoin() {
    *this = ::std::move(from);
  }

  inline ArduinoJoin& operator=(ArduinoJoin&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ArduinoJoin& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ArduinoJoin* internal_default_instance() {
    return reinterpret_cast<const ArduinoJoin*>(
               &_ArduinoJoin_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(ArduinoJoin* other);
  friend void swap(ArduinoJoin& a, ArduinoJoin& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ArduinoJoin* New() const PROTOBUF_FINAL { return New(NULL); }

  ArduinoJoin* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ArduinoJoin& from);
  void MergeFrom(const ArduinoJoin& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ArduinoJoin* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 arduinoId = 1;
  void clear_arduinoid();
  static const int kArduinoIdFieldNumber = 1;
  ::google::protobuf::int32 arduinoid() const;
  void set_arduinoid(::google::protobuf::int32 value);

  // int32 rfIdCard = 2;
  void clear_rfidcard();
  static const int kRfIdCardFieldNumber = 2;
  ::google::protobuf::int32 rfidcard() const;
  void set_rfidcard(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ArduinoJoin)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 arduinoid_;
  ::google::protobuf::int32 rfidcard_;
  mutable int _cached_size_;
  friend struct ::protobuf_Protos_2fClientSocketMessages_2eproto::TableStruct;
  friend void ::protobuf_Protos_2fClientSocketMessages_2eproto::InitDefaultsArduinoJoinImpl();
};
// -------------------------------------------------------------------

class ArduinoWorkoutAction : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ArduinoWorkoutAction) */ {
 public:
  ArduinoWorkoutAction();
  virtual ~ArduinoWorkoutAction();

  ArduinoWorkoutAction(const ArduinoWorkoutAction& from);

  inline ArduinoWorkoutAction& operator=(const ArduinoWorkoutAction& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ArduinoWorkoutAction(ArduinoWorkoutAction&& from) noexcept
    : ArduinoWorkoutAction() {
    *this = ::std::move(from);
  }

  inline ArduinoWorkoutAction& operator=(ArduinoWorkoutAction&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const ArduinoWorkoutAction& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ArduinoWorkoutAction* internal_default_instance() {
    return reinterpret_cast<const ArduinoWorkoutAction*>(
               &_ArduinoWorkoutAction_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(ArduinoWorkoutAction* other);
  friend void swap(ArduinoWorkoutAction& a, ArduinoWorkoutAction& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ArduinoWorkoutAction* New() const PROTOBUF_FINAL { return New(NULL); }

  ArduinoWorkoutAction* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const ArduinoWorkoutAction& from);
  void MergeFrom(const ArduinoWorkoutAction& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(ArduinoWorkoutAction* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:ArduinoWorkoutAction)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable int _cached_size_;
  friend struct ::protobuf_Protos_2fClientSocketMessages_2eproto::TableStruct;
  friend void ::protobuf_Protos_2fClientSocketMessages_2eproto::InitDefaultsArduinoWorkoutActionImpl();
};
// -------------------------------------------------------------------

class WebClientAction : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:WebClientAction) */ {
 public:
  WebClientAction();
  virtual ~WebClientAction();

  WebClientAction(const WebClientAction& from);

  inline WebClientAction& operator=(const WebClientAction& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  WebClientAction(WebClientAction&& from) noexcept
    : WebClientAction() {
    *this = ::std::move(from);
  }

  inline WebClientAction& operator=(WebClientAction&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const WebClientAction& default_instance();

  enum MessageCase {
    kWebClientActionJoin = 1,
    MESSAGE_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WebClientAction* internal_default_instance() {
    return reinterpret_cast<const WebClientAction*>(
               &_WebClientAction_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    4;

  void Swap(WebClientAction* other);
  friend void swap(WebClientAction& a, WebClientAction& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline WebClientAction* New() const PROTOBUF_FINAL { return New(NULL); }

  WebClientAction* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const WebClientAction& from);
  void MergeFrom(const WebClientAction& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(WebClientAction* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .WebClientActionJoin webClientActionJoin = 1;
  bool has_webclientactionjoin() const;
  void clear_webclientactionjoin();
  static const int kWebClientActionJoinFieldNumber = 1;
  const ::WebClientActionJoin& webclientactionjoin() const;
  ::WebClientActionJoin* release_webclientactionjoin();
  ::WebClientActionJoin* mutable_webclientactionjoin();
  void set_allocated_webclientactionjoin(::WebClientActionJoin* webclientactionjoin);

  MessageCase message_case() const;
  // @@protoc_insertion_point(class_scope:WebClientAction)
 private:
  void set_has_webclientactionjoin();

  inline bool has_message() const;
  void clear_message();
  inline void clear_has_message();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  union MessageUnion {
    MessageUnion() {}
    ::WebClientActionJoin* webclientactionjoin_;
  } message_;
  mutable int _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_Protos_2fClientSocketMessages_2eproto::TableStruct;
  friend void ::protobuf_Protos_2fClientSocketMessages_2eproto::InitDefaultsWebClientActionImpl();
};
// -------------------------------------------------------------------

class WebClientActionJoin : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:WebClientActionJoin) */ {
 public:
  WebClientActionJoin();
  virtual ~WebClientActionJoin();

  WebClientActionJoin(const WebClientActionJoin& from);

  inline WebClientActionJoin& operator=(const WebClientActionJoin& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  WebClientActionJoin(WebClientActionJoin&& from) noexcept
    : WebClientActionJoin() {
    *this = ::std::move(from);
  }

  inline WebClientActionJoin& operator=(WebClientActionJoin&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const WebClientActionJoin& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WebClientActionJoin* internal_default_instance() {
    return reinterpret_cast<const WebClientActionJoin*>(
               &_WebClientActionJoin_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    5;

  void Swap(WebClientActionJoin* other);
  friend void swap(WebClientActionJoin& a, WebClientActionJoin& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline WebClientActionJoin* New() const PROTOBUF_FINAL { return New(NULL); }

  WebClientActionJoin* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const WebClientActionJoin& from);
  void MergeFrom(const WebClientActionJoin& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(WebClientActionJoin* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 rfIdCardNo = 1;
  void clear_rfidcardno();
  static const int kRfIdCardNoFieldNumber = 1;
  ::google::protobuf::int32 rfidcardno() const;
  void set_rfidcardno(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:WebClientActionJoin)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 rfidcardno_;
  mutable int _cached_size_;
  friend struct ::protobuf_Protos_2fClientSocketMessages_2eproto::TableStruct;
  friend void ::protobuf_Protos_2fClientSocketMessages_2eproto::InitDefaultsWebClientActionJoinImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MessageFromClient

// .ClientType clientType = 1;
inline void MessageFromClient::clear_clienttype() {
  clienttype_ = 0;
}
inline ::ClientType MessageFromClient::clienttype() const {
  // @@protoc_insertion_point(field_get:MessageFromClient.clientType)
  return static_cast< ::ClientType >(clienttype_);
}
inline void MessageFromClient::set_clienttype(::ClientType value) {
  
  clienttype_ = value;
  // @@protoc_insertion_point(field_set:MessageFromClient.clientType)
}

// .ArduinoAction arduinoAction = 2;
inline bool MessageFromClient::has_arduinoaction() const {
  return message_case() == kArduinoAction;
}
inline void MessageFromClient::set_has_arduinoaction() {
  _oneof_case_[0] = kArduinoAction;
}
inline void MessageFromClient::clear_arduinoaction() {
  if (has_arduinoaction()) {
    delete message_.arduinoaction_;
    clear_has_message();
  }
}
inline ::ArduinoAction* MessageFromClient::release_arduinoaction() {
  // @@protoc_insertion_point(field_release:MessageFromClient.arduinoAction)
  if (has_arduinoaction()) {
    clear_has_message();
      ::ArduinoAction* temp = message_.arduinoaction_;
    message_.arduinoaction_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ArduinoAction& MessageFromClient::arduinoaction() const {
  // @@protoc_insertion_point(field_get:MessageFromClient.arduinoAction)
  return has_arduinoaction()
      ? *message_.arduinoaction_
      : *reinterpret_cast< ::ArduinoAction*>(&::_ArduinoAction_default_instance_);
}
inline ::ArduinoAction* MessageFromClient::mutable_arduinoaction() {
  if (!has_arduinoaction()) {
    clear_message();
    set_has_arduinoaction();
    message_.arduinoaction_ = new ::ArduinoAction;
  }
  // @@protoc_insertion_point(field_mutable:MessageFromClient.arduinoAction)
  return message_.arduinoaction_;
}

// .WebClientAction webClientAction = 3;
inline bool MessageFromClient::has_webclientaction() const {
  return message_case() == kWebClientAction;
}
inline void MessageFromClient::set_has_webclientaction() {
  _oneof_case_[0] = kWebClientAction;
}
inline void MessageFromClient::clear_webclientaction() {
  if (has_webclientaction()) {
    delete message_.webclientaction_;
    clear_has_message();
  }
}
inline ::WebClientAction* MessageFromClient::release_webclientaction() {
  // @@protoc_insertion_point(field_release:MessageFromClient.webClientAction)
  if (has_webclientaction()) {
    clear_has_message();
      ::WebClientAction* temp = message_.webclientaction_;
    message_.webclientaction_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::WebClientAction& MessageFromClient::webclientaction() const {
  // @@protoc_insertion_point(field_get:MessageFromClient.webClientAction)
  return has_webclientaction()
      ? *message_.webclientaction_
      : *reinterpret_cast< ::WebClientAction*>(&::_WebClientAction_default_instance_);
}
inline ::WebClientAction* MessageFromClient::mutable_webclientaction() {
  if (!has_webclientaction()) {
    clear_message();
    set_has_webclientaction();
    message_.webclientaction_ = new ::WebClientAction;
  }
  // @@protoc_insertion_point(field_mutable:MessageFromClient.webClientAction)
  return message_.webclientaction_;
}

inline bool MessageFromClient::has_message() const {
  return message_case() != MESSAGE_NOT_SET;
}
inline void MessageFromClient::clear_has_message() {
  _oneof_case_[0] = MESSAGE_NOT_SET;
}
inline MessageFromClient::MessageCase MessageFromClient::message_case() const {
  return MessageFromClient::MessageCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// ArduinoAction

// .ArduinoJoin arduinoJoin = 1;
inline bool ArduinoAction::has_arduinojoin() const {
  return message_case() == kArduinoJoin;
}
inline void ArduinoAction::set_has_arduinojoin() {
  _oneof_case_[0] = kArduinoJoin;
}
inline void ArduinoAction::clear_arduinojoin() {
  if (has_arduinojoin()) {
    delete message_.arduinojoin_;
    clear_has_message();
  }
}
inline ::ArduinoJoin* ArduinoAction::release_arduinojoin() {
  // @@protoc_insertion_point(field_release:ArduinoAction.arduinoJoin)
  if (has_arduinojoin()) {
    clear_has_message();
      ::ArduinoJoin* temp = message_.arduinojoin_;
    message_.arduinojoin_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ArduinoJoin& ArduinoAction::arduinojoin() const {
  // @@protoc_insertion_point(field_get:ArduinoAction.arduinoJoin)
  return has_arduinojoin()
      ? *message_.arduinojoin_
      : *reinterpret_cast< ::ArduinoJoin*>(&::_ArduinoJoin_default_instance_);
}
inline ::ArduinoJoin* ArduinoAction::mutable_arduinojoin() {
  if (!has_arduinojoin()) {
    clear_message();
    set_has_arduinojoin();
    message_.arduinojoin_ = new ::ArduinoJoin;
  }
  // @@protoc_insertion_point(field_mutable:ArduinoAction.arduinoJoin)
  return message_.arduinojoin_;
}

// .ArduinoWorkoutAction arduinoWorkoutAction = 2;
inline bool ArduinoAction::has_arduinoworkoutaction() const {
  return message_case() == kArduinoWorkoutAction;
}
inline void ArduinoAction::set_has_arduinoworkoutaction() {
  _oneof_case_[0] = kArduinoWorkoutAction;
}
inline void ArduinoAction::clear_arduinoworkoutaction() {
  if (has_arduinoworkoutaction()) {
    delete message_.arduinoworkoutaction_;
    clear_has_message();
  }
}
inline ::ArduinoWorkoutAction* ArduinoAction::release_arduinoworkoutaction() {
  // @@protoc_insertion_point(field_release:ArduinoAction.arduinoWorkoutAction)
  if (has_arduinoworkoutaction()) {
    clear_has_message();
      ::ArduinoWorkoutAction* temp = message_.arduinoworkoutaction_;
    message_.arduinoworkoutaction_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::ArduinoWorkoutAction& ArduinoAction::arduinoworkoutaction() const {
  // @@protoc_insertion_point(field_get:ArduinoAction.arduinoWorkoutAction)
  return has_arduinoworkoutaction()
      ? *message_.arduinoworkoutaction_
      : *reinterpret_cast< ::ArduinoWorkoutAction*>(&::_ArduinoWorkoutAction_default_instance_);
}
inline ::ArduinoWorkoutAction* ArduinoAction::mutable_arduinoworkoutaction() {
  if (!has_arduinoworkoutaction()) {
    clear_message();
    set_has_arduinoworkoutaction();
    message_.arduinoworkoutaction_ = new ::ArduinoWorkoutAction;
  }
  // @@protoc_insertion_point(field_mutable:ArduinoAction.arduinoWorkoutAction)
  return message_.arduinoworkoutaction_;
}

inline bool ArduinoAction::has_message() const {
  return message_case() != MESSAGE_NOT_SET;
}
inline void ArduinoAction::clear_has_message() {
  _oneof_case_[0] = MESSAGE_NOT_SET;
}
inline ArduinoAction::MessageCase ArduinoAction::message_case() const {
  return ArduinoAction::MessageCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// ArduinoJoin

// int32 arduinoId = 1;
inline void ArduinoJoin::clear_arduinoid() {
  arduinoid_ = 0;
}
inline ::google::protobuf::int32 ArduinoJoin::arduinoid() const {
  // @@protoc_insertion_point(field_get:ArduinoJoin.arduinoId)
  return arduinoid_;
}
inline void ArduinoJoin::set_arduinoid(::google::protobuf::int32 value) {
  
  arduinoid_ = value;
  // @@protoc_insertion_point(field_set:ArduinoJoin.arduinoId)
}

// int32 rfIdCard = 2;
inline void ArduinoJoin::clear_rfidcard() {
  rfidcard_ = 0;
}
inline ::google::protobuf::int32 ArduinoJoin::rfidcard() const {
  // @@protoc_insertion_point(field_get:ArduinoJoin.rfIdCard)
  return rfidcard_;
}
inline void ArduinoJoin::set_rfidcard(::google::protobuf::int32 value) {
  
  rfidcard_ = value;
  // @@protoc_insertion_point(field_set:ArduinoJoin.rfIdCard)
}

// -------------------------------------------------------------------

// ArduinoWorkoutAction

// -------------------------------------------------------------------

// WebClientAction

// .WebClientActionJoin webClientActionJoin = 1;
inline bool WebClientAction::has_webclientactionjoin() const {
  return message_case() == kWebClientActionJoin;
}
inline void WebClientAction::set_has_webclientactionjoin() {
  _oneof_case_[0] = kWebClientActionJoin;
}
inline void WebClientAction::clear_webclientactionjoin() {
  if (has_webclientactionjoin()) {
    delete message_.webclientactionjoin_;
    clear_has_message();
  }
}
inline ::WebClientActionJoin* WebClientAction::release_webclientactionjoin() {
  // @@protoc_insertion_point(field_release:WebClientAction.webClientActionJoin)
  if (has_webclientactionjoin()) {
    clear_has_message();
      ::WebClientActionJoin* temp = message_.webclientactionjoin_;
    message_.webclientactionjoin_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::WebClientActionJoin& WebClientAction::webclientactionjoin() const {
  // @@protoc_insertion_point(field_get:WebClientAction.webClientActionJoin)
  return has_webclientactionjoin()
      ? *message_.webclientactionjoin_
      : *reinterpret_cast< ::WebClientActionJoin*>(&::_WebClientActionJoin_default_instance_);
}
inline ::WebClientActionJoin* WebClientAction::mutable_webclientactionjoin() {
  if (!has_webclientactionjoin()) {
    clear_message();
    set_has_webclientactionjoin();
    message_.webclientactionjoin_ = new ::WebClientActionJoin;
  }
  // @@protoc_insertion_point(field_mutable:WebClientAction.webClientActionJoin)
  return message_.webclientactionjoin_;
}

inline bool WebClientAction::has_message() const {
  return message_case() != MESSAGE_NOT_SET;
}
inline void WebClientAction::clear_has_message() {
  _oneof_case_[0] = MESSAGE_NOT_SET;
}
inline WebClientAction::MessageCase WebClientAction::message_case() const {
  return WebClientAction::MessageCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// WebClientActionJoin

// int32 rfIdCardNo = 1;
inline void WebClientActionJoin::clear_rfidcardno() {
  rfidcardno_ = 0;
}
inline ::google::protobuf::int32 WebClientActionJoin::rfidcardno() const {
  // @@protoc_insertion_point(field_get:WebClientActionJoin.rfIdCardNo)
  return rfidcardno_;
}
inline void WebClientActionJoin::set_rfidcardno(::google::protobuf::int32 value) {
  
  rfidcardno_ = value;
  // @@protoc_insertion_point(field_set:WebClientActionJoin.rfIdCardNo)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::ClientType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ClientType>() {
  return ::ClientType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Protos_2fClientSocketMessages_2eproto__INCLUDED