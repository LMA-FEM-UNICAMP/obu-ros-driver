// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/OffsetB10.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__OFFSET_B10__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__OFFSET_B10__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFFSET_B10_RANGE_MIN'.
enum
{
  v2x_msgs__msg__OffsetB10__OFFSET_B10_RANGE_MIN = -512ll
};

/// Constant 'OFFSET_B10_RANGE_MAX'.
enum
{
  v2x_msgs__msg__OffsetB10__OFFSET_B10_RANGE_MAX = 511ll
};

/// Struct defined in msg/OffsetB10 in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__OffsetB10
{
  int64_t offset_b10;
} v2x_msgs__msg__OffsetB10;

// Struct for a sequence of v2x_msgs__msg__OffsetB10.
typedef struct v2x_msgs__msg__OffsetB10__Sequence
{
  v2x_msgs__msg__OffsetB10 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__OffsetB10__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__OFFSET_B10__STRUCT_H_
