// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RxInfo.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RX_INFO__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RX_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RSSI_RANGE_MIN'.
enum
{
  v2x_msgs__msg__RxInfo__RSSI_RANGE_MIN = -32768ll
};

/// Constant 'RSSI_RANGE_MAX'.
enum
{
  v2x_msgs__msg__RxInfo__RSSI_RANGE_MAX = 32767ll
};

/// Constant 'DATA_RATE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__RxInfo__DATA_RATE_RANGE_MIN = 0ll
};

/// Constant 'DATA_RATE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__RxInfo__DATA_RATE_RANGE_MAX = 65535ll
};

/// Constant 'TRAFFIC_CLASS_ID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__RxInfo__TRAFFIC_CLASS_ID_RANGE_MIN = 0ll
};

/// Constant 'TRAFFIC_CLASS_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__RxInfo__TRAFFIC_CLASS_ID_RANGE_MAX = 255ll
};

/// Constant 'REMAIN_HOP_LIMIT_RANGE_MIN'.
enum
{
  v2x_msgs__msg__RxInfo__REMAIN_HOP_LIMIT_RANGE_MIN = 0ll
};

/// Constant 'REMAIN_HOP_LIMIT_RANGE_MAX'.
enum
{
  v2x_msgs__msg__RxInfo__REMAIN_HOP_LIMIT_RANGE_MAX = 255ll
};

// Include directives for member types
// Member 'timestamp'
#include "v2x_msgs/msg/detail/time_val__struct.h"
// Member 'security'
#include "v2x_msgs/msg/detail/rx_security__struct.h"
// Member 'position_info'
#include "v2x_msgs/msg/detail/position_info__struct.h"
// Member 'area_type_info'
#include "v2x_msgs/msg/detail/area_type_info__struct.h"
// Member 'source_mac_address'
#include "v2x_msgs/msg/detail/mac_address__struct.h"

/// Struct defined in msg/RxInfo in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RxInfo
{
  v2x_msgs__msg__TimeVal timestamp;
  int64_t rssi;
  int64_t data_rate;
  int64_t traffic_class_id;
  int64_t remain_hop_limit;
  v2x_msgs__msg__RxSecurity security;
  v2x_msgs__msg__PositionInfo position_info;
  v2x_msgs__msg__AreaTypeInfo area_type_info;
  v2x_msgs__msg__MACAddress source_mac_address;
} v2x_msgs__msg__RxInfo;

// Struct for a sequence of v2x_msgs__msg__RxInfo.
typedef struct v2x_msgs__msg__RxInfo__Sequence
{
  v2x_msgs__msg__RxInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RxInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RX_INFO__STRUCT_H_
