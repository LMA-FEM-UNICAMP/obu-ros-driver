// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TractorCharacteristics.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TRACTOR_CHARACTERISTICS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TRACTOR_CHARACTERISTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'equal_to'
// Member 'not_equal_to'
#include "v2x_msgs/msg/detail/vehicle_characteristics_fix_values_list__struct.h"
// Member 'ranges'
#include "v2x_msgs/msg/detail/vehicle_characteristics_ranges_list__struct.h"

/// Struct defined in msg/TractorCharacteristics in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TractorCharacteristics
{
  /// Optional Field
  bool equal_to_present;
  v2x_msgs__msg__VehicleCharacteristicsFixValuesList equal_to;
  /// Optional Field
  bool not_equal_to_present;
  v2x_msgs__msg__VehicleCharacteristicsFixValuesList not_equal_to;
  /// Optional Field
  bool ranges_present;
  v2x_msgs__msg__VehicleCharacteristicsRangesList ranges;
} v2x_msgs__msg__TractorCharacteristics;

// Struct for a sequence of v2x_msgs__msg__TractorCharacteristics.
typedef struct v2x_msgs__msg__TractorCharacteristics__Sequence
{
  v2x_msgs__msg__TractorCharacteristics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TractorCharacteristics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TRACTOR_CHARACTERISTICS__STRUCT_H_
