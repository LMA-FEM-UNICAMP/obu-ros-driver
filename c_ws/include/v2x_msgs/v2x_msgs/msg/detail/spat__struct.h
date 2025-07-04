// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SPAT.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time_stamp'
#include "v2x_msgs/msg/detail/minute_of_the_year__struct.h"
// Member 'name'
#include "v2x_msgs/msg/detail/descriptive_name__struct.h"
// Member 'intersections'
#include "v2x_msgs/msg/detail/intersection_state_list__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_spat__struct.h"

/// Struct defined in msg/SPAT in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SPAT
{
  /// Optional Field
  bool time_stamp_present;
  v2x_msgs__msg__MinuteOfTheYear time_stamp;
  /// Optional Field
  bool name_present;
  v2x_msgs__msg__DescriptiveName name;
  v2x_msgs__msg__IntersectionStateList intersections;
  /// Optional Field
  bool regional_present;
  /// size(1..4)
  v2x_msgs__msg__RegSPAT__Sequence regional;
} v2x_msgs__msg__SPAT;

// Struct for a sequence of v2x_msgs__msg__SPAT.
typedef struct v2x_msgs__msg__SPAT__Sequence
{
  v2x_msgs__msg__SPAT * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SPAT__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_H_
