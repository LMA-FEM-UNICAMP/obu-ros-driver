// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ValidityDuration.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VALIDITY_DURATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VALIDITY_DURATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VALIDITY_DURATION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ValidityDuration__VALIDITY_DURATION_RANGE_MIN = 0ll
};

/// Constant 'VALIDITY_DURATION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ValidityDuration__VALIDITY_DURATION_RANGE_MAX = 86400ll
};

/// Constant 'VALIDITY_DURATION_TIME_OF_DETECTION'.
enum
{
  v2x_msgs__msg__ValidityDuration__VALIDITY_DURATION_TIME_OF_DETECTION = 0ll
};

/// Constant 'VALIDITY_DURATION_ONE_SECOND_AFTER_DETECTION'.
enum
{
  v2x_msgs__msg__ValidityDuration__VALIDITY_DURATION_ONE_SECOND_AFTER_DETECTION = 1ll
};

/// Struct defined in msg/ValidityDuration in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ValidityDuration
{
  int64_t validity_duration;
} v2x_msgs__msg__ValidityDuration;

// Struct for a sequence of v2x_msgs__msg__ValidityDuration.
typedef struct v2x_msgs__msg__ValidityDuration__Sequence
{
  v2x_msgs__msg__ValidityDuration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ValidityDuration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VALIDITY_DURATION__STRUCT_H_
