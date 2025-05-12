// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ServiceApplicationLimit.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SERVICE_APPLICATION_LIMIT__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SERVICE_APPLICATION_LIMIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SERVICE_APPLICATION_LIMIT_NOT_FOR_POSTPAYMENT'.
enum
{
  v2x_msgs__msg__ServiceApplicationLimit__SERVICE_APPLICATION_LIMIT_NOT_FOR_POSTPAYMENT = 0ll
};

/// Constant 'SERVICE_APPLICATION_LIMIT_NOT_FOR_PREPAYMENT'.
enum
{
  v2x_msgs__msg__ServiceApplicationLimit__SERVICE_APPLICATION_LIMIT_NOT_FOR_PREPAYMENT = 1ll
};

/// Constant 'SERVICE_APPLICATION_LIMIT_NOT_FOR_VEHICLEACCESS'.
enum
{
  v2x_msgs__msg__ServiceApplicationLimit__SERVICE_APPLICATION_LIMIT_NOT_FOR_VEHICLEACCESS = 2ll
};

/// Constant 'SERVICE_APPLICATION_LIMIT_NOT_FOR_FLEETCONTROL'.
enum
{
  v2x_msgs__msg__ServiceApplicationLimit__SERVICE_APPLICATION_LIMIT_NOT_FOR_FLEETCONTROL = 3ll
};

/// Constant 'SERVICE_APPLICATION_LIMIT_ISSUER_SPECIFIC_RESTRICTION1'.
enum
{
  v2x_msgs__msg__ServiceApplicationLimit__SERVICE_APPLICATION_LIMIT_ISSUER_SPECIFIC_RESTRICTION1 = 4ll
};

/// Constant 'SERVICE_APPLICATION_LIMIT_ISSUER_SPECIFIC_RESTRICTION2'.
enum
{
  v2x_msgs__msg__ServiceApplicationLimit__SERVICE_APPLICATION_LIMIT_ISSUER_SPECIFIC_RESTRICTION2 = 5ll
};

/// Constant 'SERVICE_APPLICATION_LIMIT_ISSUER_SPECIFIC_RESTRICTION3'.
enum
{
  v2x_msgs__msg__ServiceApplicationLimit__SERVICE_APPLICATION_LIMIT_ISSUER_SPECIFIC_RESTRICTION3 = 6ll
};

/// Constant 'SERVICE_APPLICATION_LIMIT_ISSUER_SPECIFIC_RESTRICTION4'.
enum
{
  v2x_msgs__msg__ServiceApplicationLimit__SERVICE_APPLICATION_LIMIT_ISSUER_SPECIFIC_RESTRICTION4 = 7ll
};

/// Struct defined in msg/ServiceApplicationLimit in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ServiceApplicationLimit
{
  int64_t service_application_limit;
} v2x_msgs__msg__ServiceApplicationLimit;

// Struct for a sequence of v2x_msgs__msg__ServiceApplicationLimit.
typedef struct v2x_msgs__msg__ServiceApplicationLimit__Sequence
{
  v2x_msgs__msg__ServiceApplicationLimit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ServiceApplicationLimit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SERVICE_APPLICATION_LIMIT__STRUCT_H_
