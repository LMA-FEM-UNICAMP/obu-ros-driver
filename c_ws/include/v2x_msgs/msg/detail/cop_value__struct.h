// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CopValue.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__COP_VALUE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__COP_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COP_VALUE_NO_ENTRY'.
enum
{
  v2x_msgs__msg__CopValue__COP_VALUE_NO_ENTRY = 0ll
};

/// Constant 'COP_VALUE_CO2CLASS1'.
enum
{
  v2x_msgs__msg__CopValue__COP_VALUE_CO2CLASS1 = 1ll
};

/// Constant 'COP_VALUE_CO2CLASS2'.
enum
{
  v2x_msgs__msg__CopValue__COP_VALUE_CO2CLASS2 = 2ll
};

/// Constant 'COP_VALUE_CO2CLASS3'.
enum
{
  v2x_msgs__msg__CopValue__COP_VALUE_CO2CLASS3 = 3ll
};

/// Constant 'COP_VALUE_CO2CLASS4'.
enum
{
  v2x_msgs__msg__CopValue__COP_VALUE_CO2CLASS4 = 4ll
};

/// Constant 'COP_VALUE_CO2CLASS5'.
enum
{
  v2x_msgs__msg__CopValue__COP_VALUE_CO2CLASS5 = 5ll
};

/// Constant 'COP_VALUE_CO2CLASS6'.
enum
{
  v2x_msgs__msg__CopValue__COP_VALUE_CO2CLASS6 = 6ll
};

/// Constant 'COP_VALUE_CO2CLASS7'.
enum
{
  v2x_msgs__msg__CopValue__COP_VALUE_CO2CLASS7 = 7ll
};

/// Constant 'COP_VALUE_RESERVEDFOR_USE'.
enum
{
  v2x_msgs__msg__CopValue__COP_VALUE_RESERVEDFOR_USE = 8ll
};

/// Struct defined in msg/CopValue in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CopValue
{
  int64_t cop_value;
} v2x_msgs__msg__CopValue;

// Struct for a sequence of v2x_msgs__msg__CopValue.
typedef struct v2x_msgs__msg__CopValue__Sequence
{
  v2x_msgs__msg__CopValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CopValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__COP_VALUE__STRUCT_H_
