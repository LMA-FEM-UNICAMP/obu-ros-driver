// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ReceiptContract.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RECEIPT_CONTRACT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RECEIPT_CONTRACT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'session_contract_provider'
#include "v2x_msgs/msg/detail/provider__struct.h"
// Member 'session_type_of_contract'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'session_contract_serial_number'
#include "v2x_msgs/msg/detail/int4__struct.h"

/// Struct defined in msg/ReceiptContract in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ReceiptContract
{
  v2x_msgs__msg__Provider session_contract_provider;
  /// size(1..2)
  rosidl_runtime_c__int64__Sequence session_type_of_contract;
  v2x_msgs__msg__Int4 session_contract_serial_number;
} v2x_msgs__msg__ReceiptContract;

// Struct for a sequence of v2x_msgs__msg__ReceiptContract.
typedef struct v2x_msgs__msg__ReceiptContract__Sequence
{
  v2x_msgs__msg__ReceiptContract * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ReceiptContract__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RECEIPT_CONTRACT__STRUCT_H_
