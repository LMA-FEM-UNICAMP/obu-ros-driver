// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PtvRequestType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PTV_REQUEST_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PTV_REQUEST_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PTV_REQUEST_TYPE_PRE_REQUEST'.
enum
{
  v2x_msgs__msg__PtvRequestType__PTV_REQUEST_TYPE_PRE_REQUEST = 0ll
};

/// Constant 'PTV_REQUEST_TYPE_MAIN_REQUEST'.
enum
{
  v2x_msgs__msg__PtvRequestType__PTV_REQUEST_TYPE_MAIN_REQUEST = 1ll
};

/// Constant 'PTV_REQUEST_TYPE_DOOR_CLOSE_REQUEST'.
enum
{
  v2x_msgs__msg__PtvRequestType__PTV_REQUEST_TYPE_DOOR_CLOSE_REQUEST = 2ll
};

/// Constant 'PTV_REQUEST_TYPE_CANCEL_REQUEST'.
enum
{
  v2x_msgs__msg__PtvRequestType__PTV_REQUEST_TYPE_CANCEL_REQUEST = 3ll
};

/// Constant 'PTV_REQUEST_TYPE_EMERGENCY_REQUEST'.
enum
{
  v2x_msgs__msg__PtvRequestType__PTV_REQUEST_TYPE_EMERGENCY_REQUEST = 4ll
};

/// Struct defined in msg/PtvRequestType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PtvRequestType
{
  int64_t ptv_request_type;
} v2x_msgs__msg__PtvRequestType;

// Struct for a sequence of v2x_msgs__msg__PtvRequestType.
typedef struct v2x_msgs__msg__PtvRequestType__Sequence
{
  v2x_msgs__msg__PtvRequestType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PtvRequestType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PTV_REQUEST_TYPE__STRUCT_H_
