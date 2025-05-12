// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ObjectClass.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__OBJECT_CLASS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__OBJECT_CLASS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CLASS_NOTHING'.
enum
{
  v2x_msgs__msg__ObjectClass__CLASS_NOTHING = 0ll
};

/// Constant 'CLASS_VEHICLE_SUBCLASS'.
enum
{
  v2x_msgs__msg__ObjectClass__CLASS_VEHICLE_SUBCLASS = 1ll
};

/// Constant 'CLASS_PERSON_SUBCLASS'.
enum
{
  v2x_msgs__msg__ObjectClass__CLASS_PERSON_SUBCLASS = 2ll
};

/// Constant 'CLASS_ANIMAL_SUBCLASS'.
enum
{
  v2x_msgs__msg__ObjectClass__CLASS_ANIMAL_SUBCLASS = 3ll
};

/// Constant 'CLASS_OTHER_SUBCLASS'.
enum
{
  v2x_msgs__msg__ObjectClass__CLASS_OTHER_SUBCLASS = 4ll
};

// Include directives for member types
// Member 'confidence'
#include "v2x_msgs/msg/detail/class_confidence__struct.h"
// Member 'vehicle'
#include "v2x_msgs/msg/detail/vehicle_subclass__struct.h"
// Member 'person'
#include "v2x_msgs/msg/detail/person_subclass__struct.h"
// Member 'animal'
#include "v2x_msgs/msg/detail/animal_subclass__struct.h"
// Member 'other'
#include "v2x_msgs/msg/detail/other_subclass__struct.h"

/// Struct defined in msg/ObjectClass in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ObjectClass
{
  v2x_msgs__msg__ClassConfidence confidence;
  /// CHOICE! - Choose exactly of the containers
  int64_t class_container_select;
  /// container 1
  v2x_msgs__msg__VehicleSubclass vehicle;
  /// container 2
  v2x_msgs__msg__PersonSubclass person;
  /// container 3
  v2x_msgs__msg__AnimalSubclass animal;
  /// container 4
  v2x_msgs__msg__OtherSubclass other;
} v2x_msgs__msg__ObjectClass;

// Struct for a sequence of v2x_msgs__msg__ObjectClass.
typedef struct v2x_msgs__msg__ObjectClass__Sequence
{
  v2x_msgs__msg__ObjectClass * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ObjectClass__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__OBJECT_CLASS__STRUCT_H_
