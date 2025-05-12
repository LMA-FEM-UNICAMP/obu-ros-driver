// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/NodeListXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__NODE_LIST_XY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__NODE_LIST_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NODE_LIST_XY_NOTHING'.
enum
{
  v2x_msgs__msg__NodeListXY__NODE_LIST_XY_NOTHING = 0ll
};

/// Constant 'NODE_LIST_XY_NODES'.
enum
{
  v2x_msgs__msg__NodeListXY__NODE_LIST_XY_NODES = 1ll
};

/// Constant 'NODE_LIST_XY_COMPUTED'.
enum
{
  v2x_msgs__msg__NodeListXY__NODE_LIST_XY_COMPUTED = 2ll
};

// Include directives for member types
// Member 'nodes'
#include "v2x_msgs/msg/detail/node_set_xy__struct.h"
// Member 'computed'
#include "v2x_msgs/msg/detail/computed_lane__struct.h"

/// Struct defined in msg/NodeListXY in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__NodeListXY
{
  /// CHOICE! - Choose exactly of the containers
  int64_t node_list_xy_container_select;
  /// container 1
  v2x_msgs__msg__NodeSetXY nodes;
  /// container 2
  v2x_msgs__msg__ComputedLane computed;
} v2x_msgs__msg__NodeListXY;

// Struct for a sequence of v2x_msgs__msg__NodeListXY.
typedef struct v2x_msgs__msg__NodeListXY__Sequence
{
  v2x_msgs__msg__NodeListXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__NodeListXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__NODE_LIST_XY__STRUCT_H_
