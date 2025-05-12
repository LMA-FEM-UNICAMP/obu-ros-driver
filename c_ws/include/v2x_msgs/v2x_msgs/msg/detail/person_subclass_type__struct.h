// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PersonSubclassType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PERSON_SUBCLASS_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PERSON_SUBCLASS_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PERSON_SUBCLASS_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__PersonSubclassType__PERSON_SUBCLASS_TYPE_RANGE_MIN = 0ll
};

/// Constant 'PERSON_SUBCLASS_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__PersonSubclassType__PERSON_SUBCLASS_TYPE_RANGE_MAX = 255ll
};

/// Constant 'PERSON_SUBCLASS_TYPE_UNKNOWN'.
enum
{
  v2x_msgs__msg__PersonSubclassType__PERSON_SUBCLASS_TYPE_UNKNOWN = 0ll
};

/// Constant 'PERSON_SUBCLASS_TYPE_PEDESTRIAN'.
enum
{
  v2x_msgs__msg__PersonSubclassType__PERSON_SUBCLASS_TYPE_PEDESTRIAN = 1ll
};

/// Constant 'PERSON_SUBCLASS_TYPE_PERSON_IN_WHEELCHAIR'.
enum
{
  v2x_msgs__msg__PersonSubclassType__PERSON_SUBCLASS_TYPE_PERSON_IN_WHEELCHAIR = 2ll
};

/// Constant 'PERSON_SUBCLASS_TYPE_CYCLIST'.
enum
{
  v2x_msgs__msg__PersonSubclassType__PERSON_SUBCLASS_TYPE_CYCLIST = 3ll
};

/// Constant 'PERSON_SUBCLASS_TYPE_PERSON_WITH_STROLLER'.
enum
{
  v2x_msgs__msg__PersonSubclassType__PERSON_SUBCLASS_TYPE_PERSON_WITH_STROLLER = 4ll
};

/// Constant 'PERSON_SUBCLASS_TYPE_PERSON_ON_SKATES'.
enum
{
  v2x_msgs__msg__PersonSubclassType__PERSON_SUBCLASS_TYPE_PERSON_ON_SKATES = 5ll
};

/// Constant 'PERSON_SUBCLASS_TYPE_PERSON_GROUP'.
enum
{
  v2x_msgs__msg__PersonSubclassType__PERSON_SUBCLASS_TYPE_PERSON_GROUP = 6ll
};

/// Struct defined in msg/PersonSubclassType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PersonSubclassType
{
  int64_t person_subclass_type;
} v2x_msgs__msg__PersonSubclassType;

// Struct for a sequence of v2x_msgs__msg__PersonSubclassType.
typedef struct v2x_msgs__msg__PersonSubclassType__Sequence
{
  v2x_msgs__msg__PersonSubclassType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PersonSubclassType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PERSON_SUBCLASS_TYPE__STRUCT_H_
