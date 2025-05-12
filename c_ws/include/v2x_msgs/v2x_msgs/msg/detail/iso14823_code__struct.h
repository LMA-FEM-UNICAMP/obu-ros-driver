// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ISO14823Code.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ISO14823_CODE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ISO14823_CODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SERVICE_CATEGORY_CODE_NOTHING'.
enum
{
  v2x_msgs__msg__ISO14823Code__SERVICE_CATEGORY_CODE_NOTHING = 0ll
};

/// Constant 'SERVICE_CATEGORY_CODE_TRAFFIC_SIGN_PICTOGRAM'.
enum
{
  v2x_msgs__msg__ISO14823Code__SERVICE_CATEGORY_CODE_TRAFFIC_SIGN_PICTOGRAM = 1ll
};

/// Constant 'SERVICE_CATEGORY_CODE_PUBLIC_FACILITIES_PICTOGRAM'.
enum
{
  v2x_msgs__msg__ISO14823Code__SERVICE_CATEGORY_CODE_PUBLIC_FACILITIES_PICTOGRAM = 2ll
};

/// Constant 'SERVICE_CATEGORY_CODE_AMBIENT_OR_ROAD_CONDITION_PICTOGRAM'.
enum
{
  v2x_msgs__msg__ISO14823Code__SERVICE_CATEGORY_CODE_AMBIENT_OR_ROAD_CONDITION_PICTOGRAM = 3ll
};

/// Constant 'TRAFFIC_SIGN_PICTOGRAM_DANGER_WARNING'.
enum
{
  v2x_msgs__msg__ISO14823Code__TRAFFIC_SIGN_PICTOGRAM_DANGER_WARNING = 0ll
};

/// Constant 'TRAFFIC_SIGN_PICTOGRAM_REGULATORY'.
enum
{
  v2x_msgs__msg__ISO14823Code__TRAFFIC_SIGN_PICTOGRAM_REGULATORY = 1ll
};

/// Constant 'TRAFFIC_SIGN_PICTOGRAM_INFORMATIVE'.
enum
{
  v2x_msgs__msg__ISO14823Code__TRAFFIC_SIGN_PICTOGRAM_INFORMATIVE = 2ll
};

/// Constant 'PUBLIC_FACILITIES_PICTOGRAM_PUBLIC_FACILITIES'.
enum
{
  v2x_msgs__msg__ISO14823Code__PUBLIC_FACILITIES_PICTOGRAM_PUBLIC_FACILITIES = 0ll
};

/// Constant 'AMBIENT_OR_ROAD_CONDITION_PICTOGRAM_AMBIENT_CONDITION'.
enum
{
  v2x_msgs__msg__ISO14823Code__AMBIENT_OR_ROAD_CONDITION_PICTOGRAM_AMBIENT_CONDITION = 0ll
};

/// Constant 'AMBIENT_OR_ROAD_CONDITION_PICTOGRAM_ROAD_CONDITION'.
enum
{
  v2x_msgs__msg__ISO14823Code__AMBIENT_OR_ROAD_CONDITION_PICTOGRAM_ROAD_CONDITION = 1ll
};

/// Constant 'NATURE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ISO14823Code__NATURE_RANGE_MIN = 1ll
};

/// Constant 'NATURE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ISO14823Code__NATURE_RANGE_MAX = 9ll
};

/// Constant 'SERIAL_NUMBER_RANGE_MIN'.
enum
{
  v2x_msgs__msg__ISO14823Code__SERIAL_NUMBER_RANGE_MIN = 0ll
};

/// Constant 'SERIAL_NUMBER_RANGE_MAX'.
enum
{
  v2x_msgs__msg__ISO14823Code__SERIAL_NUMBER_RANGE_MAX = 99ll
};

// Include directives for member types
// Member 'country_code'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'attributes'
#include "v2x_msgs/msg/detail/iso14823_attributes__struct.h"

/// Struct defined in msg/ISO14823Code in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__ISO14823Code
{
  /// CHOICE adaption
  /// Optional Field
  bool country_code_present;
  /// size(1..2)
  rosidl_runtime_c__int64__Sequence country_code;
  /// CHOICE! - Choose exactly of the containers
  int64_t service_category_code_container_select;
  /// container 1
  int64_t traffic_sign_pictogram;
  /// container 2
  int64_t public_facilities_pictorgram;
  /// container 3
  int64_t ambient_or_road_condition_pictogram;
  int64_t nature;
  int64_t serial_number;
  /// Optional Field
  bool attributes_present;
  v2x_msgs__msg__ISO14823Attributes attributes;
} v2x_msgs__msg__ISO14823Code;

// Struct for a sequence of v2x_msgs__msg__ISO14823Code.
typedef struct v2x_msgs__msg__ISO14823Code__Sequence
{
  v2x_msgs__msg__ISO14823Code * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ISO14823Code__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ISO14823_CODE__STRUCT_H_
