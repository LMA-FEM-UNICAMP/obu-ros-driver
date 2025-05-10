// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/InternationalSignNumberOfLane.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_NUMBER_OF_LANE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_NUMBER_OF_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INTERNATIONAL_SIGN_NUMBER_OF_LANE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__InternationalSignNumberOfLane__INTERNATIONAL_SIGN_NUMBER_OF_LANE_RANGE_MIN = 0ll
};

/// Constant 'INTERNATIONAL_SIGN_NUMBER_OF_LANE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__InternationalSignNumberOfLane__INTERNATIONAL_SIGN_NUMBER_OF_LANE_RANGE_MAX = 99ll
};

/// Struct defined in msg/InternationalSignNumberOfLane in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__InternationalSignNumberOfLane
{
  int64_t international_sign_number_of_lane;
} v2x_msgs__msg__InternationalSignNumberOfLane;

// Struct for a sequence of v2x_msgs__msg__InternationalSignNumberOfLane.
typedef struct v2x_msgs__msg__InternationalSignNumberOfLane__Sequence
{
  v2x_msgs__msg__InternationalSignNumberOfLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__InternationalSignNumberOfLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__INTERNATIONAL_SIGN_NUMBER_OF_LANE__STRUCT_H_
