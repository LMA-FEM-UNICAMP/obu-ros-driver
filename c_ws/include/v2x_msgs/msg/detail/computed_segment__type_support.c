// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/ComputedSegment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/computed_segment__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/computed_segment__functions.h"
#include "v2x_msgs/msg/detail/computed_segment__struct.h"


// Include directives for member types
// Member `zone_id`
#include "v2x_msgs/msg/zid.h"
// Member `zone_id`
#include "v2x_msgs/msg/detail/zid__rosidl_typesupport_introspection_c.h"
// Member `lane_number`
#include "v2x_msgs/msg/lane_position.h"
// Member `lane_number`
#include "v2x_msgs/msg/detail/lane_position__rosidl_typesupport_introspection_c.h"
// Member `lane_width`
#include "v2x_msgs/msg/ivi_lane_width.h"
// Member `lane_width`
#include "v2x_msgs/msg/detail/ivi_lane_width__rosidl_typesupport_introspection_c.h"
// Member `offset_position`
#include "v2x_msgs/msg/delta_reference_position.h"
// Member `offset_position`
#include "v2x_msgs/msg/detail/delta_reference_position__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__ComputedSegment__rosidl_typesupport_introspection_c__ComputedSegment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__ComputedSegment__init(message_memory);
}

void v2x_msgs__msg__ComputedSegment__rosidl_typesupport_introspection_c__ComputedSegment_fini_function(void * message_memory)
{
  v2x_msgs__msg__ComputedSegment__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__ComputedSegment__rosidl_typesupport_introspection_c__ComputedSegment_message_member_array[7] = {
  {
    "zone_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedSegment, zone_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedSegment, lane_number),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__ComputedSegment, lane_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_distance_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedSegment, offset_distance_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedSegment, offset_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_position_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedSegment, offset_position_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ComputedSegment, offset_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__ComputedSegment__rosidl_typesupport_introspection_c__ComputedSegment_message_members = {
  "v2x_msgs__msg",  // message namespace
  "ComputedSegment",  // message name
  7,  // number of fields
  sizeof(v2x_msgs__msg__ComputedSegment),
  v2x_msgs__msg__ComputedSegment__rosidl_typesupport_introspection_c__ComputedSegment_message_member_array,  // message members
  v2x_msgs__msg__ComputedSegment__rosidl_typesupport_introspection_c__ComputedSegment_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__ComputedSegment__rosidl_typesupport_introspection_c__ComputedSegment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__ComputedSegment__rosidl_typesupport_introspection_c__ComputedSegment_message_type_support_handle = {
  0,
  &v2x_msgs__msg__ComputedSegment__rosidl_typesupport_introspection_c__ComputedSegment_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ComputedSegment)() {
  v2x_msgs__msg__ComputedSegment__rosidl_typesupport_introspection_c__ComputedSegment_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, Zid)();
  v2x_msgs__msg__ComputedSegment__rosidl_typesupport_introspection_c__ComputedSegment_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LanePosition)();
  v2x_msgs__msg__ComputedSegment__rosidl_typesupport_introspection_c__ComputedSegment_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, IviLaneWidth)();
  v2x_msgs__msg__ComputedSegment__rosidl_typesupport_introspection_c__ComputedSegment_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DeltaReferencePosition)();
  if (!v2x_msgs__msg__ComputedSegment__rosidl_typesupport_introspection_c__ComputedSegment_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__ComputedSegment__rosidl_typesupport_introspection_c__ComputedSegment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__ComputedSegment__rosidl_typesupport_introspection_c__ComputedSegment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
