// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SignalHeadLocation.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SIGNAL_HEAD_LOCATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SIGNAL_HEAD_LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_xy'
#include "v2x_msgs/msg/detail/node_offset_point_xy__struct.h"
// Member 'node_z'
#include "v2x_msgs/msg/detail/delta_altitude__struct.h"
// Member 'signal_group_id'
#include "v2x_msgs/msg/detail/signal_group_id__struct.h"

/// Struct defined in msg/SignalHeadLocation in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SignalHeadLocation
{
  v2x_msgs__msg__NodeOffsetPointXY node_xy;
  v2x_msgs__msg__DeltaAltitude node_z;
  v2x_msgs__msg__SignalGroupID signal_group_id;
} v2x_msgs__msg__SignalHeadLocation;

// Struct for a sequence of v2x_msgs__msg__SignalHeadLocation.
typedef struct v2x_msgs__msg__SignalHeadLocation__Sequence
{
  v2x_msgs__msg__SignalHeadLocation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SignalHeadLocation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SIGNAL_HEAD_LOCATION__STRUCT_H_
