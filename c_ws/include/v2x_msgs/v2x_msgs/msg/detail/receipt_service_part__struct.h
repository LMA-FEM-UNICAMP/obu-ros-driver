// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ReceiptServicePart.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RECEIPT_SERVICE_PART__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RECEIPT_SERVICE_PART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATION_LOCATION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ReceiptServicePart__STATION_LOCATION_RANGE_MIN = 0ll
};

/// Constant 'STATION_LOCATION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ReceiptServicePart__STATION_LOCATION_RANGE_MAX = 1048575ll
};

// Include directives for member types
// Member 'session_time'
#include "v2x_msgs/msg/detail/date_and_time__struct.h"
// Member 'session_service_provider'
#include "v2x_msgs/msg/detail/provider__struct.h"
// Member 'type_of_session'
#include "v2x_msgs/msg/detail/station_type__struct.h"
// Member 'session_result_operational'
#include "v2x_msgs/msg/detail/result_op__struct.h"
// Member 'session_result_financial'
#include "v2x_msgs/msg/detail/result_fin__struct.h"

/// Struct defined in msg/ReceiptServicePart in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ReceiptServicePart
{
  v2x_msgs__msg__DateAndTime session_time;
  v2x_msgs__msg__Provider session_service_provider;
  int64_t station_location;
  int64_t session_location;
  v2x_msgs__msg__StationType type_of_session;
  v2x_msgs__msg__ResultOp session_result_operational;
  v2x_msgs__msg__ResultFin session_result_financial;
} v2x_msgs__msg__ReceiptServicePart;

// Struct for a sequence of v2x_msgs__msg__ReceiptServicePart.
typedef struct v2x_msgs__msg__ReceiptServicePart__Sequence
{
  v2x_msgs__msg__ReceiptServicePart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ReceiptServicePart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RECEIPT_SERVICE_PART__STRUCT_H_
