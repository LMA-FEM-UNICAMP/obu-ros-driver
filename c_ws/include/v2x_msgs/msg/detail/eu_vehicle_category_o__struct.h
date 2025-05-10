// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/EuVehicleCategoryO.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__EU_VEHICLE_CATEGORY_O__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__EU_VEHICLE_CATEGORY_O__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EU_VEHICLE_CATEGORY_O_O1'.
enum
{
  v2x_msgs__msg__EuVehicleCategoryO__EU_VEHICLE_CATEGORY_O_O1 = 0ll
};

/// Constant 'EU_VEHICLE_CATEGORY_O_O2'.
enum
{
  v2x_msgs__msg__EuVehicleCategoryO__EU_VEHICLE_CATEGORY_O_O2 = 1ll
};

/// Constant 'EU_VEHICLE_CATEGORY_O_O3'.
enum
{
  v2x_msgs__msg__EuVehicleCategoryO__EU_VEHICLE_CATEGORY_O_O3 = 2ll
};

/// Constant 'EU_VEHICLE_CATEGORY_O_O4'.
enum
{
  v2x_msgs__msg__EuVehicleCategoryO__EU_VEHICLE_CATEGORY_O_O4 = 3ll
};

/// Struct defined in msg/EuVehicleCategoryO in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__EuVehicleCategoryO
{
  int64_t eu_vehicle_category_o;
} v2x_msgs__msg__EuVehicleCategoryO;

// Struct for a sequence of v2x_msgs__msg__EuVehicleCategoryO.
typedef struct v2x_msgs__msg__EuVehicleCategoryO__Sequence
{
  v2x_msgs__msg__EuVehicleCategoryO * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__EuVehicleCategoryO__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__EU_VEHICLE_CATEGORY_O__STRUCT_H_
