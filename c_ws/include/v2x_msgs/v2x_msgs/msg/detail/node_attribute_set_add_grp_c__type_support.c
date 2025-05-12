// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/NodeAttributeSetAddGrpC.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/node_attribute_set_add_grp_c__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/node_attribute_set_add_grp_c__functions.h"
#include "v2x_msgs/msg/detail/node_attribute_set_add_grp_c__struct.h"


// Include directives for member types
// Member `ptv_request`
#include "v2x_msgs/msg/ptv_request_type.h"
// Member `ptv_request`
#include "v2x_msgs/msg/detail/ptv_request_type__rosidl_typesupport_introspection_c.h"
// Member `node_link`
#include "v2x_msgs/msg/node_link.h"
// Member `node_link`
#include "v2x_msgs/msg/detail/node_link__rosidl_typesupport_introspection_c.h"
// Member `node`
#include "v2x_msgs/msg/node.h"
// Member `node`
#include "v2x_msgs/msg/detail/node__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__NodeAttributeSetAddGrpC__rosidl_typesupport_introspection_c__NodeAttributeSetAddGrpC_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__NodeAttributeSetAddGrpC__init(message_memory);
}

void v2x_msgs__msg__NodeAttributeSetAddGrpC__rosidl_typesupport_introspection_c__NodeAttributeSetAddGrpC_fini_function(void * message_memory)
{
  v2x_msgs__msg__NodeAttributeSetAddGrpC__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__NodeAttributeSetAddGrpC__rosidl_typesupport_introspection_c__NodeAttributeSetAddGrpC_message_member_array[6] = {
  {
    "ptv_request_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetAddGrpC, ptv_request_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ptv_request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetAddGrpC, ptv_request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_link_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetAddGrpC, node_link_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetAddGrpC, node_link),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetAddGrpC, node_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__NodeAttributeSetAddGrpC, node),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__NodeAttributeSetAddGrpC__rosidl_typesupport_introspection_c__NodeAttributeSetAddGrpC_message_members = {
  "v2x_msgs__msg",  // message namespace
  "NodeAttributeSetAddGrpC",  // message name
  6,  // number of fields
  sizeof(v2x_msgs__msg__NodeAttributeSetAddGrpC),
  v2x_msgs__msg__NodeAttributeSetAddGrpC__rosidl_typesupport_introspection_c__NodeAttributeSetAddGrpC_message_member_array,  // message members
  v2x_msgs__msg__NodeAttributeSetAddGrpC__rosidl_typesupport_introspection_c__NodeAttributeSetAddGrpC_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__NodeAttributeSetAddGrpC__rosidl_typesupport_introspection_c__NodeAttributeSetAddGrpC_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__NodeAttributeSetAddGrpC__rosidl_typesupport_introspection_c__NodeAttributeSetAddGrpC_message_type_support_handle = {
  0,
  &v2x_msgs__msg__NodeAttributeSetAddGrpC__rosidl_typesupport_introspection_c__NodeAttributeSetAddGrpC_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, NodeAttributeSetAddGrpC)() {
  v2x_msgs__msg__NodeAttributeSetAddGrpC__rosidl_typesupport_introspection_c__NodeAttributeSetAddGrpC_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PtvRequestType)();
  v2x_msgs__msg__NodeAttributeSetAddGrpC__rosidl_typesupport_introspection_c__NodeAttributeSetAddGrpC_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, NodeLink)();
  v2x_msgs__msg__NodeAttributeSetAddGrpC__rosidl_typesupport_introspection_c__NodeAttributeSetAddGrpC_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Node)();
  if (!v2x_msgs__msg__NodeAttributeSetAddGrpC__rosidl_typesupport_introspection_c__NodeAttributeSetAddGrpC_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__NodeAttributeSetAddGrpC__rosidl_typesupport_introspection_c__NodeAttributeSetAddGrpC_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__NodeAttributeSetAddGrpC__rosidl_typesupport_introspection_c__NodeAttributeSetAddGrpC_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
