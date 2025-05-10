// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/ExteriorLights.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__EXTERIOR_LIGHTS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__EXTERIOR_LIGHTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EXTERIOR_LIGHTS_LOW_BEAM_HEADLIGHTS_ON'.
enum
{
  v2x_msgs__msg__ExteriorLights__EXTERIOR_LIGHTS_LOW_BEAM_HEADLIGHTS_ON = 0ll
};

/// Constant 'EXTERIOR_LIGHTS_HIGH_BEAM_HEADLIGHTS_ON'.
enum
{
  v2x_msgs__msg__ExteriorLights__EXTERIOR_LIGHTS_HIGH_BEAM_HEADLIGHTS_ON = 1ll
};

/// Constant 'EXTERIOR_LIGHTS_LEFT_TURN_SIGNAL_ON'.
enum
{
  v2x_msgs__msg__ExteriorLights__EXTERIOR_LIGHTS_LEFT_TURN_SIGNAL_ON = 2ll
};

/// Constant 'EXTERIOR_LIGHTS_RIGHT_TURN_SIGNAL_ON'.
enum
{
  v2x_msgs__msg__ExteriorLights__EXTERIOR_LIGHTS_RIGHT_TURN_SIGNAL_ON = 3ll
};

/// Constant 'EXTERIOR_LIGHTS_DAYTIME_RUNNING_LIGHTS_ON'.
enum
{
  v2x_msgs__msg__ExteriorLights__EXTERIOR_LIGHTS_DAYTIME_RUNNING_LIGHTS_ON = 4ll
};

/// Constant 'EXTERIOR_LIGHTS_REVERSE_LIGHT_ON'.
enum
{
  v2x_msgs__msg__ExteriorLights__EXTERIOR_LIGHTS_REVERSE_LIGHT_ON = 5ll
};

/// Constant 'EXTERIOR_LIGHTS_FOG_LIGHT_ON'.
enum
{
  v2x_msgs__msg__ExteriorLights__EXTERIOR_LIGHTS_FOG_LIGHT_ON = 6ll
};

/// Constant 'EXTERIOR_LIGHTS_PARKING_LIGHTS_ON'.
enum
{
  v2x_msgs__msg__ExteriorLights__EXTERIOR_LIGHTS_PARKING_LIGHTS_ON = 7ll
};

/// Struct defined in msg/ExteriorLights in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__ExteriorLights
{
  int64_t exterior_lights;
} v2x_msgs__msg__ExteriorLights;

// Struct for a sequence of v2x_msgs__msg__ExteriorLights.
typedef struct v2x_msgs__msg__ExteriorLights__Sequence
{
  v2x_msgs__msg__ExteriorLights * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__ExteriorLights__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__EXTERIOR_LIGHTS__STRUCT_H_
