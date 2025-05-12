// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PriorityRequestType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PRIORITY_REQUEST_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PRIORITY_REQUEST_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PRIORITY_REQUEST_TYPE_PRIORITY_REQUEST_TYPE_RESERVED'.
enum
{
  v2x_msgs__msg__PriorityRequestType__PRIORITY_REQUEST_TYPE_PRIORITY_REQUEST_TYPE_RESERVED = 0ll
};

/// Constant 'PRIORITY_REQUEST_TYPE_PRIORITY_REQUEST'.
enum
{
  v2x_msgs__msg__PriorityRequestType__PRIORITY_REQUEST_TYPE_PRIORITY_REQUEST = 1ll
};

/// Constant 'PRIORITY_REQUEST_TYPE_PRIORITY_REQUEST_UPDATE'.
enum
{
  v2x_msgs__msg__PriorityRequestType__PRIORITY_REQUEST_TYPE_PRIORITY_REQUEST_UPDATE = 2ll
};

/// Constant 'PRIORITY_REQUEST_TYPE_PRIORITY_CANCELLATION'.
enum
{
  v2x_msgs__msg__PriorityRequestType__PRIORITY_REQUEST_TYPE_PRIORITY_CANCELLATION = 3ll
};

/// Struct defined in msg/PriorityRequestType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PriorityRequestType
{
  int64_t priority_request_type;
} v2x_msgs__msg__PriorityRequestType;

// Struct for a sequence of v2x_msgs__msg__PriorityRequestType.
typedef struct v2x_msgs__msg__PriorityRequestType__Sequence
{
  v2x_msgs__msg__PriorityRequestType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PriorityRequestType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PRIORITY_REQUEST_TYPE__STRUCT_H_
