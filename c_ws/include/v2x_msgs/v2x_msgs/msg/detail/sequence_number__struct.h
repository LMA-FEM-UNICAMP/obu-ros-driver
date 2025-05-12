// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SequenceNumber.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SEQUENCE_NUMBER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SEQUENCE_NUMBER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SEQUENCE_NUMBER_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SequenceNumber__SEQUENCE_NUMBER_RANGE_MIN = 0ll
};

/// Constant 'SEQUENCE_NUMBER_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SequenceNumber__SEQUENCE_NUMBER_RANGE_MAX = 65535ll
};

/// Struct defined in msg/SequenceNumber in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SequenceNumber
{
  int64_t sequence_number;
} v2x_msgs__msg__SequenceNumber;

// Struct for a sequence of v2x_msgs__msg__SequenceNumber.
typedef struct v2x_msgs__msg__SequenceNumber__Sequence
{
  v2x_msgs__msg__SequenceNumber * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SequenceNumber__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SEQUENCE_NUMBER__STRUCT_H_
