// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ActionType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ACTION_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ACTION_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACTION_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ActionType__ACTION_TYPE_RANGE_MIN = 0ll
};

/// Constant 'ACTION_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ActionType__ACTION_TYPE_RANGE_MAX = 127ll
};

/// Struct defined in msg/ActionType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ActionType
{
  int64_t action_type;
} v2x_msgs__msg__ActionType;

// Struct for a sequence of v2x_msgs__msg__ActionType.
typedef struct v2x_msgs__msg__ActionType__Sequence
{
  v2x_msgs__msg__ActionType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ActionType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ACTION_TYPE__STRUCT_H_
