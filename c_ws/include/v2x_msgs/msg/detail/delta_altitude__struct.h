// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DeltaAltitude.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DELTA_ALTITUDE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DELTA_ALTITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DELTA_ALTITUDE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DeltaAltitude__DELTA_ALTITUDE_RANGE_MIN = -12700ll
};

/// Constant 'DELTA_ALTITUDE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DeltaAltitude__DELTA_ALTITUDE_RANGE_MAX = 12800ll
};

/// Constant 'DELTA_ALTITUDE_ONE_CENTIMETER_UP'.
enum
{
  v2x_msgs__msg__DeltaAltitude__DELTA_ALTITUDE_ONE_CENTIMETER_UP = 1ll
};

/// Constant 'DELTA_ALTITUDE_ONE_CENTIMETER_DOWN'.
enum
{
  v2x_msgs__msg__DeltaAltitude__DELTA_ALTITUDE_ONE_CENTIMETER_DOWN = -1ll
};

/// Constant 'DELTA_ALTITUDE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__DeltaAltitude__DELTA_ALTITUDE_UNAVAILABLE = 12800ll
};

/// Struct defined in msg/DeltaAltitude in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DeltaAltitude
{
  int64_t delta_altitude;
} v2x_msgs__msg__DeltaAltitude;

// Struct for a sequence of v2x_msgs__msg__DeltaAltitude.
typedef struct v2x_msgs__msg__DeltaAltitude__Sequence
{
  v2x_msgs__msg__DeltaAltitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DeltaAltitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DELTA_ALTITUDE__STRUCT_H_
