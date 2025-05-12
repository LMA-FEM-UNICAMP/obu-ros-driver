// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TransmissionInterval.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TRANSMISSION_INTERVAL__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TRANSMISSION_INTERVAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TRANSMISSION_INTERVAL_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TransmissionInterval__TRANSMISSION_INTERVAL_RANGE_MIN = 1ll
};

/// Constant 'TRANSMISSION_INTERVAL_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TransmissionInterval__TRANSMISSION_INTERVAL_RANGE_MAX = 10000ll
};

/// Constant 'TRANSMISSION_INTERVAL_ONE_MILLI_SECOND'.
enum
{
  v2x_msgs__msg__TransmissionInterval__TRANSMISSION_INTERVAL_ONE_MILLI_SECOND = 1ll
};

/// Constant 'TRANSMISSION_INTERVAL_TEN_SECONDS'.
enum
{
  v2x_msgs__msg__TransmissionInterval__TRANSMISSION_INTERVAL_TEN_SECONDS = 10000ll
};

/// Struct defined in msg/TransmissionInterval in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TransmissionInterval
{
  int64_t transmission_interval;
} v2x_msgs__msg__TransmissionInterval;

// Struct for a sequence of v2x_msgs__msg__TransmissionInterval.
typedef struct v2x_msgs__msg__TransmissionInterval__Sequence
{
  v2x_msgs__msg__TransmissionInterval * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TransmissionInterval__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TRANSMISSION_INTERVAL__STRUCT_H_
