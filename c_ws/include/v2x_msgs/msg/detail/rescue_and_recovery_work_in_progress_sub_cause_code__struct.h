// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RescueAndRecoveryWorkInProgressSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__RescueAndRecoveryWorkInProgressSubCauseCode__RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__RescueAndRecoveryWorkInProgressSubCauseCode__RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__RescueAndRecoveryWorkInProgressSubCauseCode__RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE_EMERGENCY_VEHICLES'.
enum
{
  v2x_msgs__msg__RescueAndRecoveryWorkInProgressSubCauseCode__RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE_EMERGENCY_VEHICLES = 1ll
};

/// Constant 'RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE_RESCUE_HELICOPTER_LANDING'.
enum
{
  v2x_msgs__msg__RescueAndRecoveryWorkInProgressSubCauseCode__RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE_RESCUE_HELICOPTER_LANDING = 2ll
};

/// Constant 'RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE_POLICE_ACTIVITY_ONGOING'.
enum
{
  v2x_msgs__msg__RescueAndRecoveryWorkInProgressSubCauseCode__RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE_POLICE_ACTIVITY_ONGOING = 3ll
};

/// Constant 'RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE_MEDICAL_EMERGENCY_ONGOING'.
enum
{
  v2x_msgs__msg__RescueAndRecoveryWorkInProgressSubCauseCode__RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE_MEDICAL_EMERGENCY_ONGOING = 4ll
};

/// Constant 'RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE_CHILD_ABDUCTION_IN_PROGRESS'.
enum
{
  v2x_msgs__msg__RescueAndRecoveryWorkInProgressSubCauseCode__RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE_CHILD_ABDUCTION_IN_PROGRESS = 5ll
};

/// Struct defined in msg/RescueAndRecoveryWorkInProgressSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RescueAndRecoveryWorkInProgressSubCauseCode
{
  int64_t rescue_and_recovery_work_in_progress_sub_cause_code;
} v2x_msgs__msg__RescueAndRecoveryWorkInProgressSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__RescueAndRecoveryWorkInProgressSubCauseCode.
typedef struct v2x_msgs__msg__RescueAndRecoveryWorkInProgressSubCauseCode__Sequence
{
  v2x_msgs__msg__RescueAndRecoveryWorkInProgressSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RescueAndRecoveryWorkInProgressSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RESCUE_AND_RECOVERY_WORK_IN_PROGRESS_SUB_CAUSE_CODE__STRUCT_H_
