// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RelevanceDistance.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RELEVANCE_DISTANCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RELEVANCE_DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RELEVANCE_DISTANCE_LESS_THAN50M'.
enum
{
  v2x_msgs__msg__RelevanceDistance__RELEVANCE_DISTANCE_LESS_THAN50M = 0ll
};

/// Constant 'RELEVANCE_DISTANCE_LESS_THAN100M'.
enum
{
  v2x_msgs__msg__RelevanceDistance__RELEVANCE_DISTANCE_LESS_THAN100M = 1ll
};

/// Constant 'RELEVANCE_DISTANCE_LESS_THAN200M'.
enum
{
  v2x_msgs__msg__RelevanceDistance__RELEVANCE_DISTANCE_LESS_THAN200M = 2ll
};

/// Constant 'RELEVANCE_DISTANCE_LESS_THAN500M'.
enum
{
  v2x_msgs__msg__RelevanceDistance__RELEVANCE_DISTANCE_LESS_THAN500M = 3ll
};

/// Constant 'RELEVANCE_DISTANCE_LESS_THAN1000M'.
enum
{
  v2x_msgs__msg__RelevanceDistance__RELEVANCE_DISTANCE_LESS_THAN1000M = 4ll
};

/// Constant 'RELEVANCE_DISTANCE_LESS_THAN5KM'.
enum
{
  v2x_msgs__msg__RelevanceDistance__RELEVANCE_DISTANCE_LESS_THAN5KM = 5ll
};

/// Constant 'RELEVANCE_DISTANCE_LESS_THAN10KM'.
enum
{
  v2x_msgs__msg__RelevanceDistance__RELEVANCE_DISTANCE_LESS_THAN10KM = 6ll
};

/// Constant 'RELEVANCE_DISTANCE_OVER10KM'.
enum
{
  v2x_msgs__msg__RelevanceDistance__RELEVANCE_DISTANCE_OVER10KM = 7ll
};

/// Struct defined in msg/RelevanceDistance in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RelevanceDistance
{
  int64_t relevance_distance;
} v2x_msgs__msg__RelevanceDistance;

// Struct for a sequence of v2x_msgs__msg__RelevanceDistance.
typedef struct v2x_msgs__msg__RelevanceDistance__Sequence
{
  v2x_msgs__msg__RelevanceDistance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RelevanceDistance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RELEVANCE_DISTANCE__STRUCT_H_
