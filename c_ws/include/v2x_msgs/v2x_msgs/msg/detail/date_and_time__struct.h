// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DateAndTime.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DATE_AND_TIME__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DATE_AND_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HOURS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DateAndTime__HOURS_RANGE_MIN = 0ll
};

/// Constant 'HOURS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DateAndTime__HOURS_RANGE_MAX = 23ll
};

/// Constant 'MINS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DateAndTime__MINS_RANGE_MIN = 0ll
};

/// Constant 'MINS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DateAndTime__MINS_RANGE_MAX = 59ll
};

/// Constant 'DOUBLE_SECS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DateAndTime__DOUBLE_SECS_RANGE_MIN = 0ll
};

/// Constant 'DOUBLE_SECS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DateAndTime__DOUBLE_SECS_RANGE_MAX = 30ll
};

// Include directives for member types
// Member 'time_date'
#include "v2x_msgs/msg/detail/date_compact__struct.h"

/// Struct defined in msg/DateAndTime in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DateAndTime
{
  v2x_msgs__msg__DateCompact time_date;
  int64_t hours;
  int64_t mins;
  int64_t double_secs;
} v2x_msgs__msg__DateAndTime;

// Struct for a sequence of v2x_msgs__msg__DateAndTime.
typedef struct v2x_msgs__msg__DateAndTime__Sequence
{
  v2x_msgs__msg__DateAndTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DateAndTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DATE_AND_TIME__STRUCT_H_
