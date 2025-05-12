// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ProtectedCommunicationZonesRSU.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PROTECTED_COMMUNICATION_ZONES_RSU__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PROTECTED_COMMUNICATION_ZONES_RSU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'zonesrsu'
#include "v2x_msgs/msg/detail/protected_communication_zone__struct.h"

/// Struct defined in msg/ProtectedCommunicationZonesRSU in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ProtectedCommunicationZonesRSU
{
  /// size(1..16)
  v2x_msgs__msg__ProtectedCommunicationZone__Sequence zonesrsu;
} v2x_msgs__msg__ProtectedCommunicationZonesRSU;

// Struct for a sequence of v2x_msgs__msg__ProtectedCommunicationZonesRSU.
typedef struct v2x_msgs__msg__ProtectedCommunicationZonesRSU__Sequence
{
  v2x_msgs__msg__ProtectedCommunicationZonesRSU * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ProtectedCommunicationZonesRSU__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PROTECTED_COMMUNICATION_ZONES_RSU__STRUCT_H_
