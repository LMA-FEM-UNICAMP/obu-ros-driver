// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PostCrashSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__POST_CRASH_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__POST_CRASH_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POST_CRASH_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__PostCrashSubCauseCode__POST_CRASH_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'POST_CRASH_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__PostCrashSubCauseCode__POST_CRASH_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'POST_CRASH_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__PostCrashSubCauseCode__POST_CRASH_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'POST_CRASH_SUB_CAUSE_CODE_ACCIDENT_WITHOUT_ECALL_TRIGGERED'.
enum
{
  v2x_msgs__msg__PostCrashSubCauseCode__POST_CRASH_SUB_CAUSE_CODE_ACCIDENT_WITHOUT_ECALL_TRIGGERED = 1ll
};

/// Constant 'POST_CRASH_SUB_CAUSE_CODE_ACCIDENT_WITH_ECALL_MANUALLY_TRIGGERED'.
enum
{
  v2x_msgs__msg__PostCrashSubCauseCode__POST_CRASH_SUB_CAUSE_CODE_ACCIDENT_WITH_ECALL_MANUALLY_TRIGGERED = 2ll
};

/// Constant 'POST_CRASH_SUB_CAUSE_CODE_ACCIDENT_WITH_ECALL_AUTOMATICALLY_TRIGGERED'.
enum
{
  v2x_msgs__msg__PostCrashSubCauseCode__POST_CRASH_SUB_CAUSE_CODE_ACCIDENT_WITH_ECALL_AUTOMATICALLY_TRIGGERED = 3ll
};

/// Constant 'POST_CRASH_SUB_CAUSE_CODE_ACCIDENT_WITH_ECALL_TRIGGERED_WITHOUT_ACCESS_TO_CELLULAR_NETWORK'.
enum
{
  v2x_msgs__msg__PostCrashSubCauseCode__POST_CRASH_SUB_CAUSE_CODE_ACCIDENT_WITH_ECALL_TRIGGERED_WITHOUT_ACCESS_TO_CELLULAR_NETWORK = 4ll
};

/// Struct defined in msg/PostCrashSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PostCrashSubCauseCode
{
  int64_t post_crash_sub_cause_code;
} v2x_msgs__msg__PostCrashSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__PostCrashSubCauseCode.
typedef struct v2x_msgs__msg__PostCrashSubCauseCode__Sequence
{
  v2x_msgs__msg__PostCrashSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PostCrashSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__POST_CRASH_SUB_CAUSE_CODE__STRUCT_H_
