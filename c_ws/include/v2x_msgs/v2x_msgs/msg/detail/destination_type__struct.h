// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DestinationType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DESTINATION_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DESTINATION_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DESTINATION_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_RANGE_MIN = 0ll
};

/// Constant 'DESTINATION_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_RANGE_MAX = 15ll
};

/// Constant 'DESTINATION_TYPE_NONE'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_NONE = 0ll
};

/// Constant 'DESTINATION_TYPE_IMPORTANT_AREA'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_IMPORTANT_AREA = 1ll
};

/// Constant 'DESTINATION_TYPE_PRINCIPAL_AREA'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_PRINCIPAL_AREA = 2ll
};

/// Constant 'DESTINATION_TYPE_GENERAL_AREA'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_GENERAL_AREA = 3ll
};

/// Constant 'DESTINATION_TYPE_WELL_KNOWN_POINT'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_WELL_KNOWN_POINT = 4ll
};

/// Constant 'DESTINATION_TYPE_COUNTRY'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_COUNTRY = 5ll
};

/// Constant 'DESTINATION_TYPE_CITY'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_CITY = 6ll
};

/// Constant 'DESTINATION_TYPE_STREET'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_STREET = 7ll
};

/// Constant 'DESTINATION_TYPE_INDUSTRIAL_AREA'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_INDUSTRIAL_AREA = 8ll
};

/// Constant 'DESTINATION_TYPE_HISTORIC_AREA'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_HISTORIC_AREA = 9ll
};

/// Constant 'DESTINATION_TYPE_TOURISTIC_AREA'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_TOURISTIC_AREA = 10ll
};

/// Constant 'DESTINATION_TYPE_CULTURAL_AREA'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_CULTURAL_AREA = 11ll
};

/// Constant 'DESTINATION_TYPE_TOURISTIC_ROUTE'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_TOURISTIC_ROUTE = 12ll
};

/// Constant 'DESTINATION_TYPE_RECOMMENDED_ROUTE'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_RECOMMENDED_ROUTE = 13ll
};

/// Constant 'DESTINATION_TYPE_TOURISTIC_ATTRACTION'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_TOURISTIC_ATTRACTION = 14ll
};

/// Constant 'DESTINATION_TYPE_GEOGRAPHIC_AREA'.
enum
{
  v2x_msgs__msg__DestinationType__DESTINATION_TYPE_GEOGRAPHIC_AREA = 15ll
};

/// Struct defined in msg/DestinationType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DestinationType
{
  int64_t destination_type;
} v2x_msgs__msg__DestinationType;

// Struct for a sequence of v2x_msgs__msg__DestinationType.
typedef struct v2x_msgs__msg__DestinationType__Sequence
{
  v2x_msgs__msg__DestinationType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DestinationType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DESTINATION_TYPE__STRUCT_H_
