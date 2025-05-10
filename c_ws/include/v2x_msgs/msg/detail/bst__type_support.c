// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/BST.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/bst__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/bst__functions.h"
#include "v2x_msgs/msg/detail/bst__struct.h"


// Include directives for member types
// Member `rsu`
#include "v2x_msgs/msg/beacon_id.h"
// Member `rsu`
#include "v2x_msgs/msg/detail/beacon_id__rosidl_typesupport_introspection_c.h"
// Member `time`
#include "v2x_msgs/msg/time.h"
// Member `time`
#include "v2x_msgs/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `profile`
// Member `list`
#include "v2x_msgs/msg/profile.h"
// Member `profile`
// Member `list`
#include "v2x_msgs/msg/detail/profile__rosidl_typesupport_introspection_c.h"
// Member `mand_applications`
// Member `nonmand_applications`
#include "v2x_msgs/msg/application_list.h"
// Member `mand_applications`
// Member `nonmand_applications`
#include "v2x_msgs/msg/detail/application_list__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__BST__init(message_memory);
}

void v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_fini_function(void * message_memory)
{
  v2x_msgs__msg__BST__fini(message_memory);
}

size_t v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__size_function__BST__list(
  const void * untyped_member)
{
  const v2x_msgs__msg__Profile__Sequence * member =
    (const v2x_msgs__msg__Profile__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__get_const_function__BST__list(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__Profile__Sequence * member =
    (const v2x_msgs__msg__Profile__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__get_function__BST__list(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__Profile__Sequence * member =
    (v2x_msgs__msg__Profile__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__fetch_function__BST__list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__Profile * item =
    ((const v2x_msgs__msg__Profile *)
    v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__get_const_function__BST__list(untyped_member, index));
  v2x_msgs__msg__Profile * value =
    (v2x_msgs__msg__Profile *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__assign_function__BST__list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__Profile * item =
    ((v2x_msgs__msg__Profile *)
    v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__get_function__BST__list(untyped_member, index));
  const v2x_msgs__msg__Profile * value =
    (const v2x_msgs__msg__Profile *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__resize_function__BST__list(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__Profile__Sequence * member =
    (v2x_msgs__msg__Profile__Sequence *)(untyped_member);
  v2x_msgs__msg__Profile__Sequence__fini(member);
  return v2x_msgs__msg__Profile__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_message_member_array[7] = {
  {
    "rsu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BST, rsu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BST, time),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__BST, profile),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mand_applications",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BST, mand_applications),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nonmand_applications_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BST, nonmand_applications_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nonmand_applications",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BST, nonmand_applications),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__BST, list),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__size_function__BST__list,  // size() function pointer
    v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__get_const_function__BST__list,  // get_const(index) function pointer
    v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__get_function__BST__list,  // get(index) function pointer
    v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__fetch_function__BST__list,  // fetch(index, &value) function pointer
    v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__assign_function__BST__list,  // assign(index, value) function pointer
    v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__resize_function__BST__list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_message_members = {
  "v2x_msgs__msg",  // message namespace
  "BST",  // message name
  7,  // number of fields
  sizeof(v2x_msgs__msg__BST),
  v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_message_member_array,  // message members
  v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_message_type_support_handle = {
  0,
  &v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, BST)() {
  v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, BeaconID)();
  v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Time)();
  v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Profile)();
  v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ApplicationList)();
  v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ApplicationList)();
  v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Profile)();
  if (!v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__BST__rosidl_typesupport_introspection_c__BST_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
