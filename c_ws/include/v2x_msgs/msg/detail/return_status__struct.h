// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ReturnStatus.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__RETURN_STATUS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__RETURN_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RETURN_STATUS_NO_ERROR'.
enum
{
  v2x_msgs__msg__ReturnStatus__RETURN_STATUS_NO_ERROR = 0ll
};

/// Constant 'RETURN_STATUS_ACCESS_DENIED'.
enum
{
  v2x_msgs__msg__ReturnStatus__RETURN_STATUS_ACCESS_DENIED = 1ll
};

/// Constant 'RETURN_STATUS_ARGUMENT_ERROR'.
enum
{
  v2x_msgs__msg__ReturnStatus__RETURN_STATUS_ARGUMENT_ERROR = 2ll
};

/// Constant 'RETURN_STATUS_COMPLEXITY_LIMITATION'.
enum
{
  v2x_msgs__msg__ReturnStatus__RETURN_STATUS_COMPLEXITY_LIMITATION = 3ll
};

/// Constant 'RETURN_STATUS_PROCESSING_FAILURE'.
enum
{
  v2x_msgs__msg__ReturnStatus__RETURN_STATUS_PROCESSING_FAILURE = 4ll
};

/// Constant 'RETURN_STATUS_PROCESSING'.
enum
{
  v2x_msgs__msg__ReturnStatus__RETURN_STATUS_PROCESSING = 5ll
};

/// Constant 'RETURN_STATUS_CHAINING_ERROR'.
enum
{
  v2x_msgs__msg__ReturnStatus__RETURN_STATUS_CHAINING_ERROR = 6ll
};

/// Struct defined in msg/ReturnStatus in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__ReturnStatus
{
  /// Adaptation of the integer enumeration
  int64_t return_status;
} v2x_msgs__msg__ReturnStatus;

// Struct for a sequence of v2x_msgs__msg__ReturnStatus.
typedef struct v2x_msgs__msg__ReturnStatus__Sequence
{
  v2x_msgs__msg__ReturnStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ReturnStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__RETURN_STATUS__STRUCT_H_
