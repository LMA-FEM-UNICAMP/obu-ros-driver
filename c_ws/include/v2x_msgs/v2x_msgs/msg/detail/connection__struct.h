// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CONNECTION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CONNECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'connecting_lane'
#include "v2x_msgs/msg/detail/connecting_lane__struct.h"
// Member 'remote_intersection'
#include "v2x_msgs/msg/detail/intersection_reference_id__struct.h"
// Member 'signal_group'
#include "v2x_msgs/msg/detail/signal_group_id__struct.h"
// Member 'user_class'
#include "v2x_msgs/msg/detail/restriction_class_id__struct.h"
// Member 'connection_id'
#include "v2x_msgs/msg/detail/lane_connection_id__struct.h"

/// Struct defined in msg/Connection in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Connection
{
  v2x_msgs__msg__ConnectingLane connecting_lane;
  /// Optional Field
  bool remote_intersection_present;
  v2x_msgs__msg__IntersectionReferenceID remote_intersection;
  /// Optional Field
  bool signal_group_present;
  v2x_msgs__msg__SignalGroupID signal_group;
  /// Optional Field
  bool user_class_present;
  v2x_msgs__msg__RestrictionClassID user_class;
  /// Optional Field
  bool connection_id_present;
  v2x_msgs__msg__LaneConnectionID connection_id;
} v2x_msgs__msg__Connection;

// Struct for a sequence of v2x_msgs__msg__Connection.
typedef struct v2x_msgs__msg__Connection__Sequence
{
  v2x_msgs__msg__Connection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Connection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CONNECTION__STRUCT_H_
