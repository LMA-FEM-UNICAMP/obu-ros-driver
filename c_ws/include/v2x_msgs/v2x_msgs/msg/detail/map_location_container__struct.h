// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MapLocationContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MAP_LOCATION_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MAP_LOCATION_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'reference'
#include "v2x_msgs/msg/detail/map_reference__struct.h"
// Member 'parts'
#include "v2x_msgs/msg/detail/mlc_parts__struct.h"

/// Struct defined in msg/MapLocationContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MapLocationContainer
{
  v2x_msgs__msg__MapReference reference;
  v2x_msgs__msg__MlcParts parts;
} v2x_msgs__msg__MapLocationContainer;

// Struct for a sequence of v2x_msgs__msg__MapLocationContainer.
typedef struct v2x_msgs__msg__MapLocationContainer__Sequence
{
  v2x_msgs__msg__MapLocationContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MapLocationContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MAP_LOCATION_CONTAINER__STRUCT_H_
