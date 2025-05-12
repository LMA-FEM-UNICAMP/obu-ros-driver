// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TimeMark.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TIME_MARK__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TIME_MARK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TIME_MARK_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TimeMark__TIME_MARK_RANGE_MIN = 0ll
};

/// Constant 'TIME_MARK_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TimeMark__TIME_MARK_RANGE_MAX = 36001ll
};

/// Struct defined in msg/TimeMark in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TimeMark
{
  int64_t time_mark;
} v2x_msgs__msg__TimeMark;

// Struct for a sequence of v2x_msgs__msg__TimeMark.
typedef struct v2x_msgs__msg__TimeMark__Sequence
{
  v2x_msgs__msg__TimeMark * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TimeMark__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TIME_MARK__STRUCT_H_
