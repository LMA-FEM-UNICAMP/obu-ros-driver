// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/ApplicationList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/application_list__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/application_list__functions.h"
#include "v2x_msgs/msg/detail/application_list__struct.h"


// Include directives for member types
// Member `aid`
#include "v2x_msgs/msg/dsrc_application_entity_id.h"
// Member `aid`
#include "v2x_msgs/msg/detail/dsrc_application_entity_id__rosidl_typesupport_introspection_c.h"
// Member `eid`
#include "v2x_msgs/msg/dsrc_eid.h"
// Member `eid`
#include "v2x_msgs/msg/detail/dsrc_eid__rosidl_typesupport_introspection_c.h"
// Member `parameter`
#include "v2x_msgs/msg/application_context_mark.h"
// Member `parameter`
#include "v2x_msgs/msg/detail/application_context_mark__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__ApplicationList__rosidl_typesupport_introspection_c__ApplicationList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__ApplicationList__init(message_memory);
}

void v2x_msgs__msg__ApplicationList__rosidl_typesupport_introspection_c__ApplicationList_fini_function(void * message_memory)
{
  v2x_msgs__msg__ApplicationList__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__ApplicationList__rosidl_typesupport_introspection_c__ApplicationList_message_member_array[5] = {
  {
    "aid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ApplicationList, aid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eid_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ApplicationList, eid_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ApplicationList, eid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameter_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ApplicationList, parameter_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ApplicationList, parameter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__ApplicationList__rosidl_typesupport_introspection_c__ApplicationList_message_members = {
  "v2x_msgs__msg",  // message namespace
  "ApplicationList",  // message name
  5,  // number of fields
  sizeof(v2x_msgs__msg__ApplicationList),
  v2x_msgs__msg__ApplicationList__rosidl_typesupport_introspection_c__ApplicationList_message_member_array,  // message members
  v2x_msgs__msg__ApplicationList__rosidl_typesupport_introspection_c__ApplicationList_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__ApplicationList__rosidl_typesupport_introspection_c__ApplicationList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__ApplicationList__rosidl_typesupport_introspection_c__ApplicationList_message_type_support_handle = {
  0,
  &v2x_msgs__msg__ApplicationList__rosidl_typesupport_introspection_c__ApplicationList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ApplicationList)() {
  v2x_msgs__msg__ApplicationList__rosidl_typesupport_introspection_c__ApplicationList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DSRCApplicationEntityID)();
  v2x_msgs__msg__ApplicationList__rosidl_typesupport_introspection_c__ApplicationList_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DsrcEID)();
  v2x_msgs__msg__ApplicationList__rosidl_typesupport_introspection_c__ApplicationList_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ApplicationContextMark)();
  if (!v2x_msgs__msg__ApplicationList__rosidl_typesupport_introspection_c__ApplicationList_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__ApplicationList__rosidl_typesupport_introspection_c__ApplicationList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__ApplicationList__rosidl_typesupport_introspection_c__ApplicationList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
