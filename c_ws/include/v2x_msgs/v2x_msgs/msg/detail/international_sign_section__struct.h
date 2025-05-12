// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/InternationalSignSection.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_SECTION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_SECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'starting_point_length'
// Member 'continuity_length'
#include "v2x_msgs/msg/detail/distance__struct.h"

/// Struct defined in msg/InternationalSignSection in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__InternationalSignSection
{
  /// Optional Field
  bool starting_point_length_present;
  v2x_msgs__msg__Distance starting_point_length;
  /// Optional Field
  bool continuity_length_present;
  v2x_msgs__msg__Distance continuity_length;
} v2x_msgs__msg__InternationalSignSection;

// Struct for a sequence of v2x_msgs__msg__InternationalSignSection.
typedef struct v2x_msgs__msg__InternationalSignSection__Sequence
{
  v2x_msgs__msg__InternationalSignSection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__InternationalSignSection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_SECTION__STRUCT_H_
