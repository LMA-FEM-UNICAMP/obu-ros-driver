// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RccPart.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RCC_PART__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RCC_PART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'relevance_zone_ids'
#include "v2x_msgs/msg/detail/zone_ids__struct.h"
// Member 'road_type'
#include "v2x_msgs/msg/detail/road_type__struct.h"
// Member 'lane_configuration'
#include "v2x_msgs/msg/detail/lane_configuration__struct.h"

/// Struct defined in msg/RccPart in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RccPart
{
  v2x_msgs__msg__ZoneIds relevance_zone_ids;
  v2x_msgs__msg__RoadType road_type;
  v2x_msgs__msg__LaneConfiguration lane_configuration;
} v2x_msgs__msg__RccPart;

// Struct for a sequence of v2x_msgs__msg__RccPart.
typedef struct v2x_msgs__msg__RccPart__Sequence
{
  v2x_msgs__msg__RccPart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RccPart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RCC_PART__STRUCT_H_
