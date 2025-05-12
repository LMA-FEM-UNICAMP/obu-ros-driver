// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SemiAxisLength.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SEMI_AXIS_LENGTH__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SEMI_AXIS_LENGTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SEMI_AXIS_LENGTH_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SemiAxisLength__SEMI_AXIS_LENGTH_RANGE_MIN = 0ll
};

/// Constant 'SEMI_AXIS_LENGTH_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SemiAxisLength__SEMI_AXIS_LENGTH_RANGE_MAX = 4095ll
};

/// Constant 'SEMI_AXIS_LENGTH_ONE_CENTIMETER'.
enum
{
  v2x_msgs__msg__SemiAxisLength__SEMI_AXIS_LENGTH_ONE_CENTIMETER = 1ll
};

/// Constant 'SEMI_AXIS_LENGTH_OUT_OF_RANGE'.
enum
{
  v2x_msgs__msg__SemiAxisLength__SEMI_AXIS_LENGTH_OUT_OF_RANGE = 4094ll
};

/// Constant 'SEMI_AXIS_LENGTH_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__SemiAxisLength__SEMI_AXIS_LENGTH_UNAVAILABLE = 4095ll
};

/// Struct defined in msg/SemiAxisLength in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SemiAxisLength
{
  int64_t semi_axis_length;
} v2x_msgs__msg__SemiAxisLength;

// Struct for a sequence of v2x_msgs__msg__SemiAxisLength.
typedef struct v2x_msgs__msg__SemiAxisLength__Sequence
{
  v2x_msgs__msg__SemiAxisLength * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SemiAxisLength__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SEMI_AXIS_LENGTH__STRUCT_H_
