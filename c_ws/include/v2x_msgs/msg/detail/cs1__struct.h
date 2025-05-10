// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CS1.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CS1__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CS1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'country_code'
#include "v2x_msgs/msg/detail/country_code__struct.h"
// Member 'issuer_identifier'
#include "v2x_msgs/msg/detail/issuer_identifier__struct.h"
// Member 'service_number'
#include "v2x_msgs/msg/detail/service_number__struct.h"

/// Struct defined in msg/CS1 in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CS1
{
  v2x_msgs__msg__CountryCode country_code;
  v2x_msgs__msg__IssuerIdentifier issuer_identifier;
  v2x_msgs__msg__ServiceNumber service_number;
} v2x_msgs__msg__CS1;

// Struct for a sequence of v2x_msgs__msg__CS1.
typedef struct v2x_msgs__msg__CS1__Sequence
{
  v2x_msgs__msg__CS1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CS1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CS1__STRUCT_H_
