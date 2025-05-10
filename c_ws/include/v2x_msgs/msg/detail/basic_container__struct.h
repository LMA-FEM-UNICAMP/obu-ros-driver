// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/BasicContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__BASIC_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__BASIC_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'station_type'
#include "v2x_msgs/msg/detail/station_type__struct.h"
// Member 'reference_position'
#include "v2x_msgs/msg/detail/reference_position__struct.h"

/// Struct defined in msg/BasicContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__BasicContainer
{
  v2x_msgs__msg__StationType station_type;
  v2x_msgs__msg__ReferencePosition reference_position;
} v2x_msgs__msg__BasicContainer;

// Struct for a sequence of v2x_msgs__msg__BasicContainer.
typedef struct v2x_msgs__msg__BasicContainer__Sequence
{
  v2x_msgs__msg__BasicContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__BasicContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__BASIC_CONTAINER__STRUCT_H_
