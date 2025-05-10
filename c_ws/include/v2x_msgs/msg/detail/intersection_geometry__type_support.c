// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/intersection_geometry__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/intersection_geometry__functions.h"
#include "v2x_msgs/msg/detail/intersection_geometry__struct.h"


// Include directives for member types
// Member `name`
#include "v2x_msgs/msg/descriptive_name.h"
// Member `name`
#include "v2x_msgs/msg/detail/descriptive_name__rosidl_typesupport_introspection_c.h"
// Member `id`
#include "v2x_msgs/msg/intersection_reference_id.h"
// Member `id`
#include "v2x_msgs/msg/detail/intersection_reference_id__rosidl_typesupport_introspection_c.h"
// Member `revision`
#include "v2x_msgs/msg/msg_count.h"
// Member `revision`
#include "v2x_msgs/msg/detail/msg_count__rosidl_typesupport_introspection_c.h"
// Member `ref_point`
#include "v2x_msgs/msg/position3_d.h"
// Member `ref_point`
#include "v2x_msgs/msg/detail/position3_d__rosidl_typesupport_introspection_c.h"
// Member `lane_width`
#include "v2x_msgs/msg/lane_width.h"
// Member `lane_width`
#include "v2x_msgs/msg/detail/lane_width__rosidl_typesupport_introspection_c.h"
// Member `speed_limits`
#include "v2x_msgs/msg/speed_limit_list.h"
// Member `speed_limits`
#include "v2x_msgs/msg/detail/speed_limit_list__rosidl_typesupport_introspection_c.h"
// Member `lane_set`
#include "v2x_msgs/msg/lane_list.h"
// Member `lane_set`
#include "v2x_msgs/msg/detail/lane_list__rosidl_typesupport_introspection_c.h"
// Member `preempt_priority_data`
#include "v2x_msgs/msg/preempt_priority_list.h"
// Member `preempt_priority_data`
#include "v2x_msgs/msg/detail/preempt_priority_list__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/reg_intersection_geometry.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_intersection_geometry__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__IntersectionGeometry__init(message_memory);
}

void v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_fini_function(void * message_memory)
{
  v2x_msgs__msg__IntersectionGeometry__fini(message_memory);
}

size_t v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__size_function__IntersectionGeometry__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__RegIntersectionGeometry__Sequence * member =
    (const v2x_msgs__msg__RegIntersectionGeometry__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__get_const_function__IntersectionGeometry__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__RegIntersectionGeometry__Sequence * member =
    (const v2x_msgs__msg__RegIntersectionGeometry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__get_function__IntersectionGeometry__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__RegIntersectionGeometry__Sequence * member =
    (v2x_msgs__msg__RegIntersectionGeometry__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__fetch_function__IntersectionGeometry__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__RegIntersectionGeometry * item =
    ((const v2x_msgs__msg__RegIntersectionGeometry *)
    v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__get_const_function__IntersectionGeometry__regional(untyped_member, index));
  v2x_msgs__msg__RegIntersectionGeometry * value =
    (v2x_msgs__msg__RegIntersectionGeometry *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__assign_function__IntersectionGeometry__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__RegIntersectionGeometry * item =
    ((v2x_msgs__msg__RegIntersectionGeometry *)
    v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__get_function__IntersectionGeometry__regional(untyped_member, index));
  const v2x_msgs__msg__RegIntersectionGeometry * value =
    (const v2x_msgs__msg__RegIntersectionGeometry *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__resize_function__IntersectionGeometry__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__RegIntersectionGeometry__Sequence * member =
    (v2x_msgs__msg__RegIntersectionGeometry__Sequence *)(untyped_member);
  v2x_msgs__msg__RegIntersectionGeometry__Sequence__fini(member);
  return v2x_msgs__msg__RegIntersectionGeometry__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[14] = {
  {
    "name_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionGeometry, name_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionGeometry, name),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__IntersectionGeometry, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "revision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionGeometry, revision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionGeometry, ref_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_width_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionGeometry, lane_width_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionGeometry, lane_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_limits_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionGeometry, speed_limits_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionGeometry, speed_limits),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionGeometry, lane_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "preempt_priority_data_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionGeometry, preempt_priority_data_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "preempt_priority_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__IntersectionGeometry, preempt_priority_data),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__IntersectionGeometry, regional_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__IntersectionGeometry, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__size_function__IntersectionGeometry__regional,  // size() function pointer
    v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__get_const_function__IntersectionGeometry__regional,  // get_const(index) function pointer
    v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__get_function__IntersectionGeometry__regional,  // get(index) function pointer
    v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__fetch_function__IntersectionGeometry__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__assign_function__IntersectionGeometry__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__resize_function__IntersectionGeometry__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_members = {
  "v2x_msgs__msg",  // message namespace
  "IntersectionGeometry",  // message name
  14,  // number of fields
  sizeof(v2x_msgs__msg__IntersectionGeometry),
  v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array,  // message members
  v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_type_support_handle = {
  0,
  &v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, IntersectionGeometry)() {
  v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DescriptiveName)();
  v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, IntersectionReferenceID)();
  v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MsgCount)();
  v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Position3D)();
  v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LaneWidth)();
  v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, SpeedLimitList)();
  v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LaneList)();
  v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PreemptPriorityList)();
  v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RegIntersectionGeometry)();
  if (!v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__IntersectionGeometry__rosidl_typesupport_introspection_c__IntersectionGeometry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
