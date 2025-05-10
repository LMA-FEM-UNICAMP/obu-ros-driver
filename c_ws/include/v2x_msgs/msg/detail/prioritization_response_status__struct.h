// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PrioritizationResponseStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PRIORITIZATION_RESPONSE_STATUS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PRIORITIZATION_RESPONSE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PRIORITIZATION_RESPONSE_STATUS_UNKNOWN'.
enum
{
  v2x_msgs__msg__PrioritizationResponseStatus__PRIORITIZATION_RESPONSE_STATUS_UNKNOWN = 0ll
};

/// Constant 'PRIORITIZATION_RESPONSE_STATUS_REQUESTED'.
enum
{
  v2x_msgs__msg__PrioritizationResponseStatus__PRIORITIZATION_RESPONSE_STATUS_REQUESTED = 1ll
};

/// Constant 'PRIORITIZATION_RESPONSE_STATUS_PROCESSING'.
enum
{
  v2x_msgs__msg__PrioritizationResponseStatus__PRIORITIZATION_RESPONSE_STATUS_PROCESSING = 2ll
};

/// Constant 'PRIORITIZATION_RESPONSE_STATUS_WATCH_OTHER_TRAFFIC'.
enum
{
  v2x_msgs__msg__PrioritizationResponseStatus__PRIORITIZATION_RESPONSE_STATUS_WATCH_OTHER_TRAFFIC = 3ll
};

/// Constant 'PRIORITIZATION_RESPONSE_STATUS_GRANTED'.
enum
{
  v2x_msgs__msg__PrioritizationResponseStatus__PRIORITIZATION_RESPONSE_STATUS_GRANTED = 4ll
};

/// Constant 'PRIORITIZATION_RESPONSE_STATUS_REJECTED'.
enum
{
  v2x_msgs__msg__PrioritizationResponseStatus__PRIORITIZATION_RESPONSE_STATUS_REJECTED = 5ll
};

/// Constant 'PRIORITIZATION_RESPONSE_STATUS_MAX_PRESENCE'.
enum
{
  v2x_msgs__msg__PrioritizationResponseStatus__PRIORITIZATION_RESPONSE_STATUS_MAX_PRESENCE = 6ll
};

/// Constant 'PRIORITIZATION_RESPONSE_STATUS_RESERVICE_LOCKED'.
enum
{
  v2x_msgs__msg__PrioritizationResponseStatus__PRIORITIZATION_RESPONSE_STATUS_RESERVICE_LOCKED = 7ll
};

/// Struct defined in msg/PrioritizationResponseStatus in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PrioritizationResponseStatus
{
  int64_t prioritization_response_status;
} v2x_msgs__msg__PrioritizationResponseStatus;

// Struct for a sequence of v2x_msgs__msg__PrioritizationResponseStatus.
typedef struct v2x_msgs__msg__PrioritizationResponseStatus__Sequence
{
  v2x_msgs__msg__PrioritizationResponseStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PrioritizationResponseStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PRIORITIZATION_RESPONSE_STATUS__STRUCT_H_
