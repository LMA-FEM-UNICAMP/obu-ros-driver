// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleSpecificCharacteristics.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_SPECIFIC_CHARACTERISTICS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_SPECIFIC_CHARACTERISTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'environmental_characteristics'
#include "v2x_msgs/msg/detail/environmental_characteristics__struct.h"
// Member 'engine_characteristics'
#include "v2x_msgs/msg/detail/engine_characteristics__struct.h"
// Member 'descriptive_characteristics'
#include "v2x_msgs/msg/detail/descriptive_characteristics__struct.h"
// Member 'future_characteristics'
#include "v2x_msgs/msg/detail/future_characteristics__struct.h"

/// Struct defined in msg/VehicleSpecificCharacteristics in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleSpecificCharacteristics
{
  v2x_msgs__msg__EnvironmentalCharacteristics environmental_characteristics;
  v2x_msgs__msg__EngineCharacteristics engine_characteristics;
  v2x_msgs__msg__DescriptiveCharacteristics descriptive_characteristics;
  v2x_msgs__msg__FutureCharacteristics future_characteristics;
} v2x_msgs__msg__VehicleSpecificCharacteristics;

// Struct for a sequence of v2x_msgs__msg__VehicleSpecificCharacteristics.
typedef struct v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence
{
  v2x_msgs__msg__VehicleSpecificCharacteristics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleSpecificCharacteristics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_SPECIFIC_CHARACTERISTICS__STRUCT_H_
