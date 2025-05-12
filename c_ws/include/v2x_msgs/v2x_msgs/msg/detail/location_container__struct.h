// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LocationContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LOCATION_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LOCATION_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'event_speed'
#include "v2x_msgs/msg/detail/speed__struct.h"
// Member 'event_position_heading'
#include "v2x_msgs/msg/detail/heading__struct.h"
// Member 'traces'
#include "v2x_msgs/msg/detail/traces__struct.h"
// Member 'road_type'
#include "v2x_msgs/msg/detail/road_type__struct.h"

/// Struct defined in msg/LocationContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LocationContainer
{
  /// Optional Field
  bool event_speed_present;
  v2x_msgs__msg__Speed event_speed;
  /// Optional Field
  bool event_position_heading_present;
  v2x_msgs__msg__Heading event_position_heading;
  v2x_msgs__msg__Traces traces;
  /// Optional Field
  bool road_type_present;
  v2x_msgs__msg__RoadType road_type;
} v2x_msgs__msg__LocationContainer;

// Struct for a sequence of v2x_msgs__msg__LocationContainer.
typedef struct v2x_msgs__msg__LocationContainer__Sequence
{
  v2x_msgs__msg__LocationContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LocationContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LOCATION_CONTAINER__STRUCT_H_
