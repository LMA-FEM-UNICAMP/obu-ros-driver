// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ItineraryPath.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ITINERARY_PATH__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ITINERARY_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "v2x_msgs/msg/detail/reference_position__struct.h"

/// Struct defined in msg/ItineraryPath in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ItineraryPath
{
  /// size(1..40)
  v2x_msgs__msg__ReferencePosition__Sequence path;
} v2x_msgs__msg__ItineraryPath;

// Struct for a sequence of v2x_msgs__msg__ItineraryPath.
typedef struct v2x_msgs__msg__ItineraryPath__Sequence
{
  v2x_msgs__msg__ItineraryPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ItineraryPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ITINERARY_PATH__STRUCT_H_
