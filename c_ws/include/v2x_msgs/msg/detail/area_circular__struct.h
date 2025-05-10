// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AreaCircular.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__AREA_CIRCULAR__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__AREA_CIRCULAR__STRUCT_H_

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
// Member 'radius'
#include "v2x_msgs/msg/detail/radius__struct.h"

/// Struct defined in msg/AreaCircular in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AreaCircular
{
  /// Optional Field
  bool node_center_point_present;
  v2x_msgs__msg__OffsetPoint node_center_point;
  v2x_msgs__msg__Radius radius;
} v2x_msgs__msg__AreaCircular;

// Struct for a sequence of v2x_msgs__msg__AreaCircular.
typedef struct v2x_msgs__msg__AreaCircular__Sequence
{
  v2x_msgs__msg__AreaCircular * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AreaCircular__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__AREA_CIRCULAR__STRUCT_H_
