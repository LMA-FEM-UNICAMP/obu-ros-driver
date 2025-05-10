// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ConnectingLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__STRUCT_H_

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
// Member 'maneuver'
#include "v2x_msgs/msg/detail/allowed_maneuvers__struct.h"

/// Struct defined in msg/ConnectingLane in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ConnectingLane
{
  v2x_msgs__msg__LaneID lane;
  /// Optional Field
  bool maneuver_present;
  v2x_msgs__msg__AllowedManeuvers maneuver;
} v2x_msgs__msg__ConnectingLane;

// Struct for a sequence of v2x_msgs__msg__ConnectingLane.
typedef struct v2x_msgs__msg__ConnectingLane__Sequence
{
  v2x_msgs__msg__ConnectingLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ConnectingLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__STRUCT_H_
