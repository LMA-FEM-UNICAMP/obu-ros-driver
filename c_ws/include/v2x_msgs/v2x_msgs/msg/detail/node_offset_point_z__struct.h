// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/NodeOffsetPointZ.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_Z__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_Z__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NODE_OFFSET_POINT_Z_NOTHING'.
enum
{
  v2x_msgs__msg__NodeOffsetPointZ__NODE_OFFSET_POINT_Z_NOTHING = 0ll
};

/// Constant 'NODE_OFFSET_POINT_Z_NODE_Z1'.
enum
{
  v2x_msgs__msg__NodeOffsetPointZ__NODE_OFFSET_POINT_Z_NODE_Z1 = 1ll
};

/// Constant 'NODE_OFFSET_POINT_Z_NODE_Z2'.
enum
{
  v2x_msgs__msg__NodeOffsetPointZ__NODE_OFFSET_POINT_Z_NODE_Z2 = 2ll
};

/// Constant 'NODE_OFFSET_POINT_Z_NODE_Z3'.
enum
{
  v2x_msgs__msg__NodeOffsetPointZ__NODE_OFFSET_POINT_Z_NODE_Z3 = 3ll
};

/// Constant 'NODE_OFFSET_POINT_Z_NODE_Z4'.
enum
{
  v2x_msgs__msg__NodeOffsetPointZ__NODE_OFFSET_POINT_Z_NODE_Z4 = 4ll
};

/// Constant 'NODE_OFFSET_POINT_Z_NODE_Z5'.
enum
{
  v2x_msgs__msg__NodeOffsetPointZ__NODE_OFFSET_POINT_Z_NODE_Z5 = 5ll
};

/// Constant 'NODE_OFFSET_POINT_Z_NODE_Z6'.
enum
{
  v2x_msgs__msg__NodeOffsetPointZ__NODE_OFFSET_POINT_Z_NODE_Z6 = 6ll
};

// Include directives for member types
// Member 'nodez1'
#include "v2x_msgs/msg/detail/offset_b10__struct.h"
// Member 'nodez2'
#include "v2x_msgs/msg/detail/offset_b11__struct.h"
// Member 'nodez3'
#include "v2x_msgs/msg/detail/offset_b12__struct.h"
// Member 'nodez4'
#include "v2x_msgs/msg/detail/offset_b13__struct.h"
// Member 'nodez5'
#include "v2x_msgs/msg/detail/offset_b14__struct.h"
// Member 'nodez6'
#include "v2x_msgs/msg/detail/offset_b16__struct.h"

/// Struct defined in msg/NodeOffsetPointZ in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__NodeOffsetPointZ
{
  /// CHOICE! - Choose exactly of the containers
  int64_t node_offset_point_z_container_select;
  /// container 1
  v2x_msgs__msg__OffsetB10 nodez1;
  /// container 2
  v2x_msgs__msg__OffsetB11 nodez2;
  /// container 3
  v2x_msgs__msg__OffsetB12 nodez3;
  /// container 4
  v2x_msgs__msg__OffsetB13 nodez4;
  /// container 5
  v2x_msgs__msg__OffsetB14 nodez5;
  /// container 6
  v2x_msgs__msg__OffsetB16 nodez6;
} v2x_msgs__msg__NodeOffsetPointZ;

// Struct for a sequence of v2x_msgs__msg__NodeOffsetPointZ.
typedef struct v2x_msgs__msg__NodeOffsetPointZ__Sequence
{
  v2x_msgs__msg__NodeOffsetPointZ * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__NodeOffsetPointZ__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_Z__STRUCT_H_
