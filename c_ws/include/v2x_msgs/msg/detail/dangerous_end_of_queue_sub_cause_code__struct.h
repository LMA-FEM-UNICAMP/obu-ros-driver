// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DangerousEndOfQueueSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DangerousEndOfQueueSubCauseCode__DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DangerousEndOfQueueSubCauseCode__DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__DangerousEndOfQueueSubCauseCode__DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE_SUDDEN_END_OF_QUEUE'.
enum
{
  v2x_msgs__msg__DangerousEndOfQueueSubCauseCode__DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE_SUDDEN_END_OF_QUEUE = 1ll
};

/// Constant 'DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE_QUEUE_OVER_HILL'.
enum
{
  v2x_msgs__msg__DangerousEndOfQueueSubCauseCode__DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE_QUEUE_OVER_HILL = 2ll
};

/// Constant 'DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE_QUEUE_AROUND_BEND'.
enum
{
  v2x_msgs__msg__DangerousEndOfQueueSubCauseCode__DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE_QUEUE_AROUND_BEND = 3ll
};

/// Constant 'DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE_QUEUE_IN_TUNNEL'.
enum
{
  v2x_msgs__msg__DangerousEndOfQueueSubCauseCode__DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE_QUEUE_IN_TUNNEL = 4ll
};

/// Struct defined in msg/DangerousEndOfQueueSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DangerousEndOfQueueSubCauseCode
{
  int64_t dangerous_end_of_queue_sub_cause_code;
} v2x_msgs__msg__DangerousEndOfQueueSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__DangerousEndOfQueueSubCauseCode.
typedef struct v2x_msgs__msg__DangerousEndOfQueueSubCauseCode__Sequence
{
  v2x_msgs__msg__DangerousEndOfQueueSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DangerousEndOfQueueSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DANGEROUS_END_OF_QUEUE_SUB_CAUSE_CODE__STRUCT_H_
