// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Latitude.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LATITUDE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LATITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LATITUDE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__Latitude__LATITUDE_RANGE_MIN = -900000000ll
};

/// Constant 'LATITUDE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__Latitude__LATITUDE_RANGE_MAX = 900000001ll
};

/// Constant 'LATITUDE_ONE_MICRODEGREE_NORTH'.
enum
{
  v2x_msgs__msg__Latitude__LATITUDE_ONE_MICRODEGREE_NORTH = 10ll
};

/// Constant 'LATITUDE_ONE_MICRODEGREE_SOUTH'.
enum
{
  v2x_msgs__msg__Latitude__LATITUDE_ONE_MICRODEGREE_SOUTH = -10ll
};

/// Constant 'LATITUDE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__Latitude__LATITUDE_UNAVAILABLE = 900000001ll
};

/// Struct defined in msg/Latitude in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Latitude
{
  int64_t latitude;
} v2x_msgs__msg__Latitude;

// Struct for a sequence of v2x_msgs__msg__Latitude.
typedef struct v2x_msgs__msg__Latitude__Sequence
{
  v2x_msgs__msg__Latitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Latitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LATITUDE__STRUCT_H_
