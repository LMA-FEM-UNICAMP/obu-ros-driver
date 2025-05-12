// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RegionId.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__REGION_ID__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__REGION_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REGION_ID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__RegionId__REGION_ID_RANGE_MIN = 0ll
};

/// Constant 'REGION_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__RegionId__REGION_ID_RANGE_MAX = 255ll
};

/// Constant 'REGION_ID_NO_REGION'.
enum
{
  v2x_msgs__msg__RegionId__REGION_ID_NO_REGION = 0ll
};

/// Constant 'REGION_ID_ADD_GRP_A'.
enum
{
  v2x_msgs__msg__RegionId__REGION_ID_ADD_GRP_A = 1ll
};

/// Constant 'REGION_ID_ADD_GRP_B'.
enum
{
  v2x_msgs__msg__RegionId__REGION_ID_ADD_GRP_B = 2ll
};

/// Constant 'REGION_ID_ADD_GRP_C'.
enum
{
  v2x_msgs__msg__RegionId__REGION_ID_ADD_GRP_C = 3ll
};

/// Struct defined in msg/RegionId in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RegionId
{
  int64_t region_id;
} v2x_msgs__msg__RegionId;

// Struct for a sequence of v2x_msgs__msg__RegionId.
typedef struct v2x_msgs__msg__RegionId__Sequence
{
  v2x_msgs__msg__RegionId * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RegionId__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__REGION_ID__STRUCT_H_
