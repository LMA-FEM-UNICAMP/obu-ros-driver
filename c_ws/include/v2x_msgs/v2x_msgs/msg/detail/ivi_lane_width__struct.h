// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/IviLaneWidth.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__IVI_LANE_WIDTH__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__IVI_LANE_WIDTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IVI_LANE_WIDTH_RANGE_MIN'.
enum
{
  v2x_msgs__msg__IviLaneWidth__IVI_LANE_WIDTH_RANGE_MIN = 0ll
};

/// Constant 'IVI_LANE_WIDTH_RANGE_MAX'.
enum
{
  v2x_msgs__msg__IviLaneWidth__IVI_LANE_WIDTH_RANGE_MAX = 1023ll
};

/// Struct defined in msg/IviLaneWidth in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__IviLaneWidth
{
  int64_t ivi_lane_width;
} v2x_msgs__msg__IviLaneWidth;

// Struct for a sequence of v2x_msgs__msg__IviLaneWidth.
typedef struct v2x_msgs__msg__IviLaneWidth__Sequence
{
  v2x_msgs__msg__IviLaneWidth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__IviLaneWidth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__IVI_LANE_WIDTH__STRUCT_H_
