// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SemiMajorAxisOrientation.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SEMI_MAJOR_AXIS_ORIENTATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SEMI_MAJOR_AXIS_ORIENTATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SEMI_MAJOR_AXIS_ORIENTATION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SemiMajorAxisOrientation__SEMI_MAJOR_AXIS_ORIENTATION_RANGE_MIN = 0ll
};

/// Constant 'SEMI_MAJOR_AXIS_ORIENTATION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SemiMajorAxisOrientation__SEMI_MAJOR_AXIS_ORIENTATION_RANGE_MAX = 65535ll
};

/// Struct defined in msg/SemiMajorAxisOrientation in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SemiMajorAxisOrientation
{
  int64_t semi_major_axis_orientation;
} v2x_msgs__msg__SemiMajorAxisOrientation;

// Struct for a sequence of v2x_msgs__msg__SemiMajorAxisOrientation.
typedef struct v2x_msgs__msg__SemiMajorAxisOrientation__Sequence
{
  v2x_msgs__msg__SemiMajorAxisOrientation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SemiMajorAxisOrientation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SEMI_MAJOR_AXIS_ORIENTATION__STRUCT_H_
