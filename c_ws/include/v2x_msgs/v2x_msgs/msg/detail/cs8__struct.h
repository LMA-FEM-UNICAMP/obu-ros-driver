// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CS8.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CS8__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CS8__STRUCT_H_

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
// Member 'tax_code'
#include "v2x_msgs/msg/detail/tax_code__struct.h"

/// Struct defined in msg/CS8 in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CS8
{
  int64_t fill;
  v2x_msgs__msg__CountryCode country_code;
  v2x_msgs__msg__TaxCode tax_code;
} v2x_msgs__msg__CS8;

// Struct for a sequence of v2x_msgs__msg__CS8.
typedef struct v2x_msgs__msg__CS8__Sequence
{
  v2x_msgs__msg__CS8 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CS8__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CS8__STRUCT_H_
