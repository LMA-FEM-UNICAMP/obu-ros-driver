// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/StationaryVehicleContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__STATIONARY_VEHICLE_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__STATIONARY_VEHICLE_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stationary_since'
#include "v2x_msgs/msg/detail/stationary_since__struct.h"
// Member 'stationary_cause'
#include "v2x_msgs/msg/detail/cause_code__struct.h"
// Member 'carrying_dangerous_goods'
#include "v2x_msgs/msg/detail/dangerous_goods_extended__struct.h"
// Member 'number_of_occupants'
#include "v2x_msgs/msg/detail/number_of_occupants__struct.h"
// Member 'vehicle_identification'
#include "v2x_msgs/msg/detail/vehicle_identification__struct.h"
// Member 'energy_storage_type'
#include "v2x_msgs/msg/detail/energy_storage_type__struct.h"

/// Struct defined in msg/StationaryVehicleContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__StationaryVehicleContainer
{
  /// Optional Field
  bool stationary_since_present;
  v2x_msgs__msg__StationarySince stationary_since;
  /// Optional Field
  bool stationary_cause_present;
  v2x_msgs__msg__CauseCode stationary_cause;
  /// Optional Field
  bool carrying_dangerous_goods_present;
  v2x_msgs__msg__DangerousGoodsExtended carrying_dangerous_goods;
  /// Optional Field
  bool number_of_occupants_present;
  v2x_msgs__msg__NumberOfOccupants number_of_occupants;
  /// Optional Field
  bool vehicle_identification_present;
  v2x_msgs__msg__VehicleIdentification vehicle_identification;
  /// Optional Field
  bool energy_storage_type_present;
  v2x_msgs__msg__EnergyStorageType energy_storage_type;
} v2x_msgs__msg__StationaryVehicleContainer;

// Struct for a sequence of v2x_msgs__msg__StationaryVehicleContainer.
typedef struct v2x_msgs__msg__StationaryVehicleContainer__Sequence
{
  v2x_msgs__msg__StationaryVehicleContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__StationaryVehicleContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__STATIONARY_VEHICLE_CONTAINER__STRUCT_H_
