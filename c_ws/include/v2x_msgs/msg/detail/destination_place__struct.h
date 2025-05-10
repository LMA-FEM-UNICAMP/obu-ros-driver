// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/DestinationPlace.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__DESTINATION_PLACE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__DESTINATION_PLACE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PLACE_NAME_IDENTIFICATION_RANGE_MIN'.
enum
{
  v2x_msgs__msg__DestinationPlace__PLACE_NAME_IDENTIFICATION_RANGE_MIN = 1ll
};

/// Constant 'PLACE_NAME_IDENTIFICATION_RANGE_MAX'.
enum
{
  v2x_msgs__msg__DestinationPlace__PLACE_NAME_IDENTIFICATION_RANGE_MAX = 999ll
};

// Include directives for member types
// Member 'dest_type'
#include "v2x_msgs/msg/detail/destination_type__struct.h"
// Member 'dest_blob'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'place_name_text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DestinationPlace in the package v2x_msgs.
/**
  * Created by script of Patrizia Neubauer (https://github.com/patrizianeubauer)
  * Date: Thu Jan 19 09:10:59 2023
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
 */
typedef struct v2x_msgs__msg__DestinationPlace
{
  /// RingDependency with dest_rscode in line 6: GddStructure -> GddAttributes -> GddAtrribute -> DDDIOList -> DDDIO -> DestinationPlace -> GddStructure
  v2x_msgs__msg__DestinationType dest_type;
  /// Optional Field
  bool dest_rscode_present;
  /// GddStructure dest_rscode
  /// Optional Field
  bool dest_blob_present;
  rosidl_runtime_c__int64__Sequence dest_blob;
  /// Optional Field
  bool place_name_identification_present;
  int64_t place_name_identification;
  /// Optional Field
  bool place_name_text_present;
  rosidl_runtime_c__String place_name_text;
} v2x_msgs__msg__DestinationPlace;

// Struct for a sequence of v2x_msgs__msg__DestinationPlace.
typedef struct v2x_msgs__msg__DestinationPlace__Sequence
{
  v2x_msgs__msg__DestinationPlace * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__DestinationPlace__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__DESTINATION_PLACE__STRUCT_H_
