// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ReceiptData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RECEIPT_DATA__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RECEIPT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SESSION_CONTEXT_VERSION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ReceiptData__SESSION_CONTEXT_VERSION_RANGE_MIN = 0ll
};

/// Constant 'SESSION_CONTEXT_VERSION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ReceiptData__SESSION_CONTEXT_VERSION_RANGE_MAX = 127ll
};

// Include directives for member types
// Member 'session_time'
#include "v2x_msgs/msg/detail/date_and_time__struct.h"
// Member 'session_service_provider'
// Member 'session_contract_provider'
#include "v2x_msgs/msg/detail/provider__struct.h"
// Member 'location_of_station'
#include "v2x_msgs/msg/detail/int2__struct.h"
// Member 'session_location'
#include "v2x_msgs/msg/detail/session_location__struct.h"
// Member 'session_type'
// Member 'session_tariff_class'
// Member 'session_claimed_class'
#include "v2x_msgs/msg/detail/int1__struct.h"
// Member 'session_result'
#include "v2x_msgs/msg/detail/result_op__struct.h"
// Member 'session_fee'
#include "v2x_msgs/msg/detail/payment_fee__struct.h"
// Member 'session_type_of_contract'
// Member 'receipt_data_authenticator'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ReceiptData in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ReceiptData
{
  v2x_msgs__msg__DateAndTime session_time;
  v2x_msgs__msg__Provider session_service_provider;
  v2x_msgs__msg__Int2 location_of_station;
  v2x_msgs__msg__SessionLocation session_location;
  v2x_msgs__msg__Int1 session_type;
  v2x_msgs__msg__ResultOp session_result;
  v2x_msgs__msg__Int1 session_tariff_class;
  v2x_msgs__msg__Int1 session_claimed_class;
  v2x_msgs__msg__PaymentFee session_fee;
  v2x_msgs__msg__Provider session_contract_provider;
  /// size(1..2)
  rosidl_runtime_c__int64__Sequence session_type_of_contract;
  int64_t session_context_version;
  /// size(1..4)
  rosidl_runtime_c__int64__Sequence receipt_data_authenticator;
} v2x_msgs__msg__ReceiptData;

// Struct for a sequence of v2x_msgs__msg__ReceiptData.
typedef struct v2x_msgs__msg__ReceiptData__Sequence
{
  v2x_msgs__msg__ReceiptData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ReceiptData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RECEIPT_DATA__STRUCT_H_
