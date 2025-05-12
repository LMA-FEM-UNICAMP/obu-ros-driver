// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/HumanProblemSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__HUMAN_PROBLEM_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__HUMAN_PROBLEM_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HUMAN_PROBLEM_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__HumanProblemSubCauseCode__HUMAN_PROBLEM_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'HUMAN_PROBLEM_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__HumanProblemSubCauseCode__HUMAN_PROBLEM_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'HUMAN_PROBLEM_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__HumanProblemSubCauseCode__HUMAN_PROBLEM_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'HUMAN_PROBLEM_SUB_CAUSE_CODE_GLYCEMIA_PROBLEM'.
enum
{
  v2x_msgs__msg__HumanProblemSubCauseCode__HUMAN_PROBLEM_SUB_CAUSE_CODE_GLYCEMIA_PROBLEM = 1ll
};

/// Constant 'HUMAN_PROBLEM_SUB_CAUSE_CODE_HEART_PROBLEM'.
enum
{
  v2x_msgs__msg__HumanProblemSubCauseCode__HUMAN_PROBLEM_SUB_CAUSE_CODE_HEART_PROBLEM = 2ll
};

/// Struct defined in msg/HumanProblemSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__HumanProblemSubCauseCode
{
  int64_t human_problem_sub_cause_code;
} v2x_msgs__msg__HumanProblemSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__HumanProblemSubCauseCode.
typedef struct v2x_msgs__msg__HumanProblemSubCauseCode__Sequence
{
  v2x_msgs__msg__HumanProblemSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__HumanProblemSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__HUMAN_PROBLEM_SUB_CAUSE_CODE__STRUCT_H_
