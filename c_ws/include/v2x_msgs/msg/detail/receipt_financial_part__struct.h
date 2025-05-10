// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ReceiptFinancialPart.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RECEIPT_FINANCIAL_PART__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RECEIPT_FINANCIAL_PART__STRUCT_H_

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
// Member 'session_payment_fee'
#include "v2x_msgs/msg/detail/payment_fee__struct.h"
// Member 'session_current_balance'
#include "v2x_msgs/msg/detail/purse_balance__struct.h"
// Member 'receipt_financial_serial_number'
#include "v2x_msgs/msg/detail/int4__struct.h"

/// Struct defined in msg/ReceiptFinancialPart in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ReceiptFinancialPart
{
  v2x_msgs__msg__PersonalAccountNumber personal_account_number;
  v2x_msgs__msg__PaymentFee session_payment_fee;
  v2x_msgs__msg__PurseBalance session_current_balance;
  v2x_msgs__msg__Int4 receipt_financial_serial_number;
} v2x_msgs__msg__ReceiptFinancialPart;

// Struct for a sequence of v2x_msgs__msg__ReceiptFinancialPart.
typedef struct v2x_msgs__msg__ReceiptFinancialPart__Sequence
{
  v2x_msgs__msg__ReceiptFinancialPart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ReceiptFinancialPart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RECEIPT_FINANCIAL_PART__STRUCT_H_
