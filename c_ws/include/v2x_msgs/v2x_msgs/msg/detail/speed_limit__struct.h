// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SpeedLimit.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SPEED_LIMIT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SPEED_LIMIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPEED_LIMIT_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SpeedLimit__SPEED_LIMIT_RANGE_MIN = 1ll
};

/// Constant 'SPEED_LIMIT_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SpeedLimit__SPEED_LIMIT_RANGE_MAX = 255ll
};

/// Constant 'SPEED_LIMIT_ONE_KM_PER_HOUR'.
enum
{
  v2x_msgs__msg__SpeedLimit__SPEED_LIMIT_ONE_KM_PER_HOUR = 1ll
};

/// Struct defined in msg/SpeedLimit in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SpeedLimit
{
  int64_t speed_limit;
} v2x_msgs__msg__SpeedLimit;

// Struct for a sequence of v2x_msgs__msg__SpeedLimit.
typedef struct v2x_msgs__msg__SpeedLimit__Sequence
{
  v2x_msgs__msg__SpeedLimit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SpeedLimit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SPEED_LIMIT__STRUCT_H_
