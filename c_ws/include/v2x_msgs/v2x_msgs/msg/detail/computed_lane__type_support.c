// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/ComputedLane.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/computed_lane__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/computed_lane__functions.h"
#include "v2x_msgs/msg/detail/computed_lane__struct.h"


// Include directives for member types
// Member `reference_lane_id`
#include "v2x_msgs/msg/lane_id.h"
// Member `reference_lane_id`
#include "v2x_msgs/msg/detail/lane_id__rosidl_typesupport_introspection_c.h"
// Member `small_x`
// Member `small_y`
#include "v2x_msgs/msg/driven_line_offset_sm.h"
// Member `small_x`
// Member `small_y`
#include "v2x_msgs/msg/detail/driven_line_offset_sm__rosidl_typesupport_introspection_c.h"
// Member `large_x`
// Member `large_y`
#include "v2x_msgs/msg/driven_line_offset_lg.h"
// Member `large_x`
// Member `large_y`
#include "v2x_msgs/msg/detail/driven_line_offset_lg__rosidl_typesupport_introspection_c.h"
// Member `rotate_xy`
#include "v2x_msgs/msg/angle.h"
// Member `rotate_xy`
#include "v2x_msgs/msg/detail/angle__rosidl_typesupport_introspection_c.h"
// Member `scale_xaxis`
// Member `scale_yaxis`
#include "v2x_msgs/msg/scale_b12.h"
// Member `scale_xaxis`
// Member `scale_yaxis`
#include "v2x_msgs/msg/detail/scale_b12__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/antenna_offset_set.h"
// Member `regional`
#include "v2x_msgs/msg/detail/antenna_offset_set__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__ComputedLane__init(message_memory);
}

void v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_fini_function(void * message_memory)
{
  v2x_msgs__msg__ComputedLane__fini(message_memory);
}

size_t v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__size_function__ComputedLane__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__AntennaOffsetSet__Sequence * member =
    (const v2x_msgs__msg__AntennaOffsetSet__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__get_const_function__ComputedLane__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__AntennaOffsetSet__Sequence * member =
    (const v2x_msgs__msg__AntennaOffsetSet__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__get_function__ComputedLane__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__AntennaOffsetSet__Sequence * member =
    (v2x_msgs__msg__AntennaOffsetSet__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__fetch_function__ComputedLane__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__AntennaOffsetSet * item =
    ((const v2x_msgs__msg__AntennaOffsetSet *)
    v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__get_const_function__ComputedLane__regional(untyped_member, index));
  v2x_msgs__msg__AntennaOffsetSet * value =
    (v2x_msgs__msg__AntennaOffsetSet *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__assign_function__ComputedLane__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__AntennaOffsetSet * item =
    ((v2x_msgs__msg__AntennaOffsetSet *)
    v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__get_function__ComputedLane__regional(untyped_member, index));
  const v2x_msgs__msg__AntennaOffsetSet * value =
    (const v2x_msgs__msg__AntennaOffsetSet *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__resize_function__ComputedLane__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__AntennaOffsetSet__Sequence * member =
    (v2x_msgs__msg__AntennaOffsetSet__Sequence *)(untyped_member);
  v2x_msgs__msg__AntennaOffsetSet__Sequence__fini(member);
  return v2x_msgs__msg__AntennaOffsetSet__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_member_array[15] = {
  {
    "reference_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedLane, reference_lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_xaxis_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedLane, offset_xaxis_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "small_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedLane, small_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "large_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedLane, large_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_yaxis_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedLane, offset_yaxis_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "small_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedLane, small_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "large_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedLane, large_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotate_xy_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedLane, rotate_xy_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotate_xy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedLane, rotate_xy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scale_xaxis_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedLane, scale_xaxis_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scale_xaxis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedLane, scale_xaxis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scale_yaxis_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedLane, scale_yaxis_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scale_yaxis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedLane, scale_yaxis),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__ComputedLane, regional_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__ComputedLane, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__size_function__ComputedLane__regional,  // size() function pointer
    v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__get_const_function__ComputedLane__regional,  // get_const(index) function pointer
    v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__get_function__ComputedLane__regional,  // get(index) function pointer
    v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__fetch_function__ComputedLane__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__assign_function__ComputedLane__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__resize_function__ComputedLane__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_members = {
  "v2x_msgs__msg",  // message namespace
  "ComputedLane",  // message name
  15,  // number of fields
  sizeof(v2x_msgs__msg__ComputedLane),
  v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_member_array,  // message members
  v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_type_support_handle = {
  0,
  &v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ComputedLane)() {
  v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LaneID)();
  v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DrivenLineOffsetSm)();
  v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DrivenLineOffsetLg)();
  v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DrivenLineOffsetSm)();
  v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DrivenLineOffsetLg)();
  v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Angle)();
  v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ScaleB12)();
  v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ScaleB12)();
  v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AntennaOffsetSet)();
  if (!v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__ComputedLane__rosidl_typesupport_introspection_c__ComputedLane_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
