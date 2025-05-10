// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/NumberOfOccupants.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__NUMBER_OF_OCCUPANTS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__NUMBER_OF_OCCUPANTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NUMBER_OF_OCCUPANTS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__NumberOfOccupants__NUMBER_OF_OCCUPANTS_RANGE_MIN = 0ll
};

/// Constant 'NUMBER_OF_OCCUPANTS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__NumberOfOccupants__NUMBER_OF_OCCUPANTS_RANGE_MAX = 127ll
};

/// Constant 'NUMBER_OF_OCCUPANTS_ONE_OCCUPANT'.
enum
{
  v2x_msgs__msg__NumberOfOccupants__NUMBER_OF_OCCUPANTS_ONE_OCCUPANT = 1ll
};

/// Constant 'NUMBER_OF_OCCUPANTS_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__NumberOfOccupants__NUMBER_OF_OCCUPANTS_UNAVAILABLE = 127ll
};

/// Struct defined in msg/NumberOfOccupants in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__NumberOfOccupants
{
  int64_t number_of_occupants;
} v2x_msgs__msg__NumberOfOccupants;

// Struct for a sequence of v2x_msgs__msg__NumberOfOccupants.
typedef struct v2x_msgs__msg__NumberOfOccupants__Sequence
{
  v2x_msgs__msg__NumberOfOccupants * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__NumberOfOccupants__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__NUMBER_OF_OCCUPANTS__STRUCT_H_
