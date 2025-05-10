// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SaeAutomationLevel.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SAE_AUTOMATION_LEVEL__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SAE_AUTOMATION_LEVEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SAE_AUTOMATION_LEVEL_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SaeAutomationLevel__SAE_AUTOMATION_LEVEL_RANGE_MIN = 0ll
};

/// Constant 'SAE_AUTOMATION_LEVEL_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SaeAutomationLevel__SAE_AUTOMATION_LEVEL_RANGE_MAX = 5ll
};

/// Struct defined in msg/SaeAutomationLevel in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SaeAutomationLevel
{
  int64_t sae_automation_level;
} v2x_msgs__msg__SaeAutomationLevel;

// Struct for a sequence of v2x_msgs__msg__SaeAutomationLevel.
typedef struct v2x_msgs__msg__SaeAutomationLevel__Sequence
{
  v2x_msgs__msg__SaeAutomationLevel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SaeAutomationLevel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SAE_AUTOMATION_LEVEL__STRUCT_H_
