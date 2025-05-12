// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleWeightLaden.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_WEIGHT_LADEN__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_WEIGHT_LADEN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vehicle_weight_laden'
#include "v2x_msgs/msg/detail/int2__struct.h"

/// Struct defined in msg/VehicleWeightLaden in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleWeightLaden
{
  v2x_msgs__msg__Int2 vehicle_weight_laden;
} v2x_msgs__msg__VehicleWeightLaden;

// Struct for a sequence of v2x_msgs__msg__VehicleWeightLaden.
typedef struct v2x_msgs__msg__VehicleWeightLaden__Sequence
{
  v2x_msgs__msg__VehicleWeightLaden * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleWeightLaden__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_WEIGHT_LADEN__STRUCT_H_
