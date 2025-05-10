// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DescriptiveName.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DESCRIPTIVE_NAME__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DESCRIPTIVE_NAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'descriptive_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DescriptiveName in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DescriptiveName
{
  rosidl_runtime_c__String descriptive_name;
} v2x_msgs__msg__DescriptiveName;

// Struct for a sequence of v2x_msgs__msg__DescriptiveName.
typedef struct v2x_msgs__msg__DescriptiveName__Sequence
{
  v2x_msgs__msg__DescriptiveName * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DescriptiveName__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DESCRIPTIVE_NAME__STRUCT_H_
