// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/GNSSstatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__GNS_SSTATUS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__GNS_SSTATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GNSSSTATUS_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__GNSSstatus__GNSSSTATUS_UNAVAILABLE = 0ll
};

/// Constant 'GNSSSTATUS_IS_HEALTHY'.
enum
{
  v2x_msgs__msg__GNSSstatus__GNSSSTATUS_IS_HEALTHY = 1ll
};

/// Constant 'GNSSSTATUS_IS_MONITORED'.
enum
{
  v2x_msgs__msg__GNSSstatus__GNSSSTATUS_IS_MONITORED = 2ll
};

/// Constant 'GNSSSTATUS_BASE_STATION_TYPE'.
enum
{
  v2x_msgs__msg__GNSSstatus__GNSSSTATUS_BASE_STATION_TYPE = 3ll
};

/// Constant 'GNSSSTATUS_A_PDOPOF_UNDER5'.
enum
{
  v2x_msgs__msg__GNSSstatus__GNSSSTATUS_A_PDOPOF_UNDER5 = 4ll
};

/// Constant 'GNSSSTATUS_IN_VIEW_OF_UNDER5'.
enum
{
  v2x_msgs__msg__GNSSstatus__GNSSSTATUS_IN_VIEW_OF_UNDER5 = 5ll
};

/// Constant 'GNSSSTATUS_LOCAL_CORRECTIONS_PRESENT'.
enum
{
  v2x_msgs__msg__GNSSstatus__GNSSSTATUS_LOCAL_CORRECTIONS_PRESENT = 6ll
};

/// Constant 'GNSSSTATUS_NETWORK_CORRECTIONS_PRESENT'.
enum
{
  v2x_msgs__msg__GNSSstatus__GNSSSTATUS_NETWORK_CORRECTIONS_PRESENT = 7ll
};

/// Struct defined in msg/GNSSstatus in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__GNSSstatus
{
  int64_t gnssstatus;
} v2x_msgs__msg__GNSSstatus;

// Struct for a sequence of v2x_msgs__msg__GNSSstatus.
typedef struct v2x_msgs__msg__GNSSstatus__Sequence
{
  v2x_msgs__msg__GNSSstatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__GNSSstatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__GNS_SSTATUS__STRUCT_H_
