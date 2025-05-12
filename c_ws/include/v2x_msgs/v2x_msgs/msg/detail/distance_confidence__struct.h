// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DistanceConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DISTANCE_CONFIDENCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DISTANCE_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DISTANCE_CONFIDENCE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DistanceConfidence__DISTANCE_CONFIDENCE_RANGE_MIN = 0ll
};

/// Constant 'DISTANCE_CONFIDENCE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DistanceConfidence__DISTANCE_CONFIDENCE_RANGE_MAX = 102ll
};

/// Constant 'DISTANCE_CONFIDENCE_ZERO_POINT_ZERO_ONE_METER'.
enum
{
  v2x_msgs__msg__DistanceConfidence__DISTANCE_CONFIDENCE_ZERO_POINT_ZERO_ONE_METER = 1ll
};

/// Constant 'DISTANCE_CONFIDENCE_ONE_METER'.
enum
{
  v2x_msgs__msg__DistanceConfidence__DISTANCE_CONFIDENCE_ONE_METER = 100ll
};

/// Constant 'DISTANCE_CONFIDENCE_OUT_OF_RANGE'.
enum
{
  v2x_msgs__msg__DistanceConfidence__DISTANCE_CONFIDENCE_OUT_OF_RANGE = 101ll
};

/// Constant 'DISTANCE_CONFIDENCE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__DistanceConfidence__DISTANCE_CONFIDENCE_UNAVAILABLE = 102ll
};

/// Struct defined in msg/DistanceConfidence in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DistanceConfidence
{
  int64_t distance_confidence;
} v2x_msgs__msg__DistanceConfidence;

// Struct for a sequence of v2x_msgs__msg__DistanceConfidence.
typedef struct v2x_msgs__msg__DistanceConfidence__Sequence
{
  v2x_msgs__msg__DistanceConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DistanceConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DISTANCE_CONFIDENCE__STRUCT_H_
