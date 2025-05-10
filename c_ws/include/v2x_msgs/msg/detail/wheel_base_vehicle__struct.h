// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/WheelBaseVehicle.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__WHEEL_BASE_VEHICLE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__WHEEL_BASE_VEHICLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'WHEEL_BASE_VEHICLE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__WheelBaseVehicle__WHEEL_BASE_VEHICLE_RANGE_MIN = 1ll
};

/// Constant 'WHEEL_BASE_VEHICLE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__WheelBaseVehicle__WHEEL_BASE_VEHICLE_RANGE_MAX = 127ll
};

/// Constant 'WHEEL_BASE_VEHICLE_TEN_CENTIMETERS'.
enum
{
  v2x_msgs__msg__WheelBaseVehicle__WHEEL_BASE_VEHICLE_TEN_CENTIMETERS = 1ll
};

/// Constant 'WHEEL_BASE_VEHICLE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__WheelBaseVehicle__WHEEL_BASE_VEHICLE_UNAVAILABLE = 127ll
};

/// Struct defined in msg/WheelBaseVehicle in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__WheelBaseVehicle
{
  int64_t wheel_base_vehicle;
} v2x_msgs__msg__WheelBaseVehicle;

// Struct for a sequence of v2x_msgs__msg__WheelBaseVehicle.
typedef struct v2x_msgs__msg__WheelBaseVehicle__Sequence
{
  v2x_msgs__msg__WheelBaseVehicle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__WheelBaseVehicle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__WHEEL_BASE_VEHICLE__STRUCT_H_
