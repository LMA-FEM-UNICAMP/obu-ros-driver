// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DrivingLaneStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DRIVING_LANE_STATUS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DRIVING_LANE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DrivingLaneStatus in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DrivingLaneStatus
{
  int64_t driving_lane_status;
} v2x_msgs__msg__DrivingLaneStatus;

// Struct for a sequence of v2x_msgs__msg__DrivingLaneStatus.
typedef struct v2x_msgs__msg__DrivingLaneStatus__Sequence
{
  v2x_msgs__msg__DrivingLaneStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DrivingLaneStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DRIVING_LANE_STATUS__STRUCT_H_
