// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ChannelId.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CHANNEL_ID__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CHANNEL_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CHANNEL_ID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_RANGE_MIN = 0ll
};

/// Constant 'CHANNEL_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_RANGE_MAX = 255ll
};

/// Constant 'CHANNEL_ID_OBU'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_OBU = 0ll
};

/// Constant 'CHANNEL_ID_SAM1'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_SAM1 = 1ll
};

/// Constant 'CHANNEL_ID_SAM2'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_SAM2 = 2ll
};

/// Constant 'CHANNEL_ID_ICC'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_ICC = 3ll
};

/// Constant 'CHANNEL_ID_DISPLAY'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_DISPLAY = 4ll
};

/// Constant 'CHANNEL_ID_BUZZER'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_BUZZER = 5ll
};

/// Constant 'CHANNEL_ID_PRINTER'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_PRINTER = 6ll
};

/// Constant 'CHANNEL_ID_SERIAL_INTERFACE'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_SERIAL_INTERFACE = 7ll
};

/// Constant 'CHANNEL_ID_PARALLEL_INTERFACE'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_PARALLEL_INTERFACE = 8ll
};

/// Constant 'CHANNEL_ID_G_PS'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_G_PS = 9ll
};

/// Constant 'CHANNEL_ID_TACHOGRAPH'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_TACHOGRAPH = 10ll
};

/// Constant 'CHANNEL_ID_PRIVATE_USE1'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_PRIVATE_USE1 = 11ll
};

/// Constant 'CHANNEL_ID_PRIVATE_USE2'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_PRIVATE_USE2 = 12ll
};

/// Constant 'CHANNEL_ID_PRIVATE_USE3'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_PRIVATE_USE3 = 13ll
};

/// Constant 'CHANNEL_ID_PRIVATE_USE4'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_PRIVATE_USE4 = 14ll
};

/// Constant 'CHANNEL_ID_PRIVATE_USE5'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_PRIVATE_USE5 = 15ll
};

/// Constant 'CHANNEL_ID_BLUETOOTH'.
enum
{
  v2x_msgs__msg__ChannelId__CHANNEL_ID_BLUETOOTH = 16ll
};

/// Struct defined in msg/ChannelId in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ChannelId
{
  int64_t channel_id;
} v2x_msgs__msg__ChannelId;

// Struct for a sequence of v2x_msgs__msg__ChannelId.
typedef struct v2x_msgs__msg__ChannelId__Sequence
{
  v2x_msgs__msg__ChannelId * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ChannelId__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CHANNEL_ID__STRUCT_H_
