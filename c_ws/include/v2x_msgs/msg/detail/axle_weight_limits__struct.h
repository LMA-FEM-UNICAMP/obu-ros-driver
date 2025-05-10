// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AxleWeightLimits.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__AXLE_WEIGHT_LIMITS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__AXLE_WEIGHT_LIMITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'max_ladenweight_on_axle1'
// Member 'max_ladenweight_on_axle2'
// Member 'max_ladenweight_on_axle3'
// Member 'max_ladenweight_on_axle4'
// Member 'max_ladenweight_on_axle5'
#include "v2x_msgs/msg/detail/int2__struct.h"

/// Struct defined in msg/AxleWeightLimits in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AxleWeightLimits
{
  v2x_msgs__msg__Int2 max_ladenweight_on_axle1;
  v2x_msgs__msg__Int2 max_ladenweight_on_axle2;
  v2x_msgs__msg__Int2 max_ladenweight_on_axle3;
  v2x_msgs__msg__Int2 max_ladenweight_on_axle4;
  v2x_msgs__msg__Int2 max_ladenweight_on_axle5;
} v2x_msgs__msg__AxleWeightLimits;

// Struct for a sequence of v2x_msgs__msg__AxleWeightLimits.
typedef struct v2x_msgs__msg__AxleWeightLimits__Sequence
{
  v2x_msgs__msg__AxleWeightLimits * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AxleWeightLimits__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__AXLE_WEIGHT_LIMITS__STRUCT_H_
