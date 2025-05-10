// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/SensorType.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__SENSOR_TYPE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__SENSOR_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SENSOR_TYPE_RANGE_MIN'.
enum
{
  v2x_msgs__msg__SensorType__SENSOR_TYPE_RANGE_MIN = 0ll
};

/// Constant 'SENSOR_TYPE_RANGE_MAX'.
enum
{
  v2x_msgs__msg__SensorType__SENSOR_TYPE_RANGE_MAX = 15ll
};

/// Constant 'SENSOR_TYPE_UNDEFINED'.
enum
{
  v2x_msgs__msg__SensorType__SENSOR_TYPE_UNDEFINED = 0ll
};

/// Constant 'SENSOR_TYPE_RADAR'.
enum
{
  v2x_msgs__msg__SensorType__SENSOR_TYPE_RADAR = 1ll
};

/// Constant 'SENSOR_TYPE_LIDAR'.
enum
{
  v2x_msgs__msg__SensorType__SENSOR_TYPE_LIDAR = 2ll
};

/// Constant 'SENSOR_TYPE_MONOVIDEO'.
enum
{
  v2x_msgs__msg__SensorType__SENSOR_TYPE_MONOVIDEO = 3ll
};

/// Constant 'SENSOR_TYPE_STEREOVISION'.
enum
{
  v2x_msgs__msg__SensorType__SENSOR_TYPE_STEREOVISION = 4ll
};

/// Constant 'SENSOR_TYPE_NIGHTVISION'.
enum
{
  v2x_msgs__msg__SensorType__SENSOR_TYPE_NIGHTVISION = 5ll
};

/// Constant 'SENSOR_TYPE_ULTRASONIC'.
enum
{
  v2x_msgs__msg__SensorType__SENSOR_TYPE_ULTRASONIC = 6ll
};

/// Constant 'SENSOR_TYPE_PMD'.
enum
{
  v2x_msgs__msg__SensorType__SENSOR_TYPE_PMD = 7ll
};

/// Constant 'SENSOR_TYPE_FUSION'.
enum
{
  v2x_msgs__msg__SensorType__SENSOR_TYPE_FUSION = 8ll
};

/// Constant 'SENSOR_TYPE_INDUCTIONLOOP'.
enum
{
  v2x_msgs__msg__SensorType__SENSOR_TYPE_INDUCTIONLOOP = 9ll
};

/// Constant 'SENSOR_TYPE_SPHERICAL_CAMERA'.
enum
{
  v2x_msgs__msg__SensorType__SENSOR_TYPE_SPHERICAL_CAMERA = 10ll
};

/// Constant 'SENSOR_TYPE_ITSSAGGREGATION'.
enum
{
  v2x_msgs__msg__SensorType__SENSOR_TYPE_ITSSAGGREGATION = 11ll
};

/// Struct defined in msg/SensorType in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__SensorType
{
  int64_t sensor_type;
} v2x_msgs__msg__SensorType;

// Struct for a sequence of v2x_msgs__msg__SensorType.
typedef struct v2x_msgs__msg__SensorType__Sequence
{
  v2x_msgs__msg__SensorType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__SensorType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__SENSOR_TYPE__STRUCT_H_
