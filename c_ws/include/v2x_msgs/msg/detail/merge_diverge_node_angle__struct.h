// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MergeDivergeNodeAngle.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MERGE_DIVERGE_NODE_ANGLE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MERGE_DIVERGE_NODE_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MERGE_DIVERGE_NODE_ANGLE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__MergeDivergeNodeAngle__MERGE_DIVERGE_NODE_ANGLE_RANGE_MIN = -180ll
};

/// Constant 'MERGE_DIVERGE_NODE_ANGLE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__MergeDivergeNodeAngle__MERGE_DIVERGE_NODE_ANGLE_RANGE_MAX = 180ll
};

/// Struct defined in msg/MergeDivergeNodeAngle in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MergeDivergeNodeAngle
{
  int64_t merge_diverge_node_angle;
} v2x_msgs__msg__MergeDivergeNodeAngle;

// Struct for a sequence of v2x_msgs__msg__MergeDivergeNodeAngle.
typedef struct v2x_msgs__msg__MergeDivergeNodeAngle__Sequence
{
  v2x_msgs__msg__MergeDivergeNodeAngle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MergeDivergeNodeAngle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MERGE_DIVERGE_NODE_ANGLE__STRUCT_H_
