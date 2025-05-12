// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/GddAttributes.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__GDD_ATTRIBUTES__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__GDD_ATTRIBUTES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'attributes'
#include "v2x_msgs/msg/detail/gdd_attribute__struct.h"

/// Struct defined in msg/GddAttributes in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__GddAttributes
{
  /// size(1..8)
  v2x_msgs__msg__GddAttribute__Sequence attributes;
} v2x_msgs__msg__GddAttributes;

// Struct for a sequence of v2x_msgs__msg__GddAttributes.
typedef struct v2x_msgs__msg__GddAttributes__Sequence
{
  v2x_msgs__msg__GddAttributes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__GddAttributes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__GDD_ATTRIBUTES__STRUCT_H_
