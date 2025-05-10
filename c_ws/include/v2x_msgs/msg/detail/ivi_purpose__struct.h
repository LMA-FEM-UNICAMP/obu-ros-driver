// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/IviPurpose.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__IVI_PURPOSE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__IVI_PURPOSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IVI_PURPOSE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__IviPurpose__IVI_PURPOSE_RANGE_MIN = 0ll
};

/// Constant 'IVI_PURPOSE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__IviPurpose__IVI_PURPOSE_RANGE_MAX = 3ll
};

/// Constant 'IVI_PURPOSE_SAFETY'.
enum
{
  v2x_msgs__msg__IviPurpose__IVI_PURPOSE_SAFETY = 0ll
};

/// Constant 'IVI_PURPOSE_ENVIRONMENTAL'.
enum
{
  v2x_msgs__msg__IviPurpose__IVI_PURPOSE_ENVIRONMENTAL = 1ll
};

/// Constant 'IVI_PURPOSE_TRAFFIC_OPTIMISATION'.
enum
{
  v2x_msgs__msg__IviPurpose__IVI_PURPOSE_TRAFFIC_OPTIMISATION = 2ll
};

/// Struct defined in msg/IviPurpose in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__IviPurpose
{
  int64_t ivi_purpose;
} v2x_msgs__msg__IviPurpose;

// Struct for a sequence of v2x_msgs__msg__IviPurpose.
typedef struct v2x_msgs__msg__IviPurpose__Sequence
{
  v2x_msgs__msg__IviPurpose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__IviPurpose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__IVI_PURPOSE__STRUCT_H_
