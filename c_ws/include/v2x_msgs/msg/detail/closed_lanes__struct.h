// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ClosedLanes.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CLOSED_LANES__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CLOSED_LANES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'innerhard_shoulder_status'
// Member 'outerhard_shoulder_status'
#include "v2x_msgs/msg/detail/hard_shoulder_status__struct.h"
// Member 'driving_lane_status'
#include "v2x_msgs/msg/detail/driving_lane_status__struct.h"

/// Struct defined in msg/ClosedLanes in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ClosedLanes
{
  /// Optional Field
  bool innerhard_shoulder_status_present;
  v2x_msgs__msg__HardShoulderStatus innerhard_shoulder_status;
  /// Optional Field
  bool outerhard_shoulder_status_present;
  v2x_msgs__msg__HardShoulderStatus outerhard_shoulder_status;
  /// Optional Field
  bool driving_lane_status_present;
  v2x_msgs__msg__DrivingLaneStatus driving_lane_status;
} v2x_msgs__msg__ClosedLanes;

// Struct for a sequence of v2x_msgs__msg__ClosedLanes.
typedef struct v2x_msgs__msg__ClosedLanes__Sequence
{
  v2x_msgs__msg__ClosedLanes * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ClosedLanes__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CLOSED_LANES__STRUCT_H_
