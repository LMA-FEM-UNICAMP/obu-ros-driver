// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/MaxLenghtOfPlatoon.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__MAX_LENGHT_OF_PLATOON__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__MAX_LENGHT_OF_PLATOON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAX_LENGHT_OF_PLATOON_RANGE_MIN'.
enum
{
  v2x_msgs__msg__MaxLenghtOfPlatoon__MAX_LENGHT_OF_PLATOON_RANGE_MIN = 1ll
};

/// Constant 'MAX_LENGHT_OF_PLATOON_RANGE_MAX'.
enum
{
  v2x_msgs__msg__MaxLenghtOfPlatoon__MAX_LENGHT_OF_PLATOON_RANGE_MAX = 64ll
};

/// Struct defined in msg/MaxLenghtOfPlatoon in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__MaxLenghtOfPlatoon
{
  int64_t max_lenght_of_platoon;
} v2x_msgs__msg__MaxLenghtOfPlatoon;

// Struct for a sequence of v2x_msgs__msg__MaxLenghtOfPlatoon.
typedef struct v2x_msgs__msg__MaxLenghtOfPlatoon__Sequence
{
  v2x_msgs__msg__MaxLenghtOfPlatoon * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__MaxLenghtOfPlatoon__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__MAX_LENGHT_OF_PLATOON__STRUCT_H_
