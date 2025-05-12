// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RawTxMessageList.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RAW_TX_MESSAGE_LIST__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RAW_TX_MESSAGE_LIST__STRUCT_H_

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
// Member 'rawtxmessages'
#include "v2x_msgs/msg/detail/raw_tx_message__struct.h"

/// Struct defined in msg/RawTxMessageList in the package v2x_msgs.
typedef struct v2x_msgs__msg__RawTxMessageList
{
  std_msgs__msg__Header header;
  v2x_msgs__msg__RawTxMessage__Sequence rawtxmessages;
} v2x_msgs__msg__RawTxMessageList;

// Struct for a sequence of v2x_msgs__msg__RawTxMessageList.
typedef struct v2x_msgs__msg__RawTxMessageList__Sequence
{
  v2x_msgs__msg__RawTxMessageList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RawTxMessageList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RAW_TX_MESSAGE_LIST__STRUCT_H_
