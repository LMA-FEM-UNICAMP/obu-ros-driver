// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RestrictionAppliesTo.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RESTRICTION_APPLIES_TO__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RESTRICTION_APPLIES_TO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RESTRICTION_APPLIES_TO_NONE'.
enum
{
  v2x_msgs__msg__RestrictionAppliesTo__RESTRICTION_APPLIES_TO_NONE = 0ll
};

/// Constant 'RESTRICTION_APPLIES_TO_EQUIPPED_TRANSIT'.
enum
{
  v2x_msgs__msg__RestrictionAppliesTo__RESTRICTION_APPLIES_TO_EQUIPPED_TRANSIT = 1ll
};

/// Constant 'RESTRICTION_APPLIES_TO_EQUIPPED_TAXIS'.
enum
{
  v2x_msgs__msg__RestrictionAppliesTo__RESTRICTION_APPLIES_TO_EQUIPPED_TAXIS = 2ll
};

/// Constant 'RESTRICTION_APPLIES_TO_EQUIPPED_OTHER'.
enum
{
  v2x_msgs__msg__RestrictionAppliesTo__RESTRICTION_APPLIES_TO_EQUIPPED_OTHER = 3ll
};

/// Constant 'RESTRICTION_APPLIES_TO_EMISSION_COMPLIANT'.
enum
{
  v2x_msgs__msg__RestrictionAppliesTo__RESTRICTION_APPLIES_TO_EMISSION_COMPLIANT = 4ll
};

/// Constant 'RESTRICTION_APPLIES_TO_EQUIPPED_BICYCLE'.
enum
{
  v2x_msgs__msg__RestrictionAppliesTo__RESTRICTION_APPLIES_TO_EQUIPPED_BICYCLE = 5ll
};

/// Constant 'RESTRICTION_APPLIES_TO_WEIGHT_COMPLIANT'.
enum
{
  v2x_msgs__msg__RestrictionAppliesTo__RESTRICTION_APPLIES_TO_WEIGHT_COMPLIANT = 6ll
};

/// Constant 'RESTRICTION_APPLIES_TO_HEIGHT_COMPLIANT'.
enum
{
  v2x_msgs__msg__RestrictionAppliesTo__RESTRICTION_APPLIES_TO_HEIGHT_COMPLIANT = 7ll
};

/// Constant 'RESTRICTION_APPLIES_TO_PEDESTRIANS'.
enum
{
  v2x_msgs__msg__RestrictionAppliesTo__RESTRICTION_APPLIES_TO_PEDESTRIANS = 8ll
};

/// Constant 'RESTRICTION_APPLIES_TO_SLOW_MOVING_PERSONS'.
enum
{
  v2x_msgs__msg__RestrictionAppliesTo__RESTRICTION_APPLIES_TO_SLOW_MOVING_PERSONS = 9ll
};

/// Constant 'RESTRICTION_APPLIES_TO_WHEELCHAIR_USERS'.
enum
{
  v2x_msgs__msg__RestrictionAppliesTo__RESTRICTION_APPLIES_TO_WHEELCHAIR_USERS = 10ll
};

/// Constant 'RESTRICTION_APPLIES_TO_VISUAL_DISABILITIES'.
enum
{
  v2x_msgs__msg__RestrictionAppliesTo__RESTRICTION_APPLIES_TO_VISUAL_DISABILITIES = 11ll
};

/// Constant 'RESTRICTION_APPLIES_TO_AUDIO_DISABILITIES'.
enum
{
  v2x_msgs__msg__RestrictionAppliesTo__RESTRICTION_APPLIES_TO_AUDIO_DISABILITIES = 12ll
};

/// Constant 'RESTRICTION_APPLIES_TO_OTHER_UNKNOWN_DISABILITIES'.
enum
{
  v2x_msgs__msg__RestrictionAppliesTo__RESTRICTION_APPLIES_TO_OTHER_UNKNOWN_DISABILITIES = 13ll
};

/// Struct defined in msg/RestrictionAppliesTo in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__RestrictionAppliesTo
{
  int64_t restriction_applies_to;
} v2x_msgs__msg__RestrictionAppliesTo;

// Struct for a sequence of v2x_msgs__msg__RestrictionAppliesTo.
typedef struct v2x_msgs__msg__RestrictionAppliesTo__Sequence
{
  v2x_msgs__msg__RestrictionAppliesTo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RestrictionAppliesTo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RESTRICTION_APPLIES_TO__STRUCT_H_
