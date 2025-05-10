// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleDimensions.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vehicle_length_overall'
// Member 'vehicle_heigth_overall'
// Member 'vehicle_width_overall'
#include "v2x_msgs/msg/detail/int1__struct.h"

/// Struct defined in msg/VehicleDimensions in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleDimensions
{
  v2x_msgs__msg__Int1 vehicle_length_overall;
  v2x_msgs__msg__Int1 vehicle_heigth_overall;
  v2x_msgs__msg__Int1 vehicle_width_overall;
} v2x_msgs__msg__VehicleDimensions;

// Struct for a sequence of v2x_msgs__msg__VehicleDimensions.
typedef struct v2x_msgs__msg__VehicleDimensions__Sequence
{
  v2x_msgs__msg__VehicleDimensions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleDimensions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_DIMENSIONS__STRUCT_H_
