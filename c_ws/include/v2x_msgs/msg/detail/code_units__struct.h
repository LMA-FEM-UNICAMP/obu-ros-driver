// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CodeUnits.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CODE_UNITS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CODE_UNITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CODE_UNITS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__CodeUnits__CODE_UNITS_RANGE_MIN = 0ll
};

/// Constant 'CODE_UNITS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__CodeUnits__CODE_UNITS_RANGE_MAX = 15ll
};

/// Constant 'CODEUNITS_KMPERH'.
enum
{
  v2x_msgs__msg__CodeUnits__CODEUNITS_KMPERH = 0ll
};

/// Constant 'CODEUNITS_MILESPERH'.
enum
{
  v2x_msgs__msg__CodeUnits__CODEUNITS_MILESPERH = 1ll
};

/// Constant 'CODEUNITS_KILOMETRE'.
enum
{
  v2x_msgs__msg__CodeUnits__CODEUNITS_KILOMETRE = 2ll
};

/// Constant 'CODEUNITS_METRE'.
enum
{
  v2x_msgs__msg__CodeUnits__CODEUNITS_METRE = 3ll
};

/// Constant 'CODEUNITS_DECIMETRE'.
enum
{
  v2x_msgs__msg__CodeUnits__CODEUNITS_DECIMETRE = 4ll
};

/// Constant 'CODEUNITS_CENTIMETRE'.
enum
{
  v2x_msgs__msg__CodeUnits__CODEUNITS_CENTIMETRE = 5ll
};

/// Constant 'CODEUNITS_MILE'.
enum
{
  v2x_msgs__msg__CodeUnits__CODEUNITS_MILE = 6ll
};

/// Constant 'CODEUNITS_YARD'.
enum
{
  v2x_msgs__msg__CodeUnits__CODEUNITS_YARD = 7ll
};

/// Constant 'CODEUNITS_FOOT'.
enum
{
  v2x_msgs__msg__CodeUnits__CODEUNITS_FOOT = 8ll
};

/// Constant 'CODEUNITS_MINUTES_OF_TIME'.
enum
{
  v2x_msgs__msg__CodeUnits__CODEUNITS_MINUTES_OF_TIME = 9ll
};

/// Constant 'CODEUNITS_TONNES'.
enum
{
  v2x_msgs__msg__CodeUnits__CODEUNITS_TONNES = 10ll
};

/// Constant 'CODEUNITS_HUNDREDKG'.
enum
{
  v2x_msgs__msg__CodeUnits__CODEUNITS_HUNDREDKG = 11ll
};

/// Constant 'CODEUNITS_POUND'.
enum
{
  v2x_msgs__msg__CodeUnits__CODEUNITS_POUND = 12ll
};

/// Constant 'CODEUNITS_RATE_OF_INCLINE'.
enum
{
  v2x_msgs__msg__CodeUnits__CODEUNITS_RATE_OF_INCLINE = 13ll
};

/// Constant 'CODEUNITS_DURATIONINMINUTES'.
enum
{
  v2x_msgs__msg__CodeUnits__CODEUNITS_DURATIONINMINUTES = 14ll
};

/// Struct defined in msg/CodeUnits in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CodeUnits
{
  int64_t code_units;
} v2x_msgs__msg__CodeUnits;

// Struct for a sequence of v2x_msgs__msg__CodeUnits.
typedef struct v2x_msgs__msg__CodeUnits__Sequence
{
  v2x_msgs__msg__CodeUnits * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CodeUnits__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CODE_UNITS__STRUCT_H_
