// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/SignalRequestPackage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/signal_request_package__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/signal_request_package__functions.h"
#include "v2x_msgs/msg/detail/signal_request_package__struct.h"


// Include directives for member types
// Member `request`
#include "v2x_msgs/msg/signal_request.h"
// Member `request`
#include "v2x_msgs/msg/detail/signal_request__rosidl_typesupport_introspection_c.h"
// Member `minute`
#include "v2x_msgs/msg/minute_of_the_year.h"
// Member `minute`
#include "v2x_msgs/msg/detail/minute_of_the_year__rosidl_typesupport_introspection_c.h"
// Member `second`
// Member `duration`
#include "v2x_msgs/msg/d_second.h"
// Member `second`
// Member `duration`
#include "v2x_msgs/msg/detail/d_second__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/reg_signal_request_package.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_signal_request_package__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__SignalRequestPackage__init(message_memory);
}

void v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_fini_function(void * message_memory)
{
  v2x_msgs__msg__SignalRequestPackage__fini(message_memory);
}

size_t v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__size_function__SignalRequestPackage__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__RegSignalRequestPackage__Sequence * member =
    (const v2x_msgs__msg__RegSignalRequestPackage__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__get_const_function__SignalRequestPackage__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__RegSignalRequestPackage__Sequence * member =
    (const v2x_msgs__msg__RegSignalRequestPackage__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__get_function__SignalRequestPackage__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__RegSignalRequestPackage__Sequence * member =
    (v2x_msgs__msg__RegSignalRequestPackage__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__fetch_function__SignalRequestPackage__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__RegSignalRequestPackage * item =
    ((const v2x_msgs__msg__RegSignalRequestPackage *)
    v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__get_const_function__SignalRequestPackage__regional(untyped_member, index));
  v2x_msgs__msg__RegSignalRequestPackage * value =
    (v2x_msgs__msg__RegSignalRequestPackage *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__assign_function__SignalRequestPackage__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__RegSignalRequestPackage * item =
    ((v2x_msgs__msg__RegSignalRequestPackage *)
    v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__get_function__SignalRequestPackage__regional(untyped_member, index));
  const v2x_msgs__msg__RegSignalRequestPackage * value =
    (const v2x_msgs__msg__RegSignalRequestPackage *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__resize_function__SignalRequestPackage__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__RegSignalRequestPackage__Sequence * member =
    (v2x_msgs__msg__RegSignalRequestPackage__Sequence *)(untyped_member);
  v2x_msgs__msg__RegSignalRequestPackage__Sequence__fini(member);
  return v2x_msgs__msg__RegSignalRequestPackage__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_member_array[9] = {
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalRequestPackage, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "minute_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalRequestPackage, minute_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "minute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalRequestPackage, minute),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalRequestPackage, second_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "second",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalRequestPackage, second),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalRequestPackage, duration_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalRequestPackage, duration),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__SignalRequestPackage, regional_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__SignalRequestPackage, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__size_function__SignalRequestPackage__regional,  // size() function pointer
    v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__get_const_function__SignalRequestPackage__regional,  // get_const(index) function pointer
    v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__get_function__SignalRequestPackage__regional,  // get(index) function pointer
    v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__fetch_function__SignalRequestPackage__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__assign_function__SignalRequestPackage__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__resize_function__SignalRequestPackage__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_members = {
  "v2x_msgs__msg",  // message namespace
  "SignalRequestPackage",  // message name
  9,  // number of fields
  sizeof(v2x_msgs__msg__SignalRequestPackage),
  v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_member_array,  // message members
  v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_type_support_handle = {
  0,
  &v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SignalRequestPackage)() {
  v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SignalRequest)();
  v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MinuteOfTheYear)();
  v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DSecond)();
  v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DSecond)();
  v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RegSignalRequestPackage)();
  if (!v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__SignalRequestPackage__rosidl_typesupport_introspection_c__SignalRequestPackage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
