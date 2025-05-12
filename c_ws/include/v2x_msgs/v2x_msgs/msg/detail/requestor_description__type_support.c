// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/RequestorDescription.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/requestor_description__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/requestor_description__functions.h"
#include "v2x_msgs/msg/detail/requestor_description__struct.h"


// Include directives for member types
// Member `id`
#include "v2x_msgs/msg/vehicle_id.h"
// Member `id`
#include "v2x_msgs/msg/detail/vehicle_id__rosidl_typesupport_introspection_c.h"
// Member `type`
#include "v2x_msgs/msg/requestor_type.h"
// Member `type`
#include "v2x_msgs/msg/detail/requestor_type__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "v2x_msgs/msg/requestor_position_vector.h"
// Member `position`
#include "v2x_msgs/msg/detail/requestor_position_vector__rosidl_typesupport_introspection_c.h"
// Member `name`
// Member `route_name`
#include "v2x_msgs/msg/descriptive_name.h"
// Member `name`
// Member `route_name`
#include "v2x_msgs/msg/detail/descriptive_name__rosidl_typesupport_introspection_c.h"
// Member `transit_status`
#include "v2x_msgs/msg/transit_vehicle_status.h"
// Member `transit_status`
#include "v2x_msgs/msg/detail/transit_vehicle_status__rosidl_typesupport_introspection_c.h"
// Member `transit_occupancy`
#include "v2x_msgs/msg/transit_vehicle_occupancy.h"
// Member `transit_occupancy`
#include "v2x_msgs/msg/detail/transit_vehicle_occupancy__rosidl_typesupport_introspection_c.h"
// Member `transit_schedule`
#include "v2x_msgs/msg/delta_time.h"
// Member `transit_schedule`
#include "v2x_msgs/msg/detail/delta_time__rosidl_typesupport_introspection_c.h"
// Member `regional`
#include "v2x_msgs/msg/reg_requestor_description.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_requestor_description__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__RequestorDescription__init(message_memory);
}

void v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_fini_function(void * message_memory)
{
  v2x_msgs__msg__RequestorDescription__fini(message_memory);
}

size_t v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__size_function__RequestorDescription__regional(
  const void * untyped_member)
{
  const v2x_msgs__msg__RegRequestorDescription__Sequence * member =
    (const v2x_msgs__msg__RegRequestorDescription__Sequence *)(untyped_member);
  return member->size;
}

const void * v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__get_const_function__RequestorDescription__regional(
  const void * untyped_member, size_t index)
{
  const v2x_msgs__msg__RegRequestorDescription__Sequence * member =
    (const v2x_msgs__msg__RegRequestorDescription__Sequence *)(untyped_member);
  return &member->data[index];
}

void * v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__get_function__RequestorDescription__regional(
  void * untyped_member, size_t index)
{
  v2x_msgs__msg__RegRequestorDescription__Sequence * member =
    (v2x_msgs__msg__RegRequestorDescription__Sequence *)(untyped_member);
  return &member->data[index];
}

void v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__fetch_function__RequestorDescription__regional(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const v2x_msgs__msg__RegRequestorDescription * item =
    ((const v2x_msgs__msg__RegRequestorDescription *)
    v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__get_const_function__RequestorDescription__regional(untyped_member, index));
  v2x_msgs__msg__RegRequestorDescription * value =
    (v2x_msgs__msg__RegRequestorDescription *)(untyped_value);
  *value = *item;
}

void v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__assign_function__RequestorDescription__regional(
  void * untyped_member, size_t index, const void * untyped_value)
{
  v2x_msgs__msg__RegRequestorDescription * item =
    ((v2x_msgs__msg__RegRequestorDescription *)
    v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__get_function__RequestorDescription__regional(untyped_member, index));
  const v2x_msgs__msg__RegRequestorDescription * value =
    (const v2x_msgs__msg__RegRequestorDescription *)(untyped_value);
  *item = *value;
}

bool v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__resize_function__RequestorDescription__regional(
  void * untyped_member, size_t size)
{
  v2x_msgs__msg__RegRequestorDescription__Sequence * member =
    (v2x_msgs__msg__RegRequestorDescription__Sequence *)(untyped_member);
  v2x_msgs__msg__RegRequestorDescription__Sequence__fini(member);
  return v2x_msgs__msg__RegRequestorDescription__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_member_array[17] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorDescription, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorDescription, type_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorDescription, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorDescription, position_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorDescription, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorDescription, name_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__RequestorDescription, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_name_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorDescription, route_name_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorDescription, route_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transit_status_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorDescription, transit_status_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transit_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorDescription, transit_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transit_occupancy_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorDescription, transit_occupancy_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transit_occupancy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorDescription, transit_occupancy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transit_schedule_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorDescription, transit_schedule_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transit_schedule",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__RequestorDescription, transit_schedule),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__RequestorDescription, regional_present),  // bytes offset in struct
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
    offsetof(v2x_msgs__msg__RequestorDescription, regional),  // bytes offset in struct
    NULL,  // default value
    v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__size_function__RequestorDescription__regional,  // size() function pointer
    v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__get_const_function__RequestorDescription__regional,  // get_const(index) function pointer
    v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__get_function__RequestorDescription__regional,  // get(index) function pointer
    v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__fetch_function__RequestorDescription__regional,  // fetch(index, &value) function pointer
    v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__assign_function__RequestorDescription__regional,  // assign(index, value) function pointer
    v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__resize_function__RequestorDescription__regional  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_members = {
  "v2x_msgs__msg",  // message namespace
  "RequestorDescription",  // message name
  17,  // number of fields
  sizeof(v2x_msgs__msg__RequestorDescription),
  v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_member_array,  // message members
  v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_type_support_handle = {
  0,
  &v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RequestorDescription)() {
  v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleID)();
  v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RequestorType)();
  v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RequestorPositionVector)();
  v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DescriptiveName)();
  v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DescriptiveName)();
  v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, TransitVehicleStatus)();
  v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, TransitVehicleOccupancy)();
  v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DeltaTime)();
  v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RegRequestorDescription)();
  if (!v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__RequestorDescription__rosidl_typesupport_introspection_c__RequestorDescription_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
