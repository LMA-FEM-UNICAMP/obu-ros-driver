// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SpeedExtended.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SPEED_EXTENDED__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SPEED_EXTENDED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'value'
#include "v2x_msgs/msg/detail/speed_value_extended__struct.h"
// Member 'confidence'
#include "v2x_msgs/msg/detail/speed_confidence__struct.h"

/// Struct defined in msg/SpeedExtended in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SpeedExtended
{
  v2x_msgs__msg__SpeedValueExtended value;
  v2x_msgs__msg__SpeedConfidence confidence;
} v2x_msgs__msg__SpeedExtended;

// Struct for a sequence of v2x_msgs__msg__SpeedExtended.
typedef struct v2x_msgs__msg__SpeedExtended__Sequence
{
  v2x_msgs__msg__SpeedExtended * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SpeedExtended__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SPEED_EXTENDED__STRUCT_H_
