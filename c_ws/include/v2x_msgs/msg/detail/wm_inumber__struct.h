// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/WMInumber.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__WM_INUMBER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__WM_INUMBER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'wminumber'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WMInumber in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__WMInumber
{
  rosidl_runtime_c__String wminumber;
} v2x_msgs__msg__WMInumber;

// Struct for a sequence of v2x_msgs__msg__WMInumber.
typedef struct v2x_msgs__msg__WMInumber__Sequence
{
  v2x_msgs__msg__WMInumber * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__WMInumber__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__WM_INUMBER__STRUCT_H_
