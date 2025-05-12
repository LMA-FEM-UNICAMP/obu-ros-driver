// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DriverCharacteristics.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DRIVER_CHARACTERISTICS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DRIVER_CHARACTERISTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DRIVER_CHARACTERISTICS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DriverCharacteristics__DRIVER_CHARACTERISTICS_RANGE_MIN = 0ll
};

/// Constant 'DRIVER_CHARACTERISTICS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DriverCharacteristics__DRIVER_CHARACTERISTICS_RANGE_MAX = 3ll
};

/// Constant 'DRIVER_CHARACTERISTICS_UNEXPERIENCED_DRIVERS'.
enum
{
  v2x_msgs__msg__DriverCharacteristics__DRIVER_CHARACTERISTICS_UNEXPERIENCED_DRIVERS = 0ll
};

/// Constant 'DRIVER_CHARACTERISTICS_EXPERIENCED_DRIVERS'.
enum
{
  v2x_msgs__msg__DriverCharacteristics__DRIVER_CHARACTERISTICS_EXPERIENCED_DRIVERS = 1ll
};

/// Constant 'DRIVER_CHARACTERISTICS_RFU1'.
enum
{
  v2x_msgs__msg__DriverCharacteristics__DRIVER_CHARACTERISTICS_RFU1 = 2ll
};

/// Constant 'DRIVER_CHARACTERISTICS_RFU2'.
enum
{
  v2x_msgs__msg__DriverCharacteristics__DRIVER_CHARACTERISTICS_RFU2 = 3ll
};

/// Struct defined in msg/DriverCharacteristics in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DriverCharacteristics
{
  int64_t driver_characteristics;
} v2x_msgs__msg__DriverCharacteristics;

// Struct for a sequence of v2x_msgs__msg__DriverCharacteristics.
typedef struct v2x_msgs__msg__DriverCharacteristics__Sequence
{
  v2x_msgs__msg__DriverCharacteristics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DriverCharacteristics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DRIVER_CHARACTERISTICS__STRUCT_H_
