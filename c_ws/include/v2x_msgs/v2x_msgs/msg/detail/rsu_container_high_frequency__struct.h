// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RSUContainerHighFrequency.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RSU_CONTAINER_HIGH_FREQUENCY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RSU_CONTAINER_HIGH_FREQUENCY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'protected_communication_zones_rsu'
#include "v2x_msgs/msg/detail/protected_communication_zones_rsu__struct.h"

/// Struct defined in msg/RSUContainerHighFrequency in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RSUContainerHighFrequency
{
  /// Optional Field
  bool protected_communication_zones_rsu_present;
  v2x_msgs__msg__ProtectedCommunicationZonesRSU protected_communication_zones_rsu;
} v2x_msgs__msg__RSUContainerHighFrequency;

// Struct for a sequence of v2x_msgs__msg__RSUContainerHighFrequency.
typedef struct v2x_msgs__msg__RSUContainerHighFrequency__Sequence
{
  v2x_msgs__msg__RSUContainerHighFrequency * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RSUContainerHighFrequency__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RSU_CONTAINER_HIGH_FREQUENCY__STRUCT_H_
