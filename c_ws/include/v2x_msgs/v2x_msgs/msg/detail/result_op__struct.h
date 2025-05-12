// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ResultOp.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RESULT_OP__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RESULT_OP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RESULT_OP_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_RANGE_MIN = 0ll
};

/// Constant 'RESULT_OP_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_RANGE_MAX = 255ll
};

/// Constant 'RESULT_OP_CORRECT_TRANSACTION'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_CORRECT_TRANSACTION = 0ll
};

/// Constant 'RESULT_OP_OBE_STATUS_NOT_ACCEPTED'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_OBE_STATUS_NOT_ACCEPTED = 1ll
};

/// Constant 'RESULT_OP_EQUIPMENT_STATUS_NOT_ACCEPTED'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_EQUIPMENT_STATUS_NOT_ACCEPTED = 2ll
};

/// Constant 'RESULT_OP_CONTRACT_NOT_IN_WHITE_LIST'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_CONTRACT_NOT_IN_WHITE_LIST = 3ll
};

/// Constant 'RESULT_OP_CONTRACT_IDENTIFIER_IN_BLACK_LIST'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_CONTRACT_IDENTIFIER_IN_BLACK_LIST = 4ll
};

/// Constant 'RESULT_OP_CONTRACT_IDENTIFIER_NOT_CORRECT'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_CONTRACT_IDENTIFIER_NOT_CORRECT = 5ll
};

/// Constant 'RESULT_OP_EXPIRED_CONTRACT'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_EXPIRED_CONTRACT = 6ll
};

/// Constant 'RESULT_OP_CONTRACT_RESTRICTIONS_NOT_FULFILLED'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_CONTRACT_RESTRICTIONS_NOT_FULFILLED = 7ll
};

/// Constant 'RESULT_OP_CLAIMED_VEHICLE_CHARACTERISTICS_NOT_VALID'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_CLAIMED_VEHICLE_CHARACTERISTICS_NOT_VALID = 8ll
};

/// Constant 'RESULT_OP_VEHICLE_CLASS_AUTHENTICATION_FAILED'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_VEHICLE_CLASS_AUTHENTICATION_FAILED = 9ll
};

/// Constant 'RESULT_OP_ENTRY_VEHICLE_CLASS_DIFFERENT_FROM_EXIT_VEHICLE_CLASS'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_ENTRY_VEHICLE_CLASS_DIFFERENT_FROM_EXIT_VEHICLE_CLASS = 10ll
};

/// Constant 'RESULT_OP_ENTRY_RECEIPT_MISSING'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_ENTRY_RECEIPT_MISSING = 11ll
};

/// Constant 'RESULT_OP_ENTRY_RECEIPT_NOT_VALID'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_ENTRY_RECEIPT_NOT_VALID = 12ll
};

/// Constant 'RESULT_OP_ENTRY_TOLL_STATION_NOT_VALID'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_ENTRY_TOLL_STATION_NOT_VALID = 13ll
};

/// Constant 'RESULT_OP_EQUIPMENT_NOT_CERTIFIED'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_EQUIPMENT_NOT_CERTIFIED = 14ll
};

/// Constant 'RESULT_OP_TIME_DIFFERENCE'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_TIME_DIFFERENCE = 15ll
};

/// Constant 'RESULT_OP_ACCESS_CREDENTIALS_NOT_ACCEPTED'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_ACCESS_CREDENTIALS_NOT_ACCEPTED = 16ll
};

/// Constant 'RESULT_OP_CONTRACT_AUTHENTICATOR_NOT_ACCEPTED'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_CONTRACT_AUTHENTICATOR_NOT_ACCEPTED = 17ll
};

/// Constant 'RESULT_OP_RECEIPT_AUTHENTICATOR_NOT_ACCEPTED'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_RECEIPT_AUTHENTICATOR_NOT_ACCEPTED = 18ll
};

/// Constant 'RESULT_OP_CLAIMED_VEHICLE_CHARACTERISTICS_MISSING'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_CLAIMED_VEHICLE_CHARACTERISTICS_MISSING = 19ll
};

/// Constant 'RESULT_OP_PAYMENT_MEANS_NOT_ACCEPTED'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_PAYMENT_MEANS_NOT_ACCEPTED = 20ll
};

/// Constant 'RESULT_OP_PAYMENT_AUTHENTICATOR_NOT_ACCEPTED'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_PAYMENT_AUTHENTICATOR_NOT_ACCEPTED = 21ll
};

/// Constant 'RESULT_OP_PAYMENT_MEANS_IN_BLACK_LIST'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_PAYMENT_MEANS_IN_BLACK_LIST = 22ll
};

/// Constant 'RESULT_OP_PAYMENT_MEANS_NOT_CORRECT'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_PAYMENT_MEANS_NOT_CORRECT = 23ll
};

/// Constant 'RESULT_OP_EXPIRED_PAYMENT_MEANS'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_EXPIRED_PAYMENT_MEANS = 24ll
};

/// Constant 'RESULT_OP_PAYMENT_MEANS_RESTRICTIONS_NOT_FULFILLED'.
enum
{
  v2x_msgs__msg__ResultOp__RESULT_OP_PAYMENT_MEANS_RESTRICTIONS_NOT_FULFILLED = 25ll
};

/// Struct defined in msg/ResultOp in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ResultOp
{
  int64_t result_op;
} v2x_msgs__msg__ResultOp;

// Struct for a sequence of v2x_msgs__msg__ResultOp.
typedef struct v2x_msgs__msg__ResultOp__Sequence
{
  v2x_msgs__msg__ResultOp * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ResultOp__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RESULT_OP__STRUCT_H_
