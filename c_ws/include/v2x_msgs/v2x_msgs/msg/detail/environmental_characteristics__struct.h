// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/EnvironmentalCharacteristics.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ENVIRONMENTAL_CHARACTERISTICS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ENVIRONMENTAL_CHARACTERISTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'euro_value'
#include "v2x_msgs/msg/detail/euro_value__struct.h"
// Member 'cop_value'
#include "v2x_msgs/msg/detail/cop_value__struct.h"

/// Struct defined in msg/EnvironmentalCharacteristics in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__EnvironmentalCharacteristics
{
  v2x_msgs__msg__EuroValue euro_value;
  v2x_msgs__msg__CopValue cop_value;
} v2x_msgs__msg__EnvironmentalCharacteristics;

// Struct for a sequence of v2x_msgs__msg__EnvironmentalCharacteristics.
typedef struct v2x_msgs__msg__EnvironmentalCharacteristics__Sequence
{
  v2x_msgs__msg__EnvironmentalCharacteristics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__EnvironmentalCharacteristics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ENVIRONMENTAL_CHARACTERISTICS__STRUCT_H_
