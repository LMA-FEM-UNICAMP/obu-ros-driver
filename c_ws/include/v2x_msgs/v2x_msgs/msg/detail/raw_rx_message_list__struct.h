// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RawRxMessageList.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RAW_RX_MESSAGE_LIST__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RAW_RX_MESSAGE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'rawrxmessages'
#include "v2x_msgs/msg/detail/raw_rx_message__struct.h"

/// Struct defined in msg/RawRxMessageList in the package v2x_msgs.
typedef struct v2x_msgs__msg__RawRxMessageList
{
  std_msgs__msg__Header header;
  v2x_msgs__msg__RawRxMessage__Sequence rawrxmessages;
} v2x_msgs__msg__RawRxMessageList;

// Struct for a sequence of v2x_msgs__msg__RawRxMessageList.
typedef struct v2x_msgs__msg__RawRxMessageList__Sequence
{
  v2x_msgs__msg__RawRxMessageList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RawRxMessageList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RAW_RX_MESSAGE_LIST__STRUCT_H_
