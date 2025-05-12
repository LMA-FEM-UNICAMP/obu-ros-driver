// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MlcPart.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MLC_PART__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MLC_PART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'zone_id'
#include "v2x_msgs/msg/detail/zid__struct.h"
// Member 'lane_ids'
#include "v2x_msgs/msg/detail/lane_ids__struct.h"

/// Struct defined in msg/MlcPart in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MlcPart
{
  v2x_msgs__msg__Zid zone_id;
  /// Optional Field
  bool lane_ids_present;
  v2x_msgs__msg__LaneIds lane_ids;
} v2x_msgs__msg__MlcPart;

// Struct for a sequence of v2x_msgs__msg__MlcPart.
typedef struct v2x_msgs__msg__MlcPart__Sequence
{
  v2x_msgs__msg__MlcPart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MlcPart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MLC_PART__STRUCT_H_
