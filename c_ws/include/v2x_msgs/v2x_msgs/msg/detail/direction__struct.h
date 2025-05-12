// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Direction.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DIRECTION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DIRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DIRECTION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__Direction__DIRECTION_RANGE_MIN = 0ll
};

/// Constant 'DIRECTION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__Direction__DIRECTION_RANGE_MAX = 3ll
};

/// Constant 'DIRECTION_SAME_DIRECTION'.
enum
{
  v2x_msgs__msg__Direction__DIRECTION_SAME_DIRECTION = 0ll
};

/// Constant 'DIRECTION_OPPOSITE_DIRECTION'.
enum
{
  v2x_msgs__msg__Direction__DIRECTION_OPPOSITE_DIRECTION = 1ll
};

/// Constant 'DIRECTION_BOTH_DIRECTIONS'.
enum
{
  v2x_msgs__msg__Direction__DIRECTION_BOTH_DIRECTIONS = 2ll
};

/// Constant 'DIRECTION_VALUE_NOT_USED'.
enum
{
  v2x_msgs__msg__Direction__DIRECTION_VALUE_NOT_USED = 3ll
};

/// Struct defined in msg/Direction in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Direction
{
  int64_t direction;
} v2x_msgs__msg__Direction;

// Struct for a sequence of v2x_msgs__msg__Direction.
typedef struct v2x_msgs__msg__Direction__Sequence
{
  v2x_msgs__msg__Direction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Direction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DIRECTION__STRUCT_H_
