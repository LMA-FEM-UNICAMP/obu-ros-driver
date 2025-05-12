// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/MapData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/map_data__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/map_data__functions.h"
#include "v2x_msgs/msg/detail/map_data__struct.h"


// Include directives for member types
// Member `time_stamp`
#include "v2x_msgs/msg/minute_of_the_year.h"
// Member `time_stamp`
#include "v2x_msgs/msg/detail/minute_of_the_year__rosidl_typesupport_introspection_c.h"
// Member `msg_issue_revision`
#include "v2x_msgs/msg/msg_count.h"
// Member `msg_issue_revision`
#include "v2x_msgs/msg/detail/msg_count__rosidl_typesupport_introspection_c.h"
// Member `layer_type`
#include "v2x_msgs/msg/layer_type.h"
// Member `layer_type`
#include "v2x_msgs/msg/detail/layer_type__rosidl_typesupport_introspection_c.h"
// Member `layer_id`
#include "v2x_msgs/msg/layer_id.h"
// Member `layer_id`
#include "v2x_msgs/msg/detail/layer_id__rosidl_typesupport_introspection_c.h"
// Member `intersections`
#include "v2x_msgs/msg/intersection_geometry_list.h"
// Member `intersections`
#include "v2x_msgs/msg/detail/intersection_geometry_list__rosidl_typesupport_introspection_c.h"
// Member `road_segments`
#include "v2x_msgs/msg/road_segment_list.h"
// Member `road_segments`
#include "v2x_msgs/msg/detail/road_segment_list__rosidl_typesupport_introspection_c.h"
// Member `data_parameters`
#include "v2x_msgs/msg/data_parameters.h"
// Member `data_parameters`
#include "v2x_msgs/msg/detail/data_parameters__rosidl_typesupport_introspection_c.h"
// Member `restriction_list`
#include "v2x_msgs/msg/restriction_class_list.h"
// Member `restriction_list`
#include "v2x_msgs/msg/detail/restriction_class_list__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/reg_map_data.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_map_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__MapData__init(message_memory);
}

void v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_fini_function(void * message_memory)
{
  v2x_msgs__msg__MapData__fini(message_memory);
}

size_t v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__size_function__MapData__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__RegMapData__Sequence * member =
    (const v2x_msgs__msg__RegMapData__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__get_const_function__MapData__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__RegMapData__Sequence * member =
    (const v2x_msgs__msg__RegMapData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__get_function__MapData__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__RegMapData__Sequence * member =
    (v2x_msgs__msg__RegMapData__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__fetch_function__MapData__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__RegMapData * item =
    ((const v2x_msgs__msg__RegMapData *)
    v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__get_const_function__MapData__regional(untyped_member, index));
  v2x_msgs__msg__RegMapData * value =
    (v2x_msgs__msg__RegMapData *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__assign_function__MapData__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__RegMapData * item =
    ((v2x_msgs__msg__RegMapData *)
    v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__get_function__MapData__regional(untyped_member, index));
  const v2x_msgs__msg__RegMapData * value =
    (const v2x_msgs__msg__RegMapData *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__resize_function__MapData__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__RegMapData__Sequence * member =
    (v2x_msgs__msg__RegMapData__Sequence *)(untyped_member);
  v2x_msgs__msg__RegMapData__Sequence__fini(member);
  return v2x_msgs__msg__RegMapData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[17] = {
  {
    "time_stamp_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MapData, time_stamp_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__MapData, time_stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msg_issue_revision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MapData, msg_issue_revision),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "layer_type_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MapData, layer_type_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "layer_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MapData, layer_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "layer_id_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MapData, layer_id_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "layer_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MapData, layer_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "intersections_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MapData, intersections_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "intersections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MapData, intersections),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_segments_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MapData, road_segments_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MapData, road_segments),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_parameters_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MapData, data_parameters_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MapData, data_parameters),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "restriction_list_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MapData, restriction_list_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "restriction_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__MapData, restriction_list),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__MapData, regional_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__MapData, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__size_function__MapData__regional,  // size() function pointer
    v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__get_const_function__MapData__regional,  // get_const(index) function pointer
    v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__get_function__MapData__regional,  // get(index) function pointer
    v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__fetch_function__MapData__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__assign_function__MapData__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__resize_function__MapData__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_members = {
  "v2x_msgs__msg",  // message namespace
  "MapData",  // message name
  17,  // number of fields
  sizeof(v2x_msgs__msg__MapData),
  v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array,  // message members
  v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_type_support_handle = {
  0,
  &v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MapData)() {
  v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MinuteOfTheYear)();
  v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MsgCount)();
  v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LayerType)();
  v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, LayerID)();
  v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, IntersectionGeometryList)();
  v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RoadSegmentList)();
  v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DataParameters)();
  v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RestrictionClassList)();
  v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RegMapData)();
  if (!v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__MapData__rosidl_typesupport_introspection_c__MapData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
