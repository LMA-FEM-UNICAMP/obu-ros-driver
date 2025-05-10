// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/FreeSpaceAddendum.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__FREE_SPACE_ADDENDUM__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__FREE_SPACE_ADDENDUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'free_space_confidence'
#include "v2x_msgs/msg/detail/free_space_confidence__struct.h"
// Member 'free_space_area'
#include "v2x_msgs/msg/detail/free_space_area__struct.h"
// Member 'sensor_idlist'
#include "v2x_msgs/msg/detail/sensor_id_list__struct.h"
// Member 'shadowing_applies'
#include "v2x_msgs/msg/detail/shadowing_applies__struct.h"

/// Struct defined in msg/FreeSpaceAddendum in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__FreeSpaceAddendum
{
  v2x_msgs__msg__FreeSpaceConfidence free_space_confidence;
  v2x_msgs__msg__FreeSpaceArea free_space_area;
  /// Optional Field
  bool sensor_idlist_present;
  v2x_msgs__msg__SensorIdList sensor_idlist;
  /// Optional Field
  bool shadowing_applies_present;
  v2x_msgs__msg__ShadowingApplies shadowing_applies;
} v2x_msgs__msg__FreeSpaceAddendum;

// Struct for a sequence of v2x_msgs__msg__FreeSpaceAddendum.
typedef struct v2x_msgs__msg__FreeSpaceAddendum__Sequence
{
  v2x_msgs__msg__FreeSpaceAddendum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__FreeSpaceAddendum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__FREE_SPACE_ADDENDUM__STRUCT_H_
