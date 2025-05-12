// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/NodeXY20b.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__NODE_XY20B__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__NODE_XY20B__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
#include "v2x_msgs/msg/detail/offset_b10__struct.h"

/// Struct defined in msg/NodeXY20b in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__NodeXY20b
{
  v2x_msgs__msg__OffsetB10 x;
  v2x_msgs__msg__OffsetB10 y;
} v2x_msgs__msg__NodeXY20b;

// Struct for a sequence of v2x_msgs__msg__NodeXY20b.
typedef struct v2x_msgs__msg__NodeXY20b__Sequence
{
  v2x_msgs__msg__NodeXY20b * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__NodeXY20b__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__NODE_XY20B__STRUCT_H_
