// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DeltaPosition.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DELTA_POSITION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DELTA_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'delta_latitude'
#include "v2x_msgs/msg/detail/delta_latitude__struct.h"
// Member 'delta_longitude'
#include "v2x_msgs/msg/detail/delta_longitude__struct.h"

/// Struct defined in msg/DeltaPosition in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DeltaPosition
{
  v2x_msgs__msg__DeltaLatitude delta_latitude;
  v2x_msgs__msg__DeltaLongitude delta_longitude;
} v2x_msgs__msg__DeltaPosition;

// Struct for a sequence of v2x_msgs__msg__DeltaPosition.
typedef struct v2x_msgs__msg__DeltaPosition__Sequence
{
  v2x_msgs__msg__DeltaPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DeltaPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DELTA_POSITION__STRUCT_H_
