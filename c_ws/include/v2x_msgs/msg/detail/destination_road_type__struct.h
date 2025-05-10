// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DestinationRoadType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DESTINATION_ROAD_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DESTINATION_ROAD_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DESTINATION_ROAD_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_RANGE_MIN = 0ll
};

/// Constant 'DESTINATION_ROAD_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_RANGE_MAX = 15ll
};

/// Constant 'DESTINATION_ROAD_TYPE_NONE'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_NONE = 0ll
};

/// Constant 'DESTINATION_ROAD_TYPE_NATIONAL_HIGHWAY'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_NATIONAL_HIGHWAY = 1ll
};

/// Constant 'DESTINATION_ROAD_TYPE_LOCAL_HIGHWAY'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_LOCAL_HIGHWAY = 2ll
};

/// Constant 'DESTINATION_ROAD_TYPE_TOLL_EXPRESSWAY_MOTORWAY'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_TOLL_EXPRESSWAY_MOTORWAY = 3ll
};

/// Constant 'DESTINATION_ROAD_TYPE_INTERNATIONAL_HIGHWAY'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_INTERNATIONAL_HIGHWAY = 4ll
};

/// Constant 'DESTINATION_ROAD_TYPE_HIGHWAY'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_HIGHWAY = 5ll
};

/// Constant 'DESTINATION_ROAD_TYPE_EXPRESSWAY'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_EXPRESSWAY = 6ll
};

/// Constant 'DESTINATION_ROAD_TYPE_NATIONAL_ROAD'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_NATIONAL_ROAD = 7ll
};

/// Constant 'DESTINATION_ROAD_TYPE_REGIONAL_PROVINCIAL_ROAD'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_REGIONAL_PROVINCIAL_ROAD = 8ll
};

/// Constant 'DESTINATION_ROAD_TYPE_LOCAL_ROAD'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_LOCAL_ROAD = 9ll
};

/// Constant 'DESTINATION_ROAD_TYPE_MOTORWAY_JUNCTION'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_MOTORWAY_JUNCTION = 10ll
};

/// Constant 'DESTINATION_ROAD_TYPE_DIVERSION'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_DIVERSION = 11ll
};

/// Constant 'DESTINATION_ROAD_TYPE_RFU1'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_RFU1 = 12ll
};

/// Constant 'DESTINATION_ROAD_TYPE_RFU2'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_RFU2 = 13ll
};

/// Constant 'DESTINATION_ROAD_TYPE_RFU3'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_RFU3 = 14ll
};

/// Constant 'DESTINATION_ROAD_TYPE_RFU4'.
enum
{
  v2x_msgs__msg__DestinationRoadType__DESTINATION_ROAD_TYPE_RFU4 = 15ll
};

/// Struct defined in msg/DestinationRoadType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DestinationRoadType
{
  int64_t destination_road_type;
} v2x_msgs__msg__DestinationRoadType;

// Struct for a sequence of v2x_msgs__msg__DestinationRoadType.
typedef struct v2x_msgs__msg__DestinationRoadType__Sequence
{
  v2x_msgs__msg__DestinationRoadType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DestinationRoadType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DESTINATION_ROAD_TYPE__STRUCT_H_
