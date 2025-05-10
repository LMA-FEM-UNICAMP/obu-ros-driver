// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RearOverhang.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__REAR_OVERHANG__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__REAR_OVERHANG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REAR_OVERHANG_RANGE_MIN'.
enum
{
  v2x_msgs__msg__RearOverhang__REAR_OVERHANG_RANGE_MIN = 0ll
};

/// Constant 'REAR_OVERHANG_RANGE_MAX'.
enum
{
  v2x_msgs__msg__RearOverhang__REAR_OVERHANG_RANGE_MAX = 150ll
};

/// Constant 'REAR_OVERHANG_ZERO_POINT_ONE_METER'.
enum
{
  v2x_msgs__msg__RearOverhang__REAR_OVERHANG_ZERO_POINT_ONE_METER = 1ll
};

/// Constant 'REAR_OVERHANG_ONE_METER'.
enum
{
  v2x_msgs__msg__RearOverhang__REAR_OVERHANG_ONE_METER = 10ll
};

/// Struct defined in msg/RearOverhang in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RearOverhang
{
  int64_t rear_overhang;
} v2x_msgs__msg__RearOverhang;

// Struct for a sequence of v2x_msgs__msg__RearOverhang.
typedef struct v2x_msgs__msg__RearOverhang__Sequence
{
  v2x_msgs__msg__RearOverhang * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RearOverhang__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__REAR_OVERHANG__STRUCT_H_
