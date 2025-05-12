// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TrafficConditionSubCauseCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TRAFFIC_CONDITION_SUB_CAUSE_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TRAFFIC_CONDITION_SUB_CAUSE_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TRAFFIC_CONDITION_SUB_CAUSE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TrafficConditionSubCauseCode__TRAFFIC_CONDITION_SUB_CAUSE_CODE_RANGE_MIN = 0ll
};

/// Constant 'TRAFFIC_CONDITION_SUB_CAUSE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TrafficConditionSubCauseCode__TRAFFIC_CONDITION_SUB_CAUSE_CODE_RANGE_MAX = 255ll
};

/// Constant 'TRAFFIC_CONDITION_SUB_CAUSE_CODE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__TrafficConditionSubCauseCode__TRAFFIC_CONDITION_SUB_CAUSE_CODE_UNAVAILABLE = 0ll
};

/// Constant 'TRAFFIC_CONDITION_SUB_CAUSE_CODE_INCREASED_VOLUME_OF_TRAFFIC'.
enum
{
  v2x_msgs__msg__TrafficConditionSubCauseCode__TRAFFIC_CONDITION_SUB_CAUSE_CODE_INCREASED_VOLUME_OF_TRAFFIC = 1ll
};

/// Constant 'TRAFFIC_CONDITION_SUB_CAUSE_CODE_TRAFFIC_JAM_SLOWLY_INCREASING'.
enum
{
  v2x_msgs__msg__TrafficConditionSubCauseCode__TRAFFIC_CONDITION_SUB_CAUSE_CODE_TRAFFIC_JAM_SLOWLY_INCREASING = 2ll
};

/// Constant 'TRAFFIC_CONDITION_SUB_CAUSE_CODE_TRAFFIC_JAM_INCREASING'.
enum
{
  v2x_msgs__msg__TrafficConditionSubCauseCode__TRAFFIC_CONDITION_SUB_CAUSE_CODE_TRAFFIC_JAM_INCREASING = 3ll
};

/// Constant 'TRAFFIC_CONDITION_SUB_CAUSE_CODE_TRAFFIC_JAM_STRONGLY_INCREASING'.
enum
{
  v2x_msgs__msg__TrafficConditionSubCauseCode__TRAFFIC_CONDITION_SUB_CAUSE_CODE_TRAFFIC_JAM_STRONGLY_INCREASING = 4ll
};

/// Constant 'TRAFFIC_CONDITION_SUB_CAUSE_CODE_TRAFFIC_STATIONARY'.
enum
{
  v2x_msgs__msg__TrafficConditionSubCauseCode__TRAFFIC_CONDITION_SUB_CAUSE_CODE_TRAFFIC_STATIONARY = 5ll
};

/// Constant 'TRAFFIC_CONDITION_SUB_CAUSE_CODE_TRAFFIC_JAM_SLIGHTLY_DECREASING'.
enum
{
  v2x_msgs__msg__TrafficConditionSubCauseCode__TRAFFIC_CONDITION_SUB_CAUSE_CODE_TRAFFIC_JAM_SLIGHTLY_DECREASING = 6ll
};

/// Constant 'TRAFFIC_CONDITION_SUB_CAUSE_CODE_TRAFFIC_JAM_DECREASING'.
enum
{
  v2x_msgs__msg__TrafficConditionSubCauseCode__TRAFFIC_CONDITION_SUB_CAUSE_CODE_TRAFFIC_JAM_DECREASING = 7ll
};

/// Constant 'TRAFFIC_CONDITION_SUB_CAUSE_CODE_TRAFFIC_JAM_STRONGLY_DECREASING'.
enum
{
  v2x_msgs__msg__TrafficConditionSubCauseCode__TRAFFIC_CONDITION_SUB_CAUSE_CODE_TRAFFIC_JAM_STRONGLY_DECREASING = 8ll
};

/// Struct defined in msg/TrafficConditionSubCauseCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TrafficConditionSubCauseCode
{
  int64_t traffic_condition_sub_cause_code;
} v2x_msgs__msg__TrafficConditionSubCauseCode;

// Struct for a sequence of v2x_msgs__msg__TrafficConditionSubCauseCode.
typedef struct v2x_msgs__msg__TrafficConditionSubCauseCode__Sequence
{
  v2x_msgs__msg__TrafficConditionSubCauseCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TrafficConditionSubCauseCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TRAFFIC_CONDITION_SUB_CAUSE_CODE__STRUCT_H_
