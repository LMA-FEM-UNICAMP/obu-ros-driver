// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleLength.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vehicle_length_value'
#include "v2x_msgs/msg/detail/vehicle_length_value__struct.h"
// Member 'vehicle_length_confidence_indication'
#include "v2x_msgs/msg/detail/vehicle_length_confidence_indication__struct.h"

/// Struct defined in msg/VehicleLength in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleLength
{
  v2x_msgs__msg__VehicleLengthValue vehicle_length_value;
  v2x_msgs__msg__VehicleLengthConfidenceIndication vehicle_length_confidence_indication;
} v2x_msgs__msg__VehicleLength;

// Struct for a sequence of v2x_msgs__msg__VehicleLength.
typedef struct v2x_msgs__msg__VehicleLength__Sequence
{
  v2x_msgs__msg__VehicleLength * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleLength__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH__STRUCT_H_
