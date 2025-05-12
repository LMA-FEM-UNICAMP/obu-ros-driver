// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Depth.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DEPTH__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DEPTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEPTH_RANGE_MIN'.
enum
{
  v2x_msgs__msg__Depth__DEPTH_RANGE_MIN = 0ll
};

/// Constant 'DEPTH_RANGE_MAX'.
enum
{
  v2x_msgs__msg__Depth__DEPTH_RANGE_MAX = 255ll
};

/// Struct defined in msg/Depth in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Depth
{
  int64_t depth;
} v2x_msgs__msg__Depth;

// Struct for a sequence of v2x_msgs__msg__Depth.
typedef struct v2x_msgs__msg__Depth__Sequence
{
  v2x_msgs__msg__Depth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Depth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DEPTH__STRUCT_H_
