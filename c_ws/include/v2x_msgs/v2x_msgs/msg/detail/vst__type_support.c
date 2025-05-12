// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/VST.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/vst__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/vst__functions.h"
#include "v2x_msgs/msg/detail/vst__struct.h"


// Include directives for member types
// Member `profile`
#include "v2x_msgs/msg/profile.h"
// Member `profile`
#include "v2x_msgs/msg/detail/profile__rosidl_typesupport_introspection_c.h"
// Member `applications`
#include "v2x_msgs/msg/application_list.h"
// Member `applications`
#include "v2x_msgs/msg/detail/application_list__rosidl_typesupport_introspection_c.h"
// Member `obe_configuration`
#include "v2x_msgs/msg/obe_configuration.h"
// Member `obe_configuration`
#include "v2x_msgs/msg/detail/obe_configuration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__VST__rosidl_typesupport_introspection_c__VST_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__VST__init(message_memory);
}

void v2x_msgs__msg__VST__rosidl_typesupport_introspection_c__VST_fini_function(void * message_memory)
{
  v2x_msgs__msg__VST__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__VST__rosidl_typesupport_introspection_c__VST_message_member_array[4] = {
  {
    "fill",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VST, fill),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "profile",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VST, profile),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "applications",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VST, applications),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "obe_configuration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__VST, obe_configuration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__VST__rosidl_typesupport_introspection_c__VST_message_members = {
  "v2x_msgs__msg",  // message namespace
  "VST",  // message name
  4,  // number of fields
  sizeof(v2x_msgs__msg__VST),
  v2x_msgs__msg__VST__rosidl_typesupport_introspection_c__VST_message_member_array,  // message members
  v2x_msgs__msg__VST__rosidl_typesupport_introspection_c__VST_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__VST__rosidl_typesupport_introspection_c__VST_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__VST__rosidl_typesupport_introspection_c__VST_message_type_support_handle = {
  0,
  &v2x_msgs__msg__VST__rosidl_typesupport_introspection_c__VST_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VST)() {
  v2x_msgs__msg__VST__rosidl_typesupport_introspection_c__VST_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Profile)();
  v2x_msgs__msg__VST__rosidl_typesupport_introspection_c__VST_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ApplicationList)();
  v2x_msgs__msg__VST__rosidl_typesupport_introspection_c__VST_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ObeConfiguration)();
  if (!v2x_msgs__msg__VST__rosidl_typesupport_introspection_c__VST_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__VST__rosidl_typesupport_introspection_c__VST_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__VST__rosidl_typesupport_introspection_c__VST_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
