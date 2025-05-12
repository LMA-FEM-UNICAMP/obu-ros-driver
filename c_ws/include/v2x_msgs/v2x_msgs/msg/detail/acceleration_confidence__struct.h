// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AccelerationConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ACCELERATION_CONFIDENCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ACCELERATION_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACCELERATION_CONFIDENCE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__AccelerationConfidence__ACCELERATION_CONFIDENCE_RANGE_MIN = 0ll
};

/// Constant 'ACCELERATION_CONFIDENCE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__AccelerationConfidence__ACCELERATION_CONFIDENCE_RANGE_MAX = 102ll
};

/// Constant 'ACCELERATION_CONFIDENCE_POINT_ONE_METER_PER_SEC_SQUARED'.
enum
{
  v2x_msgs__msg__AccelerationConfidence__ACCELERATION_CONFIDENCE_POINT_ONE_METER_PER_SEC_SQUARED = 1ll
};

/// Constant 'ACCELERATION_CONFIDENCE_OUT_OF_RANGE'.
enum
{
  v2x_msgs__msg__AccelerationConfidence__ACCELERATION_CONFIDENCE_OUT_OF_RANGE = 101ll
};

/// Constant 'ACCELERATION_CONFIDENCE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__AccelerationConfidence__ACCELERATION_CONFIDENCE_UNAVAILABLE = 102ll
};

/// Struct defined in msg/AccelerationConfidence in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AccelerationConfidence
{
  int64_t acceleration_confidence;
} v2x_msgs__msg__AccelerationConfidence;

// Struct for a sequence of v2x_msgs__msg__AccelerationConfidence.
typedef struct v2x_msgs__msg__AccelerationConfidence__Sequence
{
  v2x_msgs__msg__AccelerationConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AccelerationConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ACCELERATION_CONFIDENCE__STRUCT_H_
