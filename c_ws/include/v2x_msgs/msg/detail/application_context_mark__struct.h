// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ApplicationContextMark.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__APPLICATION_CONTEXT_MARK__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__APPLICATION_CONTEXT_MARK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'application_context_mark'
#include "v2x_msgs/msg/detail/efc_container__struct.h"

/// Struct defined in msg/ApplicationContextMark in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ApplicationContextMark
{
  v2x_msgs__msg__EfcContainer application_context_mark;
} v2x_msgs__msg__ApplicationContextMark;

// Struct for a sequence of v2x_msgs__msg__ApplicationContextMark.
typedef struct v2x_msgs__msg__ApplicationContextMark__Sequence
{
  v2x_msgs__msg__ApplicationContextMark * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ApplicationContextMark__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__APPLICATION_CONTEXT_MARK__STRUCT_H_
