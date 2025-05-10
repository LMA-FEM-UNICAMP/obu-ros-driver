// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/EngineCharacteristics.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__ENGINE_CHARACTERISTICS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__ENGINE_CHARACTERISTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ENGINE_CHARACTERISTICS_RANGE_MIN'.
enum
{
  v2x_msgs__msg__EngineCharacteristics__ENGINE_CHARACTERISTICS_RANGE_MIN = 0ll
};

/// Constant 'ENGINE_CHARACTERISTICS_RANGE_MAX'.
enum
{
  v2x_msgs__msg__EngineCharacteristics__ENGINE_CHARACTERISTICS_RANGE_MAX = 255ll
};

/// Constant 'ENGINE_CHARACTERISTICS_NO_ENTRY'.
enum
{
  v2x_msgs__msg__EngineCharacteristics__ENGINE_CHARACTERISTICS_NO_ENTRY = 0ll
};

/// Constant 'ENGINE_CHARACTERISTICS_NO_ENGINE'.
enum
{
  v2x_msgs__msg__EngineCharacteristics__ENGINE_CHARACTERISTICS_NO_ENGINE = 1ll
};

/// Constant 'ENGINE_CHARACTERISTICS_PETROL_UNLEADED'.
enum
{
  v2x_msgs__msg__EngineCharacteristics__ENGINE_CHARACTERISTICS_PETROL_UNLEADED = 2ll
};

/// Constant 'ENGINE_CHARACTERISTICS_PETROL_LEADED'.
enum
{
  v2x_msgs__msg__EngineCharacteristics__ENGINE_CHARACTERISTICS_PETROL_LEADED = 3ll
};

/// Constant 'ENGINE_CHARACTERISTICS_DIESEL'.
enum
{
  v2x_msgs__msg__EngineCharacteristics__ENGINE_CHARACTERISTICS_DIESEL = 4ll
};

/// Constant 'ENGINE_CHARACTERISTICS_L_PG'.
enum
{
  v2x_msgs__msg__EngineCharacteristics__ENGINE_CHARACTERISTICS_L_PG = 5ll
};

/// Constant 'ENGINE_CHARACTERISTICS_BATTERY'.
enum
{
  v2x_msgs__msg__EngineCharacteristics__ENGINE_CHARACTERISTICS_BATTERY = 6ll
};

/// Constant 'ENGINE_CHARACTERISTICS_SOLAR'.
enum
{
  v2x_msgs__msg__EngineCharacteristics__ENGINE_CHARACTERISTICS_SOLAR = 7ll
};

/// Constant 'ENGINE_CHARACTERISTICS_HYBRID'.
enum
{
  v2x_msgs__msg__EngineCharacteristics__ENGINE_CHARACTERISTICS_HYBRID = 8ll
};

/// Constant 'ENGINE_CHARACTERISTICS_HYDROGEN'.
enum
{
  v2x_msgs__msg__EngineCharacteristics__ENGINE_CHARACTERISTICS_HYDROGEN = 9ll
};

/// Struct defined in msg/EngineCharacteristics in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__EngineCharacteristics
{
  int64_t engine_characteristics;
} v2x_msgs__msg__EngineCharacteristics;

// Struct for a sequence of v2x_msgs__msg__EngineCharacteristics.
typedef struct v2x_msgs__msg__EngineCharacteristics__Sequence
{
  v2x_msgs__msg__EngineCharacteristics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__EngineCharacteristics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__ENGINE_CHARACTERISTICS__STRUCT_H_
