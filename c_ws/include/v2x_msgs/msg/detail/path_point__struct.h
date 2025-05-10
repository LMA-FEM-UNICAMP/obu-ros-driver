// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path_position'
#include "v2x_msgs/msg/detail/delta_reference_position__struct.h"
// Member 'path_delta_time'
#include "v2x_msgs/msg/detail/path_delta_time__struct.h"

/// Struct defined in msg/PathPoint in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PathPoint
{
  v2x_msgs__msg__DeltaReferencePosition path_position;
  /// Optional Field
  bool path_delta_time_present;
  v2x_msgs__msg__PathDeltaTime path_delta_time;
} v2x_msgs__msg__PathPoint;

// Struct for a sequence of v2x_msgs__msg__PathPoint.
typedef struct v2x_msgs__msg__PathPoint__Sequence
{
  v2x_msgs__msg__PathPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PathPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_
