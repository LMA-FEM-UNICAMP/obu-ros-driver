// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/IviStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__IVI_STATUS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__IVI_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IVI_STATUS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__IviStatus__IVI_STATUS_RANGE_MIN = 0ll
};

/// Constant 'IVI_STATUS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__IviStatus__IVI_STATUS_RANGE_MAX = 7ll
};

/// Constant 'IVI_STATUS_NEW'.
enum
{
  v2x_msgs__msg__IviStatus__IVI_STATUS_NEW = 0ll
};

/// Constant 'IVI_STATUS_UPDATE'.
enum
{
  v2x_msgs__msg__IviStatus__IVI_STATUS_UPDATE = 1ll
};

/// Constant 'IVI_STATUS_CANCELLATION'.
enum
{
  v2x_msgs__msg__IviStatus__IVI_STATUS_CANCELLATION = 2ll
};

/// Constant 'IVI_STATUS_NEGATION'.
enum
{
  v2x_msgs__msg__IviStatus__IVI_STATUS_NEGATION = 3ll
};

/// Struct defined in msg/IviStatus in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__IviStatus
{
  int64_t ivi_status;
} v2x_msgs__msg__IviStatus;

// Struct for a sequence of v2x_msgs__msg__IviStatus.
typedef struct v2x_msgs__msg__IviStatus__Sequence
{
  v2x_msgs__msg__IviStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__IviStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__IVI_STATUS__STRUCT_H_
