// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/CenDsrcTollingZone.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__CEN_DSRC_TOLLING_ZONE__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__CEN_DSRC_TOLLING_ZONE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'protected_zone_latitude'
#include "v2x_msgs/msg/detail/latitude__struct.h"
// Member 'protected_zone_longitude'
#include "v2x_msgs/msg/detail/longitude__struct.h"
// Member 'cen_dsrc_tolling_zone_id'
#include "v2x_msgs/msg/detail/cen_dsrc_tolling_zone_id__struct.h"

/// Struct defined in msg/CenDsrcTollingZone in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__CenDsrcTollingZone
{
  v2x_msgs__msg__Latitude protected_zone_latitude;
  v2x_msgs__msg__Longitude protected_zone_longitude;
  /// Optional Field
  bool cen_dsrc_tolling_zone_id_present;
  v2x_msgs__msg__CenDsrcTollingZoneID cen_dsrc_tolling_zone_id;
} v2x_msgs__msg__CenDsrcTollingZone;

// Struct for a sequence of v2x_msgs__msg__CenDsrcTollingZone.
typedef struct v2x_msgs__msg__CenDsrcTollingZone__Sequence
{
  v2x_msgs__msg__CenDsrcTollingZone * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__CenDsrcTollingZone__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__CEN_DSRC_TOLLING_ZONE__STRUCT_H_
