// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CreditRq.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CREDIT_RQ__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CREDIT_RQ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'KEY_RANGE_MIN'.
enum
{
  v2x_msgs__msg__CreditRq__KEY_RANGE_MIN = 0ll
};

/// Constant 'KEY_RANGE_MAX'.
enum
{
  v2x_msgs__msg__CreditRq__KEY_RANGE_MAX = 255ll
};

// Include directives for member types
// Member 'refund'
#include "v2x_msgs/msg/detail/payment_fee__struct.h"
// Member 'nonce'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CreditRq in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CreditRq
{
  v2x_msgs__msg__PaymentFee refund;
  rosidl_runtime_c__int64__Sequence nonce;
  int64_t key;
} v2x_msgs__msg__CreditRq;

// Struct for a sequence of v2x_msgs__msg__CreditRq.
typedef struct v2x_msgs__msg__CreditRq__Sequence
{
  v2x_msgs__msg__CreditRq * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CreditRq__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CREDIT_RQ__STRUCT_H_
