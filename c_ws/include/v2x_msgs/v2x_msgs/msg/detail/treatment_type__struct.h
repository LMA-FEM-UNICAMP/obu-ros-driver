// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TreatmentType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TREATMENT_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TREATMENT_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TREATMENT_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__TreatmentType__TREATMENT_TYPE_RANGE_MIN = 0ll
};

/// Constant 'TREATMENT_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__TreatmentType__TREATMENT_TYPE_RANGE_MAX = 7ll
};

/// Constant 'TREATMENT_TYPE_NO'.
enum
{
  v2x_msgs__msg__TreatmentType__TREATMENT_TYPE_NO = 0ll
};

/// Constant 'TREATMENT_TYPE_ANTISKID'.
enum
{
  v2x_msgs__msg__TreatmentType__TREATMENT_TYPE_ANTISKID = 1ll
};

/// Constant 'TREATMENT_TYPE_ANTI_ICING'.
enum
{
  v2x_msgs__msg__TreatmentType__TREATMENT_TYPE_ANTI_ICING = 2ll
};

/// Constant 'TREATMENT_TYPE_DE_ICING'.
enum
{
  v2x_msgs__msg__TreatmentType__TREATMENT_TYPE_DE_ICING = 3ll
};

/// Constant 'TREATMENT_TYPE_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__TreatmentType__TREATMENT_TYPE_UNAVAILABLE = 7ll
};

/// Struct defined in msg/TreatmentType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TreatmentType
{
  int64_t treatment_type;
} v2x_msgs__msg__TreatmentType;

// Struct for a sequence of v2x_msgs__msg__TreatmentType.
typedef struct v2x_msgs__msg__TreatmentType__Sequence
{
  v2x_msgs__msg__TreatmentType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TreatmentType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TREATMENT_TYPE__STRUCT_H_
