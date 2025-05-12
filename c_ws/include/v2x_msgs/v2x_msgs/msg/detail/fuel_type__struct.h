// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/FuelType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__FUEL_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__FUEL_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FUEL_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__FuelType__FUEL_TYPE_RANGE_MIN = 0ll
};

/// Constant 'FUEL_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__FuelType__FUEL_TYPE_RANGE_MAX = 9ll
};

/// Constant 'FUEL_TYPE_UNKNOWN_FUEL'.
enum
{
  v2x_msgs__msg__FuelType__FUEL_TYPE_UNKNOWN_FUEL = 0ll
};

/// Constant 'FUEL_TYPE_GASOLINE'.
enum
{
  v2x_msgs__msg__FuelType__FUEL_TYPE_GASOLINE = 1ll
};

/// Constant 'FUEL_TYPE_ETHANOL'.
enum
{
  v2x_msgs__msg__FuelType__FUEL_TYPE_ETHANOL = 2ll
};

/// Constant 'FUEL_TYPE_DIESEL'.
enum
{
  v2x_msgs__msg__FuelType__FUEL_TYPE_DIESEL = 3ll
};

/// Constant 'FUEL_TYPE_ELECTRIC'.
enum
{
  v2x_msgs__msg__FuelType__FUEL_TYPE_ELECTRIC = 4ll
};

/// Constant 'FUEL_TYPE_HYBRID'.
enum
{
  v2x_msgs__msg__FuelType__FUEL_TYPE_HYBRID = 5ll
};

/// Constant 'FUEL_TYPE_HYDROGEN'.
enum
{
  v2x_msgs__msg__FuelType__FUEL_TYPE_HYDROGEN = 6ll
};

/// Constant 'FUEL_TYPE_NAT_GAS_LIQUID'.
enum
{
  v2x_msgs__msg__FuelType__FUEL_TYPE_NAT_GAS_LIQUID = 7ll
};

/// Constant 'FUEL_TYPE_NAT_GAS_COMP'.
enum
{
  v2x_msgs__msg__FuelType__FUEL_TYPE_NAT_GAS_COMP = 8ll
};

/// Constant 'FUEL_TYPE_PROPANE'.
enum
{
  v2x_msgs__msg__FuelType__FUEL_TYPE_PROPANE = 9ll
};

/// Struct defined in msg/FuelType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__FuelType
{
  int64_t fuel_type;
} v2x_msgs__msg__FuelType;

// Struct for a sequence of v2x_msgs__msg__FuelType.
typedef struct v2x_msgs__msg__FuelType__Sequence
{
  v2x_msgs__msg__FuelType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__FuelType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__FUEL_TYPE__STRUCT_H_
