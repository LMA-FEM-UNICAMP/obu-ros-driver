// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/VehicleLengthConfidenceIndication.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH_CONFIDENCE_INDICATION__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH_CONFIDENCE_INDICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_LENGTH_CONFIDENCE_INDICATION_NO_TRAILER_PRESENT'.
enum
{
  v2x_msgs__msg__VehicleLengthConfidenceIndication__VEHICLE_LENGTH_CONFIDENCE_INDICATION_NO_TRAILER_PRESENT = 0ll
};

/// Constant 'VEHICLE_LENGTH_CONFIDENCE_INDICATION_TRAILER_PRESENT_WITH_KNOWN_LENGTH'.
enum
{
  v2x_msgs__msg__VehicleLengthConfidenceIndication__VEHICLE_LENGTH_CONFIDENCE_INDICATION_TRAILER_PRESENT_WITH_KNOWN_LENGTH = 1ll
};

/// Constant 'VEHICLE_LENGTH_CONFIDENCE_INDICATION_TRAILER_PRESENT_WITH_UNKNOWN_LENGTH'.
enum
{
  v2x_msgs__msg__VehicleLengthConfidenceIndication__VEHICLE_LENGTH_CONFIDENCE_INDICATION_TRAILER_PRESENT_WITH_UNKNOWN_LENGTH = 2ll
};

/// Constant 'VEHICLE_LENGTH_CONFIDENCE_INDICATION_TRAILER_PRESENCE_IS_UNKNOWN'.
enum
{
  v2x_msgs__msg__VehicleLengthConfidenceIndication__VEHICLE_LENGTH_CONFIDENCE_INDICATION_TRAILER_PRESENCE_IS_UNKNOWN = 3ll
};

/// Constant 'VEHICLE_LENGTH_CONFIDENCE_INDICATION_UNAVAILABLE'.
enum
{
  v2x_msgs__msg__VehicleLengthConfidenceIndication__VEHICLE_LENGTH_CONFIDENCE_INDICATION_UNAVAILABLE = 4ll
};

/// Struct defined in msg/VehicleLengthConfidenceIndication in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__VehicleLengthConfidenceIndication
{
  int64_t vehicle_length_confidence_indication;
} v2x_msgs__msg__VehicleLengthConfidenceIndication;

// Struct for a sequence of v2x_msgs__msg__VehicleLengthConfidenceIndication.
typedef struct v2x_msgs__msg__VehicleLengthConfidenceIndication__Sequence
{
  v2x_msgs__msg__VehicleLengthConfidenceIndication * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__VehicleLengthConfidenceIndication__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__VEHICLE_LENGTH_CONFIDENCE_INDICATION__STRUCT_H_
