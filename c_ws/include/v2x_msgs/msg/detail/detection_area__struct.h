// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DetectionArea.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DETECTION_AREA__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DETECTION_AREA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DETECTION_AREA_NOTHING'.
enum
{
  v2x_msgs__msg__DetectionArea__DETECTION_AREA_NOTHING = 0ll
};

/// Constant 'DETECTION_AREA_VEHICLE_SENSOR'.
enum
{
  v2x_msgs__msg__DetectionArea__DETECTION_AREA_VEHICLE_SENSOR = 1ll
};

/// Constant 'DETECTION_AREA_STATIONARY_SENSOR_RADIAL'.
enum
{
  v2x_msgs__msg__DetectionArea__DETECTION_AREA_STATIONARY_SENSOR_RADIAL = 2ll
};

/// Constant 'DETECTION_AREA_STATIONARY_SENSOR_POLYGON'.
enum
{
  v2x_msgs__msg__DetectionArea__DETECTION_AREA_STATIONARY_SENSOR_POLYGON = 3ll
};

/// Constant 'DETECTION_AREA_STATIONARY_SENSOR_CIRCULAR'.
enum
{
  v2x_msgs__msg__DetectionArea__DETECTION_AREA_STATIONARY_SENSOR_CIRCULAR = 4ll
};

/// Constant 'DETECTION_AREA_STATIONARY_SENSOR_ELLIPSE'.
enum
{
  v2x_msgs__msg__DetectionArea__DETECTION_AREA_STATIONARY_SENSOR_ELLIPSE = 5ll
};

/// Constant 'DETECTION_AREA_STATIONARY_SENSOR_RECTANGLE'.
enum
{
  v2x_msgs__msg__DetectionArea__DETECTION_AREA_STATIONARY_SENSOR_RECTANGLE = 6ll
};

// Include directives for member types
// Member 'vehicle_sensor'
#include "v2x_msgs/msg/detail/vehicle_sensor__struct.h"
// Member 'stationary_sensor_radial'
#include "v2x_msgs/msg/detail/area_radial__struct.h"
// Member 'stationary_sensor_polygon'
#include "v2x_msgs/msg/detail/area_polygon__struct.h"
// Member 'stationary_sensor_circular'
#include "v2x_msgs/msg/detail/area_circular__struct.h"
// Member 'stationary_sensor_ellipse'
#include "v2x_msgs/msg/detail/area_ellipse__struct.h"
// Member 'stationary_sensor_rectangle'
#include "v2x_msgs/msg/detail/area_rectangle__struct.h"

/// Struct defined in msg/DetectionArea in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__DetectionArea
{
  /// CHOICE! - Choose exactly of the containers
  int64_t detection_area_container_select;
  /// container 1
  v2x_msgs__msg__VehicleSensor vehicle_sensor;
  /// container 2
  v2x_msgs__msg__AreaRadial stationary_sensor_radial;
  /// container 3
  v2x_msgs__msg__AreaPolygon stationary_sensor_polygon;
  /// container 4
  v2x_msgs__msg__AreaCircular stationary_sensor_circular;
  /// container 5
  v2x_msgs__msg__AreaEllipse stationary_sensor_ellipse;
  /// container 6
  v2x_msgs__msg__AreaRectangle stationary_sensor_rectangle;
} v2x_msgs__msg__DetectionArea;

// Struct for a sequence of v2x_msgs__msg__DetectionArea.
typedef struct v2x_msgs__msg__DetectionArea__Sequence
{
  v2x_msgs__msg__DetectionArea * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DetectionArea__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DETECTION_AREA__STRUCT_H_
