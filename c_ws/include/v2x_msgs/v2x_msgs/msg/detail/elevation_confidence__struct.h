// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ElevationConfidence.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ELEVATION_CONFIDENCE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ELEVATION_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ELEVATION_CONFIDENCE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__ElevationConfidence__ELEVATION_CONFIDENCE_UNAVAILABLE = 0ll
};

/// Constant 'ELEVATION_CONFIDENCE_ELEV_500_00'.
enum
{
  v2x_msgs__msg__ElevationConfidence__ELEVATION_CONFIDENCE_ELEV_500_00 = 1ll
};

/// Constant 'ELEVATION_CONFIDENCE_ELEV_200_00'.
enum
{
  v2x_msgs__msg__ElevationConfidence__ELEVATION_CONFIDENCE_ELEV_200_00 = 2ll
};

/// Constant 'ELEVATION_CONFIDENCE_ELEV_100_00'.
enum
{
  v2x_msgs__msg__ElevationConfidence__ELEVATION_CONFIDENCE_ELEV_100_00 = 3ll
};

/// Constant 'ELEVATION_CONFIDENCE_ELEV_050_00'.
enum
{
  v2x_msgs__msg__ElevationConfidence__ELEVATION_CONFIDENCE_ELEV_050_00 = 4ll
};

/// Constant 'ELEVATION_CONFIDENCE_ELEV_020_00'.
enum
{
  v2x_msgs__msg__ElevationConfidence__ELEVATION_CONFIDENCE_ELEV_020_00 = 5ll
};

/// Constant 'ELEVATION_CONFIDENCE_ELEV_010_00'.
enum
{
  v2x_msgs__msg__ElevationConfidence__ELEVATION_CONFIDENCE_ELEV_010_00 = 6ll
};

/// Constant 'ELEVATION_CONFIDENCE_ELEV_005_00'.
enum
{
  v2x_msgs__msg__ElevationConfidence__ELEVATION_CONFIDENCE_ELEV_005_00 = 7ll
};

/// Constant 'ELEVATION_CONFIDENCE_ELEV_002_00'.
enum
{
  v2x_msgs__msg__ElevationConfidence__ELEVATION_CONFIDENCE_ELEV_002_00 = 8ll
};

/// Constant 'ELEVATION_CONFIDENCE_ELEV_001_00'.
enum
{
  v2x_msgs__msg__ElevationConfidence__ELEVATION_CONFIDENCE_ELEV_001_00 = 9ll
};

/// Constant 'ELEVATION_CONFIDENCE_ELEV_000_50'.
enum
{
  v2x_msgs__msg__ElevationConfidence__ELEVATION_CONFIDENCE_ELEV_000_50 = 10ll
};

/// Constant 'ELEVATION_CONFIDENCE_ELEV_000_20'.
enum
{
  v2x_msgs__msg__ElevationConfidence__ELEVATION_CONFIDENCE_ELEV_000_20 = 11ll
};

/// Constant 'ELEVATION_CONFIDENCE_ELEV_000_10'.
enum
{
  v2x_msgs__msg__ElevationConfidence__ELEVATION_CONFIDENCE_ELEV_000_10 = 12ll
};

/// Constant 'ELEVATION_CONFIDENCE_ELEV_000_05'.
enum
{
  v2x_msgs__msg__ElevationConfidence__ELEVATION_CONFIDENCE_ELEV_000_05 = 13ll
};

/// Constant 'ELEVATION_CONFIDENCE_ELEV_000_02'.
enum
{
  v2x_msgs__msg__ElevationConfidence__ELEVATION_CONFIDENCE_ELEV_000_02 = 14ll
};

/// Constant 'ELEVATION_CONFIDENCE_ELEV_000_01'.
enum
{
  v2x_msgs__msg__ElevationConfidence__ELEVATION_CONFIDENCE_ELEV_000_01 = 15ll
};

/// Struct defined in msg/ElevationConfidence in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ElevationConfidence
{
  int64_t elevation_confidence;
} v2x_msgs__msg__ElevationConfidence;

// Struct for a sequence of v2x_msgs__msg__ElevationConfidence.
typedef struct v2x_msgs__msg__ElevationConfidence__Sequence
{
  v2x_msgs__msg__ElevationConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ElevationConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ELEVATION_CONFIDENCE__STRUCT_H_
