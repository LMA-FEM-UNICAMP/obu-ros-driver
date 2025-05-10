// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AnimalSubclassType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ANIMAL_SUBCLASS_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ANIMAL_SUBCLASS_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ANIMAL_SUBCLASS_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__AnimalSubclassType__ANIMAL_SUBCLASS_TYPE_RANGE_MIN = 0ll
};

/// Constant 'ANIMAL_SUBCLASS_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__AnimalSubclassType__ANIMAL_SUBCLASS_TYPE_RANGE_MAX = 255ll
};

/// Constant 'ANIMAL_SUBCLASS_TYPE_UNKNOWN'.
enum
{
  v2x_msgs__msg__AnimalSubclassType__ANIMAL_SUBCLASS_TYPE_UNKNOWN = 0ll
};

/// Struct defined in msg/AnimalSubclassType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AnimalSubclassType
{
  int64_t animal_subclass_type;
} v2x_msgs__msg__AnimalSubclassType;

// Struct for a sequence of v2x_msgs__msg__AnimalSubclassType.
typedef struct v2x_msgs__msg__AnimalSubclassType__Sequence
{
  v2x_msgs__msg__AnimalSubclassType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AnimalSubclassType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ANIMAL_SUBCLASS_TYPE__STRUCT_H_
