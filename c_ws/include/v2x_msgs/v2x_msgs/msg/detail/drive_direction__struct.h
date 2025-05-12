// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DriveDirection.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DRIVE_DIRECTION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DRIVE_DIRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DRIVE_DIRECTION_FORWARD'.
enum
{
  v2x_msgs__msg__DriveDirection__DRIVE_DIRECTION_FORWARD = 0ll
};

/// Constant 'DRIVE_DIRECTION_BACKWARD'.
enum
{
  v2x_msgs__msg__DriveDirection__DRIVE_DIRECTION_BACKWARD = 1ll
};

/// Constant 'DRIVE_DIRECTION_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__DriveDirection__DRIVE_DIRECTION_UNAVAILABLE = 2ll
};

/// Struct defined in msg/DriveDirection in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DriveDirection
{
  int64_t drive_direction;
} v2x_msgs__msg__DriveDirection;

// Struct for a sequence of v2x_msgs__msg__DriveDirection.
typedef struct v2x_msgs__msg__DriveDirection__Sequence
{
  v2x_msgs__msg__DriveDirection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DriveDirection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DRIVE_DIRECTION__STRUCT_H_
