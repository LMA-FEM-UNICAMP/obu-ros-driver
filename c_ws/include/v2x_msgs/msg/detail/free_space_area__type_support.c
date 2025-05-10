// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/FreeSpaceArea.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/free_space_area__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/free_space_area__functions.h"
#include "v2x_msgs/msg/detail/free_space_area__struct.h"


// Include directives for member types
// Member `free_space_polygon`
#include "v2x_msgs/msg/area_polygon.h"
// Member `free_space_polygon`
#include "v2x_msgs/msg/detail/area_polygon__rosidl_typesupport_introspection_c.h"
// Member `free_space_circular`
#include "v2x_msgs/msg/area_circular.h"
// Member `free_space_circular`
#include "v2x_msgs/msg/detail/area_circular__rosidl_typesupport_introspection_c.h"
// Member `free_space_ellipse`
#include "v2x_msgs/msg/area_ellipse.h"
// Member `free_space_ellipse`
#include "v2x_msgs/msg/detail/area_ellipse__rosidl_typesupport_introspection_c.h"
// Member `free_space_rectangle`
#include "v2x_msgs/msg/area_rectangle.h"
// Member `free_space_rectangle`
#include "v2x_msgs/msg/detail/area_rectangle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__FreeSpaceArea__rosidl_typesupport_introspection_c__FreeSpaceArea_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__FreeSpaceArea__init(message_memory);
}

void v2x_msgs__msg__FreeSpaceArea__rosidl_typesupport_introspection_c__FreeSpaceArea_fini_function(void * message_memory)
{
  v2x_msgs__msg__FreeSpaceArea__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__FreeSpaceArea__rosidl_typesupport_introspection_c__FreeSpaceArea_message_member_array[5] = {
  {
    "free_space_area_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__FreeSpaceArea, free_space_area_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "free_space_polygon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__FreeSpaceArea, free_space_polygon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "free_space_circular",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__FreeSpaceArea, free_space_circular),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "free_space_ellipse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__FreeSpaceArea, free_space_ellipse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "free_space_rectangle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__FreeSpaceArea, free_space_rectangle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__FreeSpaceArea__rosidl_typesupport_introspection_c__FreeSpaceArea_message_members = {
  "v2x_msgs__msg",  // message namespace
  "FreeSpaceArea",  // message name
  5,  // number of fields
  sizeof(v2x_msgs__msg__FreeSpaceArea),
  v2x_msgs__msg__FreeSpaceArea__rosidl_typesupport_introspection_c__FreeSpaceArea_message_member_array,  // message members
  v2x_msgs__msg__FreeSpaceArea__rosidl_typesupport_introspection_c__FreeSpaceArea_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__FreeSpaceArea__rosidl_typesupport_introspection_c__FreeSpaceArea_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__FreeSpaceArea__rosidl_typesupport_introspection_c__FreeSpaceArea_message_type_support_handle = {
  0,
  &v2x_msgs__msg__FreeSpaceArea__rosidl_typesupport_introspection_c__FreeSpaceArea_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, FreeSpaceArea)() {
  v2x_msgs__msg__FreeSpaceArea__rosidl_typesupport_introspection_c__FreeSpaceArea_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AreaPolygon)();
  v2x_msgs__msg__FreeSpaceArea__rosidl_typesupport_introspection_c__FreeSpaceArea_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AreaCircular)();
  v2x_msgs__msg__FreeSpaceArea__rosidl_typesupport_introspection_c__FreeSpaceArea_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AreaEllipse)();
  v2x_msgs__msg__FreeSpaceArea__rosidl_typesupport_introspection_c__FreeSpaceArea_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, AreaRectangle)();
  if (!v2x_msgs__msg__FreeSpaceArea__rosidl_typesupport_introspection_c__FreeSpaceArea_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__FreeSpaceArea__rosidl_typesupport_introspection_c__FreeSpaceArea_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__FreeSpaceArea__rosidl_typesupport_introspection_c__FreeSpaceArea_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
