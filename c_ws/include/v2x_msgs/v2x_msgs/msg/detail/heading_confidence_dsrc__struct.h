// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/HeadingConfidenceDSRC.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__HEADING_CONFIDENCE_DSRC__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__HEADING_CONFIDENCE_DSRC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HEADING_CONFIDENCE_DSRC_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__HeadingConfidenceDSRC__HEADING_CONFIDENCE_DSRC_UNAVAILABLE = 0ll
};

/// Constant 'HEADING_CONFIDENCE_DSRC_PREC10DEG'.
enum
{
  v2x_msgs__msg__HeadingConfidenceDSRC__HEADING_CONFIDENCE_DSRC_PREC10DEG = 1ll
};

/// Constant 'HEADING_CONFIDENCE_DSRC_PREC05DEG'.
enum
{
  v2x_msgs__msg__HeadingConfidenceDSRC__HEADING_CONFIDENCE_DSRC_PREC05DEG = 2ll
};

/// Constant 'HEADING_CONFIDENCE_DSRC_PREC01DEG'.
enum
{
  v2x_msgs__msg__HeadingConfidenceDSRC__HEADING_CONFIDENCE_DSRC_PREC01DEG = 3ll
};

/// Constant 'HEADING_CONFIDENCE_DSRC_PREC0_1DEG'.
enum
{
  v2x_msgs__msg__HeadingConfidenceDSRC__HEADING_CONFIDENCE_DSRC_PREC0_1DEG = 4ll
};

/// Constant 'HEADING_CONFIDENCE_DSRC_PREC0_05DEG'.
enum
{
  v2x_msgs__msg__HeadingConfidenceDSRC__HEADING_CONFIDENCE_DSRC_PREC0_05DEG = 5ll
};

/// Constant 'HEADING_CONFIDENCE_DSRC_PREC0_01DEG'.
enum
{
  v2x_msgs__msg__HeadingConfidenceDSRC__HEADING_CONFIDENCE_DSRC_PREC0_01DEG = 6ll
};

/// Constant 'HEADING_CONFIDENCE_DSRC_PREC0_0125DEG'.
enum
{
  v2x_msgs__msg__HeadingConfidenceDSRC__HEADING_CONFIDENCE_DSRC_PREC0_0125DEG = 7ll
};

/// Struct defined in msg/HeadingConfidenceDSRC in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__HeadingConfidenceDSRC
{
  int64_t heading_confidence_dsrc;
} v2x_msgs__msg__HeadingConfidenceDSRC;

// Struct for a sequence of v2x_msgs__msg__HeadingConfidenceDSRC.
typedef struct v2x_msgs__msg__HeadingConfidenceDSRC__Sequence
{
  v2x_msgs__msg__HeadingConfidenceDSRC * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__HeadingConfidenceDSRC__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__HEADING_CONFIDENCE_DSRC__STRUCT_H_
