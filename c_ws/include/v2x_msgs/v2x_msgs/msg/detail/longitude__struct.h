// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Longitude.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__LONGITUDE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__LONGITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LONGITUDE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__Longitude__LONGITUDE_RANGE_MIN = -1800000000ll
};

/// Constant 'LONGITUDE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__Longitude__LONGITUDE_RANGE_MAX = 1800000001ll
};

/// Constant 'LONGITUDE_ONE_MICRODEGREE_EAST'.
enum
{
  v2x_msgs__msg__Longitude__LONGITUDE_ONE_MICRODEGREE_EAST = 10ll
};

/// Constant 'LONGITUDE_ONE_MICRODEGREE_WEST'.
enum
{
  v2x_msgs__msg__Longitude__LONGITUDE_ONE_MICRODEGREE_WEST = -10ll
};

/// Constant 'LONGITUDE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__Longitude__LONGITUDE_UNAVAILABLE = 1800000001ll
};

/// Struct defined in msg/Longitude in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Longitude
{
  int64_t longitude;
} v2x_msgs__msg__Longitude;

// Struct for a sequence of v2x_msgs__msg__Longitude.
typedef struct v2x_msgs__msg__Longitude__Sequence
{
  v2x_msgs__msg__Longitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Longitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__LONGITUDE__STRUCT_H_
