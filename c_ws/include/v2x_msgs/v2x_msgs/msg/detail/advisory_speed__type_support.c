// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/AdvisorySpeed.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/advisory_speed__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/advisory_speed__functions.h"
#include "v2x_msgs/msg/detail/advisory_speed__struct.h"


// Include directives for member types
// Member `type`
#include "v2x_msgs/msg/advisory_speed_type.h"
// Member `type`
#include "v2x_msgs/msg/detail/advisory_speed_type__rosidl_typesupport_introspection_c.h"
// Member `speed`
#include "v2x_msgs/msg/speed_advice.h"
// Member `speed`
#include "v2x_msgs/msg/detail/speed_advice__rosidl_typesupport_introspection_c.h"
// Member `confidence`
#include "v2x_msgs/msg/speed_confidence_dsrc.h"
// Member `confidence`
#include "v2x_msgs/msg/detail/speed_confidence_dsrc__rosidl_typesupport_introspection_c.h"
// Member `distance`
#include "v2x_msgs/msg/zone_length.h"
// Member `distance`
#include "v2x_msgs/msg/detail/zone_length__rosidl_typesupport_introspection_c.h"
// Member `rest_class`
#include "v2x_msgs/msg/restriction_class_id.h"
// Member `rest_class`
#include "v2x_msgs/msg/detail/restriction_class_id__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/reg_advisory_speed.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_advisory_speed__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__AdvisorySpeed__init(message_memory);
}

void v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_fini_function(void * message_memory)
{
  v2x_msgs__msg__AdvisorySpeed__fini(message_memory);
}

size_t v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__size_function__AdvisorySpeed__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__RegAdvisorySpeed__Sequence * member =
    (const v2x_msgs__msg__RegAdvisorySpeed__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__get_const_function__AdvisorySpeed__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__RegAdvisorySpeed__Sequence * member =
    (const v2x_msgs__msg__RegAdvisorySpeed__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__get_function__AdvisorySpeed__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__RegAdvisorySpeed__Sequence * member =
    (v2x_msgs__msg__RegAdvisorySpeed__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__fetch_function__AdvisorySpeed__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__RegAdvisorySpeed * item =
    ((const v2x_msgs__msg__RegAdvisorySpeed *)
    v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__get_const_function__AdvisorySpeed__regional(untyped_member, index));
  v2x_msgs__msg__RegAdvisorySpeed * value =
    (v2x_msgs__msg__RegAdvisorySpeed *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__assign_function__AdvisorySpeed__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__RegAdvisorySpeed * item =
    ((v2x_msgs__msg__RegAdvisorySpeed *)
    v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__get_function__AdvisorySpeed__regional(untyped_member, index));
  const v2x_msgs__msg__RegAdvisorySpeed * value =
    (const v2x_msgs__msg__RegAdvisorySpeed *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__resize_function__AdvisorySpeed__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__RegAdvisorySpeed__Sequence * member =
    (v2x_msgs__msg__RegAdvisorySpeed__Sequence *)(untyped_member);
  v2x_msgs__msg__RegAdvisorySpeed__Sequence__fini(member);
  return v2x_msgs__msg__RegAdvisorySpeed__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_message_member_array[11] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AdvisorySpeed, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AdvisorySpeed, speed_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AdvisorySpeed, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AdvisorySpeed, confidence_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AdvisorySpeed, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AdvisorySpeed, distance_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AdvisorySpeed, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "class_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AdvisorySpeed, class_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rest_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__AdvisorySpeed, rest_class),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__AdvisorySpeed, regional_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__AdvisorySpeed, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__size_function__AdvisorySpeed__regional,  // size() function pointer
    v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__get_const_function__AdvisorySpeed__regional,  // get_const(index) function pointer
    v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__get_function__AdvisorySpeed__regional,  // get(index) function pointer
    v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__fetch_function__AdvisorySpeed__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__assign_function__AdvisorySpeed__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__resize_function__AdvisorySpeed__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_message_members = {
  "v2x_msgs__msg",  // message namespace
  "AdvisorySpeed",  // message name
  11,  // number of fields
  sizeof(v2x_msgs__msg__AdvisorySpeed),
  v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_message_member_array,  // message members
  v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_message_type_support_handle = {
  0,
  &v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AdvisorySpeed)() {
  v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AdvisorySpeedType)();
  v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SpeedAdvice)();
  v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SpeedConfidenceDSRC)();
  v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ZoneLength)();
  v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RestrictionClassID)();
  v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RegAdvisorySpeed)();
  if (!v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__AdvisorySpeed__rosidl_typesupport_introspection_c__AdvisorySpeed_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
