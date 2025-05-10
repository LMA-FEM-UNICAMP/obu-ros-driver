// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/IviContainer.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__IVI_CONTAINER__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__IVI_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IVI_CONTAINER_NOTHING'.
enum
{
  v2x_msgs__msg__IviContainer__IVI_CONTAINER_NOTHING = 0ll
};

/// Constant 'IVI_CONTAINER_GLC'.
enum
{
  v2x_msgs__msg__IviContainer__IVI_CONTAINER_GLC = 1ll
};

/// Constant 'IVI_CONTAINER_GIV'.
enum
{
  v2x_msgs__msg__IviContainer__IVI_CONTAINER_GIV = 2ll
};

/// Constant 'IVI_CONTAINER_RCC'.
enum
{
  v2x_msgs__msg__IviContainer__IVI_CONTAINER_RCC = 3ll
};

/// Constant 'IVI_CONTAINER_TC'.
enum
{
  v2x_msgs__msg__IviContainer__IVI_CONTAINER_TC = 4ll
};

/// Constant 'IVI_CONTAINER_LAC'.
enum
{
  v2x_msgs__msg__IviContainer__IVI_CONTAINER_LAC = 5ll
};

/// Constant 'IVI_CONTAINER_AUTOMATED_VEHICLE_CONTAINER'.
enum
{
  v2x_msgs__msg__IviContainer__IVI_CONTAINER_AUTOMATED_VEHICLE_CONTAINER = 6ll
};

/// Constant 'IVI_CONTAINER_MAP_LOCATION_CONTAINER'.
enum
{
  v2x_msgs__msg__IviContainer__IVI_CONTAINER_MAP_LOCATION_CONTAINER = 7ll
};

/// Constant 'IVI_CONTAINER_ROAD_SURFACE_CONTAINER'.
enum
{
  v2x_msgs__msg__IviContainer__IVI_CONTAINER_ROAD_SURFACE_CONTAINER = 8ll
};

// Include directives for member types
// Member 'glc'
#include "v2x_msgs/msg/detail/geographic_location_container__struct.h"
// Member 'giv'
#include "v2x_msgs/msg/detail/general_ivi_container__struct.h"
// Member 'rcc'
#include "v2x_msgs/msg/detail/road_configuration_container__struct.h"
// Member 'tc'
#include "v2x_msgs/msg/detail/text_container__struct.h"
// Member 'lac'
#include "v2x_msgs/msg/detail/layout_container__struct.h"
// Member 'avc'
#include "v2x_msgs/msg/detail/automated_vehicle_container__struct.h"
// Member 'mlc'
#include "v2x_msgs/msg/detail/map_location_container__struct.h"
// Member 'rsc'
#include "v2x_msgs/msg/detail/road_surface_container__struct.h"

/// Struct defined in msg/IviContainer in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__IviContainer
{
  /// CHOICE! - Choose exactly of the containers
  int64_t ivi_container_container_select;
  /// container 1
  v2x_msgs__msg__GeographicLocationContainer glc;
  /// container 2
  v2x_msgs__msg__GeneralIviContainer giv;
  /// container 3
  v2x_msgs__msg__RoadConfigurationContainer rcc;
  /// container 4
  v2x_msgs__msg__TextContainer tc;
  /// container 5
  v2x_msgs__msg__LayoutContainer lac;
  /// container 6
  v2x_msgs__msg__AutomatedVehicleContainer avc;
  /// container 7
  v2x_msgs__msg__MapLocationContainer mlc;
  /// container 8
  v2x_msgs__msg__RoadSurfaceContainer rsc;
} v2x_msgs__msg__IviContainer;

// Struct for a sequence of v2x_msgs__msg__IviContainer.
typedef struct v2x_msgs__msg__IviContainer__Sequence
{
  v2x_msgs__msg__IviContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__IviContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__IVI_CONTAINER__STRUCT_H_
