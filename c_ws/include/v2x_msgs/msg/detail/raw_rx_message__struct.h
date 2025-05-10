// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RawRxMessage.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RAW_RX_MESSAGE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RAW_RX_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PAYLOAD_SIZE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__RawRxMessage__PAYLOAD_SIZE_RANGE_MIN = 0ll
};

/// Constant 'PAYLOAD_SIZE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__RawRxMessage__PAYLOAD_SIZE_RANGE_MAX = 1500ll
};

// Include directives for member types
// Member 'local_info'
#include "v2x_msgs/msg/detail/local_info__struct.h"
// Member 'rx_info'
#include "v2x_msgs/msg/detail/rx_info__struct.h"
// Member 'payload_string'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RawRxMessage in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__RawRxMessage
{
  /// Ringdependency
  /// Optional Field
  bool local_info_present;
  v2x_msgs__msg__LocalInfo local_info;
  v2x_msgs__msg__RxInfo rx_info;
  int64_t payload_size;
  /// Optional Field
  bool payload_string_present;
  /// size(1..1500)
  rosidl_runtime_c__int64__Sequence payload_string;
} v2x_msgs__msg__RawRxMessage;

// Struct for a sequence of v2x_msgs__msg__RawRxMessage.
typedef struct v2x_msgs__msg__RawRxMessage__Sequence
{
  v2x_msgs__msg__RawRxMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RawRxMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RAW_RX_MESSAGE__STRUCT_H_
