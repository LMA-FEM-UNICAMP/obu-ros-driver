// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneDirection.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_DIRECTION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_DIRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_DIRECTION_INGRESS_PATH'.
enum
{
  v2x_msgs__msg__LaneDirection__LANE_DIRECTION_INGRESS_PATH = 0ll
};

/// Constant 'LANE_DIRECTION_EGRESS_PATH'.
enum
{
  v2x_msgs__msg__LaneDirection__LANE_DIRECTION_EGRESS_PATH = 1ll
};

/// Struct defined in msg/LaneDirection in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneDirection
{
  int64_t lane_direction;
} v2x_msgs__msg__LaneDirection;

// Struct for a sequence of v2x_msgs__msg__LaneDirection.
typedef struct v2x_msgs__msg__LaneDirection__Sequence
{
  v2x_msgs__msg__LaneDirection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneDirection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_DIRECTION__STRUCT_H_
