// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DebitRs.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DEBIT_RS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DEBIT_RS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'debit_result'
#include "v2x_msgs/msg/detail/result_fin__struct.h"
// Member 'debit_authenticator'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DebitRs in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DebitRs
{
  v2x_msgs__msg__ResultFin debit_result;
  rosidl_runtime_c__int64__Sequence debit_authenticator;
} v2x_msgs__msg__DebitRs;

// Struct for a sequence of v2x_msgs__msg__DebitRs.
typedef struct v2x_msgs__msg__DebitRs__Sequence
{
  v2x_msgs__msg__DebitRs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DebitRs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DEBIT_RS__STRUCT_H_
