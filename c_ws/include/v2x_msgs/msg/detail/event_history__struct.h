// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/EventHistory.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__EVENT_HISTORY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__EVENT_HISTORY__STRUCT_H_

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
#include "v2x_msgs/msg/detail/event_point__struct.h"

/// Struct defined in msg/EventHistory in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__EventHistory
{
  /// size(1..23)
  v2x_msgs__msg__EventPoint__Sequence history;
} v2x_msgs__msg__EventHistory;

// Struct for a sequence of v2x_msgs__msg__EventHistory.
typedef struct v2x_msgs__msg__EventHistory__Sequence
{
  v2x_msgs__msg__EventHistory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__EventHistory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__EVENT_HISTORY__STRUCT_H_
