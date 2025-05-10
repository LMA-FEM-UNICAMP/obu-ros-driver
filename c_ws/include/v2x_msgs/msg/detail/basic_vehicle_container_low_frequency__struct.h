// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/BasicVehicleContainerLowFrequency.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'vehicle_role'
#include "v2x_msgs/msg/detail/vehicle_role__struct.h"
// Member 'exterior_lights'
#include "v2x_msgs/msg/detail/exterior_lights__struct.h"
// Member 'path_history'
#include "v2x_msgs/msg/detail/path_history__struct.h"

/// Struct defined in msg/BasicVehicleContainerLowFrequency in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__BasicVehicleContainerLowFrequency
{
  v2x_msgs__msg__VehicleRole vehicle_role;
  v2x_msgs__msg__ExteriorLights exterior_lights;
  v2x_msgs__msg__PathHistory path_history;
} v2x_msgs__msg__BasicVehicleContainerLowFrequency;

// Struct for a sequence of v2x_msgs__msg__BasicVehicleContainerLowFrequency.
typedef struct v2x_msgs__msg__BasicVehicleContainerLowFrequency__Sequence
{
  v2x_msgs__msg__BasicVehicleContainerLowFrequency * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__BasicVehicleContainerLowFrequency__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY__STRUCT_H_
