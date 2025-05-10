// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LayoutComponents.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LAYOUT_COMPONENTS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LAYOUT_COMPONENTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'components'
#include "v2x_msgs/msg/detail/layout_component__struct.h"

/// Struct defined in msg/LayoutComponents in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LayoutComponents
{
  /// size(1..4)
  v2x_msgs__msg__LayoutComponent__Sequence components;
} v2x_msgs__msg__LayoutComponents;

// Struct for a sequence of v2x_msgs__msg__LayoutComponents.
typedef struct v2x_msgs__msg__LayoutComponents__Sequence
{
  v2x_msgs__msg__LayoutComponents * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LayoutComponents__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LAYOUT_COMPONENTS__STRUCT_H_
