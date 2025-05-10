// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleWidth.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_WIDTH__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_WIDTH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_WIDTH_RANGE_MIN'.
enum
{
  v2x_msgs__msg__VehicleWidth__VEHICLE_WIDTH_RANGE_MIN = 1ll
};

/// Constant 'VEHICLE_WIDTH_RANGE_MAX'.
enum
{
  v2x_msgs__msg__VehicleWidth__VEHICLE_WIDTH_RANGE_MAX = 62ll
};

/// Constant 'VEHICLE_WIDTH_TEN_CENTIMETERS'.
enum
{
  v2x_msgs__msg__VehicleWidth__VEHICLE_WIDTH_TEN_CENTIMETERS = 1ll
};

/// Constant 'VEHICLE_WIDTH_OUT_OF_RANGE'.
enum
{
  v2x_msgs__msg__VehicleWidth__VEHICLE_WIDTH_OUT_OF_RANGE = 61ll
};

/// Constant 'VEHICLE_WIDTH_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__VehicleWidth__VEHICLE_WIDTH_UNAVAILABLE = 62ll
};

/// Struct defined in msg/VehicleWidth in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleWidth
{
  int64_t vehicle_width;
} v2x_msgs__msg__VehicleWidth;

// Struct for a sequence of v2x_msgs__msg__VehicleWidth.
typedef struct v2x_msgs__msg__VehicleWidth__Sequence
{
  v2x_msgs__msg__VehicleWidth * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleWidth__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_WIDTH__STRUCT_H_
