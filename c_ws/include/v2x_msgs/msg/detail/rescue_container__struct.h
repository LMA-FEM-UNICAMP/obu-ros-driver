// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RescueContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RESCUE_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RESCUE_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'light_bar_siren_in_use'
#include "v2x_msgs/msg/detail/light_bar_siren_in_use__struct.h"

/// Struct defined in msg/RescueContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RescueContainer
{
  v2x_msgs__msg__LightBarSirenInUse light_bar_siren_in_use;
} v2x_msgs__msg__RescueContainer;

// Struct for a sequence of v2x_msgs__msg__RescueContainer.
typedef struct v2x_msgs__msg__RescueContainer__Sequence
{
  v2x_msgs__msg__RescueContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RescueContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RESCUE_CONTAINER__STRUCT_H_
