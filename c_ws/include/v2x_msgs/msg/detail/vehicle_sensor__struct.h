// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleSensor.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_SENSOR__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ref_point_id'
#include "v2x_msgs/msg/detail/ref_point_id__struct.h"
// Member 'x_sensor_offset'
#include "v2x_msgs/msg/detail/x_sensor_offset__struct.h"
// Member 'y_sensor_offset'
#include "v2x_msgs/msg/detail/y_sensor_offset__struct.h"
// Member 'z_sensor_offset'
#include "v2x_msgs/msg/detail/z_sensor_offset__struct.h"
// Member 'vehicle_sensor_property_list'
#include "v2x_msgs/msg/detail/vehicle_sensor_property_list__struct.h"

/// Struct defined in msg/VehicleSensor in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleSensor
{
  /// Optional Field
  bool ref_point_id_present;
  v2x_msgs__msg__RefPointId ref_point_id;
  v2x_msgs__msg__XSensorOffset x_sensor_offset;
  v2x_msgs__msg__YSensorOffset y_sensor_offset;
  /// Optional Field
  bool z_sensor_offset_present;
  v2x_msgs__msg__ZSensorOffset z_sensor_offset;
  v2x_msgs__msg__VehicleSensorPropertyList vehicle_sensor_property_list;
} v2x_msgs__msg__VehicleSensor;

// Struct for a sequence of v2x_msgs__msg__VehicleSensor.
typedef struct v2x_msgs__msg__VehicleSensor__Sequence
{
  v2x_msgs__msg__VehicleSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_SENSOR__STRUCT_H_
