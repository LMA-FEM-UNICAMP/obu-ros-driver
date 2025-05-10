// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AbsolutePosition.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ABSOLUTE_POSITION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ABSOLUTE_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'latitude'
#include "v2x_msgs/msg/detail/latitude__struct.h"
// Member 'longitude'
#include "v2x_msgs/msg/detail/longitude__struct.h"

/// Struct defined in msg/AbsolutePosition in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AbsolutePosition
{
  v2x_msgs__msg__Latitude latitude;
  v2x_msgs__msg__Longitude longitude;
} v2x_msgs__msg__AbsolutePosition;

// Struct for a sequence of v2x_msgs__msg__AbsolutePosition.
typedef struct v2x_msgs__msg__AbsolutePosition__Sequence
{
  v2x_msgs__msg__AbsolutePosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AbsolutePosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ABSOLUTE_POSITION__STRUCT_H_
