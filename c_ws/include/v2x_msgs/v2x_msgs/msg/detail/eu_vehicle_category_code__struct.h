// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/EuVehicleCategoryCode.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__EU_VEHICLE_CATEGORY_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__EU_VEHICLE_CATEGORY_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EU_VEHICLE_CATEGORY_CODE_NOTHING'.
enum
{
  v2x_msgs__msg__EuVehicleCategoryCode__EU_VEHICLE_CATEGORY_CODE_NOTHING = 0ll
};

/// Constant 'EU_VEHICLE_CATEGORY_CODE_EU_VEHICLE_CATEGORY_L'.
enum
{
  v2x_msgs__msg__EuVehicleCategoryCode__EU_VEHICLE_CATEGORY_CODE_EU_VEHICLE_CATEGORY_L = 1ll
};

/// Constant 'EU_VEHICLE_CATEGORY_CODE_EU_VEHICLE_CATEGORY_M'.
enum
{
  v2x_msgs__msg__EuVehicleCategoryCode__EU_VEHICLE_CATEGORY_CODE_EU_VEHICLE_CATEGORY_M = 2ll
};

/// Constant 'EU_VEHICLE_CATEGORY_CODE_EU_VEHICLE_CATEGORY_N'.
enum
{
  v2x_msgs__msg__EuVehicleCategoryCode__EU_VEHICLE_CATEGORY_CODE_EU_VEHICLE_CATEGORY_N = 3ll
};

/// Constant 'EU_VEHICLE_CATEGORY_CODE_EU_VEHICLE_CATEGORY_O'.
enum
{
  v2x_msgs__msg__EuVehicleCategoryCode__EU_VEHICLE_CATEGORY_CODE_EU_VEHICLE_CATEGORY_O = 4ll
};

// Include directives for member types
// Member 'eu_vehicle_category_l'
#include "v2x_msgs/msg/detail/eu_vehicle_category_l__struct.h"
// Member 'eu_vehicle_category_m'
#include "v2x_msgs/msg/detail/eu_vehicle_category_m__struct.h"
// Member 'eu_vehicle_category_n'
#include "v2x_msgs/msg/detail/eu_vehicle_category_n__struct.h"
// Member 'eu_vehicle_category_o'
#include "v2x_msgs/msg/detail/eu_vehicle_category_o__struct.h"

/// Struct defined in msg/EuVehicleCategoryCode in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__EuVehicleCategoryCode
{
  /// CHOICE! - Choose exactly of the containers
  int64_t eu_vehicle_category_code_container_select;
  /// container 1
  v2x_msgs__msg__EuVehicleCategoryL eu_vehicle_category_l;
  /// container 2
  v2x_msgs__msg__EuVehicleCategoryM eu_vehicle_category_m;
  /// container 3
  v2x_msgs__msg__EuVehicleCategoryN eu_vehicle_category_n;
  /// container 4
  v2x_msgs__msg__EuVehicleCategoryO eu_vehicle_category_o;
} v2x_msgs__msg__EuVehicleCategoryCode;

// Struct for a sequence of v2x_msgs__msg__EuVehicleCategoryCode.
typedef struct v2x_msgs__msg__EuVehicleCategoryCode__Sequence
{
  v2x_msgs__msg__EuVehicleCategoryCode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__EuVehicleCategoryCode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__EU_VEHICLE_CATEGORY_CODE__STRUCT_H_
