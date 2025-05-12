// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/Iso3833VehicleType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ISO3833_VEHICLE_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ISO3833_VEHICLE_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ISO3833VEHICLE_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_RANGE_MIN = 0ll
};

/// Constant 'ISO3833VEHICLE_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_RANGE_MAX = 255ll
};

/// Constant 'ISO3833VEHICLE_TYPE_PASSENGER_CAR'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_PASSENGER_CAR = 0ll
};

/// Constant 'ISO3833VEHICLE_TYPE_SALOON'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_SALOON = 1ll
};

/// Constant 'ISO3833VEHICLE_TYPE_CONVERTIBLE_SALOON'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_CONVERTIBLE_SALOON = 2ll
};

/// Constant 'ISO3833VEHICLE_TYPE_PULLMAN_SALOON'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_PULLMAN_SALOON = 3ll
};

/// Constant 'ISO3833VEHICLE_TYPE_STATION_WAGON'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_STATION_WAGON = 4ll
};

/// Constant 'ISO3833VEHICLE_TYPE_TRUCK_STATION_WAGON'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_TRUCK_STATION_WAGON = 5ll
};

/// Constant 'ISO3833VEHICLE_TYPE_COUPE'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_COUPE = 6ll
};

/// Constant 'ISO3833VEHICLE_TYPE_CONVERTIBLE'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_CONVERTIBLE = 7ll
};

/// Constant 'ISO3833VEHICLE_TYPE_MULTIPURPOSE_PASSENGER_CAR'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_MULTIPURPOSE_PASSENGER_CAR = 8ll
};

/// Constant 'ISO3833VEHICLE_TYPE_FORWARD_CONTROL_PASSENGER_CAR'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_FORWARD_CONTROL_PASSENGER_CAR = 9ll
};

/// Constant 'ISO3833VEHICLE_TYPE_SPECIAL_PASSENGER_CAR'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_SPECIAL_PASSENGER_CAR = 10ll
};

/// Constant 'ISO3833VEHICLE_TYPE_BUS'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_BUS = 11ll
};

/// Constant 'ISO3833VEHICLE_TYPE_MINIBUS'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_MINIBUS = 12ll
};

/// Constant 'ISO3833VEHICLE_TYPE_URBAN_BUS'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_URBAN_BUS = 13ll
};

/// Constant 'ISO3833VEHICLE_TYPE_INTERURBAN_COACH'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_INTERURBAN_COACH = 14ll
};

/// Constant 'ISO3833VEHICLE_TYPE_LONG_DISTANCE_COACH'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_LONG_DISTANCE_COACH = 15ll
};

/// Constant 'ISO3833VEHICLE_TYPE_ARTICULATED_BUS'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_ARTICULATED_BUS = 16ll
};

/// Constant 'ISO3833VEHICLE_TYPE_TROLLEY_BUS'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_TROLLEY_BUS = 17ll
};

/// Constant 'ISO3833VEHICLE_TYPE_SPECIAL_BUS'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_SPECIAL_BUS = 18ll
};

/// Constant 'ISO3833VEHICLE_TYPE_COMMERCIAL_VEHICLE'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_COMMERCIAL_VEHICLE = 19ll
};

/// Constant 'ISO3833VEHICLE_TYPE_SPECIAL_COMMERCIAL_VEHICLE'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_SPECIAL_COMMERCIAL_VEHICLE = 20ll
};

/// Constant 'ISO3833VEHICLE_TYPE_SPECIAL_VEHICLE'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_SPECIAL_VEHICLE = 21ll
};

/// Constant 'ISO3833VEHICLE_TYPE_TRAILING_TOWING_VEHICLE'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_TRAILING_TOWING_VEHICLE = 22ll
};

/// Constant 'ISO3833VEHICLE_TYPE_SEMI_TRAILER_TOWING_VEHICLE'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_SEMI_TRAILER_TOWING_VEHICLE = 23ll
};

/// Constant 'ISO3833VEHICLE_TYPE_TRAILER'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_TRAILER = 24ll
};

/// Constant 'ISO3833VEHICLE_TYPE_BUS_TRAILER'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_BUS_TRAILER = 25ll
};

/// Constant 'ISO3833VEHICLE_TYPE_GENERAL_PURPOSE_TRAILER'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_GENERAL_PURPOSE_TRAILER = 26ll
};

/// Constant 'ISO3833VEHICLE_TYPE_CARAVAN'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_CARAVAN = 27ll
};

/// Constant 'ISO3833VEHICLE_TYPE_SPECIAL_TRAILER'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_SPECIAL_TRAILER = 28ll
};

/// Constant 'ISO3833VEHICLE_TYPE_SEMI_TRAILER'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_SEMI_TRAILER = 29ll
};

/// Constant 'ISO3833VEHICLE_TYPE_BUS_SEMI_TRAILER'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_BUS_SEMI_TRAILER = 30ll
};

/// Constant 'ISO3833VEHICLE_TYPE_GENERAL_PURPOSE_SEMI_TRAILER'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_GENERAL_PURPOSE_SEMI_TRAILER = 31ll
};

/// Constant 'ISO3833VEHICLE_TYPE_SPECIAL_SEMI_TRAILER'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_SPECIAL_SEMI_TRAILER = 32ll
};

/// Constant 'ISO3833VEHICLE_TYPE_ROAD_TRAIN'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_ROAD_TRAIN = 33ll
};

/// Constant 'ISO3833VEHICLE_TYPE_PASSENGER_ROAD_TRAIN'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_PASSENGER_ROAD_TRAIN = 34ll
};

/// Constant 'ISO3833VEHICLE_TYPE_ARTICULATED_ROAD_TRAIN'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_ARTICULATED_ROAD_TRAIN = 35ll
};

/// Constant 'ISO3833VEHICLE_TYPE_DOUBLE_ROAD_TRAIN'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_DOUBLE_ROAD_TRAIN = 36ll
};

/// Constant 'ISO3833VEHICLE_TYPE_COMPOSITE_ROAD_TRAIN'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_COMPOSITE_ROAD_TRAIN = 37ll
};

/// Constant 'ISO3833VEHICLE_TYPE_SPECIAL_ROAD_TRAIN'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_SPECIAL_ROAD_TRAIN = 38ll
};

/// Constant 'ISO3833VEHICLE_TYPE_MOPED'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_MOPED = 39ll
};

/// Constant 'ISO3833VEHICLE_TYPE_MOTOR_CYCLE'.
enum
{
  v2x_msgs__msg__Iso3833VehicleType__ISO3833VEHICLE_TYPE_MOTOR_CYCLE = 40ll
};

/// Struct defined in msg/Iso3833VehicleType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__Iso3833VehicleType
{
  int64_t iso3833vehicle_type;
} v2x_msgs__msg__Iso3833VehicleType;

// Struct for a sequence of v2x_msgs__msg__Iso3833VehicleType.
typedef struct v2x_msgs__msg__Iso3833VehicleType__Sequence
{
  v2x_msgs__msg__Iso3833VehicleType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__Iso3833VehicleType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ISO3833_VEHICLE_TYPE__STRUCT_H_
