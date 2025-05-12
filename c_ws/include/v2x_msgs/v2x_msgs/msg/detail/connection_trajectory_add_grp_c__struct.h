// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ConnectionTrajectoryAddGrpC.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CONNECTION_TRAJECTORY_ADD_GRP_C__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CONNECTION_TRAJECTORY_ADD_GRP_C__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'nodes'
#include "v2x_msgs/msg/detail/node_set_xy__struct.h"
// Member 'connection_id'
#include "v2x_msgs/msg/detail/lane_connection_id__struct.h"

/// Struct defined in msg/ConnectionTrajectoryAddGrpC in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ConnectionTrajectoryAddGrpC
{
  v2x_msgs__msg__NodeSetXY nodes;
  v2x_msgs__msg__LaneConnectionID connection_id;
} v2x_msgs__msg__ConnectionTrajectoryAddGrpC;

// Struct for a sequence of v2x_msgs__msg__ConnectionTrajectoryAddGrpC.
typedef struct v2x_msgs__msg__ConnectionTrajectoryAddGrpC__Sequence
{
  v2x_msgs__msg__ConnectionTrajectoryAddGrpC * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ConnectionTrajectoryAddGrpC__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CONNECTION_TRAJECTORY_ADD_GRP_C__STRUCT_H_
