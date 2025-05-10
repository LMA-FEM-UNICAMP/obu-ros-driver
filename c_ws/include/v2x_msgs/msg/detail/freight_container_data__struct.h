// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/FreightContainerData.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__FREIGHT_CONTAINER_DATA__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__FREIGHT_CONTAINER_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SERIAL_NUMBER_RANGE_MIN'.
enum
{
  v2x_msgs__msg__FreightContainerData__SERIAL_NUMBER_RANGE_MIN = 0ll
};

/// Constant 'SERIAL_NUMBER_RANGE_MAX'.
enum
{
  v2x_msgs__msg__FreightContainerData__SERIAL_NUMBER_RANGE_MAX = 1000000ll
};

/// Constant 'CHECK_DIGIT_RANGE_MIN'.
enum
{
  v2x_msgs__msg__FreightContainerData__CHECK_DIGIT_RANGE_MIN = 0ll
};

/// Constant 'CHECK_DIGIT_RANGE_MAX'.
enum
{
  v2x_msgs__msg__FreightContainerData__CHECK_DIGIT_RANGE_MAX = 10ll
};

/// Constant 'LENGTH_RANGE_MIN'.
enum
{
  v2x_msgs__msg__FreightContainerData__LENGTH_RANGE_MIN = 1ll
};

/// Constant 'LENGTH_RANGE_MAX'.
enum
{
  v2x_msgs__msg__FreightContainerData__LENGTH_RANGE_MAX = 2000ll
};

/// Constant 'HEIGHT_RANGE_MIN'.
enum
{
  v2x_msgs__msg__FreightContainerData__HEIGHT_RANGE_MIN = 1ll
};

/// Constant 'HEIGHT_RANGE_MAX'.
enum
{
  v2x_msgs__msg__FreightContainerData__HEIGHT_RANGE_MAX = 500ll
};

/// Constant 'WIDTH_RANGE_MIN'.
enum
{
  v2x_msgs__msg__FreightContainerData__WIDTH_RANGE_MIN = 200ll
};

/// Constant 'WIDTH_RANGE_MAX'.
enum
{
  v2x_msgs__msg__FreightContainerData__WIDTH_RANGE_MAX = 300ll
};

/// Constant 'CONTAINER_TYPE_CODE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__FreightContainerData__CONTAINER_TYPE_CODE_RANGE_MIN = 0ll
};

/// Constant 'CONTAINER_TYPE_CODE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__FreightContainerData__CONTAINER_TYPE_CODE_RANGE_MAX = 127ll
};

/// Constant 'MAXIMUM_GROSS_MASS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__FreightContainerData__MAXIMUM_GROSS_MASS_RANGE_MIN = 19ll
};

/// Constant 'MAXIMUM_GROSS_MASS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__FreightContainerData__MAXIMUM_GROSS_MASS_RANGE_MAX = 500ll
};

/// Constant 'TARE_MASS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__FreightContainerData__TARE_MASS_RANGE_MIN = 0ll
};

/// Constant 'TARE_MASS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__FreightContainerData__TARE_MASS_RANGE_MAX = 99ll
};

/// Struct defined in msg/FreightContainerData in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__FreightContainerData
{
  int64_t owner_code;
  int64_t serial_number;
  int64_t check_digit;
  int64_t length;
  int64_t height;
  int64_t width;
  int64_t container_type_code;
  int64_t maximum_gross_mass;
  int64_t tare_mass;
  int64_t fill;
} v2x_msgs__msg__FreightContainerData;

// Struct for a sequence of v2x_msgs__msg__FreightContainerData.
typedef struct v2x_msgs__msg__FreightContainerData__Sequence
{
  v2x_msgs__msg__FreightContainerData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__FreightContainerData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__FREIGHT_CONTAINER_DATA__STRUCT_H_
