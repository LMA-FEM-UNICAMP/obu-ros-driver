// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleCharacteristicsRanges.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_CHARACTERISTICS_RANGES__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_CHARACTERISTICS_RANGES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LIMITS_NOTHING'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsRanges__LIMITS_NOTHING = 0ll
};

/// Constant 'LIMITS_NUMBER_OF_AXLES'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsRanges__LIMITS_NUMBER_OF_AXLES = 1ll
};

/// Constant 'LIMITS_VEHICLE_DIMENSIONS'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsRanges__LIMITS_VEHICLE_DIMENSIONS = 2ll
};

/// Constant 'LIMITS_VEHICLE_WEIGHT_LIMITS'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsRanges__LIMITS_VEHICLE_WEIGHT_LIMITS = 3ll
};

/// Constant 'LIMITS_AXLE_WEIGHT_LIMITS'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsRanges__LIMITS_AXLE_WEIGHT_LIMITS = 4ll
};

/// Constant 'LIMITS_PASSENGER_CAPACITY'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsRanges__LIMITS_PASSENGER_CAPACITY = 5ll
};

/// Constant 'LIMITS_EXHAUST_EMISSION_VALUES'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsRanges__LIMITS_EXHAUST_EMISSION_VALUES = 6ll
};

/// Constant 'LIMITS_DIESEL_EMISSION_VALUES'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsRanges__LIMITS_DIESEL_EMISSION_VALUES = 7ll
};

/// Constant 'LIMITS_SOUND_LEVEL'.
enum
{
  v2x_msgs__msg__VehicleCharacteristicsRanges__LIMITS_SOUND_LEVEL = 8ll
};

// Include directives for member types
// Member 'comparison_operator'
#include "v2x_msgs/msg/detail/comparison_operator__struct.h"
// Member 'vehicle_dimensions'
#include "v2x_msgs/msg/detail/vehicle_dimensions__struct.h"
// Member 'vehicle_weight_limits'
#include "v2x_msgs/msg/detail/vehicle_weight_limits__struct.h"
// Member 'axle_weight_limits'
#include "v2x_msgs/msg/detail/axle_weight_limits__struct.h"
// Member 'passenger_capacity'
#include "v2x_msgs/msg/detail/passenger_capacity__struct.h"
// Member 'exhaust_emission_values'
#include "v2x_msgs/msg/detail/exhaust_emission_values__struct.h"
// Member 'diesel_emission_values'
#include "v2x_msgs/msg/detail/diesel_emission_values__struct.h"
// Member 'sound_level'
#include "v2x_msgs/msg/detail/sound_level__struct.h"

/// Struct defined in msg/VehicleCharacteristicsRanges in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleCharacteristicsRanges
{
  v2x_msgs__msg__ComparisonOperator comparison_operator;
  /// CHOICE! - Choose exactly of the containers
  int64_t limits_container_select;
  /// container 1
  int64_t number_of_axles;
  /// container 2
  v2x_msgs__msg__VehicleDimensions vehicle_dimensions;
  /// container 3
  v2x_msgs__msg__VehicleWeightLimits vehicle_weight_limits;
  /// container 4
  v2x_msgs__msg__AxleWeightLimits axle_weight_limits;
  /// container 5
  v2x_msgs__msg__PassengerCapacity passenger_capacity;
  /// container 6
  v2x_msgs__msg__ExhaustEmissionValues exhaust_emission_values;
  /// container 7
  v2x_msgs__msg__DieselEmissionValues diesel_emission_values;
  /// container 8
  v2x_msgs__msg__SoundLevel sound_level;
} v2x_msgs__msg__VehicleCharacteristicsRanges;

// Struct for a sequence of v2x_msgs__msg__VehicleCharacteristicsRanges.
typedef struct v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence
{
  v2x_msgs__msg__VehicleCharacteristicsRanges * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleCharacteristicsRanges__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_CHARACTERISTICS_RANGES__STRUCT_H_
