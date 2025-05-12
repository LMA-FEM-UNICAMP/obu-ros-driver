// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/YawRateConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__YAW_RATE_CONFIDENCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__YAW_RATE_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'YAW_RATE_CONFIDENCE_DEG_SEC_000_01'.
enum
{
  v2x_msgs__msg__YawRateConfidence__YAW_RATE_CONFIDENCE_DEG_SEC_000_01 = 0ll
};

/// Constant 'YAW_RATE_CONFIDENCE_DEG_SEC_000_05'.
enum
{
  v2x_msgs__msg__YawRateConfidence__YAW_RATE_CONFIDENCE_DEG_SEC_000_05 = 1ll
};

/// Constant 'YAW_RATE_CONFIDENCE_DEG_SEC_000_10'.
enum
{
  v2x_msgs__msg__YawRateConfidence__YAW_RATE_CONFIDENCE_DEG_SEC_000_10 = 2ll
};

/// Constant 'YAW_RATE_CONFIDENCE_DEG_SEC_001_00'.
enum
{
  v2x_msgs__msg__YawRateConfidence__YAW_RATE_CONFIDENCE_DEG_SEC_001_00 = 3ll
};

/// Constant 'YAW_RATE_CONFIDENCE_DEG_SEC_005_00'.
enum
{
  v2x_msgs__msg__YawRateConfidence__YAW_RATE_CONFIDENCE_DEG_SEC_005_00 = 4ll
};

/// Constant 'YAW_RATE_CONFIDENCE_DEG_SEC_010_00'.
enum
{
  v2x_msgs__msg__YawRateConfidence__YAW_RATE_CONFIDENCE_DEG_SEC_010_00 = 5ll
};

/// Constant 'YAW_RATE_CONFIDENCE_DEG_SEC_100_00'.
enum
{
  v2x_msgs__msg__YawRateConfidence__YAW_RATE_CONFIDENCE_DEG_SEC_100_00 = 6ll
};

/// Constant 'YAW_RATE_CONFIDENCE_OUT_OF_RANGE'.
enum
{
  v2x_msgs__msg__YawRateConfidence__YAW_RATE_CONFIDENCE_OUT_OF_RANGE = 7ll
};

/// Constant 'YAW_RATE_CONFIDENCE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__YawRateConfidence__YAW_RATE_CONFIDENCE_UNAVAILABLE = 8ll
};

/// Struct defined in msg/YawRateConfidence in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__YawRateConfidence
{
  int64_t yaw_rate_confidence;
} v2x_msgs__msg__YawRateConfidence;

// Struct for a sequence of v2x_msgs__msg__YawRateConfidence.
typedef struct v2x_msgs__msg__YawRateConfidence__Sequence
{
  v2x_msgs__msg__YawRateConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__YawRateConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__YAW_RATE_CONFIDENCE__STRUCT_H_
