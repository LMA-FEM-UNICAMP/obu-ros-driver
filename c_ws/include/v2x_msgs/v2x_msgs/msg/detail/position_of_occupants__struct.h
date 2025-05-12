// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/PositionOfOccupants.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__POSITION_OF_OCCUPANTS__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__POSITION_OF_OCCUPANTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POSITION_OF_OCCUPANTS_ROW1LEFT_OCCUPIED'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW1LEFT_OCCUPIED = 0ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW1RIGHT_OCCUPIED'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW1RIGHT_OCCUPIED = 1ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW1MID_OCCUPIED'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW1MID_OCCUPIED = 2ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW1NOT_DETECTABLE'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW1NOT_DETECTABLE = 3ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW1NOT_PRESENT'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW1NOT_PRESENT = 4ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW2LEFT_OCCUPIED'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW2LEFT_OCCUPIED = 5ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW2RIGHT_OCCUPIED'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW2RIGHT_OCCUPIED = 6ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW2MID_OCCUPIED'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW2MID_OCCUPIED = 7ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW2NOT_DETECTABLE'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW2NOT_DETECTABLE = 8ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW2NOT_PRESENT'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW2NOT_PRESENT = 9ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW3LEFT_OCCUPIED'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW3LEFT_OCCUPIED = 10ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW3RIGHT_OCCUPIED'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW3RIGHT_OCCUPIED = 11ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW3MID_OCCUPIED'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW3MID_OCCUPIED = 12ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW3NOT_DETECTABLE'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW3NOT_DETECTABLE = 13ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW3NOT_PRESENT'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW3NOT_PRESENT = 14ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW4LEFT_OCCUPIED'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW4LEFT_OCCUPIED = 15ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW4RIGHT_OCCUPIED'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW4RIGHT_OCCUPIED = 16ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW4MID_OCCUPIED'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW4MID_OCCUPIED = 17ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW4NOT_DETECTABLE'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW4NOT_DETECTABLE = 18ll
};

/// Constant 'POSITION_OF_OCCUPANTS_ROW4NOT_PRESENT'.
enum
{
  v2x_msgs__msg__PositionOfOccupants__POSITION_OF_OCCUPANTS_ROW4NOT_PRESENT = 19ll
};

/// Struct defined in msg/PositionOfOccupants in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__PositionOfOccupants
{
  int64_t position_of_occupants;
} v2x_msgs__msg__PositionOfOccupants;

// Struct for a sequence of v2x_msgs__msg__PositionOfOccupants.
typedef struct v2x_msgs__msg__PositionOfOccupants__Sequence
{
  v2x_msgs__msg__PositionOfOccupants * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__PositionOfOccupants__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__POSITION_OF_OCCUPANTS__STRUCT_H_
