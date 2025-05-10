// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PaymentMeans.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PAYMENT_MEANS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PAYMENT_MEANS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'personal_account_number'
#include "v2x_msgs/msg/detail/personal_account_number__struct.h"
// Member 'payment_means_expiry_date'
#include "v2x_msgs/msg/detail/date_compact__struct.h"
// Member 'pament_means_usage_control'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PaymentMeans in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PaymentMeans
{
  v2x_msgs__msg__PersonalAccountNumber personal_account_number;
  v2x_msgs__msg__DateCompact payment_means_expiry_date;
  /// size(1..2)
  rosidl_runtime_c__int64__Sequence pament_means_usage_control;
} v2x_msgs__msg__PaymentMeans;

// Struct for a sequence of v2x_msgs__msg__PaymentMeans.
typedef struct v2x_msgs__msg__PaymentMeans__Sequence
{
  v2x_msgs__msg__PaymentMeans * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PaymentMeans__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PAYMENT_MEANS__STRUCT_H_
