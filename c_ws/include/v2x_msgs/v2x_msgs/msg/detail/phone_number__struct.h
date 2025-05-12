// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PhoneNumber.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PHONE_NUMBER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PHONE_NUMBER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'phone_number'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PhoneNumber in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PhoneNumber
{
  rosidl_runtime_c__String phone_number;
} v2x_msgs__msg__PhoneNumber;

// Struct for a sequence of v2x_msgs__msg__PhoneNumber.
typedef struct v2x_msgs__msg__PhoneNumber__Sequence
{
  v2x_msgs__msg__PhoneNumber * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PhoneNumber__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PHONE_NUMBER__STRUCT_H_
