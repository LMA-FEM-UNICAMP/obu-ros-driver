// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/InternationalSignApplicableVehicleDimensions.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_APPLICABLE_VEHICLE_DIMENSIONS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_APPLICABLE_VEHICLE_DIMENSIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vehicle_height'
// Member 'vehicle_width'
// Member 'vehicle_length'
#include "v2x_msgs/msg/detail/distance__struct.h"
// Member 'vehicle_weight'
#include "v2x_msgs/msg/detail/weight__struct.h"

/// Struct defined in msg/InternationalSignApplicableVehicleDimensions in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__InternationalSignApplicableVehicleDimensions
{
  /// Optional Field
  bool vehicle_height_present;
  v2x_msgs__msg__Distance vehicle_height;
  /// Optional Field
  bool vehicle_width_present;
  v2x_msgs__msg__Distance vehicle_width;
  /// Optional Field
  bool vehicle_length_present;
  v2x_msgs__msg__Distance vehicle_length;
  /// Optional Field
  bool vehicle_weight_present;
  v2x_msgs__msg__Weight vehicle_weight;
} v2x_msgs__msg__InternationalSignApplicableVehicleDimensions;

// Struct for a sequence of v2x_msgs__msg__InternationalSignApplicableVehicleDimensions.
typedef struct v2x_msgs__msg__InternationalSignApplicableVehicleDimensions__Sequence
{
  v2x_msgs__msg__InternationalSignApplicableVehicleDimensions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__InternationalSignApplicableVehicleDimensions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_APPLICABLE_VEHICLE_DIMENSIONS__STRUCT_H_
