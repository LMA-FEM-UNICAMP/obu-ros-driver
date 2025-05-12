// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/GeographicLocationContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__GEOGRAPHIC_LOCATION_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__GEOGRAPHIC_LOCATION_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'reference_position'
#include "v2x_msgs/msg/detail/reference_position__struct.h"
// Member 'reference_position_time'
#include "v2x_msgs/msg/detail/timestamp_its__struct.h"
// Member 'reference_position_heading'
#include "v2x_msgs/msg/detail/heading__struct.h"
// Member 'reference_position_speed'
#include "v2x_msgs/msg/detail/speed__struct.h"
// Member 'parts'
#include "v2x_msgs/msg/detail/glc_parts__struct.h"

/// Struct defined in msg/GeographicLocationContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__GeographicLocationContainer
{
  v2x_msgs__msg__ReferencePosition reference_position;
  /// Optional Field
  bool reference_position_time_present;
  v2x_msgs__msg__TimestampIts reference_position_time;
  /// Optional Field
  bool reference_position_heading_present;
  v2x_msgs__msg__Heading reference_position_heading;
  /// Optional Field
  bool reference_position_speed_present;
  v2x_msgs__msg__Speed reference_position_speed;
  v2x_msgs__msg__GlcParts parts;
} v2x_msgs__msg__GeographicLocationContainer;

// Struct for a sequence of v2x_msgs__msg__GeographicLocationContainer.
typedef struct v2x_msgs__msg__GeographicLocationContainer__Sequence
{
  v2x_msgs__msg__GeographicLocationContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__GeographicLocationContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__GEOGRAPHIC_LOCATION_CONTAINER__STRUCT_H_
