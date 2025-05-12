// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MaxNoOfVehicles.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MAX_NO_OF_VEHICLES__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MAX_NO_OF_VEHICLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAX_NO_OF_VEHICLES_RANGE_MIN'.
enum
{
  v2x_msgs__msg__MaxNoOfVehicles__MAX_NO_OF_VEHICLES_RANGE_MIN = 2ll
};

/// Constant 'MAX_NO_OF_VEHICLES_RANGE_MAX'.
enum
{
  v2x_msgs__msg__MaxNoOfVehicles__MAX_NO_OF_VEHICLES_RANGE_MAX = 64ll
};

/// Struct defined in msg/MaxNoOfVehicles in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MaxNoOfVehicles
{
  int64_t max_no_of_vehicles;
} v2x_msgs__msg__MaxNoOfVehicles;

// Struct for a sequence of v2x_msgs__msg__MaxNoOfVehicles.
typedef struct v2x_msgs__msg__MaxNoOfVehicles__Sequence
{
  v2x_msgs__msg__MaxNoOfVehicles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MaxNoOfVehicles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MAX_NO_OF_VEHICLES__STRUCT_H_
