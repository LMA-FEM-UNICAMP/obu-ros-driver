// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TimestampIts.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TIMESTAMP_ITS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TIMESTAMP_ITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TIMESTAMP_ITS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TimestampIts__TIMESTAMP_ITS_RANGE_MIN = 0ll
};

/// Constant 'TIMESTAMP_ITS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TimestampIts__TIMESTAMP_ITS_RANGE_MAX = 4398046511103ll
};

/// Constant 'TIMESTAMP_ITS_UTC_START_OF2004'.
enum
{
  v2x_msgs__msg__TimestampIts__TIMESTAMP_ITS_UTC_START_OF2004 = 0ll
};

/// Constant 'TIMESTAMP_ITS_ONE_MILLISEC_AFTER_UTCSTART_OF2004'.
enum
{
  v2x_msgs__msg__TimestampIts__TIMESTAMP_ITS_ONE_MILLISEC_AFTER_UTCSTART_OF2004 = 1ll
};

/// Struct defined in msg/TimestampIts in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TimestampIts
{
  int64_t timestamp_its;
} v2x_msgs__msg__TimestampIts;

// Struct for a sequence of v2x_msgs__msg__TimestampIts.
typedef struct v2x_msgs__msg__TimestampIts__Sequence
{
  v2x_msgs__msg__TimestampIts * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TimestampIts__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TIMESTAMP_ITS__STRUCT_H_
