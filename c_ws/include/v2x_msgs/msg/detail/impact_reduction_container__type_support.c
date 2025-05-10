// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/ImpactReductionContainer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/impact_reduction_container__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/impact_reduction_container__functions.h"
#include "v2x_msgs/msg/detail/impact_reduction_container__struct.h"


// Include directives for member types
// Member `height_lon_carr_left`
// Member `height_lon_carr_right`
#include "v2x_msgs/msg/height_lon_carr.h"
// Member `height_lon_carr_left`
// Member `height_lon_carr_right`
#include "v2x_msgs/msg/detail/height_lon_carr__rosidl_typesupport_introspection_c.h"
// Member `pos_lon_carr_left`
// Member `pos_lon_carr_right`
#include "v2x_msgs/msg/pos_lon_carr.h"
// Member `pos_lon_carr_left`
// Member `pos_lon_carr_right`
#include "v2x_msgs/msg/detail/pos_lon_carr__rosidl_typesupport_introspection_c.h"
// Member `position_of_pillars`
#include "v2x_msgs/msg/position_of_pillars.h"
// Member `position_of_pillars`
#include "v2x_msgs/msg/detail/position_of_pillars__rosidl_typesupport_introspection_c.h"
// Member `pos_cent_mass`
#include "v2x_msgs/msg/pos_cent_mass.h"
// Member `pos_cent_mass`
#include "v2x_msgs/msg/detail/pos_cent_mass__rosidl_typesupport_introspection_c.h"
// Member `wheel_base_vehicle`
#include "v2x_msgs/msg/wheel_base_vehicle.h"
// Member `wheel_base_vehicle`
#include "v2x_msgs/msg/detail/wheel_base_vehicle__rosidl_typesupport_introspection_c.h"
// Member `turning_radius`
#include "v2x_msgs/msg/turning_radius.h"
// Member `turning_radius`
#include "v2x_msgs/msg/detail/turning_radius__rosidl_typesupport_introspection_c.h"
// Member `pos_front_ax`
#include "v2x_msgs/msg/pos_front_ax.h"
// Member `pos_front_ax`
#include "v2x_msgs/msg/detail/pos_front_ax__rosidl_typesupport_introspection_c.h"
// Member `position_of_occupants`
#include "v2x_msgs/msg/position_of_occupants.h"
// Member `position_of_occupants`
#include "v2x_msgs/msg/detail/position_of_occupants__rosidl_typesupport_introspection_c.h"
// Member `vehicle_mass`
#include "v2x_msgs/msg/vehicle_mass.h"
// Member `vehicle_mass`
#include "v2x_msgs/msg/detail/vehicle_mass__rosidl_typesupport_introspection_c.h"
// Member `request_response_indication`
#include "v2x_msgs/msg/request_response_indication.h"
// Member `request_response_indication`
#include "v2x_msgs/msg/detail/request_response_indication__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__ImpactReductionContainer__init(message_memory);
}

void v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_fini_function(void * message_memory)
{
  v2x_msgs__msg__ImpactReductionContainer__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_member_array[12] = {
  {
    "height_lon_carr_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ImpactReductionContainer, height_lon_carr_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height_lon_carr_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ImpactReductionContainer, height_lon_carr_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_lon_carr_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ImpactReductionContainer, pos_lon_carr_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_lon_carr_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ImpactReductionContainer, pos_lon_carr_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_of_pillars",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ImpactReductionContainer, position_of_pillars),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_cent_mass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ImpactReductionContainer, pos_cent_mass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheel_base_vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ImpactReductionContainer, wheel_base_vehicle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turning_radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ImpactReductionContainer, turning_radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos_front_ax",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ImpactReductionContainer, pos_front_ax),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_of_occupants",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ImpactReductionContainer, position_of_occupants),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_mass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ImpactReductionContainer, vehicle_mass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_response_indication",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__ImpactReductionContainer, request_response_indication),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_members = {
  "v2x_msgs__msg",  // message namespace
  "ImpactReductionContainer",  // message name
  12,  // number of fields
  sizeof(v2x_msgs__msg__ImpactReductionContainer),
  v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_member_array,  // message members
  v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_type_support_handle = {
  0,
  &v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, ImpactReductionContainer)() {
  v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, HeightLonCarr)();
  v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, HeightLonCarr)();
  v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PosLonCarr)();
  v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PosLonCarr)();
  v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PositionOfPillars)();
  v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PosCentMass)();
  v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, WheelBaseVehicle)();
  v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, TurningRadius)();
  v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PosFrontAx)();
  v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, PositionOfOccupants)();
  v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, VehicleMass)();
  v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RequestResponseIndication)();
  if (!v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__ImpactReductionContainer__rosidl_typesupport_introspection_c__ImpactReductionContainer_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
