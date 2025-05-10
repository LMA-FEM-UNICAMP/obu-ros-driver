// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TrafficRule.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TRAFFIC_RULE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TRAFFIC_RULE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TRAFFIC_RULE_NO_PASSING'.
enum
{
  v2x_msgs__msg__TrafficRule__TRAFFIC_RULE_NO_PASSING = 0ll
};

/// Constant 'TRAFFIC_RULE_NO_PASSING_FOR_TRUCKS'.
enum
{
  v2x_msgs__msg__TrafficRule__TRAFFIC_RULE_NO_PASSING_FOR_TRUCKS = 1ll
};

/// Constant 'TRAFFIC_RULE_PASS_TO_RIGHT'.
enum
{
  v2x_msgs__msg__TrafficRule__TRAFFIC_RULE_PASS_TO_RIGHT = 2ll
};

/// Constant 'TRAFFIC_RULE_PASS_TO_LEFT'.
enum
{
  v2x_msgs__msg__TrafficRule__TRAFFIC_RULE_PASS_TO_LEFT = 3ll
};

/// Struct defined in msg/TrafficRule in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TrafficRule
{
  int64_t traffic_rule;
} v2x_msgs__msg__TrafficRule;

// Struct for a sequence of v2x_msgs__msg__TrafficRule.
typedef struct v2x_msgs__msg__TrafficRule__Sequence
{
  v2x_msgs__msg__TrafficRule * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TrafficRule__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TRAFFIC_RULE__STRUCT_H_
