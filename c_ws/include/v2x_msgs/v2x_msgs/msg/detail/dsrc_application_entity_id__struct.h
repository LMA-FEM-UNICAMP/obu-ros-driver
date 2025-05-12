// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DSRCApplicationEntityID.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DSRC_APPLICATION_ENTITY_ID__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DSRC_APPLICATION_ENTITY_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DSRCAPPLICATION_ENTITY_ID_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_RANGE_MIN = 0ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_RANGE_MAX = 31ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_SYSTEM'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_SYSTEM = 0ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_ELECTRONIC_FEE_COLLECTION'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_ELECTRONIC_FEE_COLLECTION = 1ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_FREIGHT_FLEET_MANAGEMENT'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_FREIGHT_FLEET_MANAGEMENT = 2ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_PUBLIC_TRANSPORT'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_PUBLIC_TRANSPORT = 3ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_TRAFFIC_TRAVELLER_INFORMATION'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_TRAFFIC_TRAVELLER_INFORMATION = 4ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_TRAFFIC_CONTROL'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_TRAFFIC_CONTROL = 5ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_PARKING_MANAGEMENT'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_PARKING_MANAGEMENT = 6ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_GEOGRAPHIC_ROAD_DATABASE'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_GEOGRAPHIC_ROAD_DATABASE = 7ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_MEDIUM_RANGE_PREINFORMATION'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_MEDIUM_RANGE_PREINFORMATION = 8ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_MAN_MACHINE_INTERFACE'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_MAN_MACHINE_INTERFACE = 9ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_INTERSYSTEM_INTERFACE'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_INTERSYSTEM_INTERFACE = 10ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_AUTOMATIC_VEHICLE_IDENTIFICATION'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_AUTOMATIC_VEHICLE_IDENTIFICATION = 11ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_EMERGENCY_WARNING'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_EMERGENCY_WARNING = 12ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_PRIVATE'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_PRIVATE = 13ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_MULTI_PURPOSE_PAYMENT'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_MULTI_PURPOSE_PAYMENT = 14ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_DSRC_RESOURCE_MANAGER'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_DSRC_RESOURCE_MANAGER = 15ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_AFTER_THEFT_SYSTEMS'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_AFTER_THEFT_SYSTEMS = 16ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_CCC'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_CCC = 20ll
};

/// Constant 'DSRCAPPLICATION_ENTITY_ID_LAC'.
enum
{
  v2x_msgs__msg__DSRCApplicationEntityID__DSRCAPPLICATION_ENTITY_ID_LAC = 21ll
};

/// Struct defined in msg/DSRCApplicationEntityID in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DSRCApplicationEntityID
{
  int64_t dsrcapplication_entity_id;
} v2x_msgs__msg__DSRCApplicationEntityID;

// Struct for a sequence of v2x_msgs__msg__DSRCApplicationEntityID.
typedef struct v2x_msgs__msg__DSRCApplicationEntityID__Sequence
{
  v2x_msgs__msg__DSRCApplicationEntityID * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DSRCApplicationEntityID__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DSRC_APPLICATION_ENTITY_ID__STRUCT_H_
