// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/AnyCatalogue.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ANY_CATALOGUE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ANY_CATALOGUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VERSION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__AnyCatalogue__VERSION_RANGE_MIN = 0ll
};

/// Constant 'VERSION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__AnyCatalogue__VERSION_RANGE_MAX = 255ll
};

/// Constant 'PICTOGRAM_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__AnyCatalogue__PICTOGRAM_CODE_RANGE_MIN = 0ll
};

/// Constant 'PICTOGRAM_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__AnyCatalogue__PICTOGRAM_CODE_RANGE_MAX = 65535ll
};

/// Constant 'VALUE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__AnyCatalogue__VALUE_RANGE_MIN = 0ll
};

/// Constant 'VALUE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__AnyCatalogue__VALUE_RANGE_MAX = 65535ll
};

// Include directives for member types
// Member 'owner'
#include "v2x_msgs/msg/detail/provider__struct.h"
// Member 'unit'
#include "v2x_msgs/msg/detail/rsc_unit__struct.h"
// Member 'attributes'
#include "v2x_msgs/msg/detail/iso14823_attributes__struct.h"

/// Struct defined in msg/AnyCatalogue in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__AnyCatalogue
{
  v2x_msgs__msg__Provider owner;
  int64_t version;
  int64_t pictogram_code;
  /// Optional Field
  bool value_present;
  int64_t value;
  /// Optional Field
  bool unit_present;
  v2x_msgs__msg__RSCUnit unit;
  /// Optional Field
  bool attributes_present;
  v2x_msgs__msg__ISO14823Attributes attributes;
} v2x_msgs__msg__AnyCatalogue;

// Struct for a sequence of v2x_msgs__msg__AnyCatalogue.
typedef struct v2x_msgs__msg__AnyCatalogue__Sequence
{
  v2x_msgs__msg__AnyCatalogue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__AnyCatalogue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ANY_CATALOGUE__STRUCT_H_
