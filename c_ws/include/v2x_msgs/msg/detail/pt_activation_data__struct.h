// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PtActivationData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PT_ACTIVATION_DATA__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PT_ACTIVATION_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pt_activation_data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PtActivationData in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PtActivationData
{
  /// size(1..20)
  rosidl_runtime_c__int64__Sequence pt_activation_data;
} v2x_msgs__msg__PtActivationData;

// Struct for a sequence of v2x_msgs__msg__PtActivationData.
typedef struct v2x_msgs__msg__PtActivationData__Sequence
{
  v2x_msgs__msg__PtActivationData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PtActivationData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PT_ACTIVATION_DATA__STRUCT_H_
