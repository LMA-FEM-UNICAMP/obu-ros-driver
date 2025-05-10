// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RSCUnit.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RSC_UNIT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RSC_UNIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RSCUNIT_RANGE_MIN'.
enum
{
  v2x_msgs__msg__RSCUnit__RSCUNIT_RANGE_MIN = 0ll
};

/// Constant 'RSCUNIT_RANGE_MAX'.
enum
{
  v2x_msgs__msg__RSCUnit__RSCUNIT_RANGE_MAX = 15ll
};

/// Constant 'RSCUNIT_KMPERH'.
enum
{
  v2x_msgs__msg__RSCUnit__RSCUNIT_KMPERH = 0ll
};

/// Constant 'RSCUNIT_MILESPERH'.
enum
{
  v2x_msgs__msg__RSCUnit__RSCUNIT_MILESPERH = 1ll
};

/// Constant 'RSCUNIT_KILOMETER'.
enum
{
  v2x_msgs__msg__RSCUnit__RSCUNIT_KILOMETER = 2ll
};

/// Constant 'RSCUNIT_METER'.
enum
{
  v2x_msgs__msg__RSCUnit__RSCUNIT_METER = 3ll
};

/// Constant 'RSCUNIT_DECIMETER'.
enum
{
  v2x_msgs__msg__RSCUnit__RSCUNIT_DECIMETER = 4ll
};

/// Constant 'RSCUNIT_CENTIMETER'.
enum
{
  v2x_msgs__msg__RSCUnit__RSCUNIT_CENTIMETER = 5ll
};

/// Constant 'RSCUNIT_MILE'.
enum
{
  v2x_msgs__msg__RSCUnit__RSCUNIT_MILE = 6ll
};

/// Constant 'RSCUNIT_YARD'.
enum
{
  v2x_msgs__msg__RSCUnit__RSCUNIT_YARD = 7ll
};

/// Constant 'RSCUNIT_FOOT'.
enum
{
  v2x_msgs__msg__RSCUnit__RSCUNIT_FOOT = 8ll
};

/// Constant 'RSCUNIT_MINUTES_OF_TIME'.
enum
{
  v2x_msgs__msg__RSCUnit__RSCUNIT_MINUTES_OF_TIME = 9ll
};

/// Constant 'RSCUNIT_TONNES'.
enum
{
  v2x_msgs__msg__RSCUnit__RSCUNIT_TONNES = 10ll
};

/// Constant 'RSCUNIT_HUNDREDKG'.
enum
{
  v2x_msgs__msg__RSCUnit__RSCUNIT_HUNDREDKG = 11ll
};

/// Constant 'RSCUNIT_POUND'.
enum
{
  v2x_msgs__msg__RSCUnit__RSCUNIT_POUND = 12ll
};

/// Constant 'RSCUNIT_RATE_OF_INCLINE'.
enum
{
  v2x_msgs__msg__RSCUnit__RSCUNIT_RATE_OF_INCLINE = 13ll
};

/// Struct defined in msg/RSCUnit in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RSCUnit
{
  int64_t rscunit;
} v2x_msgs__msg__RSCUnit;

// Struct for a sequence of v2x_msgs__msg__RSCUnit.
typedef struct v2x_msgs__msg__RSCUnit__Sequence
{
  v2x_msgs__msg__RSCUnit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RSCUnit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RSC_UNIT__STRUCT_H_
