// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ObjectAge.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__OBJECT_AGE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__OBJECT_AGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OBJECT_AGE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ObjectAge__OBJECT_AGE_RANGE_MIN = 0ll
};

/// Constant 'OBJECT_AGE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ObjectAge__OBJECT_AGE_RANGE_MAX = 1500ll
};

/// Constant 'OBJECT_AGE_ONE_MILI_SEC'.
enum
{
  v2x_msgs__msg__ObjectAge__OBJECT_AGE_ONE_MILI_SEC = 1ll
};

/// Struct defined in msg/ObjectAge in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ObjectAge
{
  int64_t object_age;
} v2x_msgs__msg__ObjectAge;

// Struct for a sequence of v2x_msgs__msg__ObjectAge.
typedef struct v2x_msgs__msg__ObjectAge__Sequence
{
  v2x_msgs__msg__ObjectAge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ObjectAge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__OBJECT_AGE__STRUCT_H_
