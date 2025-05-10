// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PassengerCapacity.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__PASSENGER_CAPACITY__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__PASSENGER_CAPACITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'number_of_seats'
// Member 'number_of_standing_places'
#include "v2x_msgs/msg/detail/int1__struct.h"

/// Struct defined in msg/PassengerCapacity in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PassengerCapacity
{
  v2x_msgs__msg__Int1 number_of_seats;
  v2x_msgs__msg__Int1 number_of_standing_places;
} v2x_msgs__msg__PassengerCapacity;

// Struct for a sequence of v2x_msgs__msg__PassengerCapacity.
typedef struct v2x_msgs__msg__PassengerCapacity__Sequence
{
  v2x_msgs__msg__PassengerCapacity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PassengerCapacity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__PASSENGER_CAPACITY__STRUCT_H_
