// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MovementList.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MOVEMENT_LIST__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MOVEMENT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'list'
#include "v2x_msgs/msg/detail/movement_state__struct.h"

/// Struct defined in msg/MovementList in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MovementList
{
  /// size(1..255)
  v2x_msgs__msg__MovementState__Sequence list;
} v2x_msgs__msg__MovementList;

// Struct for a sequence of v2x_msgs__msg__MovementList.
typedef struct v2x_msgs__msg__MovementList__Sequence
{
  v2x_msgs__msg__MovementList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MovementList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MOVEMENT_LIST__STRUCT_H_
