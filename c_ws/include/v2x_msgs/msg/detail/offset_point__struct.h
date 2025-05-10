// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/OffsetPoint.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__OFFSET_POINT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__OFFSET_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_offset_pointxy'
#include "v2x_msgs/msg/detail/node_offset_point_xy__struct.h"
// Member 'node_offset_point_z'
#include "v2x_msgs/msg/detail/node_offset_point_z__struct.h"

/// Struct defined in msg/OffsetPoint in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__OffsetPoint
{
  v2x_msgs__msg__NodeOffsetPointXY node_offset_pointxy;
  /// Optional Field
  bool node_offset_point_z_present;
  v2x_msgs__msg__NodeOffsetPointZ node_offset_point_z;
} v2x_msgs__msg__OffsetPoint;

// Struct for a sequence of v2x_msgs__msg__OffsetPoint.
typedef struct v2x_msgs__msg__OffsetPoint__Sequence
{
  v2x_msgs__msg__OffsetPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__OffsetPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__OFFSET_POINT__STRUCT_H_
