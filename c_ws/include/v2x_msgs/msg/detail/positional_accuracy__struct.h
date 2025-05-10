// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PositionalAccuracy.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'semi_major'
#include "v2x_msgs/msg/detail/semi_major_axis_accuracy__struct.h"
// Member 'semi_minor'
#include "v2x_msgs/msg/detail/semi_minor_axis_accuracy__struct.h"
// Member 'orientation'
#include "v2x_msgs/msg/detail/semi_major_axis_orientation__struct.h"

/// Struct defined in msg/PositionalAccuracy in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PositionalAccuracy
{
  v2x_msgs__msg__SemiMajorAxisAccuracy semi_major;
  v2x_msgs__msg__SemiMinorAxisAccuracy semi_minor;
  v2x_msgs__msg__SemiMajorAxisOrientation orientation;
} v2x_msgs__msg__PositionalAccuracy;

// Struct for a sequence of v2x_msgs__msg__PositionalAccuracy.
typedef struct v2x_msgs__msg__PositionalAccuracy__Sequence
{
  v2x_msgs__msg__PositionalAccuracy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PositionalAccuracy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__STRUCT_H_
