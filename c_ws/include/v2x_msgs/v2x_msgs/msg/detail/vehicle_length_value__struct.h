// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleLengthValue.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH_VALUE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_LENGTH_VALUE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__VehicleLengthValue__VEHICLE_LENGTH_VALUE_RANGE_MIN = 1ll
};

/// Constant 'VEHICLE_LENGTH_VALUE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__VehicleLengthValue__VEHICLE_LENGTH_VALUE_RANGE_MAX = 1023ll
};

/// Constant 'VEHICLE_LENGTH_VALUE_TEN_CENTIMETERS'.
enum
{
  v2x_msgs__msg__VehicleLengthValue__VEHICLE_LENGTH_VALUE_TEN_CENTIMETERS = 1ll
};

/// Constant 'VEHICLE_LENGTH_VALUE_OUT_OF_RANGE'.
enum
{
  v2x_msgs__msg__VehicleLengthValue__VEHICLE_LENGTH_VALUE_OUT_OF_RANGE = 1022ll
};

/// Constant 'VEHICLE_LENGTH_VALUE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__VehicleLengthValue__VEHICLE_LENGTH_VALUE_UNAVAILABLE = 1023ll
};

/// Struct defined in msg/VehicleLengthValue in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleLengthValue
{
  int64_t vehicle_length_value;
} v2x_msgs__msg__VehicleLengthValue;

// Struct for a sequence of v2x_msgs__msg__VehicleLengthValue.
typedef struct v2x_msgs__msg__VehicleLengthValue__Sequence
{
  v2x_msgs__msg__VehicleLengthValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleLengthValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH_VALUE__STRUCT_H_
