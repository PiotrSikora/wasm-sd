// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/monitoring/v3/metric.proto

#include "google/monitoring/v3/metric.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_google_2fapi_2fmetric_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fapi_2fmetric_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_Metric;
}  // namespace protobuf_google_2fapi_2fmetric_2eproto
namespace protobuf_google_2fapi_2fmonitored_5fresource_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fapi_2fmonitored_5fresource_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_MonitoredResource;
}  // namespace protobuf_google_2fapi_2fmonitored_5fresource_2eproto
namespace protobuf_google_2fmonitoring_2fv3_2fcommon_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fmonitoring_2fv3_2fcommon_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_TimeInterval;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fmonitoring_2fv3_2fcommon_2eproto ::google::protobuf::internal::SCCInfo<1> scc_info_TypedValue;
}  // namespace protobuf_google_2fmonitoring_2fv3_2fcommon_2eproto
namespace protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Point;
}  // namespace protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto
namespace google {
namespace monitoring {
namespace v3 {
class PointDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Point>
      _instance;
} _Point_default_instance_;
class TimeSeriesDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TimeSeries>
      _instance;
} _TimeSeries_default_instance_;
}  // namespace v3
}  // namespace monitoring
}  // namespace google
namespace protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto {
static void InitDefaultsPoint() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::monitoring::v3::_Point_default_instance_;
    new (ptr) ::google::monitoring::v3::Point();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::monitoring::v3::Point::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_Point =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsPoint}, {
      &protobuf_google_2fmonitoring_2fv3_2fcommon_2eproto::scc_info_TimeInterval.base,
      &protobuf_google_2fmonitoring_2fv3_2fcommon_2eproto::scc_info_TypedValue.base,}};

static void InitDefaultsTimeSeries() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::monitoring::v3::_TimeSeries_default_instance_;
    new (ptr) ::google::monitoring::v3::TimeSeries();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::monitoring::v3::TimeSeries::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<3> scc_info_TimeSeries =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsTimeSeries}, {
      &protobuf_google_2fapi_2fmetric_2eproto::scc_info_Metric.base,
      &protobuf_google_2fapi_2fmonitored_5fresource_2eproto::scc_info_MonitoredResource.base,
      &protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto::scc_info_Point.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Point.base);
  ::google::protobuf::internal::InitSCC(&scc_info_TimeSeries.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::Point, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::Point, interval_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::Point, value_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::TimeSeries, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::TimeSeries, metric_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::TimeSeries, resource_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::TimeSeries, metric_kind_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::TimeSeries, value_type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::google::monitoring::v3::TimeSeries, points_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::monitoring::v3::Point)},
  { 7, -1, sizeof(::google::monitoring::v3::TimeSeries)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::monitoring::v3::_Point_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::google::monitoring::v3::_TimeSeries_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "google/monitoring/v3/metric.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n!google/monitoring/v3/metric.proto\022\024goo"
      "gle.monitoring.v3\032\027google/api/metric.pro"
      "to\032#google/api/monitored_resource.proto\032"
      "!google/monitoring/v3/common.proto\"n\n\005Po"
      "int\0224\n\010interval\030\001 \001(\0132\".google.monitorin"
      "g.v3.TimeInterval\022/\n\005value\030\002 \001(\0132 .googl"
      "e.monitoring.v3.TypedValue\"\210\002\n\nTimeSerie"
      "s\022\"\n\006metric\030\001 \001(\0132\022.google.api.Metric\022/\n"
      "\010resource\030\002 \001(\0132\035.google.api.MonitoredRe"
      "source\022<\n\013metric_kind\030\003 \001(\0162\'.google.api"
      ".MetricDescriptor.MetricKind\022:\n\nvalue_ty"
      "pe\030\004 \001(\0162&.google.api.MetricDescriptor.V"
      "alueType\022+\n\006points\030\005 \003(\0132\033.google.monito"
      "ring.v3.PointB\243\001\n\030com.google.monitoring."
      "v3B\013MetricProtoP\001Z>google.golang.org/gen"
      "proto/googleapis/monitoring/v3;monitorin"
      "g\252\002\032Google.Cloud.Monitoring.V3\312\002\032Google\\"
      "Cloud\\Monitoring\\V3b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 707);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/monitoring/v3/metric.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fapi_2fmetric_2eproto::AddDescriptors();
  ::protobuf_google_2fapi_2fmonitored_5fresource_2eproto::AddDescriptors();
  ::protobuf_google_2fmonitoring_2fv3_2fcommon_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto
namespace google {
namespace monitoring {
namespace v3 {

// ===================================================================

void Point::InitAsDefaultInstance() {
  ::google::monitoring::v3::_Point_default_instance_._instance.get_mutable()->interval_ = const_cast< ::google::monitoring::v3::TimeInterval*>(
      ::google::monitoring::v3::TimeInterval::internal_default_instance());
  ::google::monitoring::v3::_Point_default_instance_._instance.get_mutable()->value_ = const_cast< ::google::monitoring::v3::TypedValue*>(
      ::google::monitoring::v3::TypedValue::internal_default_instance());
}
void Point::clear_interval() {
  if (GetArenaNoVirtual() == NULL && interval_ != NULL) {
    delete interval_;
  }
  interval_ = NULL;
}
void Point::clear_value() {
  if (GetArenaNoVirtual() == NULL && value_ != NULL) {
    delete value_;
  }
  value_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Point::kIntervalFieldNumber;
const int Point::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Point::Point()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto::scc_info_Point.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.monitoring.v3.Point)
}
Point::Point(const Point& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_interval()) {
    interval_ = new ::google::monitoring::v3::TimeInterval(*from.interval_);
  } else {
    interval_ = NULL;
  }
  if (from.has_value()) {
    value_ = new ::google::monitoring::v3::TypedValue(*from.value_);
  } else {
    value_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:google.monitoring.v3.Point)
}

void Point::SharedCtor() {
  ::memset(&interval_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&value_) -
      reinterpret_cast<char*>(&interval_)) + sizeof(value_));
}

