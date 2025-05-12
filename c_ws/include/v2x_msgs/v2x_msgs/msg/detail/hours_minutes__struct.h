// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/HoursMinutes.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__HOURS_MINUTES__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__HOURS_MINUTES__STRUCT_H_

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
  v2x_msgs__msg__HoursMinutes__HOURS_RANGE_MIN = 0ll
};

/// Constant 'HOURS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__HoursMinutes__HOURS_RANGE_MAX = 23ll
};

/// Constant 'MINS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__HoursMinutes__MINS_RANGE_MIN = 0ll
};

/// Constant 'MINS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__HoursMinutes__MINS_RANGE_MAX = 59ll
};

/// Struct defined in msg/HoursMinutes in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__HoursMinutes
{
  int64_t hours;
  int64_t mins;
} v2x_msgs__msg__HoursMinutes;

// Struct for a sequence of v2x_msgs__msg__HoursMinutes.
typedef struct v2x_msgs__msg__HoursMinutes__Sequence
{
  v2x_msgs__msg__HoursMinutes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__HoursMinutes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__HOURS_MINUTES__STRUCT_H_
