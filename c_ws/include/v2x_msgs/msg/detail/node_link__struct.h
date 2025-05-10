// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/NodeLink.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__NODE_LINK__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__NODE_LINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link'
#include "v2x_msgs/msg/detail/node__struct.h"

/// Struct defined in msg/NodeLink in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__NodeLink
{
  /// size(1..5)
  v2x_msgs__msg__Node__Sequence link;
} v2x_msgs__msg__NodeLink;

// Struct for a sequence of v2x_msgs__msg__NodeLink.
typedef struct v2x_msgs__msg__NodeLink__Sequence
{
  v2x_msgs__msg__NodeLink * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__NodeLink__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__NODE_LINK__STRUCT_H_
