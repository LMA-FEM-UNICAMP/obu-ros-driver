// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/IviStructure.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__IVI_STRUCTURE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__IVI_STRUCTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mandatory'
#include "v2x_msgs/msg/detail/ivi_management_container__struct.h"
// Member 'optional'
#include "v2x_msgs/msg/detail/ivi_containers__struct.h"

/// Struct defined in msg/IviStructure in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__IviStructure
{
  v2x_msgs__msg__IviManagementContainer mandatory;
  /// Optional Field
  bool optional_present;
  v2x_msgs__msg__IviContainers optional;
} v2x_msgs__msg__IviStructure;

// Struct for a sequence of v2x_msgs__msg__IviStructure.
typedef struct v2x_msgs__msg__IviStructure__Sequence
{
  v2x_msgs__msg__IviStructure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__IviStructure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__IVI_STRUCTURE__STRUCT_H_
