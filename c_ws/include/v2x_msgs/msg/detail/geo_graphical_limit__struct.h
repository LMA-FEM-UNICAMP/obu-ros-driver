// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/GeoGraphicalLimit.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__GEO_GRAPHICAL_LIMIT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__GEO_GRAPHICAL_LIMIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GEO_GRAPHICAL_LIMIT_GLOBAL_RESTRICTION'.
enum
{
  v2x_msgs__msg__GeoGraphicalLimit__GEO_GRAPHICAL_LIMIT_GLOBAL_RESTRICTION = 0ll
};

/// Constant 'GEO_GRAPHICAL_LIMIT_REGIONAL_RESTRICTION'.
enum
{
  v2x_msgs__msg__GeoGraphicalLimit__GEO_GRAPHICAL_LIMIT_REGIONAL_RESTRICTION = 1ll
};

/// Constant 'GEO_GRAPHICAL_LIMIT_NATIONAL_RESTRICTION'.
enum
{
  v2x_msgs__msg__GeoGraphicalLimit__GEO_GRAPHICAL_LIMIT_NATIONAL_RESTRICTION = 2ll
};

/// Constant 'GEO_GRAPHICAL_LIMIT_DISTRICT'.
enum
{
  v2x_msgs__msg__GeoGraphicalLimit__GEO_GRAPHICAL_LIMIT_DISTRICT = 3ll
};

/// Constant 'GEO_GRAPHICAL_LIMIT_ISSUER_COVERAGE_RESTRICTION'.
enum
{
  v2x_msgs__msg__GeoGraphicalLimit__GEO_GRAPHICAL_LIMIT_ISSUER_COVERAGE_RESTRICTION = 4ll
};

/// Constant 'GEO_GRAPHICAL_LIMIT_RESERVED_FOR_CEN1'.
enum
{
  v2x_msgs__msg__GeoGraphicalLimit__GEO_GRAPHICAL_LIMIT_RESERVED_FOR_CEN1 = 5ll
};

/// Constant 'GEO_GRAPHICAL_LIMIT_RESERVED_FOR_CEN2'.
enum
{
  v2x_msgs__msg__GeoGraphicalLimit__GEO_GRAPHICAL_LIMIT_RESERVED_FOR_CEN2 = 6ll
};

/// Constant 'GEO_GRAPHICAL_LIMIT_ISSUER_SPECIFIC_RESTRICTION'.
enum
{
  v2x_msgs__msg__GeoGraphicalLimit__GEO_GRAPHICAL_LIMIT_ISSUER_SPECIFIC_RESTRICTION = 7ll
};

/// Struct defined in msg/GeoGraphicalLimit in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__GeoGraphicalLimit
{
  int64_t geo_graphical_limit;
} v2x_msgs__msg__GeoGraphicalLimit;

// Struct for a sequence of v2x_msgs__msg__GeoGraphicalLimit.
typedef struct v2x_msgs__msg__GeoGraphicalLimit__Sequence
{
  v2x_msgs__msg__GeoGraphicalLimit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__GeoGraphicalLimit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__GEO_GRAPHICAL_LIMIT__STRUCT_H_
