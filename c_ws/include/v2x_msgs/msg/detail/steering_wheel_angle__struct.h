// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SteeringWheelAngle.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__STEERING_WHEEL_ANGLE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__STEERING_WHEEL_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'steering_wheel_angle_value'
#include "v2x_msgs/msg/detail/steering_wheel_angle_value__struct.h"
// Member 'steering_wheel_angle_confidence'
#include "v2x_msgs/msg/detail/steering_wheel_angle_confidence__struct.h"

/// Struct defined in msg/SteeringWheelAngle in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SteeringWheelAngle
{
  v2x_msgs__msg__SteeringWheelAngleValue steering_wheel_angle_value;
  v2x_msgs__msg__SteeringWheelAngleConfidence steering_wheel_angle_confidence;
} v2x_msgs__msg__SteeringWheelAngle;

// Struct for a sequence of v2x_msgs__msg__SteeringWheelAngle.
typedef struct v2x_msgs__msg__SteeringWheelAngle__Sequence
{
  v2x_msgs__msg__SteeringWheelAngle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SteeringWheelAngle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__STEERING_WHEEL_ANGLE__STRUCT_H_
