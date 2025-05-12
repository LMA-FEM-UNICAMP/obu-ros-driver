// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleWeightLimits.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_WEIGHT_LIMITS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_WEIGHT_LIMITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vehicle_max_laden_weight'
// Member 'vehicle_train_maximum_weight'
// Member 'vehicle_weight_unladen'
#include "v2x_msgs/msg/detail/int2__struct.h"

/// Struct defined in msg/VehicleWeightLimits in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleWeightLimits
{
  v2x_msgs__msg__Int2 vehicle_max_laden_weight;
  v2x_msgs__msg__Int2 vehicle_train_maximum_weight;
  v2x_msgs__msg__Int2 vehicle_weight_unladen;
} v2x_msgs__msg__VehicleWeightLimits;

// Struct for a sequence of v2x_msgs__msg__VehicleWeightLimits.
typedef struct v2x_msgs__msg__VehicleWeightLimits__Sequence
{
  v2x_msgs__msg__VehicleWeightLimits * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleWeightLimits__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_WEIGHT_LIMITS__STRUCT_H_