Point::~Point() {
  // @@protoc_insertion_point(destructor:google.monitoring.v3.Point)
  SharedDtor();
}

void Point::SharedDtor() {
  if (this != internal_default_instance()) delete interval_;
  if (this != internal_default_instance()) delete value_;
}

void Point::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Point::descriptor() {
  ::protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Point& Point::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto::scc_info_Point.base);
  return *internal_default_instance();
}


void Point::Clear() {
// @@protoc_insertion_point(message_clear_start:google.monitoring.v3.Point)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && interval_ != NULL) {
    delete interval_;
  }
  interval_ = NULL;
  if (GetArenaNoVirtual() == NULL && value_ != NULL) {
    delete value_;
  }
  value_ = NULL;
  _internal_metadata_.Clear();
}

bool Point::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.monitoring.v3.Point)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.monitoring.v3.TimeInterval interval = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_interval()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.monitoring.v3.TypedValue value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_value()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.monitoring.v3.Point)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.monitoring.v3.Point)
  return false;
#undef DO_
}

void Point::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.monitoring.v3.Point)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.monitoring.v3.TimeInterval interval = 1;
  if (this->has_interval()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_interval(), output);
  }

  // .google.monitoring.v3.TypedValue value = 2;
  if (this->has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_value(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.monitoring.v3.Point)
}

::google::protobuf::uint8* Point::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.monitoring.v3.Point)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.monitoring.v3.TimeInterval interval = 1;
  if (this->has_interval()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_interval(), deterministic, target);
  }

  // .google.monitoring.v3.TypedValue value = 2;
  if (this->has_value()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_value(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.monitoring.v3.Point)
  return target;
}

size_t Point::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.monitoring.v3.Point)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .google.monitoring.v3.TimeInterval interval = 1;
  if (this->has_interval()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *interval_);
  }

  // .google.monitoring.v3.TypedValue value = 2;
  if (this->has_value()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *value_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Point::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.monitoring.v3.Point)
  GOOGLE_DCHECK_NE(&from, this);
  const Point* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Point>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.monitoring.v3.Point)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.monitoring.v3.Point)
    MergeFrom(*source);
  }
}

void Point::MergeFrom(const Point& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.monitoring.v3.Point)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_interval()) {
    mutable_interval()->::google::monitoring::v3::TimeInterval::MergeFrom(from.interval());
  }
  if (from.has_value()) {
    mutable_value()->::google::monitoring::v3::TypedValue::MergeFrom(from.value());
  }
}

