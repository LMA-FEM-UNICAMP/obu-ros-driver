// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Traces.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TRACES__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TRACES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'traces'
#include "v2x_msgs/msg/detail/path_history__struct.h"

/// Struct defined in msg/Traces in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Traces
{
  /// size(1..7)
  v2x_msgs__msg__PathHistory__Sequence traces;
} v2x_msgs__msg__Traces;

// Struct for a sequence of v2x_msgs__msg__Traces.
typedef struct v2x_msgs__msg__Traces__Sequence
{
  v2x_msgs__msg__Traces * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Traces__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TRACES__STRUCT_H_
