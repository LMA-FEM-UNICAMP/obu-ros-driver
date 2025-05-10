// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PtActivation.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PT_ACTIVATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PT_ACTIVATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pt_activation_type'
#include "v2x_msgs/msg/detail/pt_activation_type__struct.h"
// Member 'pt_activation_data'
#include "v2x_msgs/msg/detail/pt_activation_data__struct.h"

/// Struct defined in msg/PtActivation in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PtActivation
{
  v2x_msgs__msg__PtActivationType pt_activation_type;
  v2x_msgs__msg__PtActivationData pt_activation_data;
} v2x_msgs__msg__PtActivation;

// Struct for a sequence of v2x_msgs__msg__PtActivation.
typedef struct v2x_msgs__msg__PtActivation__Sequence
{
  v2x_msgs__msg__PtActivation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PtActivation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PT_ACTIVATION__STRUCT_H_
