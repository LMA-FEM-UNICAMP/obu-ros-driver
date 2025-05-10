// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/IviContainers.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__IVI_CONTAINERS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__IVI_CONTAINERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'containers'
#include "v2x_msgs/msg/detail/ivi_container__struct.h"

/// Struct defined in msg/IviContainers in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__IviContainers
{
  /// size(1..8)
  v2x_msgs__msg__IviContainer__Sequence containers;
} v2x_msgs__msg__IviContainers;

// Struct for a sequence of v2x_msgs__msg__IviContainers.
typedef struct v2x_msgs__msg__IviContainers__Sequence
{
  v2x_msgs__msg__IviContainers * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__IviContainers__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__IVI_CONTAINERS__STRUCT_H_
