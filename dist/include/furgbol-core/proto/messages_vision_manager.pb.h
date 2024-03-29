// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_vision_manager.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_messages_5fvision_5fmanager_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_messages_5fvision_5fmanager_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_messages_5fvision_5fmanager_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_messages_5fvision_5fmanager_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_messages_5fvision_5fmanager_2eproto;
class BallPackage;
class BallPackageDefaultTypeInternal;
extern BallPackageDefaultTypeInternal _BallPackage_default_instance_;
class RobotPackage;
class RobotPackageDefaultTypeInternal;
extern RobotPackageDefaultTypeInternal _RobotPackage_default_instance_;
class VisionPackage;
class VisionPackageDefaultTypeInternal;
extern VisionPackageDefaultTypeInternal _VisionPackage_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::BallPackage* Arena::CreateMaybeMessage<::BallPackage>(Arena*);
template<> ::RobotPackage* Arena::CreateMaybeMessage<::RobotPackage>(Arena*);
template<> ::VisionPackage* Arena::CreateMaybeMessage<::VisionPackage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class BallPackage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:BallPackage) */ {
 public:
  BallPackage();
  virtual ~BallPackage();

  BallPackage(const BallPackage& from);
  BallPackage(BallPackage&& from) noexcept
    : BallPackage() {
    *this = ::std::move(from);
  }

  inline BallPackage& operator=(const BallPackage& from) {
    CopyFrom(from);
    return *this;
  }
  inline BallPackage& operator=(BallPackage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
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
  static const BallPackage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BallPackage* internal_default_instance() {
    return reinterpret_cast<const BallPackage*>(
               &_BallPackage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BallPackage& a, BallPackage& b) {
    a.Swap(&b);
  }
  inline void Swap(BallPackage* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline BallPackage* New() const final {
    return CreateMaybeMessage<BallPackage>(nullptr);
  }

  BallPackage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<BallPackage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const BallPackage& from);
  void MergeFrom(const BallPackage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(BallPackage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "BallPackage";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_messages_5fvision_5fmanager_2eproto);
    return ::descriptor_table_messages_5fvision_5fmanager_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
  };
  // required float x = 1;
  bool has_x() const;
  private:
  bool _internal_has_x() const;
  public:
  void clear_x();
  float x() const;
  void set_x(float value);
  private:
  float _internal_x() const;
  void _internal_set_x(float value);
  public:

  // required float y = 2;
  bool has_y() const;
  private:
  bool _internal_has_y() const;
  public:
  void clear_y();
  float y() const;
  void set_y(float value);
  private:
  float _internal_y() const;
  void _internal_set_y(float value);
  public:

  // optional float z = 3;
  bool has_z() const;
  private:
  bool _internal_has_z() const;
  public:
  void clear_z();
  float z() const;
  void set_z(float value);
  private:
  float _internal_z() const;
  void _internal_set_z(float value);
  public:

  // @@protoc_insertion_point(class_scope:BallPackage)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  float x_;
  float y_;
  float z_;
  friend struct ::TableStruct_messages_5fvision_5fmanager_2eproto;
};
// -------------------------------------------------------------------

class RobotPackage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:RobotPackage) */ {
 public:
  RobotPackage();
  virtual ~RobotPackage();

  RobotPackage(const RobotPackage& from);
  RobotPackage(RobotPackage&& from) noexcept
    : RobotPackage() {
    *this = ::std::move(from);
  }

  inline RobotPackage& operator=(const RobotPackage& from) {
    CopyFrom(from);
    return *this;
  }
  inline RobotPackage& operator=(RobotPackage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
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
  static const RobotPackage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RobotPackage* internal_default_instance() {
    return reinterpret_cast<const RobotPackage*>(
               &_RobotPackage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(RobotPackage& a, RobotPackage& b) {
    a.Swap(&b);
  }
  inline void Swap(RobotPackage* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RobotPackage* New() const final {
    return CreateMaybeMessage<RobotPackage>(nullptr);
  }

  RobotPackage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RobotPackage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RobotPackage& from);
  void MergeFrom(const RobotPackage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RobotPackage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "RobotPackage";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_messages_5fvision_5fmanager_2eproto);
    return ::descriptor_table_messages_5fvision_5fmanager_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kXFieldNumber = 2,
    kYFieldNumber = 3,
    kOrientationFieldNumber = 4,
  };
  // required uint32 id = 1;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required float x = 2;
  bool has_x() const;
  private:
  bool _internal_has_x() const;
  public:
  void clear_x();
  float x() const;
  void set_x(float value);
  private:
  float _internal_x() const;
  void _internal_set_x(float value);
  public:

  // required float y = 3;
  bool has_y() const;
  private:
  bool _internal_has_y() const;
  public:
  void clear_y();
  float y() const;
  void set_y(float value);
  private:
  float _internal_y() const;
  void _internal_set_y(float value);
  public:

  // required float orientation = 4;
  bool has_orientation() const;
  private:
  bool _internal_has_orientation() const;
  public:
  void clear_orientation();
  float orientation() const;
  void set_orientation(float value);
  private:
  float _internal_orientation() const;
  void _internal_set_orientation(float value);
  public:

  // @@protoc_insertion_point(class_scope:RobotPackage)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  float x_;
  float y_;
  float orientation_;
  friend struct ::TableStruct_messages_5fvision_5fmanager_2eproto;
};
// -------------------------------------------------------------------

class VisionPackage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:VisionPackage) */ {
 public:
  VisionPackage();
  virtual ~VisionPackage();

  VisionPackage(const VisionPackage& from);
  VisionPackage(VisionPackage&& from) noexcept
    : VisionPackage() {
    *this = ::std::move(from);
  }

  inline VisionPackage& operator=(const VisionPackage& from) {
    CopyFrom(from);
    return *this;
  }
  inline VisionPackage& operator=(VisionPackage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
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
  static const VisionPackage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const VisionPackage* internal_default_instance() {
    return reinterpret_cast<const VisionPackage*>(
               &_VisionPackage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(VisionPackage& a, VisionPackage& b) {
    a.Swap(&b);
  }
  inline void Swap(VisionPackage* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline VisionPackage* New() const final {
    return CreateMaybeMessage<VisionPackage>(nullptr);
  }

  VisionPackage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<VisionPackage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const VisionPackage& from);
  void MergeFrom(const VisionPackage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(VisionPackage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "VisionPackage";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_messages_5fvision_5fmanager_2eproto);
    return ::descriptor_table_messages_5fvision_5fmanager_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTeamFieldNumber = 4,
    kEnemyFieldNumber = 5,
    kBallFieldNumber = 3,
    kDelayFieldNumber = 2,
    kFrameNumberFieldNumber = 1,
  };
  // repeated .RobotPackage team = 4;
  int team_size() const;
  private:
  int _internal_team_size() const;
  public:
  void clear_team();
  ::RobotPackage* mutable_team(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::RobotPackage >*
      mutable_team();
  private:
  const ::RobotPackage& _internal_team(int index) const;
  ::RobotPackage* _internal_add_team();
  public:
  const ::RobotPackage& team(int index) const;
  ::RobotPackage* add_team();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::RobotPackage >&
      team() const;

  // repeated .RobotPackage enemy = 5;
  int enemy_size() const;
  private:
  int _internal_enemy_size() const;
  public:
  void clear_enemy();
  ::RobotPackage* mutable_enemy(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::RobotPackage >*
      mutable_enemy();
  private:
  const ::RobotPackage& _internal_enemy(int index) const;
  ::RobotPackage* _internal_add_enemy();
  public:
  const ::RobotPackage& enemy(int index) const;
  ::RobotPackage* add_enemy();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::RobotPackage >&
      enemy() const;

  // required .BallPackage ball = 3;
  bool has_ball() const;
  private:
  bool _internal_has_ball() const;
  public:
  void clear_ball();
  const ::BallPackage& ball() const;
  ::BallPackage* release_ball();
  ::BallPackage* mutable_ball();
  void set_allocated_ball(::BallPackage* ball);
  private:
  const ::BallPackage& _internal_ball() const;
  ::BallPackage* _internal_mutable_ball();
  public:

  // required double delay = 2;
  bool has_delay() const;
  private:
  bool _internal_has_delay() const;
  public:
  void clear_delay();
  double delay() const;
  void set_delay(double value);
  private:
  double _internal_delay() const;
  void _internal_set_delay(double value);
  public:

  // required uint32 frame_number = 1;
  bool has_frame_number() const;
  private:
  bool _internal_has_frame_number() const;
  public:
  void clear_frame_number();
  ::PROTOBUF_NAMESPACE_ID::uint32 frame_number() const;
  void set_frame_number(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_frame_number() const;
  void _internal_set_frame_number(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:VisionPackage)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::RobotPackage > team_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::RobotPackage > enemy_;
  ::BallPackage* ball_;
  double delay_;
  ::PROTOBUF_NAMESPACE_ID::uint32 frame_number_;
  friend struct ::TableStruct_messages_5fvision_5fmanager_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BallPackage

// required float x = 1;
inline bool BallPackage::_internal_has_x() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool BallPackage::has_x() const {
  return _internal_has_x();
}
inline void BallPackage::clear_x() {
  x_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline float BallPackage::_internal_x() const {
  return x_;
}
inline float BallPackage::x() const {
  // @@protoc_insertion_point(field_get:BallPackage.x)
  return _internal_x();
}
inline void BallPackage::_internal_set_x(float value) {
  _has_bits_[0] |= 0x00000001u;
  x_ = value;
}
inline void BallPackage::set_x(float value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:BallPackage.x)
}

// required float y = 2;
inline bool BallPackage::_internal_has_y() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool BallPackage::has_y() const {
  return _internal_has_y();
}
inline void BallPackage::clear_y() {
  y_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline float BallPackage::_internal_y() const {
  return y_;
}
inline float BallPackage::y() const {
  // @@protoc_insertion_point(field_get:BallPackage.y)
  return _internal_y();
}
inline void BallPackage::_internal_set_y(float value) {
  _has_bits_[0] |= 0x00000002u;
  y_ = value;
}
inline void BallPackage::set_y(float value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:BallPackage.y)
}

// optional float z = 3;
inline bool BallPackage::_internal_has_z() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool BallPackage::has_z() const {
  return _internal_has_z();
}
inline void BallPackage::clear_z() {
  z_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline float BallPackage::_internal_z() const {
  return z_;
}
inline float BallPackage::z() const {
  // @@protoc_insertion_point(field_get:BallPackage.z)
  return _internal_z();
}
inline void BallPackage::_internal_set_z(float value) {
  _has_bits_[0] |= 0x00000004u;
  z_ = value;
}
inline void BallPackage::set_z(float value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:BallPackage.z)
}

// -------------------------------------------------------------------

// RobotPackage

// required uint32 id = 1;
inline bool RobotPackage::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool RobotPackage::has_id() const {
  return _internal_has_id();
}
inline void RobotPackage::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RobotPackage::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RobotPackage::id() const {
  // @@protoc_insertion_point(field_get:RobotPackage.id)
  return _internal_id();
}
inline void RobotPackage::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  id_ = value;
}
inline void RobotPackage::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:RobotPackage.id)
}

// required float x = 2;
inline bool RobotPackage::_internal_has_x() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool RobotPackage::has_x() const {
  return _internal_has_x();
}
inline void RobotPackage::clear_x() {
  x_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline float RobotPackage::_internal_x() const {
  return x_;
}
inline float RobotPackage::x() const {
  // @@protoc_insertion_point(field_get:RobotPackage.x)
  return _internal_x();
}
inline void RobotPackage::_internal_set_x(float value) {
  _has_bits_[0] |= 0x00000002u;
  x_ = value;
}
inline void RobotPackage::set_x(float value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:RobotPackage.x)
}

// required float y = 3;
inline bool RobotPackage::_internal_has_y() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool RobotPackage::has_y() const {
  return _internal_has_y();
}
inline void RobotPackage::clear_y() {
  y_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline float RobotPackage::_internal_y() const {
  return y_;
}
inline float RobotPackage::y() const {
  // @@protoc_insertion_point(field_get:RobotPackage.y)
  return _internal_y();
}
inline void RobotPackage::_internal_set_y(float value) {
  _has_bits_[0] |= 0x00000004u;
  y_ = value;
}
inline void RobotPackage::set_y(float value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:RobotPackage.y)
}

// required float orientation = 4;
inline bool RobotPackage::_internal_has_orientation() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool RobotPackage::has_orientation() const {
  return _internal_has_orientation();
}
inline void RobotPackage::clear_orientation() {
  orientation_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline float RobotPackage::_internal_orientation() const {
  return orientation_;
}
inline float RobotPackage::orientation() const {
  // @@protoc_insertion_point(field_get:RobotPackage.orientation)
  return _internal_orientation();
}
inline void RobotPackage::_internal_set_orientation(float value) {
  _has_bits_[0] |= 0x00000008u;
  orientation_ = value;
}
inline void RobotPackage::set_orientation(float value) {
  _internal_set_orientation(value);
  // @@protoc_insertion_point(field_set:RobotPackage.orientation)
}

// -------------------------------------------------------------------

// VisionPackage

// required uint32 frame_number = 1;
inline bool VisionPackage::_internal_has_frame_number() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool VisionPackage::has_frame_number() const {
  return _internal_has_frame_number();
}
inline void VisionPackage::clear_frame_number() {
  frame_number_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 VisionPackage::_internal_frame_number() const {
  return frame_number_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 VisionPackage::frame_number() const {
  // @@protoc_insertion_point(field_get:VisionPackage.frame_number)
  return _internal_frame_number();
}
inline void VisionPackage::_internal_set_frame_number(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000004u;
  frame_number_ = value;
}
inline void VisionPackage::set_frame_number(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_frame_number(value);
  // @@protoc_insertion_point(field_set:VisionPackage.frame_number)
}

// required double delay = 2;
inline bool VisionPackage::_internal_has_delay() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool VisionPackage::has_delay() const {
  return _internal_has_delay();
}
inline void VisionPackage::clear_delay() {
  delay_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline double VisionPackage::_internal_delay() const {
  return delay_;
}
inline double VisionPackage::delay() const {
  // @@protoc_insertion_point(field_get:VisionPackage.delay)
  return _internal_delay();
}
inline void VisionPackage::_internal_set_delay(double value) {
  _has_bits_[0] |= 0x00000002u;
  delay_ = value;
}
inline void VisionPackage::set_delay(double value) {
  _internal_set_delay(value);
  // @@protoc_insertion_point(field_set:VisionPackage.delay)
}

// required .BallPackage ball = 3;
inline bool VisionPackage::_internal_has_ball() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || ball_ != nullptr);
  return value;
}
inline bool VisionPackage::has_ball() const {
  return _internal_has_ball();
}
inline void VisionPackage::clear_ball() {
  if (ball_ != nullptr) ball_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::BallPackage& VisionPackage::_internal_ball() const {
  const ::BallPackage* p = ball_;
  return p != nullptr ? *p : *reinterpret_cast<const ::BallPackage*>(
      &::_BallPackage_default_instance_);
}
inline const ::BallPackage& VisionPackage::ball() const {
  // @@protoc_insertion_point(field_get:VisionPackage.ball)
  return _internal_ball();
}
inline ::BallPackage* VisionPackage::release_ball() {
  // @@protoc_insertion_point(field_release:VisionPackage.ball)
  _has_bits_[0] &= ~0x00000001u;
  ::BallPackage* temp = ball_;
  ball_ = nullptr;
  return temp;
}
inline ::BallPackage* VisionPackage::_internal_mutable_ball() {
  _has_bits_[0] |= 0x00000001u;
  if (ball_ == nullptr) {
    auto* p = CreateMaybeMessage<::BallPackage>(GetArenaNoVirtual());
    ball_ = p;
  }
  return ball_;
}
inline ::BallPackage* VisionPackage::mutable_ball() {
  // @@protoc_insertion_point(field_mutable:VisionPackage.ball)
  return _internal_mutable_ball();
}
inline void VisionPackage::set_allocated_ball(::BallPackage* ball) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete ball_;
  }
  if (ball) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      ball = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ball, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  ball_ = ball;
  // @@protoc_insertion_point(field_set_allocated:VisionPackage.ball)
}

// repeated .RobotPackage team = 4;
inline int VisionPackage::_internal_team_size() const {
  return team_.size();
}
inline int VisionPackage::team_size() const {
  return _internal_team_size();
}
inline void VisionPackage::clear_team() {
  team_.Clear();
}
inline ::RobotPackage* VisionPackage::mutable_team(int index) {
  // @@protoc_insertion_point(field_mutable:VisionPackage.team)
  return team_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::RobotPackage >*
VisionPackage::mutable_team() {
  // @@protoc_insertion_point(field_mutable_list:VisionPackage.team)
  return &team_;
}
inline const ::RobotPackage& VisionPackage::_internal_team(int index) const {
  return team_.Get(index);
}
inline const ::RobotPackage& VisionPackage::team(int index) const {
  // @@protoc_insertion_point(field_get:VisionPackage.team)
  return _internal_team(index);
}
inline ::RobotPackage* VisionPackage::_internal_add_team() {
  return team_.Add();
}
inline ::RobotPackage* VisionPackage::add_team() {
  // @@protoc_insertion_point(field_add:VisionPackage.team)
  return _internal_add_team();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::RobotPackage >&
VisionPackage::team() const {
  // @@protoc_insertion_point(field_list:VisionPackage.team)
  return team_;
}

// repeated .RobotPackage enemy = 5;
inline int VisionPackage::_internal_enemy_size() const {
  return enemy_.size();
}
inline int VisionPackage::enemy_size() const {
  return _internal_enemy_size();
}
inline void VisionPackage::clear_enemy() {
  enemy_.Clear();
}
inline ::RobotPackage* VisionPackage::mutable_enemy(int index) {
  // @@protoc_insertion_point(field_mutable:VisionPackage.enemy)
  return enemy_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::RobotPackage >*
VisionPackage::mutable_enemy() {
  // @@protoc_insertion_point(field_mutable_list:VisionPackage.enemy)
  return &enemy_;
}
inline const ::RobotPackage& VisionPackage::_internal_enemy(int index) const {
  return enemy_.Get(index);
}
inline const ::RobotPackage& VisionPackage::enemy(int index) const {
  // @@protoc_insertion_point(field_get:VisionPackage.enemy)
  return _internal_enemy(index);
}
inline ::RobotPackage* VisionPackage::_internal_add_enemy() {
  return enemy_.Add();
}
inline ::RobotPackage* VisionPackage::add_enemy() {
  // @@protoc_insertion_point(field_add:VisionPackage.enemy)
  return _internal_add_enemy();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::RobotPackage >&
VisionPackage::enemy() const {
  // @@protoc_insertion_point(field_list:VisionPackage.enemy)
  return enemy_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_messages_5fvision_5fmanager_2eproto
