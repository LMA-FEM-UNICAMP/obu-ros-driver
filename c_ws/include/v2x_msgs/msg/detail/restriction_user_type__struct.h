// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/RestrictionUserType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RESTRICTION_USER_TYPE_NOTHING'.
enum
{
  v2x_msgs__msg__RestrictionUserType__RESTRICTION_USER_TYPE_NOTHING = 0ll
};

/// Constant 'RESTRICTION_USER_TYPE_BASIC_TYPE'.
enum
{
  v2x_msgs__msg__RestrictionUserType__RESTRICTION_USER_TYPE_BASIC_TYPE = 1ll
};

/// Constant 'RESTRICTION_USER_REGIONAL'.
enum
{
  v2x_msgs__msg__RestrictionUserType__RESTRICTION_USER_REGIONAL = 2ll
};

// Include directives for member types
// Member 'basic_type'
#include "v2x_msgs/msg/detail/restriction_applies_to__struct.h"
// Member 'regional'
#include "v2x_msgs/msg/detail/reg_restriction_user_type__struct.h"

/// Struct defined in msg/RestrictionUserType in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__RestrictionUserType
{
  /// CHOICE adaption
  /// CHOICE! - Choose exactly of the containers
  int64_t restriction_user_type_container_select;
  /// container 1
  v2x_msgs__msg__RestrictionAppliesTo basic_type;
  ///  container 2
  /// size(1..4)
  v2x_msgs__msg__RegRestrictionUserType__Sequence regional;
} v2x_msgs__msg__RestrictionUserType;

// Struct for a sequence of v2x_msgs__msg__RestrictionUserType.
typedef struct v2x_msgs__msg__RestrictionUserType__Sequence
{
  v2x_msgs__msg__RestrictionUserType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__RestrictionUserType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE__STRUCT_H_
