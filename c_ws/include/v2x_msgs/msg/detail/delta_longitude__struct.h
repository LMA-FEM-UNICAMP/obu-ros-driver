// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DeltaLongitude.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DELTA_LONGITUDE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DELTA_LONGITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DELTA_LONGITUDE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DeltaLongitude__DELTA_LONGITUDE_RANGE_MIN = -131071ll
};

/// Constant 'DELTA_LONGITUDE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DeltaLongitude__DELTA_LONGITUDE_RANGE_MAX = 131072ll
};

/// Constant 'DELTA_LONGITUDE_ONE_MICRODEGREE_EAST'.
enum
{
  v2x_msgs__msg__DeltaLongitude__DELTA_LONGITUDE_ONE_MICRODEGREE_EAST = 10ll
};

/// Constant 'DELTA_LONGITUDE_ONE_MICRODEGREE_WEST'.
enum
{
  v2x_msgs__msg__DeltaLongitude__DELTA_LONGITUDE_ONE_MICRODEGREE_WEST = -10ll
};

/// Constant 'DELTA_LONGITUDE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__DeltaLongitude__DELTA_LONGITUDE_UNAVAILABLE = 131072ll
};

/// Struct defined in msg/DeltaLongitude in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DeltaLongitude
{
  int64_t delta_longitude;
} v2x_msgs__msg__DeltaLongitude;

// Struct for a sequence of v2x_msgs__msg__DeltaLongitude.
typedef struct v2x_msgs__msg__DeltaLongitude__Sequence
{
  v2x_msgs__msg__DeltaLongitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DeltaLongitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DELTA_LONGITUDE__STRUCT_H_