void Point::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.monitoring.v3.Point)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Point::CopyFrom(const Point& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.monitoring.v3.Point)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Point::IsInitialized() const {
  return true;
}

void Point::Swap(Point* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Point::InternalSwap(Point* other) {
  using std::swap;
  swap(interval_, other->interval_);
  swap(value_, other->value_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Point::GetMetadata() const {
  protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void TimeSeries::InitAsDefaultInstance() {
  ::google::monitoring::v3::_TimeSeries_default_instance_._instance.get_mutable()->metric_ = const_cast< ::google::api::Metric*>(
      ::google::api::Metric::internal_default_instance());
  ::google::monitoring::v3::_TimeSeries_default_instance_._instance.get_mutable()->resource_ = const_cast< ::google::api::MonitoredResource*>(
      ::google::api::MonitoredResource::internal_default_instance());
}
void TimeSeries::clear_metric() {
  if (GetArenaNoVirtual() == NULL && metric_ != NULL) {
    delete metric_;
  }
  metric_ = NULL;
}
void TimeSeries::clear_resource() {
  if (GetArenaNoVirtual() == NULL && resource_ != NULL) {
    delete resource_;
  }
  resource_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TimeSeries::kMetricFieldNumber;
const int TimeSeries::kResourceFieldNumber;
const int TimeSeries::kMetricKindFieldNumber;
const int TimeSeries::kValueTypeFieldNumber;
const int TimeSeries::kPointsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TimeSeries::TimeSeries()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto::scc_info_TimeSeries.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.monitoring.v3.TimeSeries)
}
TimeSeries::TimeSeries(const TimeSeries& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      points_(from.points_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_metric()) {
    metric_ = new ::google::api::Metric(*from.metric_);
  } else {
    metric_ = NULL;
  }
  if (from.has_resource()) {
    resource_ = new ::google::api::MonitoredResource(*from.resource_);
  } else {
    resource_ = NULL;
  }
  ::memcpy(&metric_kind_, &from.metric_kind_,
    static_cast<size_t>(reinterpret_cast<char*>(&value_type_) -
    reinterpret_cast<char*>(&metric_kind_)) + sizeof(value_type_));
  // @@protoc_insertion_point(copy_constructor:google.monitoring.v3.TimeSeries)
}

void TimeSeries::SharedCtor() {
  ::memset(&metric_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&value_type_) -
      reinterpret_cast<char*>(&metric_)) + sizeof(value_type_));
}

TimeSeries::~TimeSeries() {
  // @@protoc_insertion_point(destructor:google.monitoring.v3.TimeSeries)
  SharedDtor();
}

void TimeSeries::SharedDtor() {
  if (this != internal_default_instance()) delete metric_;
  if (this != internal_default_instance()) delete resource_;
}

void TimeSeries::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* TimeSeries::descriptor() {
  ::protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TimeSeries& TimeSeries::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto::scc_info_TimeSeries.base);
  return *internal_default_instance();
}


void TimeSeries::Clear() {
// @@protoc_insertion_point(message_clear_start:google.monitoring.v3.TimeSeries)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  points_.Clear();
  if (GetArenaNoVirtual() == NULL && metric_ != NULL) {
    delete metric_;
  }
  metric_ = NULL;
  if (GetArenaNoVirtual() == NULL && resource_ != NULL) {
    delete resource_;
  }
  resource_ = NULL;
  ::memset(&metric_kind_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&value_type_) -
      reinterpret_cast<char*>(&metric_kind_)) + sizeof(value_type_));
  _internal_metadata_.Clear();
}

bool TimeSeries::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.monitoring.v3.TimeSeries)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .google.api.Metric metric = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_metric()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.api.MonitoredResource resource = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_resource()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.api.MetricDescriptor.MetricKind metric_kind = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_metric_kind(static_cast< ::google::api::MetricDescriptor_MetricKind >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.api.MetricDescriptor.ValueType value_type = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_value_type(static_cast< ::google::api::MetricDescriptor_ValueType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .google.monitoring.v3.Point points = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_points()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.monitoring.v3.TimeSeries)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.monitoring.v3.TimeSeries)
  return false;
