// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NODE_OFFSET_POINT_XY_NOTHING'.
enum
{
  v2x_msgs__msg__NodeOffsetPointXY__NODE_OFFSET_POINT_XY_NOTHING = 0ll
};

/// Constant 'NODE_OFFSET_POINT_XY_NODE_XY1'.
enum
{
  v2x_msgs__msg__NodeOffsetPointXY__NODE_OFFSET_POINT_XY_NODE_XY1 = 1ll
};

/// Constant 'NODE_OFFSET_POINT_XY_NODE_XY2'.
enum
{
  v2x_msgs__msg__NodeOffsetPointXY__NODE_OFFSET_POINT_XY_NODE_XY2 = 2ll
};

/// Constant 'NODE_OFFSET_POINT_XY_NODE_XY3'.
enum
{
  v2x_msgs__msg__NodeOffsetPointXY__NODE_OFFSET_POINT_XY_NODE_XY3 = 3ll
};

/// Constant 'NODE_OFFSET_POINT_XY_NODE_XY4'.
enum
{
  v2x_msgs__msg__NodeOffsetPointXY__NODE_OFFSET_POINT_XY_NODE_XY4 = 4ll
};

/// Constant 'NODE_OFFSET_POINT_XY_NODE_XY5'.
enum
{
  v2x_msgs__msg__NodeOffsetPointXY__NODE_OFFSET_POINT_XY_NODE_XY5 = 5ll
};

/// Constant 'NODE_OFFSET_POINT_XY_NODE_XY6'.
enum
{
  v2x_msgs__msg__NodeOffsetPointXY__NODE_OFFSET_POINT_XY_NODE_XY6 = 6ll
};

/// Constant 'NODE_OFFSET_POINT_XY_NODE_LAT_LON'.
enum
{
  v2x_msgs__msg__NodeOffsetPointXY__NODE_OFFSET_POINT_XY_NODE_LAT_LON = 7ll
};

/// Constant 'NODE_OFFSET_POINT_XY_REGIONAL'.
enum
{
  v2x_msgs__msg__NodeOffsetPointXY__NODE_OFFSET_POINT_XY_REGIONAL = 8ll
};

// Include directives for member types
// Member 'nodexy1'
#include "v2x_msgs/msg/detail/node_xy20b__struct.h"
// Member 'nodexy2'
#include "v2x_msgs/msg/detail/node_xy22b__struct.h"
// Member 'nodexy3'
#include "v2x_msgs/msg/detail/node_xy24b__struct.h"
// Member 'nodexy4'
#include "v2x_msgs/msg/detail/node_xy26b__struct.h"
// Member 'nodexy5'
#include "v2x_msgs/msg/detail/node_xy28b__struct.h"
// Member 'nodexy6'
#include "v2x_msgs/msg/detail/node_xy32b__struct.h"
// Member 'nodelat_lon'
#include "v2x_msgs/msg/detail/node_l_lm_d64b__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_node_offset_point_xy__struct.h"

/// Struct defined in msg/NodeOffsetPointXY in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__NodeOffsetPointXY
{
  /// CHOICE! - Choose exactly of the containers
  int64_t node_offset_point_xy_container_select;
  /// container 1
  v2x_msgs__msg__NodeXY20b nodexy1;
  /// container 2
  v2x_msgs__msg__NodeXY22b nodexy2;
  /// container 3
  v2x_msgs__msg__NodeXY24b nodexy3;
  /// container 4
  v2x_msgs__msg__NodeXY26b nodexy4;
  /// container 5
  v2x_msgs__msg__NodeXY28b nodexy5;
  /// container 6
  v2x_msgs__msg__NodeXY32b nodexy6;
  /// container 7
  v2x_msgs__msg__NodeLLmD64b nodelat_lon;
  /// container 8
  v2x_msgs__msg__RegNodeOffsetPointXY regional;
} v2x_msgs__msg__NodeOffsetPointXY;

// Struct for a sequence of v2x_msgs__msg__NodeOffsetPointXY.
typedef struct v2x_msgs__msg__NodeOffsetPointXY__Sequence
{
  v2x_msgs__msg__NodeOffsetPointXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__NodeOffsetPointXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_H_
