// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VST.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VST__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'profile'
#include "v2x_msgs/msg/detail/profile__struct.h"
// Member 'applications'
#include "v2x_msgs/msg/detail/application_list__struct.h"
// Member 'obe_configuration'
#include "v2x_msgs/msg/detail/obe_configuration__struct.h"

/// Struct defined in msg/VST in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VST
{
  int64_t fill;
  v2x_msgs__msg__Profile profile;
  v2x_msgs__msg__ApplicationList applications;
  v2x_msgs__msg__ObeConfiguration obe_configuration;
} v2x_msgs__msg__VST;

// Struct for a sequence of v2x_msgs__msg__VST.
typedef struct v2x_msgs__msg__VST__Sequence
{
  v2x_msgs__msg__VST * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VST__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VST__STRUCT_H_
