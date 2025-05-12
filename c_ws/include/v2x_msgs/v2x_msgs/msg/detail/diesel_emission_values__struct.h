// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DieselEmissionValues.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DIESEL_EMISSION_VALUES__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DIESEL_EMISSION_VALUES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VALUE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DieselEmissionValues__VALUE_RANGE_MIN = 0ll
};

/// Constant 'VALUE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DieselEmissionValues__VALUE_RANGE_MAX = 32767ll
};

// Include directives for member types
// Member 'unit_type'
#include "v2x_msgs/msg/detail/unit_type__struct.h"
// Member 'absorption_coeff'
#include "v2x_msgs/msg/detail/int2__struct.h"

/// Struct defined in msg/DieselEmissionValues in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DieselEmissionValues
{
  v2x_msgs__msg__UnitType unit_type;
  int64_t value;
  v2x_msgs__msg__Int2 absorption_coeff;
} v2x_msgs__msg__DieselEmissionValues;

// Struct for a sequence of v2x_msgs__msg__DieselEmissionValues.
typedef struct v2x_msgs__msg__DieselEmissionValues__Sequence
{
  v2x_msgs__msg__DieselEmissionValues * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DieselEmissionValues__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DIESEL_EMISSION_VALUES__STRUCT_H_
