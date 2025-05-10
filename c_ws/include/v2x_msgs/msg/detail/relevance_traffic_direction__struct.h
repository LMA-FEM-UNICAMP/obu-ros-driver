// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RelevanceTrafficDirection.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RELEVANCE_TRAFFIC_DIRECTION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RELEVANCE_TRAFFIC_DIRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RELEVANCE_TRAFFIC_DIRECTION_ALL_TRAFFIC_DIRECTIONS'.
enum
{
  v2x_msgs__msg__RelevanceTrafficDirection__RELEVANCE_TRAFFIC_DIRECTION_ALL_TRAFFIC_DIRECTIONS = 0ll
};

/// Constant 'RELEVANCE_TRAFFIC_DIRECTION_UPSTREAM_TRAFFIC'.
enum
{
  v2x_msgs__msg__RelevanceTrafficDirection__RELEVANCE_TRAFFIC_DIRECTION_UPSTREAM_TRAFFIC = 1ll
};

/// Constant 'RELEVANCE_TRAFFIC_DIRECTION_DOWNSTREAM_TRAFFIC'.
enum
{
  v2x_msgs__msg__RelevanceTrafficDirection__RELEVANCE_TRAFFIC_DIRECTION_DOWNSTREAM_TRAFFIC = 2ll
};

/// Constant 'RELEVANCE_TRAFFIC_DIRECTION_OPPOSITE_TRAFFIC'.
enum
{
  v2x_msgs__msg__RelevanceTrafficDirection__RELEVANCE_TRAFFIC_DIRECTION_OPPOSITE_TRAFFIC = 3ll
};

/// Struct defined in msg/RelevanceTrafficDirection in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RelevanceTrafficDirection
{
  int64_t relevance_traffic_direction;
} v2x_msgs__msg__RelevanceTrafficDirection;

// Struct for a sequence of v2x_msgs__msg__RelevanceTrafficDirection.
typedef struct v2x_msgs__msg__RelevanceTrafficDirection__Sequence
{
  v2x_msgs__msg__RelevanceTrafficDirection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RelevanceTrafficDirection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RELEVANCE_TRAFFIC_DIRECTION__STRUCT_H_
