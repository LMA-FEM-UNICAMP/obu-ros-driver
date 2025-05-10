// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SpeedConfidenceDSRC.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SPEED_CONFIDENCE_DSRC__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SPEED_CONFIDENCE_DSRC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SPEED_CONFIDENCE_DSRC_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__SpeedConfidenceDSRC__SPEED_CONFIDENCE_DSRC_UNAVAILABLE = 0ll
};

/// Constant 'SPEED_CONFIDENCE_DSRC_PREC100MS'.
enum
{
  v2x_msgs__msg__SpeedConfidenceDSRC__SPEED_CONFIDENCE_DSRC_PREC100MS = 1ll
};

/// Constant 'SPEED_CONFIDENCE_DSRC_PREC10MS'.
enum
{
  v2x_msgs__msg__SpeedConfidenceDSRC__SPEED_CONFIDENCE_DSRC_PREC10MS = 2ll
};

/// Constant 'SPEED_CONFIDENCE_DSRC_PREC5MS'.
enum
{
  v2x_msgs__msg__SpeedConfidenceDSRC__SPEED_CONFIDENCE_DSRC_PREC5MS = 3ll
};

/// Constant 'SPEED_CONFIDENCE_DSRC_PREC1MS'.
enum
{
  v2x_msgs__msg__SpeedConfidenceDSRC__SPEED_CONFIDENCE_DSRC_PREC1MS = 4ll
};

/// Constant 'SPEED_CONFIDENCE_DSRC_PREC0_1MS'.
enum
{
  v2x_msgs__msg__SpeedConfidenceDSRC__SPEED_CONFIDENCE_DSRC_PREC0_1MS = 5ll
};

/// Constant 'SPEED_CONFIDENCE_DSRC_PREC0_05MS'.
enum
{
  v2x_msgs__msg__SpeedConfidenceDSRC__SPEED_CONFIDENCE_DSRC_PREC0_05MS = 6ll
};

/// Constant 'SPEED_CONFIDENCE_DSRC_PREC0_01MS'.
enum
{
  v2x_msgs__msg__SpeedConfidenceDSRC__SPEED_CONFIDENCE_DSRC_PREC0_01MS = 7ll
};

/// Struct defined in msg/SpeedConfidenceDSRC in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SpeedConfidenceDSRC
{
  int64_t speed_confidence_dsrc;
} v2x_msgs__msg__SpeedConfidenceDSRC;

// Struct for a sequence of v2x_msgs__msg__SpeedConfidenceDSRC.
typedef struct v2x_msgs__msg__SpeedConfidenceDSRC__Sequence
{
  v2x_msgs__msg__SpeedConfidenceDSRC * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SpeedConfidenceDSRC__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SPEED_CONFIDENCE_DSRC__STRUCT_H_
