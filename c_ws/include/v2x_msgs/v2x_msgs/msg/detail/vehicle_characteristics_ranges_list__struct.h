// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleCharacteristicsRangesList.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_CHARACTERISTICS_RANGES_LIST__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_CHARACTERISTICS_RANGES_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'list'
#include "v2x_msgs/msg/detail/vehicle_characteristics_ranges__struct.h"

/// Struct defined in msg/VehicleCharacteristicsRangesList in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleCharacteristicsRangesList
{
  /// size(1..4)
  v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence list;
} v2x_msgs__msg__VehicleCharacteristicsRangesList;

// Struct for a sequence of v2x_msgs__msg__VehicleCharacteristicsRangesList.
typedef struct v2x_msgs__msg__VehicleCharacteristicsRangesList__Sequence
{
  v2x_msgs__msg__VehicleCharacteristicsRangesList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleCharacteristicsRangesList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_CHARACTERISTICS_RANGES_LIST__STRUCT_H_
