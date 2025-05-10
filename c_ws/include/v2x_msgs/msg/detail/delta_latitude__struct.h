// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DeltaLatitude.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DELTA_LATITUDE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DELTA_LATITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DELTA_LATITUDE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DeltaLatitude__DELTA_LATITUDE_RANGE_MIN = -131071ll
};

/// Constant 'DELTA_LATITUDE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DeltaLatitude__DELTA_LATITUDE_RANGE_MAX = 131072ll
};

/// Constant 'DELTA_LATITUDE_ONE_MICRODEGREE_NORTH'.
enum
{
  v2x_msgs__msg__DeltaLatitude__DELTA_LATITUDE_ONE_MICRODEGREE_NORTH = 10ll
};

/// Constant 'DELTA_LATITUDE_ONE_MICRODEGREE_SOUTH'.
enum
{
  v2x_msgs__msg__DeltaLatitude__DELTA_LATITUDE_ONE_MICRODEGREE_SOUTH = -10ll
};

/// Constant 'DELTA_LATITUDE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__DeltaLatitude__DELTA_LATITUDE_UNAVAILABLE = 131072ll
};

/// Struct defined in msg/DeltaLatitude in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DeltaLatitude
{
  int64_t delta_latitude;
} v2x_msgs__msg__DeltaLatitude;

// Struct for a sequence of v2x_msgs__msg__DeltaLatitude.
typedef struct v2x_msgs__msg__DeltaLatitude__Sequence
{
  v2x_msgs__msg__DeltaLatitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DeltaLatitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DELTA_LATITUDE__STRUCT_H_
