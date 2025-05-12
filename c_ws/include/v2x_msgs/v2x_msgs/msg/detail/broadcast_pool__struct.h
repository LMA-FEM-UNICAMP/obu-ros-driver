// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/BroadcastPool.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__BROADCAST_POOL__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__BROADCAST_POOL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'directoryvalue'
#include "v2x_msgs/msg/detail/directory__struct.h"
// Member 'content'
#include "v2x_msgs/msg/detail/file__struct.h"

/// Struct defined in msg/BroadcastPool in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__BroadcastPool
{
  v2x_msgs__msg__Directory directoryvalue;
  /// size(0..127)
  v2x_msgs__msg__File__Sequence content;
} v2x_msgs__msg__BroadcastPool;

// Struct for a sequence of v2x_msgs__msg__BroadcastPool.
typedef struct v2x_msgs__msg__BroadcastPool__Sequence
{
  v2x_msgs__msg__BroadcastPool * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__BroadcastPool__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__BROADCAST_POOL__STRUCT_H_
