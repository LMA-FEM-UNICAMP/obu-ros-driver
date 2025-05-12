// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/PolygonalLine.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/polygonal_line__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/polygonal_line__functions.h"
#include "v2x_msgs/msg/detail/polygonal_line__struct.h"


// Include directives for member types
// Member `delta_positions`
#include "v2x_msgs/msg/delta_positions.h"
// Member `delta_positions`
#include "v2x_msgs/msg/detail/delta_positions__rosidl_typesupport_introspection_c.h"
// Member `delta_positions_with_altitude`
#include "v2x_msgs/msg/delta_reference_positions.h"
// Member `delta_positions_with_altitude`
#include "v2x_msgs/msg/detail/delta_reference_positions__rosidl_typesupport_introspection_c.h"
// Member `absolute_positions`
#include "v2x_msgs/msg/absolute_positions.h"
// Member `absolute_positions`
#include "v2x_msgs/msg/detail/absolute_positions__rosidl_typesupport_introspection_c.h"
// Member `absolute_positions_with_altitude`
#include "v2x_msgs/msg/absolute_positions_w_altitude.h"
// Member `absolute_positions_with_altitude`
#include "v2x_msgs/msg/detail/absolute_positions_w_altitude__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__PolygonalLine__rosidl_typesupport_introspection_c__PolygonalLine_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__PolygonalLine__init(message_memory);
}

void v2x_msgs__msg__PolygonalLine__rosidl_typesupport_introspection_c__PolygonalLine_fini_function(void * message_memory)
{
  v2x_msgs__msg__PolygonalLine__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__PolygonalLine__rosidl_typesupport_introspection_c__PolygonalLine_message_member_array[5] = {
  {
    "polygonal_line_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__PolygonalLine, polygonal_line_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "delta_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__PolygonalLine, delta_positions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "delta_positions_with_altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__PolygonalLine, delta_positions_with_altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "absolute_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__PolygonalLine, absolute_positions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "absolute_positions_with_altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__PolygonalLine, absolute_positions_with_altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__PolygonalLine__rosidl_typesupport_introspection_c__PolygonalLine_message_members = {
  "v2x_msgs__msg",  // message namespace
  "PolygonalLine",  // message name
  5,  // number of fields
  sizeof(v2x_msgs__msg__PolygonalLine),
  v2x_msgs__msg__PolygonalLine__rosidl_typesupport_introspection_c__PolygonalLine_message_member_array,  // message members
  v2x_msgs__msg__PolygonalLine__rosidl_typesupport_introspection_c__PolygonalLine_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__PolygonalLine__rosidl_typesupport_introspection_c__PolygonalLine_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__PolygonalLine__rosidl_typesupport_introspection_c__PolygonalLine_message_type_support_handle = {
  0,
  &v2x_msgs__msg__PolygonalLine__rosidl_typesupport_introspection_c__PolygonalLine_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PolygonalLine)() {
  v2x_msgs__msg__PolygonalLine__rosidl_typesupport_introspection_c__PolygonalLine_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DeltaPositions)();
  v2x_msgs__msg__PolygonalLine__rosidl_typesupport_introspection_c__PolygonalLine_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DeltaReferencePositions)();
  v2x_msgs__msg__PolygonalLine__rosidl_typesupport_introspection_c__PolygonalLine_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AbsolutePositions)();
  v2x_msgs__msg__PolygonalLine__rosidl_typesupport_introspection_c__PolygonalLine_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AbsolutePositionsWAltitude)();
  if (!v2x_msgs__msg__PolygonalLine__rosidl_typesupport_introspection_c__PolygonalLine_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__PolygonalLine__rosidl_typesupport_introspection_c__PolygonalLine_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__PolygonalLine__rosidl_typesupport_introspection_c__PolygonalLine_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
