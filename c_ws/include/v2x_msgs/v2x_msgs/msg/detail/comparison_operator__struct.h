// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ComparisonOperator.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__COMPARISON_OPERATOR__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__COMPARISON_OPERATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COMPARISON_OPERATOR_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ComparisonOperator__COMPARISON_OPERATOR_RANGE_MIN = 0ll
};

/// Constant 'COMPARISON_OPERATOR_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ComparisonOperator__COMPARISON_OPERATOR_RANGE_MAX = 3ll
};

/// Constant 'COMPARISON_OPERATOR_GREATER_THAN'.
enum
{
  v2x_msgs__msg__ComparisonOperator__COMPARISON_OPERATOR_GREATER_THAN = 0ll
};

/// Constant 'COMPARISON_OPERATOR_GREATER_THAN_OR_EQUAL_TO'.
enum
{
  v2x_msgs__msg__ComparisonOperator__COMPARISON_OPERATOR_GREATER_THAN_OR_EQUAL_TO = 1ll
};

/// Constant 'COMPARISON_OPERATOR_LESS_THAN'.
enum
{
  v2x_msgs__msg__ComparisonOperator__COMPARISON_OPERATOR_LESS_THAN = 2ll
};

/// Constant 'COMPARISON_OPERATOR_LESS_THAN_OR_EQUAL_TO'.
enum
{
  v2x_msgs__msg__ComparisonOperator__COMPARISON_OPERATOR_LESS_THAN_OR_EQUAL_TO = 3ll
};

/// Struct defined in msg/ComparisonOperator in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ComparisonOperator
{
  int64_t comparison_operator;
} v2x_msgs__msg__ComparisonOperator;

// Struct for a sequence of v2x_msgs__msg__ComparisonOperator.
typedef struct v2x_msgs__msg__ComparisonOperator__Sequence
{
  v2x_msgs__msg__ComparisonOperator * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ComparisonOperator__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__COMPARISON_OPERATOR__STRUCT_H_
