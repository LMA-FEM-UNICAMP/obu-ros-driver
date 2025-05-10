// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RejectedReason.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__REJECTED_REASON__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__REJECTED_REASON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REJECTED_REASON_UNKNOWN'.
enum
{
  v2x_msgs__msg__RejectedReason__REJECTED_REASON_UNKNOWN = 0ll
};

/// Constant 'REJECTED_REASON_EXCEPTIONAL_CONDITION'.
enum
{
  v2x_msgs__msg__RejectedReason__REJECTED_REASON_EXCEPTIONAL_CONDITION = 1ll
};

/// Constant 'REJECTED_REASON_MAX_WAITING_TIME_EXCEEDED'.
enum
{
  v2x_msgs__msg__RejectedReason__REJECTED_REASON_MAX_WAITING_TIME_EXCEEDED = 2ll
};

/// Constant 'REJECTED_REASON_PT_PRIORITY_DISABLED'.
enum
{
  v2x_msgs__msg__RejectedReason__REJECTED_REASON_PT_PRIORITY_DISABLED = 3ll
};

/// Constant 'REJECTED_REASON_HIGHER_PTPRIORITY_GRANTED'.
enum
{
  v2x_msgs__msg__RejectedReason__REJECTED_REASON_HIGHER_PTPRIORITY_GRANTED = 4ll
};

/// Constant 'REJECTED_REASON_VEHICLE_TRACKING_UNKNOWN'.
enum
{
  v2x_msgs__msg__RejectedReason__REJECTED_REASON_VEHICLE_TRACKING_UNKNOWN = 5ll
};

/// Struct defined in msg/RejectedReason in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RejectedReason
{
  int64_t rejected_reason;
} v2x_msgs__msg__RejectedReason;

// Struct for a sequence of v2x_msgs__msg__RejectedReason.
typedef struct v2x_msgs__msg__RejectedReason__Sequence
{
  v2x_msgs__msg__RejectedReason * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RejectedReason__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__REJECTED_REASON__STRUCT_H_
