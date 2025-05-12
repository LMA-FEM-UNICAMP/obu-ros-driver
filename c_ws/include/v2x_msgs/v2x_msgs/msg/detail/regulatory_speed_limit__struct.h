// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RegulatorySpeedLimit.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "v2x_msgs/msg/detail/speed_limit_type__struct.h"
// Member 'speed'
#include "v2x_msgs/msg/detail/velocity__struct.h"

/// Struct defined in msg/RegulatorySpeedLimit in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RegulatorySpeedLimit
{
  v2x_msgs__msg__SpeedLimitType type;
  v2x_msgs__msg__Velocity speed;
} v2x_msgs__msg__RegulatorySpeedLimit;

// Struct for a sequence of v2x_msgs__msg__RegulatorySpeedLimit.
typedef struct v2x_msgs__msg__RegulatorySpeedLimit__Sequence
{
  v2x_msgs__msg__RegulatorySpeedLimit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RegulatorySpeedLimit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__STRUCT_H_
