// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/SignalStatusPackage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/signal_status_package__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/signal_status_package__functions.h"
#include "v2x_msgs/msg/detail/signal_status_package__struct.h"


// Include directives for member types
// Member `requester`
#include "v2x_msgs/msg/signal_requester_info.h"
// Member `requester`
#include "v2x_msgs/msg/detail/signal_requester_info__rosidl_typesupport_introspection_c.h"
// Member `inbound_on`
// Member `outbound_on`
#include "v2x_msgs/msg/intersection_access_point.h"
// Member `inbound_on`
// Member `outbound_on`
#include "v2x_msgs/msg/detail/intersection_access_point__rosidl_typesupport_introspection_c.h"
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
// Member `status`
#include "v2x_msgs/msg/prioritization_response_status.h"
// Member `status`
#include "v2x_msgs/msg/detail/prioritization_response_status__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/reg_signal_status_package.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_signal_status_package__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__SignalStatusPackage__init(message_memory);
}

void v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_fini_function(void * message_memory)
{
  v2x_msgs__msg__SignalStatusPackage__fini(message_memory);
}

size_t v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__size_function__SignalStatusPackage__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__RegSignalStatusPackage__Sequence * member =
    (const v2x_msgs__msg__RegSignalStatusPackage__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__get_const_function__SignalStatusPackage__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__RegSignalStatusPackage__Sequence * member =
    (const v2x_msgs__msg__RegSignalStatusPackage__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__get_function__SignalStatusPackage__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__RegSignalStatusPackage__Sequence * member =
    (v2x_msgs__msg__RegSignalStatusPackage__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__fetch_function__SignalStatusPackage__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__RegSignalStatusPackage * item =
    ((const v2x_msgs__msg__RegSignalStatusPackage *)
    v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__get_const_function__SignalStatusPackage__regional(untyped_member, index));
  v2x_msgs__msg__RegSignalStatusPackage * value =
    (v2x_msgs__msg__RegSignalStatusPackage *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__assign_function__SignalStatusPackage__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__RegSignalStatusPackage * item =
    ((v2x_msgs__msg__RegSignalStatusPackage *)
    v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__get_function__SignalStatusPackage__regional(untyped_member, index));
  const v2x_msgs__msg__RegSignalStatusPackage * value =
    (const v2x_msgs__msg__RegSignalStatusPackage *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__resize_function__SignalStatusPackage__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__RegSignalStatusPackage__Sequence * member =
    (v2x_msgs__msg__RegSignalStatusPackage__Sequence *)(untyped_member);
  v2x_msgs__msg__RegSignalStatusPackage__Sequence__fini(member);
  return v2x_msgs__msg__RegSignalStatusPackage__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_message_member_array[14] = {
  {
    "requester_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalStatusPackage, requester_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requester",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalStatusPackage, requester),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inbound_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalStatusPackage, inbound_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "outbound_on_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalStatusPackage, outbound_on_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "outbound_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalStatusPackage, outbound_on),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__SignalStatusPackage, minute_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__SignalStatusPackage, minute),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__SignalStatusPackage, second_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__SignalStatusPackage, second),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__SignalStatusPackage, duration_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__SignalStatusPackage, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__SignalStatusPackage, status),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__SignalStatusPackage, regional_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__SignalStatusPackage, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__size_function__SignalStatusPackage__regional,  // size() function pointer
    v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__get_const_function__SignalStatusPackage__regional,  // get_const(index) function pointer
    v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__get_function__SignalStatusPackage__regional,  // get(index) function pointer
    v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__fetch_function__SignalStatusPackage__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__assign_function__SignalStatusPackage__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__resize_function__SignalStatusPackage__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_message_members = {
  "v2x_msgs__msg",  // message namespace
  "SignalStatusPackage",  // message name
  14,  // number of fields
  sizeof(v2x_msgs__msg__SignalStatusPackage),
  v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_message_member_array,  // message members
  v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_message_type_support_handle = {
  0,
  &v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SignalStatusPackage)() {
  v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SignalRequesterInfo)();
  v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, IntersectionAccessPoint)();
  v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, IntersectionAccessPoint)();
  v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MinuteOfTheYear)();
  v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DSecond)();
  v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DSecond)();
  v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PrioritizationResponseStatus)();
  v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RegSignalStatusPackage)();
  if (!v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__SignalStatusPackage__rosidl_typesupport_introspection_c__SignalStatusPackage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
