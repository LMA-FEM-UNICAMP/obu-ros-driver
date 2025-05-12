// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LongitudinalAcceleration.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LONGITUDINAL_ACCELERATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LONGITUDINAL_ACCELERATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'longitudinal_acceleration_value'
#include "v2x_msgs/msg/detail/longitudinal_acceleration_value__struct.h"
// Member 'longitudinal_acceleration_confidence'
#include "v2x_msgs/msg/detail/acceleration_confidence__struct.h"

/// Struct defined in msg/LongitudinalAcceleration in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LongitudinalAcceleration
{
  v2x_msgs__msg__LongitudinalAccelerationValue longitudinal_acceleration_value;
  v2x_msgs__msg__AccelerationConfidence longitudinal_acceleration_confidence;
} v2x_msgs__msg__LongitudinalAcceleration;

// Struct for a sequence of v2x_msgs__msg__LongitudinalAcceleration.
typedef struct v2x_msgs__msg__LongitudinalAcceleration__Sequence
{
  v2x_msgs__msg__LongitudinalAcceleration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LongitudinalAcceleration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LONGITUDINAL_ACCELERATION__STRUCT_H_
