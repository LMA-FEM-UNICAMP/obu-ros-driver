// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SpecialTransportContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SPECIAL_TRANSPORT_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SPECIAL_TRANSPORT_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'special_transport_type'
#include "v2x_msgs/msg/detail/special_transport_type__struct.h"
// Member 'light_bar_siren_in_use'
#include "v2x_msgs/msg/detail/light_bar_siren_in_use__struct.h"

/// Struct defined in msg/SpecialTransportContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SpecialTransportContainer
{
  v2x_msgs__msg__SpecialTransportType special_transport_type;
  v2x_msgs__msg__LightBarSirenInUse light_bar_siren_in_use;
} v2x_msgs__msg__SpecialTransportContainer;

// Struct for a sequence of v2x_msgs__msg__SpecialTransportContainer.
typedef struct v2x_msgs__msg__SpecialTransportContainer__Sequence
{
  v2x_msgs__msg__SpecialTransportContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SpecialTransportContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SPECIAL_TRANSPORT_CONTAINER__STRUCT_H_
