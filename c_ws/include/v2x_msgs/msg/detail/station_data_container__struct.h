// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/StationDataContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__STATION_DATA_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__STATION_DATA_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATION_DATA_CONTAINER_NOTHING'.
enum
{
  v2x_msgs__msg__StationDataContainer__STATION_DATA_CONTAINER_NOTHING = 0ll
};

/// Constant 'STATION_DATA_CONTAINER_ORIGINATING_VEHICLE_CONTAINER'.
enum
{
  v2x_msgs__msg__StationDataContainer__STATION_DATA_CONTAINER_ORIGINATING_VEHICLE_CONTAINER = 1ll
};

/// Constant 'STATION_DATA_CONTAINER_ORIGINATING_RSUCONTAINER'.
enum
{
  v2x_msgs__msg__StationDataContainer__STATION_DATA_CONTAINER_ORIGINATING_RSUCONTAINER = 2ll
};

// Include directives for member types
// Member 'originating_vehicle_container'
#include "v2x_msgs/msg/detail/originating_vehicle_container__struct.h"
// Member 'originating_rsucontainer'
#include "v2x_msgs/msg/detail/originating_rsu_container__struct.h"

/// Struct defined in msg/StationDataContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__StationDataContainer
{
  /// CHOICE! - Choose exactly of the containers
  int64_t station_data_container_container_select;
  /// container 1
  v2x_msgs__msg__OriginatingVehicleContainer originating_vehicle_container;
  /// container 2
  v2x_msgs__msg__OriginatingRSUContainer originating_rsucontainer;
} v2x_msgs__msg__StationDataContainer;

// Struct for a sequence of v2x_msgs__msg__StationDataContainer.
typedef struct v2x_msgs__msg__StationDataContainer__Sequence
{
  v2x_msgs__msg__StationDataContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__StationDataContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__STATION_DATA_CONTAINER__STRUCT_H_
