// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__NODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lane'
#include "v2x_msgs/msg/detail/lane_id__struct.h"
// Member 'connection_id'
#include "v2x_msgs/msg/detail/lane_connection_id__struct.h"
// Member 'intersection_id'
#include "v2x_msgs/msg/detail/intersection_id__struct.h"

/// Struct defined in msg/Node in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Node
{
  int64_t id;
  /// Optional Field
  bool lane_present;
  v2x_msgs__msg__LaneID lane;
  /// Optional Field
  bool connection_id_present;
  v2x_msgs__msg__LaneConnectionID connection_id;
  /// Optional Field
  bool intersection_id_present;
  v2x_msgs__msg__IntersectionID intersection_id;
} v2x_msgs__msg__Node;

// Struct for a sequence of v2x_msgs__msg__Node.
typedef struct v2x_msgs__msg__Node__Sequence
{
  v2x_msgs__msg__Node * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Node__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__NODE__STRUCT_H_
