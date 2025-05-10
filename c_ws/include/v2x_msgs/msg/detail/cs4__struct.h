// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CS4.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CS4__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CS4__STRUCT_H_

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
// Member 'alphabet_indicator'
#include "v2x_msgs/msg/detail/alphabet_indicator__struct.h"
// Member 'lic_plate_number'
#include "v2x_msgs/msg/detail/lic_plate_number__struct.h"

/// Struct defined in msg/CS4 in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CS4
{
  v2x_msgs__msg__CountryCode country_code;
  v2x_msgs__msg__AlphabetIndicator alphabet_indicator;
  v2x_msgs__msg__LicPlateNumber lic_plate_number;
} v2x_msgs__msg__CS4;

// Struct for a sequence of v2x_msgs__msg__CS4.
typedef struct v2x_msgs__msg__CS4__Sequence
{
  v2x_msgs__msg__CS4 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CS4__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CS4__STRUCT_H_
