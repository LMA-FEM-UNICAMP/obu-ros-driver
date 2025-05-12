// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ConnectedDenms.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CONNECTED_DENMS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CONNECTED_DENMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'denms'
#include "v2x_msgs/msg/detail/action_id__struct.h"

/// Struct defined in msg/ConnectedDenms in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ConnectedDenms
{
  /// size(1..8)
  v2x_msgs__msg__ActionID__Sequence denms;
} v2x_msgs__msg__ConnectedDenms;

// Struct for a sequence of v2x_msgs__msg__ConnectedDenms.
typedef struct v2x_msgs__msg__ConnectedDenms__Sequence
{
  v2x_msgs__msg__ConnectedDenms * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ConnectedDenms__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CONNECTED_DENMS__STRUCT_H_
