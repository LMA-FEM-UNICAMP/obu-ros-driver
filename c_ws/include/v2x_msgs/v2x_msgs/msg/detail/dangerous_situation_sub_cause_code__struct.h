// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DangerousSituationSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DANGEROUS_SITUATION_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DANGEROUS_SITUATION_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DANGEROUS_SITUATION_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DangerousSituationSubCauseCode__DANGEROUS_SITUATION_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'DANGEROUS_SITUATION_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DangerousSituationSubCauseCode__DANGEROUS_SITUATION_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'DANGEROUS_SITUATION_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__DangerousSituationSubCauseCode__DANGEROUS_SITUATION_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'DANGEROUS_SITUATION_SUB_CAUSE_CODE_EMERGENCY_ELECTRONIC_BRAKE_ENGAGED'.
enum
{
  v2x_msgs__msg__DangerousSituationSubCauseCode__DANGEROUS_SITUATION_SUB_CAUSE_CODE_EMERGENCY_ELECTRONIC_BRAKE_ENGAGED = 1ll
};

/// Constant 'DANGEROUS_SITUATION_SUB_CAUSE_CODE_PRE_CRASH_SYSTEM_ENGAGED'.
enum
{
  v2x_msgs__msg__DangerousSituationSubCauseCode__DANGEROUS_SITUATION_SUB_CAUSE_CODE_PRE_CRASH_SYSTEM_ENGAGED = 2ll
};

/// Constant 'DANGEROUS_SITUATION_SUB_CAUSE_CODE_ESP_ENGAGED'.
enum
{
  v2x_msgs__msg__DangerousSituationSubCauseCode__DANGEROUS_SITUATION_SUB_CAUSE_CODE_ESP_ENGAGED = 3ll
};

/// Constant 'DANGEROUS_SITUATION_SUB_CAUSE_CODE_ABS_ENGAGED'.
enum
{
  v2x_msgs__msg__DangerousSituationSubCauseCode__DANGEROUS_SITUATION_SUB_CAUSE_CODE_ABS_ENGAGED = 4ll
};

/// Constant 'DANGEROUS_SITUATION_SUB_CAUSE_CODE_AEB_ENGAGED'.
enum
{
  v2x_msgs__msg__DangerousSituationSubCauseCode__DANGEROUS_SITUATION_SUB_CAUSE_CODE_AEB_ENGAGED = 5ll
};

/// Constant 'DANGEROUS_SITUATION_SUB_CAUSE_CODE_BRAKE_WARNING_ENGAGED'.
enum
{
  v2x_msgs__msg__DangerousSituationSubCauseCode__DANGEROUS_SITUATION_SUB_CAUSE_CODE_BRAKE_WARNING_ENGAGED = 6ll
};

/// Constant 'DANGEROUS_SITUATION_SUB_CAUSE_CODE_COLLISION_RISK_WARNING_ENGAGED'.
enum
{
  v2x_msgs__msg__DangerousSituationSubCauseCode__DANGEROUS_SITUATION_SUB_CAUSE_CODE_COLLISION_RISK_WARNING_ENGAGED = 7ll
};

/// Struct defined in msg/DangerousSituationSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DangerousSituationSubCauseCode
{
  int64_t dangerous_situation_sub_cause_code;
} v2x_msgs__msg__DangerousSituationSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__DangerousSituationSubCauseCode.
typedef struct v2x_msgs__msg__DangerousSituationSubCauseCode__Sequence
{
  v2x_msgs__msg__DangerousSituationSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DangerousSituationSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DANGEROUS_SITUATION_SUB_CAUSE_CODE__STRUCT_H_
