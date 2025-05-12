// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RoadwayCrownAngle.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ROADWAY_CROWN_ANGLE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ROADWAY_CROWN_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ROADWAY_CROWN_ANGLE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__RoadwayCrownAngle__ROADWAY_CROWN_ANGLE_RANGE_MIN = -128ll
};

/// Constant 'ROADWAY_CROWN_ANGLE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__RoadwayCrownAngle__ROADWAY_CROWN_ANGLE_RANGE_MAX = 127ll
};

/// Struct defined in msg/RoadwayCrownAngle in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RoadwayCrownAngle
{
  int64_t roadway_crown_angle;
} v2x_msgs__msg__RoadwayCrownAngle;

// Struct for a sequence of v2x_msgs__msg__RoadwayCrownAngle.
typedef struct v2x_msgs__msg__RoadwayCrownAngle__Sequence
{
  v2x_msgs__msg__RoadwayCrownAngle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RoadwayCrownAngle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ROADWAY_CROWN_ANGLE__STRUCT_H_
