// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LaneWidth.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LANE_WIDTH__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LANE_WIDTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_WIDTH_RANGE_MIN'.
enum
{
  v2x_msgs__msg__LaneWidth__LANE_WIDTH_RANGE_MIN = 0ll
};

/// Constant 'LANE_WIDTH_RANGE_MAX'.
enum
{
  v2x_msgs__msg__LaneWidth__LANE_WIDTH_RANGE_MAX = 32767ll
};

/// Struct defined in msg/LaneWidth in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LaneWidth
{
  int64_t lane_width;
} v2x_msgs__msg__LaneWidth;

// Struct for a sequence of v2x_msgs__msg__LaneWidth.
typedef struct v2x_msgs__msg__LaneWidth__Sequence
{
  v2x_msgs__msg__LaneWidth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LaneWidth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LANE_WIDTH__STRUCT_H_
