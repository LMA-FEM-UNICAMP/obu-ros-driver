// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_ID__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_ID_NOTHING'.
enum
{
  v2x_msgs__msg__VehicleID__VEHICLE_ID_NOTHING = 0ll
};

/// Constant 'VEHICLE_ID_ENTITY_ID'.
enum
{
  v2x_msgs__msg__VehicleID__VEHICLE_ID_ENTITY_ID = 1ll
};

/// Constant 'VEHICLE_ID_STATION_ID'.
enum
{
  v2x_msgs__msg__VehicleID__VEHICLE_ID_STATION_ID = 2ll
};

// Include directives for member types
// Member 'entity_id'
#include "v2x_msgs/msg/detail/temporary_id__struct.h"
// Member 'station_id'
#include "v2x_msgs/msg/detail/station_id__struct.h"

/// Struct defined in msg/VehicleID in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleID
{
  /// CHOICE! - Choose exactly of the containers
  int64_t vehicle_id_container_select;
  /// container 1
  v2x_msgs__msg__TemporaryID entity_id;
  /// container 2
  v2x_msgs__msg__StationID station_id;
} v2x_msgs__msg__VehicleID;

// Struct for a sequence of v2x_msgs__msg__VehicleID.
typedef struct v2x_msgs__msg__VehicleID__Sequence
{
  v2x_msgs__msg__VehicleID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_ID__STRUCT_H_
