// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Segment.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SEGMENT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SEGMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'line'
#include "v2x_msgs/msg/detail/polygonal_line__struct.h"
// Member 'lane_width'
#include "v2x_msgs/msg/detail/ivi_lane_width__struct.h"

/// Struct defined in msg/Segment in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Segment
{
  v2x_msgs__msg__PolygonalLine line;
  /// Optional Field
  bool lane_width_present;
  v2x_msgs__msg__IviLaneWidth lane_width;
} v2x_msgs__msg__Segment;

// Struct for a sequence of v2x_msgs__msg__Segment.
typedef struct v2x_msgs__msg__Segment__Sequence
{
  v2x_msgs__msg__Segment * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Segment__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SEGMENT__STRUCT_H_
