// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CoopAwareness.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__COOP_AWARENESS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__COOP_AWARENESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'generation_delta_time'
#include "v2x_msgs/msg/detail/generation_delta_time__struct.h"
// Member 'cam_parameters'
#include "v2x_msgs/msg/detail/cam_parameters__struct.h"

/// Struct defined in msg/CoopAwareness in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CoopAwareness
{
  v2x_msgs__msg__GenerationDeltaTime generation_delta_time;
  v2x_msgs__msg__CamParameters cam_parameters;
} v2x_msgs__msg__CoopAwareness;

// Struct for a sequence of v2x_msgs__msg__CoopAwareness.
typedef struct v2x_msgs__msg__CoopAwareness__Sequence
{
  v2x_msgs__msg__CoopAwareness * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CoopAwareness__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__COOP_AWARENESS__STRUCT_H_
