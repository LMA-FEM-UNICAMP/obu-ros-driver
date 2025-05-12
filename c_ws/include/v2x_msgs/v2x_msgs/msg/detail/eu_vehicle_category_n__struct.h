// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/EuVehicleCategoryN.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__EU_VEHICLE_CATEGORY_N__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__EU_VEHICLE_CATEGORY_N__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EU_VEHICLE_CATEGORY_N_N1'.
enum
{
  v2x_msgs__msg__EuVehicleCategoryN__EU_VEHICLE_CATEGORY_N_N1 = 0ll
};

/// Constant 'EU_VEHICLE_CATEGORY_N_N2'.
enum
{
  v2x_msgs__msg__EuVehicleCategoryN__EU_VEHICLE_CATEGORY_N_N2 = 1ll
};

/// Constant 'EU_VEHICLE_CATEGORY_N_N3'.
enum
{
  v2x_msgs__msg__EuVehicleCategoryN__EU_VEHICLE_CATEGORY_N_N3 = 2ll
};

/// Struct defined in msg/EuVehicleCategoryN in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__EuVehicleCategoryN
{
  int64_t eu_vehicle_category_n;
} v2x_msgs__msg__EuVehicleCategoryN;

// Struct for a sequence of v2x_msgs__msg__EuVehicleCategoryN.
typedef struct v2x_msgs__msg__EuVehicleCategoryN__Sequence
{
  v2x_msgs__msg__EuVehicleCategoryN * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__EuVehicleCategoryN__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__EU_VEHICLE_CATEGORY_N__STRUCT_H_
