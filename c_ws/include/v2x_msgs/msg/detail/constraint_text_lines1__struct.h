// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ConstraintTextLines1.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CONSTRAINT_TEXT_LINES1__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CONSTRAINT_TEXT_LINES1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lines1'
#include "v2x_msgs/msg/detail/text__struct.h"

/// Struct defined in msg/ConstraintTextLines1 in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ConstraintTextLines1
{
  /// size(1..4)
  v2x_msgs__msg__Text__Sequence lines1;
} v2x_msgs__msg__ConstraintTextLines1;

// Struct for a sequence of v2x_msgs__msg__ConstraintTextLines1.
typedef struct v2x_msgs__msg__ConstraintTextLines1__Sequence
{
  v2x_msgs__msg__ConstraintTextLines1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ConstraintTextLines1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CONSTRAINT_TEXT_LINES1__STRUCT_H_
