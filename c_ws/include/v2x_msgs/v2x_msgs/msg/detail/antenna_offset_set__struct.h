// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AntennaOffsetSet.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ANTENNA_OFFSET_SET__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ANTENNA_OFFSET_SET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ant_offset_x'
#include "v2x_msgs/msg/detail/offset_b12__struct.h"
// Member 'ant_offset_y'
#include "v2x_msgs/msg/detail/offset_b09__struct.h"
// Member 'ant_offset_z'
#include "v2x_msgs/msg/detail/offset_b10__struct.h"

/// Struct defined in msg/AntennaOffsetSet in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AntennaOffsetSet
{
  v2x_msgs__msg__OffsetB12 ant_offset_x;
  v2x_msgs__msg__OffsetB09 ant_offset_y;
  v2x_msgs__msg__OffsetB10 ant_offset_z;
} v2x_msgs__msg__AntennaOffsetSet;

// Struct for a sequence of v2x_msgs__msg__AntennaOffsetSet.
typedef struct v2x_msgs__msg__AntennaOffsetSet__Sequence
{
  v2x_msgs__msg__AntennaOffsetSet * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AntennaOffsetSet__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ANTENNA_OFFSET_SET__STRUCT_H_
