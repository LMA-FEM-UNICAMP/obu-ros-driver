// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RTCMRevision.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RTCM_REVISION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RTCM_REVISION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RTCMREVISION_UNKNOWN'.
enum
{
  v2x_msgs__msg__RTCMRevision__RTCMREVISION_UNKNOWN = 0ll
};

/// Constant 'RTCMREVISION_RTCM_REV2'.
enum
{
  v2x_msgs__msg__RTCMRevision__RTCMREVISION_RTCM_REV2 = 1ll
};

/// Constant 'RTCMREVISION_RTCM_REV3'.
enum
{
  v2x_msgs__msg__RTCMRevision__RTCMREVISION_RTCM_REV3 = 2ll
};

/// Constant 'RTCMREVISION_RESERVED'.
enum
{
  v2x_msgs__msg__RTCMRevision__RTCMREVISION_RESERVED = 3ll
};

/// Struct defined in msg/RTCMRevision in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RTCMRevision
{
  int64_t rtcm_revision;
} v2x_msgs__msg__RTCMRevision;

// Struct for a sequence of v2x_msgs__msg__RTCMRevision.
typedef struct v2x_msgs__msg__RTCMRevision__Sequence
{
  v2x_msgs__msg__RTCMRevision * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RTCMRevision__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RTCM_REVISION__STRUCT_H_
