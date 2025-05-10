// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VarLengthNumber.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VAR_LENGTH_NUMBER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VAR_LENGTH_NUMBER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VAR_LENGTH_NUMBER_NOTHING'.
enum
{
  v2x_msgs__msg__VarLengthNumber__VAR_LENGTH_NUMBER_NOTHING = 0ll
};

/// Constant 'VAR_LENGTH_NUMBER_CONTENT'.
enum
{
  v2x_msgs__msg__VarLengthNumber__VAR_LENGTH_NUMBER_CONTENT = 1ll
};

/// Constant 'VAR_LENGTH_NUMBER_EXTENSION'.
enum
{
  v2x_msgs__msg__VarLengthNumber__VAR_LENGTH_NUMBER_EXTENSION = 2ll
};

// Include directives for member types
// Member 'extension'
#include "v2x_msgs/msg/detail/ext1__struct.h"

/// Struct defined in msg/VarLengthNumber in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VarLengthNumber
{
  /// CHOICE! - Choose exactly of the containers
  int64_t var_length_number_container_select;
  /// container 1
  int64_t content;
  /// container 2
  v2x_msgs__msg__Ext1 extension;
} v2x_msgs__msg__VarLengthNumber;

// Struct for a sequence of v2x_msgs__msg__VarLengthNumber.
typedef struct v2x_msgs__msg__VarLengthNumber__Sequence
{
  v2x_msgs__msg__VarLengthNumber * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VarLengthNumber__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VAR_LENGTH_NUMBER__STRUCT_H_
