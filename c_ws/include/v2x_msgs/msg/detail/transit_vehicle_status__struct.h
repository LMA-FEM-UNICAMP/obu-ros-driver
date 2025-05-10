// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TransitVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TRANSIT_VEHICLE_STATUS_LOADING'.
enum
{
  v2x_msgs__msg__TransitVehicleStatus__TRANSIT_VEHICLE_STATUS_LOADING = 0ll
};

/// Constant 'TRANSIT_VEHICLE_STATUS_AN_ADAUSE'.
enum
{
  v2x_msgs__msg__TransitVehicleStatus__TRANSIT_VEHICLE_STATUS_AN_ADAUSE = 1ll
};

/// Constant 'TRANSIT_VEHICLE_STATUS_A_BIKE_LOAD'.
enum
{
  v2x_msgs__msg__TransitVehicleStatus__TRANSIT_VEHICLE_STATUS_A_BIKE_LOAD = 2ll
};

/// Constant 'TRANSIT_VEHICLE_STATUS_DOOR_OPEN'.
enum
{
  v2x_msgs__msg__TransitVehicleStatus__TRANSIT_VEHICLE_STATUS_DOOR_OPEN = 3ll
};

/// Constant 'TRANSIT_VEHICLE_STATUS_CHARGING'.
enum
{
  v2x_msgs__msg__TransitVehicleStatus__TRANSIT_VEHICLE_STATUS_CHARGING = 4ll
};

/// Constant 'TRANSIT_VEHICLE_STATUS_AT_STOP_LINE'.
enum
{
  v2x_msgs__msg__TransitVehicleStatus__TRANSIT_VEHICLE_STATUS_AT_STOP_LINE = 5ll
};

/// Struct defined in msg/TransitVehicleStatus in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TransitVehicleStatus
{
  int64_t transit_vehicle_status;
} v2x_msgs__msg__TransitVehicleStatus;

// Struct for a sequence of v2x_msgs__msg__TransitVehicleStatus.
typedef struct v2x_msgs__msg__TransitVehicleStatus__Sequence
{
  v2x_msgs__msg__TransitVehicleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TransitVehicleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TRANSIT_VEHICLE_STATUS__STRUCT_H_
