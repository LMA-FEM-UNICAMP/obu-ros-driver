// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleCharacteristicsFixValues.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_CHARACTERISTICS_FIX_VALUES__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_CHARACTERISTICS_FIX_VALUES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_CHARACTERISTICS_FIX_VALUES_NOTHING'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsFixValues__VEHICLE_CHARACTERISTICS_FIX_VALUES_NOTHING = 0ll
};

/// Constant 'VEHICLE_CHARACTERISTICS_FIX_VALUES_SIMPLE_VEHICLE_TYPE'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsFixValues__VEHICLE_CHARACTERISTICS_FIX_VALUES_SIMPLE_VEHICLE_TYPE = 1ll
};

/// Constant 'VEHICLE_CHARACTERISTICS_FIX_VALUES_EU_VEHICLE_CATEGORY_CODE'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsFixValues__VEHICLE_CHARACTERISTICS_FIX_VALUES_EU_VEHICLE_CATEGORY_CODE = 2ll
};

/// Constant 'VEHICLE_CHARACTERISTICS_FIX_VALUES_ISO3833VEHICLE_TYPE'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsFixValues__VEHICLE_CHARACTERISTICS_FIX_VALUES_ISO3833VEHICLE_TYPE = 3ll
};

/// Constant 'VEHICLE_CHARACTERISTICS_FIX_VALUES_EURO_AND_CO2VALUE'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsFixValues__VEHICLE_CHARACTERISTICS_FIX_VALUES_EURO_AND_CO2VALUE = 4ll
};

/// Constant 'VEHICLE_CHARACTERISTICS_FIX_VALUES_ENGINE_CHARACTERISTICS'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsFixValues__VEHICLE_CHARACTERISTICS_FIX_VALUES_ENGINE_CHARACTERISTICS = 5ll
};

/// Constant 'VEHICLE_CHARACTERISTICS_FIX_VALUES_LOAD_TYPE'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsFixValues__VEHICLE_CHARACTERISTICS_FIX_VALUES_LOAD_TYPE = 6ll
};

/// Constant 'VEHICLE_CHARACTERISTICS_FIX_VALUES_USAGE'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsFixValues__VEHICLE_CHARACTERISTICS_FIX_VALUES_USAGE = 7ll
};

// Include directives for member types
// Member 'simple_vehicle_type'
#include "v2x_msgs/msg/detail/station_type__struct.h"
// Member 'eu_vehicle_category_code'
#include "v2x_msgs/msg/detail/eu_vehicle_category_code__struct.h"
// Member 'iso3833vehicle_type'
#include "v2x_msgs/msg/detail/iso3833_vehicle_type__struct.h"
// Member 'euro_and_co2value'
#include "v2x_msgs/msg/detail/environmental_characteristics__struct.h"
// Member 'engine_characteristics'
#include "v2x_msgs/msg/detail/engine_characteristics__struct.h"
// Member 'load_type'
#include "v2x_msgs/msg/detail/load_type__struct.h"
// Member 'usage'
#include "v2x_msgs/msg/detail/vehicle_role__struct.h"

/// Struct defined in msg/VehicleCharacteristicsFixValues in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleCharacteristicsFixValues
{
  /// CHOICE! - Choose exactly of the containers
  int64_t vehicle_characteristics_fix_values_container_select;
  /// container 1
  v2x_msgs__msg__StationType simple_vehicle_type;
  /// container 2
  v2x_msgs__msg__EuVehicleCategoryCode eu_vehicle_category_code;
  /// container 3
  v2x_msgs__msg__Iso3833VehicleType iso3833vehicle_type;
  /// container 4
  v2x_msgs__msg__EnvironmentalCharacteristics euro_and_co2value;
  /// container 5
  v2x_msgs__msg__EngineCharacteristics engine_characteristics;
  /// container 6
  v2x_msgs__msg__LoadType load_type;
  /// container 7
  v2x_msgs__msg__VehicleRole usage;
} v2x_msgs__msg__VehicleCharacteristicsFixValues;

// Struct for a sequence of v2x_msgs__msg__VehicleCharacteristicsFixValues.
typedef struct v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence
{
  v2x_msgs__msg__VehicleCharacteristicsFixValues * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleCharacteristicsFixValues__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_CHARACTERISTICS_FIX_VALUES__STRUCT_H_
