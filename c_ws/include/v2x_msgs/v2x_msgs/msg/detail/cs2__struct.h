// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CS2.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CS2__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CS2__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'manufacturer_identifier'
#include "v2x_msgs/msg/detail/manufacturer_identifier__struct.h"
// Member 'service_number'
#include "v2x_msgs/msg/detail/service_number__struct.h"

/// Struct defined in msg/CS2 in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CS2
{
  v2x_msgs__msg__ManufacturerIdentifier manufacturer_identifier;
  v2x_msgs__msg__ServiceNumber service_number;
} v2x_msgs__msg__CS2;

// Struct for a sequence of v2x_msgs__msg__CS2.
typedef struct v2x_msgs__msg__CS2__Sequence
{
  v2x_msgs__msg__CS2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CS2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CS2__STRUCT_H_
