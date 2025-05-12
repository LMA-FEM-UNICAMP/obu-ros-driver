// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SoundLevel.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SOUND_LEVEL__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SOUND_LEVEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'soundstationary'
// Member 'sounddriveby'
#include "v2x_msgs/msg/detail/int1__struct.h"

/// Struct defined in msg/SoundLevel in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SoundLevel
{
  v2x_msgs__msg__Int1 soundstationary;
  v2x_msgs__msg__Int1 sounddriveby;
} v2x_msgs__msg__SoundLevel;

// Struct for a sequence of v2x_msgs__msg__SoundLevel.
typedef struct v2x_msgs__msg__SoundLevel__Sequence
{
  v2x_msgs__msg__SoundLevel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SoundLevel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SOUND_LEVEL__STRUCT_H_
