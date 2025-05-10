// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ChannelRs.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CHANNEL_RS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CHANNEL_RS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'channel_id'
#include "v2x_msgs/msg/detail/channel_id__struct.h"
// Member 'apdu'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ChannelRs in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ChannelRs
{
  v2x_msgs__msg__ChannelId channel_id;
  rosidl_runtime_c__int64__Sequence apdu;
} v2x_msgs__msg__ChannelRs;

// Struct for a sequence of v2x_msgs__msg__ChannelRs.
typedef struct v2x_msgs__msg__ChannelRs__Sequence
{
  v2x_msgs__msg__ChannelRs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ChannelRs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CHANNEL_RS__STRUCT_H_
