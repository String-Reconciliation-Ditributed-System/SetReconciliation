// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: file_sync.proto

#ifndef PROTOBUF_file_5fsync_2eproto__INCLUDED
#define PROTOBUF_file_5fsync_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace file_sync {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_file_5fsync_2eproto();
void protobuf_AssignDesc_file_5fsync_2eproto();
void protobuf_ShutdownFile_file_5fsync_2eproto();

class Round2;
class strata_estimator;
class IBLT;
class IBLT2;
class IBLT_bucket_extended;
class IBLT_bucket;

// ===================================================================

class Round2 : public ::google::protobuf::Message {
 public:
  Round2();
  virtual ~Round2();

  Round2(const Round2& from);

  inline Round2& operator=(const Round2& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Round2& default_instance();

  void Swap(Round2* other);

  // implements Message ----------------------------------------------

  Round2* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Round2& from);
  void MergeFrom(const Round2& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated bool chunk_exists = 1 [packed = true];
  inline int chunk_exists_size() const;
  inline void clear_chunk_exists();
  static const int kChunkExistsFieldNumber = 1;
  inline bool chunk_exists(int index) const;
  inline void set_chunk_exists(int index, bool value);
  inline void add_chunk_exists(bool value);
  inline const ::google::protobuf::RepeatedField< bool >&
      chunk_exists() const;
  inline ::google::protobuf::RepeatedField< bool >*
      mutable_chunk_exists();

  // repeated bytes new_chunk_info = 3;
  inline int new_chunk_info_size() const;
  inline void clear_new_chunk_info();
  static const int kNewChunkInfoFieldNumber = 3;
  inline const ::std::string& new_chunk_info(int index) const;
  inline ::std::string* mutable_new_chunk_info(int index);
  inline void set_new_chunk_info(int index, const ::std::string& value);
  inline void set_new_chunk_info(int index, const char* value);
  inline void set_new_chunk_info(int index, const void* value, size_t size);
  inline ::std::string* add_new_chunk_info();
  inline void add_new_chunk_info(const ::std::string& value);
  inline void add_new_chunk_info(const char* value);
  inline void add_new_chunk_info(const void* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& new_chunk_info() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_new_chunk_info();

  // repeated uint32 existing_chunk_encoding = 4 [packed = true];
  inline int existing_chunk_encoding_size() const;
  inline void clear_existing_chunk_encoding();
  static const int kExistingChunkEncodingFieldNumber = 4;
  inline ::google::protobuf::uint32 existing_chunk_encoding(int index) const;
  inline void set_existing_chunk_encoding(int index, ::google::protobuf::uint32 value);
  inline void add_existing_chunk_encoding(::google::protobuf::uint32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      existing_chunk_encoding() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_existing_chunk_encoding();

  // @@protoc_insertion_point(class_scope:file_sync.Round2)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< bool > chunk_exists_;
  mutable int _chunk_exists_cached_byte_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> new_chunk_info_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > existing_chunk_encoding_;
  mutable int _existing_chunk_encoding_cached_byte_size_;
  friend void  protobuf_AddDesc_file_5fsync_2eproto();
  friend void protobuf_AssignDesc_file_5fsync_2eproto();
  friend void protobuf_ShutdownFile_file_5fsync_2eproto();

  void InitAsDefaultInstance();
  static Round2* default_instance_;
};
// -------------------------------------------------------------------

class strata_estimator : public ::google::protobuf::Message {
 public:
  strata_estimator();
  virtual ~strata_estimator();

  strata_estimator(const strata_estimator& from);

  inline strata_estimator& operator=(const strata_estimator& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const strata_estimator& default_instance();

  void Swap(strata_estimator* other);

  // implements Message ----------------------------------------------

  strata_estimator* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const strata_estimator& from);
  void MergeFrom(const strata_estimator& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .file_sync.IBLT2 strata = 1;
  inline int strata_size() const;
  inline void clear_strata();
  static const int kStrataFieldNumber = 1;
  inline const ::file_sync::IBLT2& strata(int index) const;
  inline ::file_sync::IBLT2* mutable_strata(int index);
  inline ::file_sync::IBLT2* add_strata();
  inline const ::google::protobuf::RepeatedPtrField< ::file_sync::IBLT2 >&
      strata() const;
  inline ::google::protobuf::RepeatedPtrField< ::file_sync::IBLT2 >*
      mutable_strata();

  // @@protoc_insertion_point(class_scope:file_sync.strata_estimator)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::file_sync::IBLT2 > strata_;
  friend void  protobuf_AddDesc_file_5fsync_2eproto();
  friend void protobuf_AssignDesc_file_5fsync_2eproto();
  friend void protobuf_ShutdownFile_file_5fsync_2eproto();

  void InitAsDefaultInstance();
  static strata_estimator* default_instance_;
};
// -------------------------------------------------------------------

class IBLT : public ::google::protobuf::Message {
 public:
  IBLT();
  virtual ~IBLT();

  IBLT(const IBLT& from);

  inline IBLT& operator=(const IBLT& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const IBLT& default_instance();

  void Swap(IBLT* other);

  // implements Message ----------------------------------------------

  IBLT* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const IBLT& from);
  void MergeFrom(const IBLT& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .file_sync.IBLT_bucket buckets = 1;
  inline int buckets_size() const;
  inline void clear_buckets();
  static const int kBucketsFieldNumber = 1;
  inline const ::file_sync::IBLT_bucket& buckets(int index) const;
  inline ::file_sync::IBLT_bucket* mutable_buckets(int index);
  inline ::file_sync::IBLT_bucket* add_buckets();
  inline const ::google::protobuf::RepeatedPtrField< ::file_sync::IBLT_bucket >&
      buckets() const;
  inline ::google::protobuf::RepeatedPtrField< ::file_sync::IBLT_bucket >*
      mutable_buckets();

  // @@protoc_insertion_point(class_scope:file_sync.IBLT)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::file_sync::IBLT_bucket > buckets_;
  friend void  protobuf_AddDesc_file_5fsync_2eproto();
  friend void protobuf_AssignDesc_file_5fsync_2eproto();
  friend void protobuf_ShutdownFile_file_5fsync_2eproto();

  void InitAsDefaultInstance();
  static IBLT* default_instance_;
};
// -------------------------------------------------------------------

class IBLT2 : public ::google::protobuf::Message {
 public:
  IBLT2();
  virtual ~IBLT2();

  IBLT2(const IBLT2& from);

  inline IBLT2& operator=(const IBLT2& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const IBLT2& default_instance();

  void Swap(IBLT2* other);

  // implements Message ----------------------------------------------

  IBLT2* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const IBLT2& from);
  void MergeFrom(const IBLT2& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated uint64 key_sum = 1 [packed = true];
  inline int key_sum_size() const;
  inline void clear_key_sum();
  static const int kKeySumFieldNumber = 1;
  inline ::google::protobuf::uint64 key_sum(int index) const;
  inline void set_key_sum(int index, ::google::protobuf::uint64 value);
  inline void add_key_sum(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      key_sum() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_key_sum();

  // repeated uint64 hash_sum = 2 [packed = true];
  inline int hash_sum_size() const;
  inline void clear_hash_sum();
  static const int kHashSumFieldNumber = 2;
  inline ::google::protobuf::uint64 hash_sum(int index) const;
  inline void set_hash_sum(int index, ::google::protobuf::uint64 value);
  inline void add_hash_sum(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      hash_sum() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_hash_sum();

  // repeated uint64 count = 3 [packed = true];
  inline int count_size() const;
  inline void clear_count();
  static const int kCountFieldNumber = 3;
  inline ::google::protobuf::uint64 count(int index) const;
  inline void set_count(int index, ::google::protobuf::uint64 value);
  inline void add_count(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      count() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_count();

  // @@protoc_insertion_point(class_scope:file_sync.IBLT2)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > key_sum_;
  mutable int _key_sum_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > hash_sum_;
  mutable int _hash_sum_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > count_;
  mutable int _count_cached_byte_size_;
  friend void  protobuf_AddDesc_file_5fsync_2eproto();
  friend void protobuf_AssignDesc_file_5fsync_2eproto();
  friend void protobuf_ShutdownFile_file_5fsync_2eproto();

  void InitAsDefaultInstance();
  static IBLT2* default_instance_;
};
// -------------------------------------------------------------------

class IBLT_bucket_extended : public ::google::protobuf::Message {
 public:
  IBLT_bucket_extended();
  virtual ~IBLT_bucket_extended();

  IBLT_bucket_extended(const IBLT_bucket_extended& from);

  inline IBLT_bucket_extended& operator=(const IBLT_bucket_extended& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const IBLT_bucket_extended& default_instance();

  void Swap(IBLT_bucket_extended* other);

  // implements Message ----------------------------------------------

  IBLT_bucket_extended* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const IBLT_bucket_extended& from);
  void MergeFrom(const IBLT_bucket_extended& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .file_sync.IBLT_bucket bucket = 1;
  inline bool has_bucket() const;
  inline void clear_bucket();
  static const int kBucketFieldNumber = 1;
  inline const ::file_sync::IBLT_bucket& bucket() const;
  inline ::file_sync::IBLT_bucket* mutable_bucket();
  inline ::file_sync::IBLT_bucket* release_bucket();
  inline void set_allocated_bucket(::file_sync::IBLT_bucket* bucket);

  // repeated bool has_key = 2 [packed = true];
  inline int has_key_size() const;
  inline void clear_has_key();
  static const int kHasKeyFieldNumber = 2;
  inline bool has_key(int index) const;
  inline void set_has_key(int index, bool value);
  inline void add_has_key(bool value);
  inline const ::google::protobuf::RepeatedField< bool >&
      has_key() const;
  inline ::google::protobuf::RepeatedField< bool >*
      mutable_has_key();

  // @@protoc_insertion_point(class_scope:file_sync.IBLT_bucket_extended)
 private:
  inline void set_has_bucket();
  inline void clear_has_bucket();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::file_sync::IBLT_bucket* bucket_;
  ::google::protobuf::RepeatedField< bool > has_key_;
  mutable int _has_key_cached_byte_size_;
  friend void  protobuf_AddDesc_file_5fsync_2eproto();
  friend void protobuf_AssignDesc_file_5fsync_2eproto();
  friend void protobuf_ShutdownFile_file_5fsync_2eproto();

  void InitAsDefaultInstance();
  static IBLT_bucket_extended* default_instance_;
};
// -------------------------------------------------------------------

class IBLT_bucket : public ::google::protobuf::Message {
 public:
  IBLT_bucket();
  virtual ~IBLT_bucket();

  IBLT_bucket(const IBLT_bucket& from);

  inline IBLT_bucket& operator=(const IBLT_bucket& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const IBLT_bucket& default_instance();

  void Swap(IBLT_bucket* other);

  // implements Message ----------------------------------------------

  IBLT_bucket* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const IBLT_bucket& from);
  void MergeFrom(const IBLT_bucket& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 key_sum = 1;
  inline bool has_key_sum() const;
  inline void clear_key_sum();
  static const int kKeySumFieldNumber = 1;
  inline ::google::protobuf::uint32 key_sum() const;
  inline void set_key_sum(::google::protobuf::uint32 value);

  // required uint32 hash_sum = 2;
  inline bool has_hash_sum() const;
  inline void clear_hash_sum();
  static const int kHashSumFieldNumber = 2;
  inline ::google::protobuf::uint32 hash_sum() const;
  inline void set_hash_sum(::google::protobuf::uint32 value);

  // required uint32 count = 3;
  inline bool has_count() const;
  inline void clear_count();
  static const int kCountFieldNumber = 3;
  inline ::google::protobuf::uint32 count() const;
  inline void set_count(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:file_sync.IBLT_bucket)
 private:
  inline void set_has_key_sum();
  inline void clear_has_key_sum();
  inline void set_has_hash_sum();
  inline void clear_has_hash_sum();
  inline void set_has_count();
  inline void clear_has_count();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 key_sum_;
  ::google::protobuf::uint32 hash_sum_;
  ::google::protobuf::uint32 count_;
  friend void  protobuf_AddDesc_file_5fsync_2eproto();
  friend void protobuf_AssignDesc_file_5fsync_2eproto();
  friend void protobuf_ShutdownFile_file_5fsync_2eproto();

  void InitAsDefaultInstance();
  static IBLT_bucket* default_instance_;
};
// ===================================================================


// ===================================================================

// Round2

// repeated bool chunk_exists = 1 [packed = true];
inline int Round2::chunk_exists_size() const {
  return chunk_exists_.size();
}
inline void Round2::clear_chunk_exists() {
  chunk_exists_.Clear();
}
inline bool Round2::chunk_exists(int index) const {
  // @@protoc_insertion_point(field_get:file_sync.Round2.chunk_exists)
  return chunk_exists_.Get(index);
}
inline void Round2::set_chunk_exists(int index, bool value) {
  chunk_exists_.Set(index, value);
  // @@protoc_insertion_point(field_set:file_sync.Round2.chunk_exists)
}
inline void Round2::add_chunk_exists(bool value) {
  chunk_exists_.Add(value);
  // @@protoc_insertion_point(field_add:file_sync.Round2.chunk_exists)
}
inline const ::google::protobuf::RepeatedField< bool >&
Round2::chunk_exists() const {
  // @@protoc_insertion_point(field_list:file_sync.Round2.chunk_exists)
  return chunk_exists_;
}
inline ::google::protobuf::RepeatedField< bool >*
Round2::mutable_chunk_exists() {
  // @@protoc_insertion_point(field_mutable_list:file_sync.Round2.chunk_exists)
  return &chunk_exists_;
}

// repeated bytes new_chunk_info = 3;
inline int Round2::new_chunk_info_size() const {
  return new_chunk_info_.size();
}
inline void Round2::clear_new_chunk_info() {
  new_chunk_info_.Clear();
}
inline const ::std::string& Round2::new_chunk_info(int index) const {
  // @@protoc_insertion_point(field_get:file_sync.Round2.new_chunk_info)
  return new_chunk_info_.Get(index);
}
inline ::std::string* Round2::mutable_new_chunk_info(int index) {
  // @@protoc_insertion_point(field_mutable:file_sync.Round2.new_chunk_info)
  return new_chunk_info_.Mutable(index);
}
inline void Round2::set_new_chunk_info(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:file_sync.Round2.new_chunk_info)
  new_chunk_info_.Mutable(index)->assign(value);
}
inline void Round2::set_new_chunk_info(int index, const char* value) {
  new_chunk_info_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:file_sync.Round2.new_chunk_info)
}
inline void Round2::set_new_chunk_info(int index, const void* value, size_t size) {
  new_chunk_info_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:file_sync.Round2.new_chunk_info)
}
inline ::std::string* Round2::add_new_chunk_info() {
  return new_chunk_info_.Add();
}
inline void Round2::add_new_chunk_info(const ::std::string& value) {
  new_chunk_info_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:file_sync.Round2.new_chunk_info)
}
inline void Round2::add_new_chunk_info(const char* value) {
  new_chunk_info_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:file_sync.Round2.new_chunk_info)
}
inline void Round2::add_new_chunk_info(const void* value, size_t size) {
  new_chunk_info_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:file_sync.Round2.new_chunk_info)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Round2::new_chunk_info() const {
  // @@protoc_insertion_point(field_list:file_sync.Round2.new_chunk_info)
  return new_chunk_info_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Round2::mutable_new_chunk_info() {
  // @@protoc_insertion_point(field_mutable_list:file_sync.Round2.new_chunk_info)
  return &new_chunk_info_;
}

// repeated uint32 existing_chunk_encoding = 4 [packed = true];
inline int Round2::existing_chunk_encoding_size() const {
  return existing_chunk_encoding_.size();
}
inline void Round2::clear_existing_chunk_encoding() {
  existing_chunk_encoding_.Clear();
}
inline ::google::protobuf::uint32 Round2::existing_chunk_encoding(int index) const {
  // @@protoc_insertion_point(field_get:file_sync.Round2.existing_chunk_encoding)
  return existing_chunk_encoding_.Get(index);
}
inline void Round2::set_existing_chunk_encoding(int index, ::google::protobuf::uint32 value) {
  existing_chunk_encoding_.Set(index, value);
  // @@protoc_insertion_point(field_set:file_sync.Round2.existing_chunk_encoding)
}
inline void Round2::add_existing_chunk_encoding(::google::protobuf::uint32 value) {
  existing_chunk_encoding_.Add(value);
  // @@protoc_insertion_point(field_add:file_sync.Round2.existing_chunk_encoding)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
Round2::existing_chunk_encoding() const {
  // @@protoc_insertion_point(field_list:file_sync.Round2.existing_chunk_encoding)
  return existing_chunk_encoding_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
Round2::mutable_existing_chunk_encoding() {
  // @@protoc_insertion_point(field_mutable_list:file_sync.Round2.existing_chunk_encoding)
  return &existing_chunk_encoding_;
}

// -------------------------------------------------------------------

// strata_estimator

// repeated .file_sync.IBLT2 strata = 1;
inline int strata_estimator::strata_size() const {
  return strata_.size();
}
inline void strata_estimator::clear_strata() {
  strata_.Clear();
}
inline const ::file_sync::IBLT2& strata_estimator::strata(int index) const {
  // @@protoc_insertion_point(field_get:file_sync.strata_estimator.strata)
  return strata_.Get(index);
}
inline ::file_sync::IBLT2* strata_estimator::mutable_strata(int index) {
  // @@protoc_insertion_point(field_mutable:file_sync.strata_estimator.strata)
  return strata_.Mutable(index);
}
inline ::file_sync::IBLT2* strata_estimator::add_strata() {
  // @@protoc_insertion_point(field_add:file_sync.strata_estimator.strata)
  return strata_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::file_sync::IBLT2 >&
strata_estimator::strata() const {
  // @@protoc_insertion_point(field_list:file_sync.strata_estimator.strata)
  return strata_;
}
inline ::google::protobuf::RepeatedPtrField< ::file_sync::IBLT2 >*
strata_estimator::mutable_strata() {
  // @@protoc_insertion_point(field_mutable_list:file_sync.strata_estimator.strata)
  return &strata_;
}

// -------------------------------------------------------------------

// IBLT

// repeated .file_sync.IBLT_bucket buckets = 1;
inline int IBLT::buckets_size() const {
  return buckets_.size();
}
inline void IBLT::clear_buckets() {
  buckets_.Clear();
}
inline const ::file_sync::IBLT_bucket& IBLT::buckets(int index) const {
  // @@protoc_insertion_point(field_get:file_sync.IBLT.buckets)
  return buckets_.Get(index);
}
inline ::file_sync::IBLT_bucket* IBLT::mutable_buckets(int index) {
  // @@protoc_insertion_point(field_mutable:file_sync.IBLT.buckets)
  return buckets_.Mutable(index);
}
inline ::file_sync::IBLT_bucket* IBLT::add_buckets() {
  // @@protoc_insertion_point(field_add:file_sync.IBLT.buckets)
  return buckets_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::file_sync::IBLT_bucket >&
IBLT::buckets() const {
  // @@protoc_insertion_point(field_list:file_sync.IBLT.buckets)
  return buckets_;
}
inline ::google::protobuf::RepeatedPtrField< ::file_sync::IBLT_bucket >*
IBLT::mutable_buckets() {
  // @@protoc_insertion_point(field_mutable_list:file_sync.IBLT.buckets)
  return &buckets_;
}

// -------------------------------------------------------------------

// IBLT2

// repeated uint64 key_sum = 1 [packed = true];
inline int IBLT2::key_sum_size() const {
  return key_sum_.size();
}
inline void IBLT2::clear_key_sum() {
  key_sum_.Clear();
}
inline ::google::protobuf::uint64 IBLT2::key_sum(int index) const {
  // @@protoc_insertion_point(field_get:file_sync.IBLT2.key_sum)
  return key_sum_.Get(index);
}
inline void IBLT2::set_key_sum(int index, ::google::protobuf::uint64 value) {
  key_sum_.Set(index, value);
  // @@protoc_insertion_point(field_set:file_sync.IBLT2.key_sum)
}
inline void IBLT2::add_key_sum(::google::protobuf::uint64 value) {
  key_sum_.Add(value);
  // @@protoc_insertion_point(field_add:file_sync.IBLT2.key_sum)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
IBLT2::key_sum() const {
  // @@protoc_insertion_point(field_list:file_sync.IBLT2.key_sum)
  return key_sum_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
IBLT2::mutable_key_sum() {
  // @@protoc_insertion_point(field_mutable_list:file_sync.IBLT2.key_sum)
  return &key_sum_;
}

// repeated uint64 hash_sum = 2 [packed = true];
inline int IBLT2::hash_sum_size() const {
  return hash_sum_.size();
}
inline void IBLT2::clear_hash_sum() {
  hash_sum_.Clear();
}
inline ::google::protobuf::uint64 IBLT2::hash_sum(int index) const {
  // @@protoc_insertion_point(field_get:file_sync.IBLT2.hash_sum)
  return hash_sum_.Get(index);
}
inline void IBLT2::set_hash_sum(int index, ::google::protobuf::uint64 value) {
  hash_sum_.Set(index, value);
  // @@protoc_insertion_point(field_set:file_sync.IBLT2.hash_sum)
}
inline void IBLT2::add_hash_sum(::google::protobuf::uint64 value) {
  hash_sum_.Add(value);
  // @@protoc_insertion_point(field_add:file_sync.IBLT2.hash_sum)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
IBLT2::hash_sum() const {
  // @@protoc_insertion_point(field_list:file_sync.IBLT2.hash_sum)
  return hash_sum_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
IBLT2::mutable_hash_sum() {
  // @@protoc_insertion_point(field_mutable_list:file_sync.IBLT2.hash_sum)
  return &hash_sum_;
}

// repeated uint64 count = 3 [packed = true];
inline int IBLT2::count_size() const {
  return count_.size();
}
inline void IBLT2::clear_count() {
  count_.Clear();
}
inline ::google::protobuf::uint64 IBLT2::count(int index) const {
  // @@protoc_insertion_point(field_get:file_sync.IBLT2.count)
  return count_.Get(index);
}
inline void IBLT2::set_count(int index, ::google::protobuf::uint64 value) {
  count_.Set(index, value);
  // @@protoc_insertion_point(field_set:file_sync.IBLT2.count)
}
inline void IBLT2::add_count(::google::protobuf::uint64 value) {
  count_.Add(value);
  // @@protoc_insertion_point(field_add:file_sync.IBLT2.count)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
IBLT2::count() const {
  // @@protoc_insertion_point(field_list:file_sync.IBLT2.count)
  return count_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
IBLT2::mutable_count() {
  // @@protoc_insertion_point(field_mutable_list:file_sync.IBLT2.count)
  return &count_;
}

// -------------------------------------------------------------------

// IBLT_bucket_extended

// required .file_sync.IBLT_bucket bucket = 1;
inline bool IBLT_bucket_extended::has_bucket() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IBLT_bucket_extended::set_has_bucket() {
  _has_bits_[0] |= 0x00000001u;
}
inline void IBLT_bucket_extended::clear_has_bucket() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void IBLT_bucket_extended::clear_bucket() {
  if (bucket_ != NULL) bucket_->::file_sync::IBLT_bucket::Clear();
  clear_has_bucket();
}
inline const ::file_sync::IBLT_bucket& IBLT_bucket_extended::bucket() const {
  // @@protoc_insertion_point(field_get:file_sync.IBLT_bucket_extended.bucket)
  return bucket_ != NULL ? *bucket_ : *default_instance_->bucket_;
}
inline ::file_sync::IBLT_bucket* IBLT_bucket_extended::mutable_bucket() {
  set_has_bucket();
  if (bucket_ == NULL) bucket_ = new ::file_sync::IBLT_bucket;
  // @@protoc_insertion_point(field_mutable:file_sync.IBLT_bucket_extended.bucket)
  return bucket_;
}
inline ::file_sync::IBLT_bucket* IBLT_bucket_extended::release_bucket() {
  clear_has_bucket();
  ::file_sync::IBLT_bucket* temp = bucket_;
  bucket_ = NULL;
  return temp;
}
inline void IBLT_bucket_extended::set_allocated_bucket(::file_sync::IBLT_bucket* bucket) {
  delete bucket_;
  bucket_ = bucket;
  if (bucket) {
    set_has_bucket();
  } else {
    clear_has_bucket();
  }
  // @@protoc_insertion_point(field_set_allocated:file_sync.IBLT_bucket_extended.bucket)
}

// repeated bool has_key = 2 [packed = true];
inline int IBLT_bucket_extended::has_key_size() const {
  return has_key_.size();
}
inline void IBLT_bucket_extended::clear_has_key() {
  has_key_.Clear();
}
inline bool IBLT_bucket_extended::has_key(int index) const {
  // @@protoc_insertion_point(field_get:file_sync.IBLT_bucket_extended.has_key)
  return has_key_.Get(index);
}
inline void IBLT_bucket_extended::set_has_key(int index, bool value) {
  has_key_.Set(index, value);
  // @@protoc_insertion_point(field_set:file_sync.IBLT_bucket_extended.has_key)
}
inline void IBLT_bucket_extended::add_has_key(bool value) {
  has_key_.Add(value);
  // @@protoc_insertion_point(field_add:file_sync.IBLT_bucket_extended.has_key)
}
inline const ::google::protobuf::RepeatedField< bool >&
IBLT_bucket_extended::has_key() const {
  // @@protoc_insertion_point(field_list:file_sync.IBLT_bucket_extended.has_key)
  return has_key_;
}
inline ::google::protobuf::RepeatedField< bool >*
IBLT_bucket_extended::mutable_has_key() {
  // @@protoc_insertion_point(field_mutable_list:file_sync.IBLT_bucket_extended.has_key)
  return &has_key_;
}

// -------------------------------------------------------------------

// IBLT_bucket

// required uint32 key_sum = 1;
inline bool IBLT_bucket::has_key_sum() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IBLT_bucket::set_has_key_sum() {
  _has_bits_[0] |= 0x00000001u;
}
inline void IBLT_bucket::clear_has_key_sum() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void IBLT_bucket::clear_key_sum() {
  key_sum_ = 0u;
  clear_has_key_sum();
}
inline ::google::protobuf::uint32 IBLT_bucket::key_sum() const {
  // @@protoc_insertion_point(field_get:file_sync.IBLT_bucket.key_sum)
  return key_sum_;
}
inline void IBLT_bucket::set_key_sum(::google::protobuf::uint32 value) {
  set_has_key_sum();
  key_sum_ = value;
  // @@protoc_insertion_point(field_set:file_sync.IBLT_bucket.key_sum)
}

// required uint32 hash_sum = 2;
inline bool IBLT_bucket::has_hash_sum() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void IBLT_bucket::set_has_hash_sum() {
  _has_bits_[0] |= 0x00000002u;
}
inline void IBLT_bucket::clear_has_hash_sum() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void IBLT_bucket::clear_hash_sum() {
  hash_sum_ = 0u;
  clear_has_hash_sum();
}
inline ::google::protobuf::uint32 IBLT_bucket::hash_sum() const {
  // @@protoc_insertion_point(field_get:file_sync.IBLT_bucket.hash_sum)
  return hash_sum_;
}
inline void IBLT_bucket::set_hash_sum(::google::protobuf::uint32 value) {
  set_has_hash_sum();
  hash_sum_ = value;
  // @@protoc_insertion_point(field_set:file_sync.IBLT_bucket.hash_sum)
}

// required uint32 count = 3;
inline bool IBLT_bucket::has_count() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void IBLT_bucket::set_has_count() {
  _has_bits_[0] |= 0x00000004u;
}
inline void IBLT_bucket::clear_has_count() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void IBLT_bucket::clear_count() {
  count_ = 0u;
  clear_has_count();
}
inline ::google::protobuf::uint32 IBLT_bucket::count() const {
  // @@protoc_insertion_point(field_get:file_sync.IBLT_bucket.count)
  return count_;
}
inline void IBLT_bucket::set_count(::google::protobuf::uint32 value) {
  set_has_count();
  count_ = value;
  // @@protoc_insertion_point(field_set:file_sync.IBLT_bucket.count)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace file_sync

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_file_5fsync_2eproto__INCLUDED
