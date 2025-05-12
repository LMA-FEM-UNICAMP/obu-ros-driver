// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TxInfo.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TX_INFO__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TX_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DEST_PORT_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TxInfo__DEST_PORT_RANGE_MIN = 0ll
};

/// Constant 'DEST_PORT_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TxInfo__DEST_PORT_RANGE_MAX = 65535ll
};

/// Constant 'DATA_RATE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TxInfo__DATA_RATE_RANGE_MIN = 0ll
};

/// Constant 'DATA_RATE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TxInfo__DATA_RATE_RANGE_MAX = 255ll
};

/// Constant 'TX_POWER_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TxInfo__TX_POWER_RANGE_MIN = -128ll
};

/// Constant 'TX_POWER_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TxInfo__TX_POWER_RANGE_MAX = 127ll
};

/// Constant 'TRAFFIC_CLASS_ID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TxInfo__TRAFFIC_CLASS_ID_RANGE_MIN = 0ll
};

/// Constant 'TRAFFIC_CLASS_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TxInfo__TRAFFIC_CLASS_ID_RANGE_MAX = 255ll
};

// Include directives for member types
// Member 'security'
#include "v2x_msgs/msg/detail/tx_security__struct.h"
// Member 'position_info'
#include "v2x_msgs/msg/detail/position_info__struct.h"
// Member 'area_type_info'
#include "v2x_msgs/msg/detail/area_type_info__struct.h"

/// Struct defined in msg/TxInfo in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TxInfo
{
  int64_t dest_port;
  int64_t data_rate;
  int64_t tx_power;
  int64_t traffic_class_id;
  v2x_msgs__msg__TxSecurity security;
  v2x_msgs__msg__PositionInfo position_info;
  v2x_msgs__msg__AreaTypeInfo area_type_info;
  bool dest_port_present;
  bool data_rate_present;
  bool tx_power_present;
  bool traffic_class_idpresent;
  bool security_present;
  bool position_info_present;
  bool area_type_info_present;
} v2x_msgs__msg__TxInfo;

// Struct for a sequence of v2x_msgs__msg__TxInfo.
typedef struct v2x_msgs__msg__TxInfo__Sequence
{
  v2x_msgs__msg__TxInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TxInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TX_INFO__STRUCT_H_
