// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SpeedConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SPEED_CONFIDENCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SPEED_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPEED_CONFIDENCE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SpeedConfidence__SPEED_CONFIDENCE_RANGE_MIN = 1ll
};

/// Constant 'SPEED_CONFIDENCE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SpeedConfidence__SPEED_CONFIDENCE_RANGE_MAX = 127ll
};

/// Constant 'SPEED_CONFIDENCE_EQUAL_OR_WITHIN_ONE_CENTIMETER_PER_SEC'.
enum
{
  v2x_msgs__msg__SpeedConfidence__SPEED_CONFIDENCE_EQUAL_OR_WITHIN_ONE_CENTIMETER_PER_SEC = 1ll
};

/// Constant 'SPEED_CONFIDENCE_EQUAL_OR_WITHIN_ONE_METER_PER_SEC'.
enum
{
  v2x_msgs__msg__SpeedConfidence__SPEED_CONFIDENCE_EQUAL_OR_WITHIN_ONE_METER_PER_SEC = 100ll
};

/// Constant 'SPEED_CONFIDENCE_OUT_OF_RANGE'.
enum
{
  v2x_msgs__msg__SpeedConfidence__SPEED_CONFIDENCE_OUT_OF_RANGE = 126ll
};

/// Constant 'SPEED_CONFIDENCE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__SpeedConfidence__SPEED_CONFIDENCE_UNAVAILABLE = 127ll
};

/// Struct defined in msg/SpeedConfidence in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SpeedConfidence
{
  int64_t speed_confidence;
} v2x_msgs__msg__SpeedConfidence;

// Struct for a sequence of v2x_msgs__msg__SpeedConfidence.
typedef struct v2x_msgs__msg__SpeedConfidence__Sequence
{
  v2x_msgs__msg__SpeedConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SpeedConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SPEED_CONFIDENCE__STRUCT_H_
