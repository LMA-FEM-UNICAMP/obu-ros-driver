// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PosPillar.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__POS_PILLAR__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__POS_PILLAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POS_PILLAR_RANGE_MIN'.
enum
{
  v2x_msgs__msg__PosPillar__POS_PILLAR_RANGE_MIN = 1ll
};

/// Constant 'POS_PILLAR_RANGE_MAX'.
enum
{
  v2x_msgs__msg__PosPillar__POS_PILLAR_RANGE_MAX = 30ll
};

/// Constant 'POS_PILLAR_TEN_CENTIMETERS'.
enum
{
  v2x_msgs__msg__PosPillar__POS_PILLAR_TEN_CENTIMETERS = 1ll
};

/// Constant 'POS_PILLAR_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__PosPillar__POS_PILLAR_UNAVAILABLE = 30ll
};

/// Struct defined in msg/PosPillar in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PosPillar
{
  int64_t pos_pillar;
} v2x_msgs__msg__PosPillar;

// Struct for a sequence of v2x_msgs__msg__PosPillar.
typedef struct v2x_msgs__msg__PosPillar__Sequence
{
  v2x_msgs__msg__PosPillar * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PosPillar__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__POS_PILLAR__STRUCT_H_
