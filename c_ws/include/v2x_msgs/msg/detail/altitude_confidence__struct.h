// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AltitudeConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ALTITUDE_CONFIDENCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ALTITUDE_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ALTITUDE_CONFIDENCE_ALT_000_01'.
enum
{
  v2x_msgs__msg__AltitudeConfidence__ALTITUDE_CONFIDENCE_ALT_000_01 = 0ll
};

/// Constant 'ALTITUDE_CONFIDENCE_ALT_000_02'.
enum
{
  v2x_msgs__msg__AltitudeConfidence__ALTITUDE_CONFIDENCE_ALT_000_02 = 1ll
};

/// Constant 'ALTITUDE_CONFIDENCE_ALT_000_05'.
enum
{
  v2x_msgs__msg__AltitudeConfidence__ALTITUDE_CONFIDENCE_ALT_000_05 = 2ll
};

/// Constant 'ALTITUDE_CONFIDENCE_ALT_000_10'.
enum
{
  v2x_msgs__msg__AltitudeConfidence__ALTITUDE_CONFIDENCE_ALT_000_10 = 3ll
};

/// Constant 'ALTITUDE_CONFIDENCE_ALT_000_20'.
enum
{
  v2x_msgs__msg__AltitudeConfidence__ALTITUDE_CONFIDENCE_ALT_000_20 = 4ll
};

/// Constant 'ALTITUDE_CONFIDENCE_ALT_000_50'.
enum
{
  v2x_msgs__msg__AltitudeConfidence__ALTITUDE_CONFIDENCE_ALT_000_50 = 5ll
};

/// Constant 'ALTITUDE_CONFIDENCE_ALT_001_00'.
enum
{
  v2x_msgs__msg__AltitudeConfidence__ALTITUDE_CONFIDENCE_ALT_001_00 = 6ll
};

/// Constant 'ALTITUDE_CONFIDENCE_ALT_002_00'.
enum
{
  v2x_msgs__msg__AltitudeConfidence__ALTITUDE_CONFIDENCE_ALT_002_00 = 7ll
};

/// Constant 'ALTITUDE_CONFIDENCE_ALT_005_00'.
enum
{
  v2x_msgs__msg__AltitudeConfidence__ALTITUDE_CONFIDENCE_ALT_005_00 = 8ll
};

/// Constant 'ALTITUDE_CONFIDENCE_ALT_010_00'.
enum
{
  v2x_msgs__msg__AltitudeConfidence__ALTITUDE_CONFIDENCE_ALT_010_00 = 9ll
};

/// Constant 'ALTITUDE_CONFIDENCE_ALT_020_00'.
enum
{
  v2x_msgs__msg__AltitudeConfidence__ALTITUDE_CONFIDENCE_ALT_020_00 = 10ll
};

/// Constant 'ALTITUDE_CONFIDENCE_ALT_050_00'.
enum
{
  v2x_msgs__msg__AltitudeConfidence__ALTITUDE_CONFIDENCE_ALT_050_00 = 11ll
};

/// Constant 'ALTITUDE_CONFIDENCE_ALT_100_00'.
enum
{
  v2x_msgs__msg__AltitudeConfidence__ALTITUDE_CONFIDENCE_ALT_100_00 = 12ll
};

/// Constant 'ALTITUDE_CONFIDENCE_ALT_200_00'.
enum
{
  v2x_msgs__msg__AltitudeConfidence__ALTITUDE_CONFIDENCE_ALT_200_00 = 13ll
};

/// Constant 'ALTITUDE_CONFIDENCE_OUT_OF_RANGE'.
enum
{
  v2x_msgs__msg__AltitudeConfidence__ALTITUDE_CONFIDENCE_OUT_OF_RANGE = 14ll
};

/// Constant 'ALTITUDE_CONFIDENCE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__AltitudeConfidence__ALTITUDE_CONFIDENCE_UNAVAILABLE = 15ll
};

/// Struct defined in msg/AltitudeConfidence in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AltitudeConfidence
{
  int64_t altitude_confidence;
} v2x_msgs__msg__AltitudeConfidence;

// Struct for a sequence of v2x_msgs__msg__AltitudeConfidence.
typedef struct v2x_msgs__msg__AltitudeConfidence__Sequence
{
  v2x_msgs__msg__AltitudeConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AltitudeConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ALTITUDE_CONFIDENCE__STRUCT_H_
