// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/OtherSublassType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__OTHER_SUBLASS_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__OTHER_SUBLASS_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OTHER_SUBLASS_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__OtherSublassType__OTHER_SUBLASS_TYPE_RANGE_MIN = 0ll
};

/// Constant 'OTHER_SUBLASS_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__OtherSublassType__OTHER_SUBLASS_TYPE_RANGE_MAX = 255ll
};

/// Constant 'OTHER_SUBLASS_TYPE_UNKNOWN'.
enum
{
  v2x_msgs__msg__OtherSublassType__OTHER_SUBLASS_TYPE_UNKNOWN = 0ll
};

/// Constant 'OTHER_SUBLASS_TYPE_ROAD_SIDE_UNIT'.
enum
{
  v2x_msgs__msg__OtherSublassType__OTHER_SUBLASS_TYPE_ROAD_SIDE_UNIT = 1ll
};

/// Struct defined in msg/OtherSublassType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__OtherSublassType
{
  int64_t other_sublass_type;
} v2x_msgs__msg__OtherSublassType;

// Struct for a sequence of v2x_msgs__msg__OtherSublassType.
typedef struct v2x_msgs__msg__OtherSublassType__Sequence
{
  v2x_msgs__msg__OtherSublassType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__OtherSublassType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__OTHER_SUBLASS_TYPE__STRUCT_H_
