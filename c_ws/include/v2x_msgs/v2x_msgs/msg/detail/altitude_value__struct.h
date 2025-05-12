// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AltitudeValue.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ALTITUDE_VALUE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ALTITUDE_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ALTITUDE_VALUE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__AltitudeValue__ALTITUDE_VALUE_RANGE_MIN = -100000ll
};

/// Constant 'ALTITUDE_VALUE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__AltitudeValue__ALTITUDE_VALUE_RANGE_MAX = 800001ll
};

/// Constant 'ALTITUDE_VALUE_REFERENCE_ELLIPSOID_SURFACE'.
enum
{
  v2x_msgs__msg__AltitudeValue__ALTITUDE_VALUE_REFERENCE_ELLIPSOID_SURFACE = 0ll
};

/// Constant 'ALTITUDE_VALUE_ONE_CENTIMETER'.
enum
{
  v2x_msgs__msg__AltitudeValue__ALTITUDE_VALUE_ONE_CENTIMETER = 1ll
};

/// Constant 'ALTITUDE_VALUE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__AltitudeValue__ALTITUDE_VALUE_UNAVAILABLE = 800001ll
};

/// Struct defined in msg/AltitudeValue in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AltitudeValue
{
  int64_t altitude_value;
} v2x_msgs__msg__AltitudeValue;

// Struct for a sequence of v2x_msgs__msg__AltitudeValue.
typedef struct v2x_msgs__msg__AltitudeValue__Sequence
{
  v2x_msgs__msg__AltitudeValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AltitudeValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ALTITUDE_VALUE__STRUCT_H_
