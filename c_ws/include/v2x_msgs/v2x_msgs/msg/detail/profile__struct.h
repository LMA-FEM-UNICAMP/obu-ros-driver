// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Profile.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PROFILE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PROFILE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PROFILE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__Profile__PROFILE_RANGE_MIN = 0ll
};

/// Constant 'PROFILE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__Profile__PROFILE_RANGE_MAX = 127ll
};

/// Constant 'PROFILE_PROFILE0'.
enum
{
  v2x_msgs__msg__Profile__PROFILE_PROFILE0 = 0ll
};

/// Constant 'PROFILE_PROFILE1'.
enum
{
  v2x_msgs__msg__Profile__PROFILE_PROFILE1 = 1ll
};

/// Struct defined in msg/Profile in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Profile
{
  int64_t profile;
} v2x_msgs__msg__Profile;

// Struct for a sequence of v2x_msgs__msg__Profile.
typedef struct v2x_msgs__msg__Profile__Sequence
{
  v2x_msgs__msg__Profile * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Profile__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PROFILE__STRUCT_H_
