// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/InternationalSignSpeedLimits.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_SPEED_LIMITS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_SPEED_LIMITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPEED_LIMIT_MAX_RANGE_MIN'.
enum
{
  v2x_msgs__msg__InternationalSignSpeedLimits__SPEED_LIMIT_MAX_RANGE_MIN = 0ll
};

/// Constant 'SPEED_LIMIT_MAX_RANGE_MAX'.
enum
{
  v2x_msgs__msg__InternationalSignSpeedLimits__SPEED_LIMIT_MAX_RANGE_MAX = 250ll
};

/// Constant 'SPEED_LIMIT_MIN_RANGE_MIN'.
enum
{
  v2x_msgs__msg__InternationalSignSpeedLimits__SPEED_LIMIT_MIN_RANGE_MIN = 0ll
};

/// Constant 'SPEED_LIMIT_MIN_RANGE_MAX'.
enum
{
  v2x_msgs__msg__InternationalSignSpeedLimits__SPEED_LIMIT_MIN_RANGE_MAX = 250ll
};

/// Constant 'UNIT_RANGE_MIN'.
enum
{
  v2x_msgs__msg__InternationalSignSpeedLimits__UNIT_RANGE_MIN = 0ll
};

/// Constant 'UNIT_RANGE_MAX'.
enum
{
  v2x_msgs__msg__InternationalSignSpeedLimits__UNIT_RANGE_MAX = 1ll
};

// Include directives for member types
// Member 'unit'
#include "v2x_msgs/msg/detail/code_units__struct.h"

/// Struct defined in msg/InternationalSignSpeedLimits in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__InternationalSignSpeedLimits
{
  /// Optional Field
  bool speed_limit_max_present;
  int64_t speed_limit_max;
  /// Optional Field
  bool speed_limit_min_present;
  int64_t speed_limit_min;
  v2x_msgs__msg__CodeUnits unit;
} v2x_msgs__msg__InternationalSignSpeedLimits;

// Struct for a sequence of v2x_msgs__msg__InternationalSignSpeedLimits.
typedef struct v2x_msgs__msg__InternationalSignSpeedLimits__Sequence
{
  v2x_msgs__msg__InternationalSignSpeedLimits * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__InternationalSignSpeedLimits__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_SPEED_LIMITS__STRUCT_H_
