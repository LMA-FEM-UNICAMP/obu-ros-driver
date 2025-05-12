// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/YawRateValue.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__YAW_RATE_VALUE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__YAW_RATE_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'YAW_RATE_VALUE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__YawRateValue__YAW_RATE_VALUE_RANGE_MIN = -32766ll
};

/// Constant 'YAW_RATE_VALUE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__YawRateValue__YAW_RATE_VALUE_RANGE_MAX = 32767ll
};

/// Constant 'YAW_RATE_VALUE_STRAIGHT'.
enum
{
  v2x_msgs__msg__YawRateValue__YAW_RATE_VALUE_STRAIGHT = 0ll
};

/// Constant 'YAW_RATE_VALUE_DEG_SEC_000_01TO_RIGHT'.
enum
{
  v2x_msgs__msg__YawRateValue__YAW_RATE_VALUE_DEG_SEC_000_01TO_RIGHT = -1ll
};

/// Constant 'YAW_RATE_VALUE_DEG_SEC_000_01TO_LEFT'.
enum
{
  v2x_msgs__msg__YawRateValue__YAW_RATE_VALUE_DEG_SEC_000_01TO_LEFT = 1ll
};

/// Constant 'YAW_RATE_VALUE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__YawRateValue__YAW_RATE_VALUE_UNAVAILABLE = 32767ll
};

/// Struct defined in msg/YawRateValue in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__YawRateValue
{
  int64_t yaw_rate_value;
} v2x_msgs__msg__YawRateValue;

// Struct for a sequence of v2x_msgs__msg__YawRateValue.
typedef struct v2x_msgs__msg__YawRateValue__Sequence
{
  v2x_msgs__msg__YawRateValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__YawRateValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__YAW_RATE_VALUE__STRUCT_H_
