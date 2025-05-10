// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AreaRectangle.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__AREA_RECTANGLE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__AREA_RECTANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_center_point'
#include "v2x_msgs/msg/detail/offset_point__struct.h"
// Member 'semi_major_range_length'
// Member 'semi_minor_range_length'
// Member 'semi_height'
#include "v2x_msgs/msg/detail/semi_range_length__struct.h"
// Member 'semi_major_range_orientation'
#include "v2x_msgs/msg/detail/wgs84_angle_value__struct.h"

/// Struct defined in msg/AreaRectangle in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AreaRectangle
{
  /// Optional Field
  bool node_center_point_present;
  v2x_msgs__msg__OffsetPoint node_center_point;
  v2x_msgs__msg__SemiRangeLength semi_major_range_length;
  v2x_msgs__msg__SemiRangeLength semi_minor_range_length;
  v2x_msgs__msg__WGS84AngleValue semi_major_range_orientation;
  /// Optional Field
  bool semi_height_present;
  v2x_msgs__msg__SemiRangeLength semi_height;
} v2x_msgs__msg__AreaRectangle;

// Struct for a sequence of v2x_msgs__msg__AreaRectangle.
typedef struct v2x_msgs__msg__AreaRectangle__Sequence
{
  v2x_msgs__msg__AreaRectangle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AreaRectangle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__AREA_RECTANGLE__STRUCT_H_
