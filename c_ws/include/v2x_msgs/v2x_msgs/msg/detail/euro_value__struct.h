// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/EuroValue.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__EURO_VALUE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__EURO_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EURO_VALUE_NO_ENTRY'.
enum
{
  v2x_msgs__msg__EuroValue__EURO_VALUE_NO_ENTRY = 0ll
};

/// Constant 'EURO_VALUE_EURO_1'.
enum
{
  v2x_msgs__msg__EuroValue__EURO_VALUE_EURO_1 = 1ll
};

/// Constant 'EURO_VALUE_EURO_2'.
enum
{
  v2x_msgs__msg__EuroValue__EURO_VALUE_EURO_2 = 2ll
};

/// Constant 'EURO_VALUE_EURO_3'.
enum
{
  v2x_msgs__msg__EuroValue__EURO_VALUE_EURO_3 = 3ll
};

/// Constant 'EURO_VALUE_EURO_4'.
enum
{
  v2x_msgs__msg__EuroValue__EURO_VALUE_EURO_4 = 4ll
};

/// Constant 'EURO_VALUE_EURO_5'.
enum
{
  v2x_msgs__msg__EuroValue__EURO_VALUE_EURO_5 = 5ll
};

/// Constant 'EURO_VALUE_EURO_6'.
enum
{
  v2x_msgs__msg__EuroValue__EURO_VALUE_EURO_6 = 6ll
};

/// Constant 'EURO_VALUE_RESERVED_FOR_USE1'.
enum
{
  v2x_msgs__msg__EuroValue__EURO_VALUE_RESERVED_FOR_USE1 = 7ll
};

/// Constant 'EURO_VALUE_RESERVED_FOR_USE2'.
enum
{
  v2x_msgs__msg__EuroValue__EURO_VALUE_RESERVED_FOR_USE2 = 8ll
};

/// Constant 'EURO_VALUE_RESERVED_FOR_USE3'.
enum
{
  v2x_msgs__msg__EuroValue__EURO_VALUE_RESERVED_FOR_USE3 = 9ll
};

/// Constant 'EURO_VALUE_RESERVED_FOR_USE4'.
enum
{
  v2x_msgs__msg__EuroValue__EURO_VALUE_RESERVED_FOR_USE4 = 10ll
};

/// Constant 'EURO_VALUE_RESERVED_FOR_USE5'.
enum
{
  v2x_msgs__msg__EuroValue__EURO_VALUE_RESERVED_FOR_USE5 = 11ll
};

/// Constant 'EURO_VALUE_RESERVED_FOR_USE6'.
enum
{
  v2x_msgs__msg__EuroValue__EURO_VALUE_RESERVED_FOR_USE6 = 12ll
};

/// Constant 'EURO_VALUE_RESERVED_FOR_USE7'.
enum
{
  v2x_msgs__msg__EuroValue__EURO_VALUE_RESERVED_FOR_USE7 = 13ll
};

/// Constant 'EURO_VALUE_RESERVED_FOR_USE8'.
enum
{
  v2x_msgs__msg__EuroValue__EURO_VALUE_RESERVED_FOR_USE8 = 14ll
};

/// Constant 'EURO_VALUE_EEV'.
enum
{
  v2x_msgs__msg__EuroValue__EURO_VALUE_EEV = 15ll
};

/// Struct defined in msg/EuroValue in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__EuroValue
{
  int64_t euro_value;
} v2x_msgs__msg__EuroValue;

// Struct for a sequence of v2x_msgs__msg__EuroValue.
typedef struct v2x_msgs__msg__EuroValue__Sequence
{
  v2x_msgs__msg__EuroValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__EuroValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__EURO_VALUE__STRUCT_H_
