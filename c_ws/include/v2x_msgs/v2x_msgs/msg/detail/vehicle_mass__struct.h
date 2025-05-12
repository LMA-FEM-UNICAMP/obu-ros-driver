// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleMass.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_MASS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_MASS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_MASS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__VehicleMass__VEHICLE_MASS_RANGE_MIN = 1ll
};

/// Constant 'VEHICLE_MASS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__VehicleMass__VEHICLE_MASS_RANGE_MAX = 1024ll
};

/// Constant 'VEHICLE_MASS_HUNDRED_KG'.
enum
{
  v2x_msgs__msg__VehicleMass__VEHICLE_MASS_HUNDRED_KG = 1ll
};

/// Constant 'VEHICLE_MASS_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__VehicleMass__VEHICLE_MASS_UNAVAILABLE = 1024ll
};

/// Struct defined in msg/VehicleMass in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleMass
{
  int64_t vehicle_mass;
} v2x_msgs__msg__VehicleMass;

// Struct for a sequence of v2x_msgs__msg__VehicleMass.
typedef struct v2x_msgs__msg__VehicleMass__Sequence
{
  v2x_msgs__msg__VehicleMass * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleMass__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_MASS__STRUCT_H_
