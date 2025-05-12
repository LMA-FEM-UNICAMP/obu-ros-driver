// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DecapStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DECAP_STATUS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DECAP_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DECAP_STATUS_NONE'.
enum
{
  v2x_msgs__msg__DecapStatus__DECAP_STATUS_NONE = 0ll
};

/// Constant 'DECAP_STATUS_INVALID_FMT'.
enum
{
  v2x_msgs__msg__DecapStatus__DECAP_STATUS_INVALID_FMT = 1ll
};

/// Constant 'DECAP_STATUS_VERIFIED_PKT'.
enum
{
  v2x_msgs__msg__DecapStatus__DECAP_STATUS_VERIFIED_PKT = 2ll
};

/// Constant 'DECAP_STATUS_UNVERIFIABLE_PKT'.
enum
{
  v2x_msgs__msg__DecapStatus__DECAP_STATUS_UNVERIFIABLE_PKT = 3ll
};

/// Struct defined in msg/DecapStatus in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DecapStatus
{
  int64_t decap_status;
} v2x_msgs__msg__DecapStatus;

// Struct for a sequence of v2x_msgs__msg__DecapStatus.
typedef struct v2x_msgs__msg__DecapStatus__Sequence
{
  v2x_msgs__msg__DecapStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DecapStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DECAP_STATUS__STRUCT_H_
