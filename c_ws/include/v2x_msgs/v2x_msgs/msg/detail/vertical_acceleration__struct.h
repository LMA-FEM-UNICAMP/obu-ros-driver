// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VerticalAcceleration.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vertical_acceleration_value'
#include "v2x_msgs/msg/detail/vertical_acceleration_value__struct.h"
// Member 'vertical_acceleration_confidence'
#include "v2x_msgs/msg/detail/acceleration_confidence__struct.h"

/// Struct defined in msg/VerticalAcceleration in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VerticalAcceleration
{
  v2x_msgs__msg__VerticalAccelerationValue vertical_acceleration_value;
  v2x_msgs__msg__AccelerationConfidence vertical_acceleration_confidence;
} v2x_msgs__msg__VerticalAcceleration;

// Struct for a sequence of v2x_msgs__msg__VerticalAcceleration.
typedef struct v2x_msgs__msg__VerticalAcceleration__Sequence
{
  v2x_msgs__msg__VerticalAcceleration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VerticalAcceleration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION__STRUCT_H_
