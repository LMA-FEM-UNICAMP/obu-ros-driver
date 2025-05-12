// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/RTCMcorrections.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/rtc_mcorrections__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/rtc_mcorrections__functions.h"
#include "v2x_msgs/msg/detail/rtc_mcorrections__struct.h"


// Include directives for member types
// Member `msg_cnt`
#include "v2x_msgs/msg/msg_count.h"
// Member `msg_cnt`
#include "v2x_msgs/msg/detail/msg_count__rosidl_typesupport_introspection_c.h"
// Member `rev`
#include "v2x_msgs/msg/rtcm_revision.h"
// Member `rev`
#include "v2x_msgs/msg/detail/rtcm_revision__rosidl_typesupport_introspection_c.h"
// Member `time_stamp`
#include "v2x_msgs/msg/minute_of_the_year.h"
// Member `time_stamp`
#include "v2x_msgs/msg/detail/minute_of_the_year__rosidl_typesupport_introspection_c.h"
// Member `anchor_point`
#include "v2x_msgs/msg/full_position_vector.h"
// Member `anchor_point`
#include "v2x_msgs/msg/detail/full_position_vector__rosidl_typesupport_introspection_c.h"
// Member `rtcm_header`
#include "v2x_msgs/msg/rtc_mheader.h"
// Member `rtcm_header`
#include "v2x_msgs/msg/detail/rtc_mheader__rosidl_typesupport_introspection_c.h"
// Member `msgs`
#include "v2x_msgs/msg/rtc_mmessage_list.h"
// Member `msgs`
#include "v2x_msgs/msg/detail/rtc_mmessage_list__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/reg_rtc_mcorrections.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_rtc_mcorrections__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__RTCMcorrections__init(message_memory);
}

void v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_fini_function(void * message_memory)
{
  v2x_msgs__msg__RTCMcorrections__fini(message_memory);
}

size_t v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__size_function__RTCMcorrections__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__RegRTCMcorrections__Sequence * member =
    (const v2x_msgs__msg__RegRTCMcorrections__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__get_const_function__RTCMcorrections__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__RegRTCMcorrections__Sequence * member =
    (const v2x_msgs__msg__RegRTCMcorrections__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__get_function__RTCMcorrections__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__RegRTCMcorrections__Sequence * member =
    (v2x_msgs__msg__RegRTCMcorrections__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__fetch_function__RTCMcorrections__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__RegRTCMcorrections * item =
    ((const v2x_msgs__msg__RegRTCMcorrections *)
    v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__get_const_function__RTCMcorrections__regional(untyped_member, index));
  v2x_msgs__msg__RegRTCMcorrections * value =
    (v2x_msgs__msg__RegRTCMcorrections *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__assign_function__RTCMcorrections__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__RegRTCMcorrections * item =
    ((v2x_msgs__msg__RegRTCMcorrections *)
    v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__get_function__RTCMcorrections__regional(untyped_member, index));
  const v2x_msgs__msg__RegRTCMcorrections * value =
    (const v2x_msgs__msg__RegRTCMcorrections *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__resize_function__RTCMcorrections__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__RegRTCMcorrections__Sequence * member =
    (v2x_msgs__msg__RegRTCMcorrections__Sequence *)(untyped_member);
  v2x_msgs__msg__RegRTCMcorrections__Sequence__fini(member);
  return v2x_msgs__msg__RegRTCMcorrections__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_message_member_array[11] = {
  {
    "msg_cnt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RTCMcorrections, msg_cnt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rev",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RTCMcorrections, rev),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_stamp_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RTCMcorrections, time_stamp_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RTCMcorrections, time_stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "anchor_point_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RTCMcorrections, anchor_point_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "anchor_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RTCMcorrections, anchor_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rtcm_header_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RTCMcorrections, rtcm_header_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rtcm_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RTCMcorrections, rtcm_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msgs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RTCMcorrections, msgs),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__RTCMcorrections, regional_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__RTCMcorrections, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__size_function__RTCMcorrections__regional,  // size() function pointer
    v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__get_const_function__RTCMcorrections__regional,  // get_const(index) function pointer
    v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__get_function__RTCMcorrections__regional,  // get(index) function pointer
    v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__fetch_function__RTCMcorrections__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__assign_function__RTCMcorrections__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__resize_function__RTCMcorrections__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_message_members = {
  "v2x_msgs__msg",  // message namespace
  "RTCMcorrections",  // message name
  11,  // number of fields
  sizeof(v2x_msgs__msg__RTCMcorrections),
  v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_message_member_array,  // message members
  v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_message_type_support_handle = {
  0,
  &v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RTCMcorrections)() {
  v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MsgCount)();
  v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RTCMRevision)();
  v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MinuteOfTheYear)();
  v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, FullPositionVector)();
  v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RTCMheader)();
  v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RTCMmessageList)();
  v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RegRTCMcorrections)();
  if (!v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__RTCMcorrections__rosidl_typesupport_introspection_c__RTCMcorrections_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
