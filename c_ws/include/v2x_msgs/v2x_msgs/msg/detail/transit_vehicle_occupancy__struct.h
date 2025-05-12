// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TransitVehicleOccupancy.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TRANSIT_VEHICLE_OCCUPANCY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TRANSIT_VEHICLE_OCCUPANCY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TRANSIT_VEHICLE_OCCUPANCY_OCCUPANCY_UNKNOWN'.
enum
{
  v2x_msgs__msg__TransitVehicleOccupancy__TRANSIT_VEHICLE_OCCUPANCY_OCCUPANCY_UNKNOWN = 0ll
};

/// Constant 'TRANSIT_VEHICLE_OCCUPANCY_OCCUPANCY_EMPTY'.
enum
{
  v2x_msgs__msg__TransitVehicleOccupancy__TRANSIT_VEHICLE_OCCUPANCY_OCCUPANCY_EMPTY = 1ll
};

/// Constant 'TRANSIT_VEHICLE_OCCUPANCY_OCCUPANCY_VERY_LOW'.
enum
{
  v2x_msgs__msg__TransitVehicleOccupancy__TRANSIT_VEHICLE_OCCUPANCY_OCCUPANCY_VERY_LOW = 2ll
};

/// Constant 'TRANSIT_VEHICLE_OCCUPANCY_OCCUPANCY_LOW'.
enum
{
  v2x_msgs__msg__TransitVehicleOccupancy__TRANSIT_VEHICLE_OCCUPANCY_OCCUPANCY_LOW = 3ll
};

/// Constant 'TRANSIT_VEHICLE_OCCUPANCY_OCCUPANCY_MED'.
enum
{
  v2x_msgs__msg__TransitVehicleOccupancy__TRANSIT_VEHICLE_OCCUPANCY_OCCUPANCY_MED = 4ll
};

/// Constant 'TRANSIT_VEHICLE_OCCUPANCY_OCCUPANCY_HIGH'.
enum
{
  v2x_msgs__msg__TransitVehicleOccupancy__TRANSIT_VEHICLE_OCCUPANCY_OCCUPANCY_HIGH = 5ll
};

/// Constant 'TRANSIT_VEHICLE_OCCUPANCY_OCCUPANCY_NEARLY_FULL'.
enum
{
  v2x_msgs__msg__TransitVehicleOccupancy__TRANSIT_VEHICLE_OCCUPANCY_OCCUPANCY_NEARLY_FULL = 6ll
};

/// Constant 'TRANSIT_VEHICLE_OCCUPANCY_OCCUPANCY_FULL'.
enum
{
  v2x_msgs__msg__TransitVehicleOccupancy__TRANSIT_VEHICLE_OCCUPANCY_OCCUPANCY_FULL = 7ll
};

/// Struct defined in msg/TransitVehicleOccupancy in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TransitVehicleOccupancy
{
  int64_t transit_vehicle_occupancy;
} v2x_msgs__msg__TransitVehicleOccupancy;

// Struct for a sequence of v2x_msgs__msg__TransitVehicleOccupancy.
typedef struct v2x_msgs__msg__TransitVehicleOccupancy__Sequence
{
  v2x_msgs__msg__TransitVehicleOccupancy * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TransitVehicleOccupancy__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TRANSIT_VEHICLE_OCCUPANCY__STRUCT_H_
