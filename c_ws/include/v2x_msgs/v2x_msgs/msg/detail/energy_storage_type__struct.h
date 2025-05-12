// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/EnergyStorageType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ENERGY_STORAGE_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ENERGY_STORAGE_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ENERGY_STORAGE_TYPE_HYDROGEN_STORAGE'.
enum
{
  v2x_msgs__msg__EnergyStorageType__ENERGY_STORAGE_TYPE_HYDROGEN_STORAGE = 0ll
};

/// Constant 'ENERGY_STORAGE_TYPE_ELECTRIC_ENERGY_STORAGE'.
enum
{
  v2x_msgs__msg__EnergyStorageType__ENERGY_STORAGE_TYPE_ELECTRIC_ENERGY_STORAGE = 1ll
};

/// Constant 'ENERGY_STORAGE_TYPE_LIQUID_PROPANE_GAS'.
enum
{
  v2x_msgs__msg__EnergyStorageType__ENERGY_STORAGE_TYPE_LIQUID_PROPANE_GAS = 2ll
};

/// Constant 'ENERGY_STORAGE_TYPE_COMPRESSED_NATURAL_GAS'.
enum
{
  v2x_msgs__msg__EnergyStorageType__ENERGY_STORAGE_TYPE_COMPRESSED_NATURAL_GAS = 3ll
};

/// Constant 'ENERGY_STORAGE_TYPE_DIESEL'.
enum
{
  v2x_msgs__msg__EnergyStorageType__ENERGY_STORAGE_TYPE_DIESEL = 4ll
};

/// Constant 'ENERGY_STORAGE_TYPE_GASOLINE'.
enum
{
  v2x_msgs__msg__EnergyStorageType__ENERGY_STORAGE_TYPE_GASOLINE = 5ll
};

/// Constant 'ENERGY_STORAGE_TYPE_AMMONIA'.
enum
{
  v2x_msgs__msg__EnergyStorageType__ENERGY_STORAGE_TYPE_AMMONIA = 6ll
};

/// Struct defined in msg/EnergyStorageType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__EnergyStorageType
{
  int64_t energy_storage_type;
} v2x_msgs__msg__EnergyStorageType;

// Struct for a sequence of v2x_msgs__msg__EnergyStorageType.
typedef struct v2x_msgs__msg__EnergyStorageType__Sequence
{
  v2x_msgs__msg__EnergyStorageType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__EnergyStorageType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ENERGY_STORAGE_TYPE__STRUCT_H_
