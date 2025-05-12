// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TransmissionState.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TRANSMISSION_STATE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TRANSMISSION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TRANSMISSION_STATE_NEUTRAL'.
enum
{
  v2x_msgs__msg__TransmissionState__TRANSMISSION_STATE_NEUTRAL = 0ll
};

/// Constant 'TRANSMISSION_STATE_PARK'.
enum
{
  v2x_msgs__msg__TransmissionState__TRANSMISSION_STATE_PARK = 1ll
};

/// Constant 'TRANSMISSION_STATE_FORWARD_GEARS'.
enum
{
  v2x_msgs__msg__TransmissionState__TRANSMISSION_STATE_FORWARD_GEARS = 2ll
};

/// Constant 'TRANSMISSION_STATE_REVERSE_GEARS'.
enum
{
  v2x_msgs__msg__TransmissionState__TRANSMISSION_STATE_REVERSE_GEARS = 3ll
};

/// Constant 'TRANSMISSION_STATE_RESERVED1'.
enum
{
  v2x_msgs__msg__TransmissionState__TRANSMISSION_STATE_RESERVED1 = 4ll
};

/// Constant 'TRANSMISSION_STATE_RESERVED2'.
enum
{
  v2x_msgs__msg__TransmissionState__TRANSMISSION_STATE_RESERVED2 = 5ll
};

/// Constant 'TRANSMISSION_STATE_RESERVED3'.
enum
{
  v2x_msgs__msg__TransmissionState__TRANSMISSION_STATE_RESERVED3 = 6ll
};

/// Constant 'TRANSMISSION_STATE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__TransmissionState__TRANSMISSION_STATE_UNAVAILABLE = 7ll
};

/// Struct defined in msg/TransmissionState in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TransmissionState
{
  int64_t transmission_state;
} v2x_msgs__msg__TransmissionState;

// Struct for a sequence of v2x_msgs__msg__TransmissionState.
typedef struct v2x_msgs__msg__TransmissionState__Sequence
{
  v2x_msgs__msg__TransmissionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TransmissionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TRANSMISSION_STATE__STRUCT_H_
