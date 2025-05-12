// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/SignalStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/signal_status__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/signal_status__functions.h"
#include "v2x_msgs/msg/detail/signal_status__struct.h"


// Include directives for member types
// Member `sequence_number`
#include "v2x_msgs/msg/msg_count.h"
// Member `sequence_number`
#include "v2x_msgs/msg/detail/msg_count__rosidl_typesupport_introspection_c.h"
// Member `id`
#include "v2x_msgs/msg/intersection_reference_id.h"
// Member `id`
#include "v2x_msgs/msg/detail/intersection_reference_id__rosidl_typesupport_introspection_c.h"
// Member `sig_status`
#include "v2x_msgs/msg/signal_status_package_list.h"
// Member `sig_status`
#include "v2x_msgs/msg/detail/signal_status_package_list__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/reg_signal_status.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_signal_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__SignalStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__SignalStatus__init(message_memory);
}

void v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__SignalStatus_fini_function(void * message_memory)
{
  v2x_msgs__msg__SignalStatus__fini(message_memory);
}

size_t v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__size_function__SignalStatus__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__RegSignalStatus__Sequence * member =
    (const v2x_msgs__msg__RegSignalStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__get_const_function__SignalStatus__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__RegSignalStatus__Sequence * member =
    (const v2x_msgs__msg__RegSignalStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__get_function__SignalStatus__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__RegSignalStatus__Sequence * member =
    (v2x_msgs__msg__RegSignalStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__fetch_function__SignalStatus__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__RegSignalStatus * item =
    ((const v2x_msgs__msg__RegSignalStatus *)
    v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__get_const_function__SignalStatus__regional(untyped_member, index));
  v2x_msgs__msg__RegSignalStatus * value =
    (v2x_msgs__msg__RegSignalStatus *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__assign_function__SignalStatus__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__RegSignalStatus * item =
    ((v2x_msgs__msg__RegSignalStatus *)
    v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__get_function__SignalStatus__regional(untyped_member, index));
  const v2x_msgs__msg__RegSignalStatus * value =
    (const v2x_msgs__msg__RegSignalStatus *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__resize_function__SignalStatus__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__RegSignalStatus__Sequence * member =
    (v2x_msgs__msg__RegSignalStatus__Sequence *)(untyped_member);
  v2x_msgs__msg__RegSignalStatus__Sequence__fini(member);
  return v2x_msgs__msg__RegSignalStatus__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__SignalStatus_message_member_array[5] = {
  {
    "sequence_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalStatus, sequence_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalStatus, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sig_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalStatus, sig_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "regional_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalStatus, regional_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "regional",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalStatus, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__size_function__SignalStatus__regional,  // size() function pointer
    v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__get_const_function__SignalStatus__regional,  // get_const(index) function pointer
    v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__get_function__SignalStatus__regional,  // get(index) function pointer
    v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__fetch_function__SignalStatus__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__assign_function__SignalStatus__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__resize_function__SignalStatus__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__SignalStatus_message_members = {
  "v2x_msgs__msg",  // message namespace
  "SignalStatus",  // message name
  5,  // number of fields
  sizeof(v2x_msgs__msg__SignalStatus),
  v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__SignalStatus_message_member_array,  // message members
  v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__SignalStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__SignalStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__SignalStatus_message_type_support_handle = {
  0,
  &v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__SignalStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SignalStatus)() {
  v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__SignalStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MsgCount)();
  v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__SignalStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, IntersectionReferenceID)();
  v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__SignalStatus_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SignalStatusPackageList)();
  v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__SignalStatus_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RegSignalStatus)();
  if (!v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__SignalStatus_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__SignalStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__SignalStatus__rosidl_typesupport_introspection_c__SignalStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
