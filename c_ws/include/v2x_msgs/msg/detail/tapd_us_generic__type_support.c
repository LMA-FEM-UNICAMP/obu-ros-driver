// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/TAPDUsGeneric.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/tapd_us_generic__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/tapd_us_generic__functions.h"
#include "v2x_msgs/msg/detail/tapd_us_generic__struct.h"


// Include directives for member types
// Member `actionrequest`
#include "v2x_msgs/msg/action_request.h"
// Member `actionrequest`
#include "v2x_msgs/msg/detail/action_request__rosidl_typesupport_introspection_c.h"
// Member `actionresponse`
#include "v2x_msgs/msg/action_response.h"
// Member `actionresponse`
#include "v2x_msgs/msg/detail/action_response__rosidl_typesupport_introspection_c.h"
// Member `eventreportrequest`
#include "v2x_msgs/msg/event_report_request.h"
// Member `eventreportrequest`
#include "v2x_msgs/msg/detail/event_report_request__rosidl_typesupport_introspection_c.h"
// Member `eventreportresponse`
#include "v2x_msgs/msg/event_report_response.h"
// Member `eventreportresponse`
#include "v2x_msgs/msg/detail/event_report_response__rosidl_typesupport_introspection_c.h"
// Member `setrequest`
#include "v2x_msgs/msg/set_request.h"
// Member `setrequest`
#include "v2x_msgs/msg/detail/set_request__rosidl_typesupport_introspection_c.h"
// Member `setresponse`
#include "v2x_msgs/msg/set_response.h"
// Member `setresponse`
#include "v2x_msgs/msg/detail/set_response__rosidl_typesupport_introspection_c.h"
// Member `getrequest`
#include "v2x_msgs/msg/get_request.h"
// Member `getrequest`
#include "v2x_msgs/msg/detail/get_request__rosidl_typesupport_introspection_c.h"
// Member `getresponse`
#include "v2x_msgs/msg/get_response.h"
// Member `getresponse`
#include "v2x_msgs/msg/detail/get_response__rosidl_typesupport_introspection_c.h"
// Member `initialisationrequest`
#include "v2x_msgs/msg/initialisation_request.h"
// Member `initialisationrequest`
#include "v2x_msgs/msg/detail/initialisation_request__rosidl_typesupport_introspection_c.h"
// Member `initialisationresponse`
#include "v2x_msgs/msg/initialisation_response.h"
// Member `initialisationresponse`
#include "v2x_msgs/msg/detail/initialisation_response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__TAPDUsGeneric__init(message_memory);
}

void v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_fini_function(void * message_memory)
{
  v2x_msgs__msg__TAPDUsGeneric__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_member_array[11] = {
  {
    "tapdusgeneric_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TAPDUsGeneric, tapdusgeneric_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actionrequest",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TAPDUsGeneric, actionrequest),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actionresponse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TAPDUsGeneric, actionresponse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eventreportrequest",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TAPDUsGeneric, eventreportrequest),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eventreportresponse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TAPDUsGeneric, eventreportresponse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "setrequest",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TAPDUsGeneric, setrequest),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "setresponse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TAPDUsGeneric, setresponse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "getrequest",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TAPDUsGeneric, getrequest),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "getresponse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TAPDUsGeneric, getresponse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initialisationrequest",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TAPDUsGeneric, initialisationrequest),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "initialisationresponse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__TAPDUsGeneric, initialisationresponse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_members = {
  "v2x_msgs__msg",  // message namespace
  "TAPDUsGeneric",  // message name
  11,  // number of fields
  sizeof(v2x_msgs__msg__TAPDUsGeneric),
  v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_member_array,  // message members
  v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_type_support_handle = {
  0,
  &v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, TAPDUsGeneric)() {
  v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ActionRequest)();
  v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ActionResponse)();
  v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EventReportRequest)();
  v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, EventReportResponse)();
  v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SetRequest)();
  v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SetResponse)();
  v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, GetRequest)();
  v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, GetResponse)();
  v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, InitialisationRequest)();
  v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, InitialisationResponse)();
  if (!v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__TAPDUsGeneric__rosidl_typesupport_introspection_c__TAPDUsGeneric_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
