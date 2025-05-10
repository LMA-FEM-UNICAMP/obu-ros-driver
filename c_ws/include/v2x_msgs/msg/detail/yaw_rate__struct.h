// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/YawRate.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__YAW_RATE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__YAW_RATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'yaw_rate_value'
#include "v2x_msgs/msg/detail/yaw_rate_value__struct.h"
// Member 'yaw_rate_confidence'
#include "v2x_msgs/msg/detail/yaw_rate_confidence__struct.h"

/// Struct defined in msg/YawRate in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__YawRate
{
  v2x_msgs__msg__YawRateValue yaw_rate_value;
  v2x_msgs__msg__YawRateConfidence yaw_rate_confidence;
} v2x_msgs__msg__YawRate;

// Struct for a sequence of v2x_msgs__msg__YawRate.
typedef struct v2x_msgs__msg__YawRate__Sequence
{
  v2x_msgs__msg__YawRate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__YawRate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__YAW_RATE__STRUCT_H_
