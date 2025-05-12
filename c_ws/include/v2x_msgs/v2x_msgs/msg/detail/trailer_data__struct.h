// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TrailerData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TRAILER_DATA__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TRAILER_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ref_point_id'
#include "v2x_msgs/msg/detail/ref_point_id__struct.h"
// Member 'hitch_point_offset'
#include "v2x_msgs/msg/detail/hitch_point_offset__struct.h"
// Member 'front_overhang'
#include "v2x_msgs/msg/detail/front_overhang__struct.h"
// Member 'rear_overhang'
#include "v2x_msgs/msg/detail/rear_overhang__struct.h"
// Member 'trailer_width'
#include "v2x_msgs/msg/detail/vehicle_width__struct.h"
// Member 'hitch_angle'
#include "v2x_msgs/msg/detail/cartesian_angle__struct.h"

/// Struct defined in msg/TrailerData in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TrailerData
{
  v2x_msgs__msg__RefPointId ref_point_id;
  v2x_msgs__msg__HitchPointOffset hitch_point_offset;
  v2x_msgs__msg__FrontOverhang front_overhang;
  v2x_msgs__msg__RearOverhang rear_overhang;
  /// Optional Field
  bool trailer_width_present;
  v2x_msgs__msg__VehicleWidth trailer_width;
  /// Optional Field
  bool hitch_angle_present;
  v2x_msgs__msg__CartesianAngle hitch_angle;
} v2x_msgs__msg__TrailerData;

// Struct for a sequence of v2x_msgs__msg__TrailerData.
typedef struct v2x_msgs__msg__TrailerData__Sequence
{
  v2x_msgs__msg__TrailerData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TrailerData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TRAILER_DATA__STRUCT_H_
