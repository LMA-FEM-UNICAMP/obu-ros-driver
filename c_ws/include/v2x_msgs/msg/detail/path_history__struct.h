// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PathHistory.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PATH_HISTORY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PATH_HISTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'history'
#include "v2x_msgs/msg/detail/path_point__struct.h"

/// Struct defined in msg/PathHistory in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PathHistory
{
  /// size(0..40)
  v2x_msgs__msg__PathPoint__Sequence history;
} v2x_msgs__msg__PathHistory;

// Struct for a sequence of v2x_msgs__msg__PathHistory.
typedef struct v2x_msgs__msg__PathHistory__Sequence
{
  v2x_msgs__msg__PathHistory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PathHistory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PATH_HISTORY__STRUCT_H_