#undef DO_
}

void TimeSeries::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.monitoring.v3.TimeSeries)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.api.Metric metric = 1;
  if (this->has_metric()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_metric(), output);
  }

  // .google.api.MonitoredResource resource = 2;
  if (this->has_resource()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_resource(), output);
  }

  // .google.api.MetricDescriptor.MetricKind metric_kind = 3;
  if (this->metric_kind() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->metric_kind(), output);
  }

  // .google.api.MetricDescriptor.ValueType value_type = 4;
  if (this->value_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->value_type(), output);
  }

  // repeated .google.monitoring.v3.Point points = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->points_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5,
      this->points(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:google.monitoring.v3.TimeSeries)
}

::google::protobuf::uint8* TimeSeries::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:google.monitoring.v3.TimeSeries)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.api.Metric metric = 1;
  if (this->has_metric()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_metric(), deterministic, target);
  }

  // .google.api.MonitoredResource resource = 2;
  if (this->has_resource()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_resource(), deterministic, target);
  }

  // .google.api.MetricDescriptor.MetricKind metric_kind = 3;
  if (this->metric_kind() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->metric_kind(), target);
  }

  // .google.api.MetricDescriptor.ValueType value_type = 4;
  if (this->value_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->value_type(), target);
  }

  // repeated .google.monitoring.v3.Point points = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->points_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        5, this->points(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.monitoring.v3.TimeSeries)
  return target;
}

size_t TimeSeries::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.monitoring.v3.TimeSeries)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .google.monitoring.v3.Point points = 5;
  {
    unsigned int count = static_cast<unsigned int>(this->points_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->points(static_cast<int>(i)));
    }
  }

  // .google.api.Metric metric = 1;
  if (this->has_metric()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *metric_);
  }

  // .google.api.MonitoredResource resource = 2;
  if (this->has_resource()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *resource_);
  }

  // .google.api.MetricDescriptor.MetricKind metric_kind = 3;
  if (this->metric_kind() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->metric_kind());
  }

  // .google.api.MetricDescriptor.ValueType value_type = 4;
  if (this->value_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->value_type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TimeSeries::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.monitoring.v3.TimeSeries)
  GOOGLE_DCHECK_NE(&from, this);
  const TimeSeries* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TimeSeries>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.monitoring.v3.TimeSeries)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.monitoring.v3.TimeSeries)
    MergeFrom(*source);
  }
}

void TimeSeries::MergeFrom(const TimeSeries& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.monitoring.v3.TimeSeries)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  points_.MergeFrom(from.points_);
  if (from.has_metric()) {
    mutable_metric()->::google::api::Metric::MergeFrom(from.metric());
  }
  if (from.has_resource()) {
    mutable_resource()->::google::api::MonitoredResource::MergeFrom(from.resource());
  }
  if (from.metric_kind() != 0) {
    set_metric_kind(from.metric_kind());
  }
  if (from.value_type() != 0) {
    set_value_type(from.value_type());
  }
}

void TimeSeries::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.monitoring.v3.TimeSeries)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TimeSeries::CopyFrom(const TimeSeries& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.monitoring.v3.TimeSeries)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TimeSeries::IsInitialized() const {
  return true;
}

void TimeSeries::Swap(TimeSeries* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TimeSeries::InternalSwap(TimeSeries* other) {
  using std::swap;
  CastToBase(&points_)->InternalSwap(CastToBase(&other->points_));
  swap(metric_, other->metric_);
  swap(resource_, other->resource_);
  swap(metric_kind_, other->metric_kind_);
  swap(value_type_, other->value_type_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata TimeSeries::GetMetadata() const {
  protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_google_2fmonitoring_2fv3_2fmetric_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v3
}  // namespace monitoring
}  // namespace google
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::monitoring::v3::Point* Arena::CreateMaybeMessage< ::google::monitoring::v3::Point >(Arena* arena) {
  return Arena::CreateInternal< ::google::monitoring::v3::Point >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::google::monitoring::v3::TimeSeries* Arena::CreateMaybeMessage< ::google::monitoring::v3::TimeSeries >(Arena* arena) {
  return Arena::CreateInternal< ::google::monitoring::v3::TimeSeries >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
