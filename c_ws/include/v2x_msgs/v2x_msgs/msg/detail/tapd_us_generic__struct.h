// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_msgs:msg/TAPDUsGeneric.idl
// generated code does not contain a copyright notice

#ifndef V2X_MSGS__MSG__DETAIL__TAPD_US_GENERIC__STRUCT_H_
#define V2X_MSGS__MSG__DETAIL__TAPD_US_GENERIC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TAPDUSGENERIC_NOTHING'.
enum
{
  v2x_msgs__msg__TAPDUsGeneric__TAPDUSGENERIC_NOTHING = 0ll
};

/// Constant 'TAPDUSGENERIC_ACTION_REQUEST'.
enum
{
  v2x_msgs__msg__TAPDUsGeneric__TAPDUSGENERIC_ACTION_REQUEST = 1ll
};

/// Constant 'TAPDUSGENERIC_ACTION_RESPONSE'.
enum
{
  v2x_msgs__msg__TAPDUsGeneric__TAPDUSGENERIC_ACTION_RESPONSE = 2ll
};

/// Constant 'TAPDUSGENERIC_EVENT_REPORT_REQUEST'.
enum
{
  v2x_msgs__msg__TAPDUsGeneric__TAPDUSGENERIC_EVENT_REPORT_REQUEST = 3ll
};

/// Constant 'TAPDUSGENERIC_EVENT_REPORT_RESPONSE'.
enum
{
  v2x_msgs__msg__TAPDUsGeneric__TAPDUSGENERIC_EVENT_REPORT_RESPONSE = 4ll
};

/// Constant 'TAPDUSGENERIC_SET_REQUEST'.
enum
{
  v2x_msgs__msg__TAPDUsGeneric__TAPDUSGENERIC_SET_REQUEST = 5ll
};

/// Constant 'TAPDUSGENERIC_SET_RESPONSE'.
enum
{
  v2x_msgs__msg__TAPDUsGeneric__TAPDUSGENERIC_SET_RESPONSE = 6ll
};

/// Constant 'TAPDUSGENERIC_GET_REQUEST'.
enum
{
  v2x_msgs__msg__TAPDUsGeneric__TAPDUSGENERIC_GET_REQUEST = 7ll
};

/// Constant 'TAPDUSGENERIC_GET_RESPONSE'.
enum
{
  v2x_msgs__msg__TAPDUsGeneric__TAPDUSGENERIC_GET_RESPONSE = 8ll
};

/// Constant 'TAPDUSGENERIC_INITIALISATION_REQUEST'.
enum
{
  v2x_msgs__msg__TAPDUsGeneric__TAPDUSGENERIC_INITIALISATION_REQUEST = 9ll
};

/// Constant 'TAPDUSGENERIC_INITIALISATION_RESPONSE'.
enum
{
  v2x_msgs__msg__TAPDUsGeneric__TAPDUSGENERIC_INITIALISATION_RESPONSE = 10ll
};

// Include directives for member types
// Member 'actionrequest'
#include "v2x_msgs/msg/detail/action_request__struct.h"
// Member 'actionresponse'
#include "v2x_msgs/msg/detail/action_response__struct.h"
// Member 'eventreportrequest'
#include "v2x_msgs/msg/detail/event_report_request__struct.h"
// Member 'eventreportresponse'
#include "v2x_msgs/msg/detail/event_report_response__struct.h"
// Member 'setrequest'
#include "v2x_msgs/msg/detail/set_request__struct.h"
// Member 'setresponse'
#include "v2x_msgs/msg/detail/set_response__struct.h"
// Member 'getrequest'
#include "v2x_msgs/msg/detail/get_request__struct.h"
// Member 'getresponse'
#include "v2x_msgs/msg/detail/get_response__struct.h"
// Member 'initialisationrequest'
#include "v2x_msgs/msg/detail/initialisation_request__struct.h"
// Member 'initialisationresponse'
#include "v2x_msgs/msg/detail/initialisation_response__struct.h"

/// Struct defined in msg/TAPDUsGeneric in the package v2x_msgs.
/**
  * Generated with ROS-Parser from vehicleCAPTAIN Toolbox (https://github.com/virtual-vehicle/vehicle_captain_asn1_parser)
  * Copyright: Patrizia Neubauer (https://github.com/patrizianeubauer)
 */
typedef struct v2x_msgs__msg__TAPDUsGeneric
{
  /// CHOICE! - Choose exactly of the containers
  int64_t tapdusgeneric_container_select;
  /// container 1
  v2x_msgs__msg__ActionRequest actionrequest;
  /// container 2
  v2x_msgs__msg__ActionResponse actionresponse;
  /// container 3
  v2x_msgs__msg__EventReportRequest eventreportrequest;
  /// container 4
  v2x_msgs__msg__EventReportResponse eventreportresponse;
  /// container 5
  v2x_msgs__msg__SetRequest setrequest;
  /// container 6
  v2x_msgs__msg__SetResponse setresponse;
  /// container 7
  v2x_msgs__msg__GetRequest getrequest;
  /// container 8
  v2x_msgs__msg__GetResponse getresponse;
  /// container 9
  v2x_msgs__msg__InitialisationRequest initialisationrequest;
  /// container 10
  v2x_msgs__msg__InitialisationResponse initialisationresponse;
} v2x_msgs__msg__TAPDUsGeneric;

// Struct for a sequence of v2x_msgs__msg__TAPDUsGeneric.
typedef struct v2x_msgs__msg__TAPDUsGeneric__Sequence
{
  v2x_msgs__msg__TAPDUsGeneric * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_msgs__msg__TAPDUsGeneric__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_MSGS__MSG__DETAIL__TAPD_US_GENERIC__STRUCT_H_
