// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ContractVehicle.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CONTRACT_VEHICLE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CONTRACT_VEHICLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'contract_vehicle'
#include "v2x_msgs/msg/detail/lpn__struct.h"

/// Struct defined in msg/ContractVehicle in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ContractVehicle
{
  v2x_msgs__msg__LPN contract_vehicle;
} v2x_msgs__msg__ContractVehicle;

// Struct for a sequence of v2x_msgs__msg__ContractVehicle.
typedef struct v2x_msgs__msg__ContractVehicle__Sequence
{
  v2x_msgs__msg__ContractVehicle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ContractVehicle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CONTRACT_VEHICLE__STRUCT_H_
