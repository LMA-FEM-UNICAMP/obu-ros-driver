// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DynamicStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DYNAMIC_STATUS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DYNAMIC_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DYNAMIC_STATUS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DynamicStatus__DYNAMIC_STATUS_RANGE_MIN = 0ll
};

/// Constant 'DYNAMIC_STATUS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DynamicStatus__DYNAMIC_STATUS_RANGE_MAX = 2ll
};

/// Constant 'DYNAMIC_STATUS_DYNAMIC'.
enum
{
  v2x_msgs__msg__DynamicStatus__DYNAMIC_STATUS_DYNAMIC = 0ll
};

/// Constant 'DYNAMIC_STATUS_HAS_BEEN_DYNAMIC'.
enum
{
  v2x_msgs__msg__DynamicStatus__DYNAMIC_STATUS_HAS_BEEN_DYNAMIC = 1ll
};

/// Constant 'DYNAMIC_STATUS_STATIC'.
enum
{
  v2x_msgs__msg__DynamicStatus__DYNAMIC_STATUS_STATIC = 2ll
};

/// Struct defined in msg/DynamicStatus in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DynamicStatus
{
  int64_t dynamic_status;
} v2x_msgs__msg__DynamicStatus;

// Struct for a sequence of v2x_msgs__msg__DynamicStatus.
typedef struct v2x_msgs__msg__DynamicStatus__Sequence
{
  v2x_msgs__msg__DynamicStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DynamicStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DYNAMIC_STATUS__STRUCT_H_
