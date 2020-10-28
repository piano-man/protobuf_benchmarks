// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_test_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_test_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_test_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_test_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_test_2eproto;
namespace pb {
class Object;
class ObjectDefaultTypeInternal;
extern ObjectDefaultTypeInternal _Object_default_instance_;
class ObjectList;
class ObjectListDefaultTypeInternal;
extern ObjectListDefaultTypeInternal _ObjectList_default_instance_;
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> ::pb::Object* Arena::CreateMaybeMessage<::pb::Object>(Arena*);
template<> ::pb::ObjectList* Arena::CreateMaybeMessage<::pb::ObjectList>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace pb {

// ===================================================================

class Object PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.Object) */ {
 public:
  inline Object() : Object(nullptr) {}
  virtual ~Object();

  Object(const Object& from);
  Object(Object&& from) noexcept
    : Object() {
    *this = ::std::move(from);
  }

  inline Object& operator=(const Object& from) {
    CopyFrom(from);
    return *this;
  }
  inline Object& operator=(Object&& from) noexcept {
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
  static const Object& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Object* internal_default_instance() {
    return reinterpret_cast<const Object*>(
               &_Object_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Object& a, Object& b) {
    a.Swap(&b);
  }
  inline void Swap(Object* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Object* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Object* New() const final {
    return CreateMaybeMessage<Object>(nullptr);
  }

  Object* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Object>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Object& from);
  void MergeFrom(const Object& from);
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
  void InternalSwap(Object* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.Object";
  }
  protected:
  explicit Object(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_test_2eproto);
    return ::descriptor_table_test_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMappingsFieldNumber = 2,
    kNameFieldNumber = 1,
  };
  // repeated uint32 mappings = 2;
  int mappings_size() const;
  private:
  int _internal_mappings_size() const;
  public:
  void clear_mappings();
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_mappings(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      _internal_mappings() const;
  void _internal_add_mappings(::PROTOBUF_NAMESPACE_ID::uint32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      _internal_mutable_mappings();
  public:
  ::PROTOBUF_NAMESPACE_ID::uint32 mappings(int index) const;
  void set_mappings(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value);
  void add_mappings(::PROTOBUF_NAMESPACE_ID::uint32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
      mappings() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
      mutable_mappings();

  // bytes name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const void* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // @@protoc_insertion_point(class_scope:pb.Object)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 > mappings_;
  mutable std::atomic<int> _mappings_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_test_2eproto;
};
// -------------------------------------------------------------------

class ObjectList PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:pb.ObjectList) */ {
 public:
  inline ObjectList() : ObjectList(nullptr) {}
  virtual ~ObjectList();

  ObjectList(const ObjectList& from);
  ObjectList(ObjectList&& from) noexcept
    : ObjectList() {
    *this = ::std::move(from);
  }

  inline ObjectList& operator=(const ObjectList& from) {
    CopyFrom(from);
    return *this;
  }
  inline ObjectList& operator=(ObjectList&& from) noexcept {
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
  static const ObjectList& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ObjectList* internal_default_instance() {
    return reinterpret_cast<const ObjectList*>(
               &_ObjectList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ObjectList& a, ObjectList& b) {
    a.Swap(&b);
  }
  inline void Swap(ObjectList* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ObjectList* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ObjectList* New() const final {
    return CreateMaybeMessage<ObjectList>(nullptr);
  }

  ObjectList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ObjectList>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ObjectList& from);
  void MergeFrom(const ObjectList& from);
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
  void InternalSwap(ObjectList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "pb.ObjectList";
  }
  protected:
  explicit ObjectList(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_test_2eproto);
    return ::descriptor_table_test_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kListFieldNumber = 1,
  };
  // repeated .pb.Object list = 1;
  int list_size() const;
  private:
  int _internal_list_size() const;
  public:
  void clear_list();
  ::pb::Object* mutable_list(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::Object >*
      mutable_list();
  private:
  const ::pb::Object& _internal_list(int index) const;
  ::pb::Object* _internal_add_list();
  public:
  const ::pb::Object& list(int index) const;
  ::pb::Object* add_list();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::Object >&
      list() const;

  // @@protoc_insertion_point(class_scope:pb.ObjectList)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::Object > list_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_test_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Object

// bytes name = 1;
inline void Object::clear_name() {
  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& Object::name() const {
  // @@protoc_insertion_point(field_get:pb.Object.name)
  return _internal_name();
}
inline void Object::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:pb.Object.name)
}
inline std::string* Object::mutable_name() {
  // @@protoc_insertion_point(field_mutable:pb.Object.name)
  return _internal_mutable_name();
}
inline const std::string& Object::_internal_name() const {
  return name_.Get();
}
inline void Object::_internal_set_name(const std::string& value) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Object::set_name(std::string&& value) {
  
  name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:pb.Object.name)
}
inline void Object::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:pb.Object.name)
}
inline void Object::set_name(const void* value,
    size_t size) {
  
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:pb.Object.name)
}
inline std::string* Object::_internal_mutable_name() {
  
  return name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Object::release_name() {
  // @@protoc_insertion_point(field_release:pb.Object.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Object::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:pb.Object.name)
}

// repeated uint32 mappings = 2;
inline int Object::_internal_mappings_size() const {
  return mappings_.size();
}
inline int Object::mappings_size() const {
  return _internal_mappings_size();
}
inline void Object::clear_mappings() {
  mappings_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Object::_internal_mappings(int index) const {
  return mappings_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Object::mappings(int index) const {
  // @@protoc_insertion_point(field_get:pb.Object.mappings)
  return _internal_mappings(index);
}
inline void Object::set_mappings(int index, ::PROTOBUF_NAMESPACE_ID::uint32 value) {
  mappings_.Set(index, value);
  // @@protoc_insertion_point(field_set:pb.Object.mappings)
}
inline void Object::_internal_add_mappings(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  mappings_.Add(value);
}
inline void Object::add_mappings(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_add_mappings(value);
  // @@protoc_insertion_point(field_add:pb.Object.mappings)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
Object::_internal_mappings() const {
  return mappings_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >&
Object::mappings() const {
  // @@protoc_insertion_point(field_list:pb.Object.mappings)
  return _internal_mappings();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
Object::_internal_mutable_mappings() {
  return &mappings_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::uint32 >*
Object::mutable_mappings() {
  // @@protoc_insertion_point(field_mutable_list:pb.Object.mappings)
  return _internal_mutable_mappings();
}

// -------------------------------------------------------------------

// ObjectList

// repeated .pb.Object list = 1;
inline int ObjectList::_internal_list_size() const {
  return list_.size();
}
inline int ObjectList::list_size() const {
  return _internal_list_size();
}
inline void ObjectList::clear_list() {
  list_.Clear();
}
inline ::pb::Object* ObjectList::mutable_list(int index) {
  // @@protoc_insertion_point(field_mutable:pb.ObjectList.list)
  return list_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::Object >*
ObjectList::mutable_list() {
  // @@protoc_insertion_point(field_mutable_list:pb.ObjectList.list)
  return &list_;
}
inline const ::pb::Object& ObjectList::_internal_list(int index) const {
  return list_.Get(index);
}
inline const ::pb::Object& ObjectList::list(int index) const {
  // @@protoc_insertion_point(field_get:pb.ObjectList.list)
  return _internal_list(index);
}
inline ::pb::Object* ObjectList::_internal_add_list() {
  return list_.Add();
}
inline ::pb::Object* ObjectList::add_list() {
  // @@protoc_insertion_point(field_add:pb.ObjectList.list)
  return _internal_add_list();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::pb::Object >&
ObjectList::list() const {
  // @@protoc_insertion_point(field_list:pb.ObjectList.list)
  return list_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_test_2eproto