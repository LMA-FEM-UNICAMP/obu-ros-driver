// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/BeaconID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__BEACON_ID__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__BEACON_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MANUFACTURERID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__BeaconID__MANUFACTURERID_RANGE_MIN = 0ll
};

/// Constant 'MANUFACTURERID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__BeaconID__MANUFACTURERID_RANGE_MAX = 65535ll
};

/// Constant 'INDIVIDUALID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__BeaconID__INDIVIDUALID_RANGE_MIN = 0ll
};

/// Constant 'INDIVIDUALID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__BeaconID__INDIVIDUALID_RANGE_MAX = 134217727ll
};

/// Struct defined in msg/BeaconID in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__BeaconID
{
  int64_t manufacturerid;
  int64_t individualid;
} v2x_msgs__msg__BeaconID;

// Struct for a sequence of v2x_msgs__msg__BeaconID.
typedef struct v2x_msgs__msg__BeaconID__Sequence
{
  v2x_msgs__msg__BeaconID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__BeaconID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__BEACON_ID__STRUCT_H_
