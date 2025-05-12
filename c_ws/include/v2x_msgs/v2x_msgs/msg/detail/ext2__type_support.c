// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/Ext2.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/ext2__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/ext2__functions.h"
#include "v2x_msgs/msg/detail/ext2__struct.h"


// Include directives for member types
// Member `extension`
#include "v2x_msgs/msg/ext3.h"
// Member `extension`
#include "v2x_msgs/msg/detail/ext3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__Ext2__rosidl_typesupport_introspection_c__Ext2_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__Ext2__init(message_memory);
}

void v2x_msgs__msg__Ext2__rosidl_typesupport_introspection_c__Ext2_fini_function(void * message_memory)
{
  v2x_msgs__msg__Ext2__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__Ext2__rosidl_typesupport_introspection_c__Ext2_message_member_array[3] = {
  {
    "ext2_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__Ext2, ext2_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "content",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__Ext2, content),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "extension",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__Ext2, extension),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__Ext2__rosidl_typesupport_introspection_c__Ext2_message_members = {
  "v2x_msgs__msg",  // message namespace
  "Ext2",  // message name
  3,  // number of fields
  sizeof(v2x_msgs__msg__Ext2),
  v2x_msgs__msg__Ext2__rosidl_typesupport_introspection_c__Ext2_message_member_array,  // message members
  v2x_msgs__msg__Ext2__rosidl_typesupport_introspection_c__Ext2_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__Ext2__rosidl_typesupport_introspection_c__Ext2_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__Ext2__rosidl_typesupport_introspection_c__Ext2_message_type_support_handle = {
  0,
  &v2x_msgs__msg__Ext2__rosidl_typesupport_introspection_c__Ext2_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Ext2)() {
  v2x_msgs__msg__Ext2__rosidl_typesupport_introspection_c__Ext2_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Ext3)();
  if (!v2x_msgs__msg__Ext2__rosidl_typesupport_introspection_c__Ext2_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__Ext2__rosidl_typesupport_introspection_c__Ext2_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__Ext2__rosidl_typesupport_introspection_c__Ext2_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
