// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/CS3.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/cs3__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/cs3__functions.h"
#include "v2x_msgs/msg/detail/cs3__struct.h"


// Include directives for member types
// Member `start_time`
#include "v2x_msgs/msg/start_time.h"
// Member `start_time`
#include "v2x_msgs/msg/detail/start_time__rosidl_typesupport_introspection_c.h"
// Member `stop_time`
#include "v2x_msgs/msg/stop_time.h"
// Member `stop_time`
#include "v2x_msgs/msg/detail/stop_time__rosidl_typesupport_introspection_c.h"
// Member `geograph_limit`
#include "v2x_msgs/msg/geo_graphical_limit.h"
// Member `geograph_limit`
#include "v2x_msgs/msg/detail/geo_graphical_limit__rosidl_typesupport_introspection_c.h"
// Member `service_app_limit`
#include "v2x_msgs/msg/service_application_limit.h"
// Member `service_app_limit`
#include "v2x_msgs/msg/detail/service_application_limit__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__CS3__rosidl_typesupport_introspection_c__CS3_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__CS3__init(message_memory);
}

void v2x_msgs__msg__CS3__rosidl_typesupport_introspection_c__CS3_fini_function(void * message_memory)
{
  v2x_msgs__msg__CS3__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__CS3__rosidl_typesupport_introspection_c__CS3_message_member_array[4] = {
  {
    "start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__CS3, start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__CS3, stop_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "geograph_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__CS3, geograph_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "service_app_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__CS3, service_app_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__CS3__rosidl_typesupport_introspection_c__CS3_message_members = {
  "v2x_msgs__msg",  // message namespace
  "CS3",  // message name
  4,  // number of fields
  sizeof(v2x_msgs__msg__CS3),
  v2x_msgs__msg__CS3__rosidl_typesupport_introspection_c__CS3_message_member_array,  // message members
  v2x_msgs__msg__CS3__rosidl_typesupport_introspection_c__CS3_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__CS3__rosidl_typesupport_introspection_c__CS3_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__CS3__rosidl_typesupport_introspection_c__CS3_message_type_support_handle = {
  0,
  &v2x_msgs__msg__CS3__rosidl_typesupport_introspection_c__CS3_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, CS3)() {
  v2x_msgs__msg__CS3__rosidl_typesupport_introspection_c__CS3_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, StartTime)();
  v2x_msgs__msg__CS3__rosidl_typesupport_introspection_c__CS3_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, StopTime)();
  v2x_msgs__msg__CS3__rosidl_typesupport_introspection_c__CS3_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, GeoGraphicalLimit)();
  v2x_msgs__msg__CS3__rosidl_typesupport_introspection_c__CS3_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ServiceApplicationLimit)();
  if (!v2x_msgs__msg__CS3__rosidl_typesupport_introspection_c__CS3_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__CS3__rosidl_typesupport_introspection_c__CS3_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__CS3__rosidl_typesupport_introspection_c__CS3_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
