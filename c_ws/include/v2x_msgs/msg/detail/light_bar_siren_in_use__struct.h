// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/LightBarSirenInUse.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LIGHT_BAR_SIREN_IN_USE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LIGHT_BAR_SIREN_IN_USE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LIGHT_BAR_SIREN_IN_USE_LIGHT_BAR_ACTIVATED'.
enum
{
  v2x_msgs__msg__LightBarSirenInUse__LIGHT_BAR_SIREN_IN_USE_LIGHT_BAR_ACTIVATED = 0ll
};

/// Constant 'LIGHT_BAR_SIREN_IN_USE_SIREN_ACTIVATED'.
enum
{
  v2x_msgs__msg__LightBarSirenInUse__LIGHT_BAR_SIREN_IN_USE_SIREN_ACTIVATED = 1ll
};

/// Struct defined in msg/LightBarSirenInUse in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__LightBarSirenInUse
{
  int64_t light_bar_siren_in_use;
} v2x_msgs__msg__LightBarSirenInUse;

// Struct for a sequence of v2x_msgs__msg__LightBarSirenInUse.
typedef struct v2x_msgs__msg__LightBarSirenInUse__Sequence
{
  v2x_msgs__msg__LightBarSirenInUse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__LightBarSirenInUse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LIGHT_BAR_SIREN_IN_USE__STRUCT_H_
