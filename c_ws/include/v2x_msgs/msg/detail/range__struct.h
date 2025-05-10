// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Range.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RANGE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RANGE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__Range__RANGE_RANGE_MIN = 0ll
};

/// Constant 'RANGE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__Range__RANGE_RANGE_MAX = 10000ll
};

/// Constant 'RANGE_ZERO_POINT_ONE_METER'.
enum
{
  v2x_msgs__msg__Range__RANGE_ZERO_POINT_ONE_METER = 1ll
};

/// Constant 'RANGE_ONE_METER'.
enum
{
  v2x_msgs__msg__Range__RANGE_ONE_METER = 10ll
};

/// Struct defined in msg/Range in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Range
{
  int64_t range;
} v2x_msgs__msg__Range;

// Struct for a sequence of v2x_msgs__msg__Range.
typedef struct v2x_msgs__msg__Range__Sequence
{
  v2x_msgs__msg__Range * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Range__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RANGE__STRUCT_H_
