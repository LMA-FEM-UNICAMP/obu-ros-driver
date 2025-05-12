// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LateralAcceleration.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LATERAL_ACCELERATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LATERAL_ACCELERATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lateral_acceleration_value'
#include "v2x_msgs/msg/detail/lateral_acceleration_value__struct.h"
// Member 'lateral_acceleration_confidence'
#include "v2x_msgs/msg/detail/acceleration_confidence__struct.h"

/// Struct defined in msg/LateralAcceleration in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LateralAcceleration
{
  v2x_msgs__msg__LateralAccelerationValue lateral_acceleration_value;
  v2x_msgs__msg__AccelerationConfidence lateral_acceleration_confidence;
} v2x_msgs__msg__LateralAcceleration;

// Struct for a sequence of v2x_msgs__msg__LateralAcceleration.
typedef struct v2x_msgs__msg__LateralAcceleration__Sequence
{
  v2x_msgs__msg__LateralAcceleration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LateralAcceleration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LATERAL_ACCELERATION__STRUCT_H_
