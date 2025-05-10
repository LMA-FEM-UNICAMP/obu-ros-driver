// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/GddAttribute.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/gdd_attribute__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/gdd_attribute__functions.h"
#include "v2x_msgs/msg/detail/gdd_attribute__struct.h"


// Include directives for member types
// Member `dtm`
#include "v2x_msgs/msg/international_sign_applicable_period.h"
// Member `dtm`
#include "v2x_msgs/msg/detail/international_sign_applicable_period__rosidl_typesupport_introspection_c.h"
// Member `edt`
#include "v2x_msgs/msg/international_sign_exempted_applicable_period.h"
// Member `edt`
#include "v2x_msgs/msg/detail/international_sign_exempted_applicable_period__rosidl_typesupport_introspection_c.h"
// Member `dfl`
#include "v2x_msgs/msg/international_sign_directional_flow_of_lane.h"
// Member `dfl`
#include "v2x_msgs/msg/detail/international_sign_directional_flow_of_lane__rosidl_typesupport_introspection_c.h"
// Member `ved`
#include "v2x_msgs/msg/international_sign_applicable_vehicle_dimensions.h"
// Member `ved`
#include "v2x_msgs/msg/detail/international_sign_applicable_vehicle_dimensions__rosidl_typesupport_introspection_c.h"
// Member `spe`
#include "v2x_msgs/msg/international_sign_speed_limits.h"
// Member `spe`
#include "v2x_msgs/msg/detail/international_sign_speed_limits__rosidl_typesupport_introspection_c.h"
// Member `roi`
#include "v2x_msgs/msg/international_sign_rate_of_incline.h"
// Member `roi`
#include "v2x_msgs/msg/detail/international_sign_rate_of_incline__rosidl_typesupport_introspection_c.h"
// Member `dbv`
#include "v2x_msgs/msg/international_sign_distance_between_vehicles.h"
// Member `dbv`
#include "v2x_msgs/msg/detail/international_sign_distance_between_vehicles__rosidl_typesupport_introspection_c.h"
// Member `ddd`
#include "v2x_msgs/msg/international_sign_destination_information.h"
// Member `ddd`
#include "v2x_msgs/msg/detail/international_sign_destination_information__rosidl_typesupport_introspection_c.h"
// Member `set`
#include "v2x_msgs/msg/international_sign_section.h"
// Member `set`
#include "v2x_msgs/msg/detail/international_sign_section__rosidl_typesupport_introspection_c.h"
// Member `nol`
#include "v2x_msgs/msg/international_sign_number_of_lane.h"
// Member `nol`
#include "v2x_msgs/msg/detail/international_sign_number_of_lane__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__GddAttribute__init(message_memory);
}

void v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_fini_function(void * message_memory)
{
  v2x_msgs__msg__GddAttribute__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_member_array[11] = {
  {
    "gdd_attribute_container_select",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GddAttribute, gdd_attribute_container_select),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dtm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GddAttribute, dtm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "edt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GddAttribute, edt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dfl",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GddAttribute, dfl),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ved",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GddAttribute, ved),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spe",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GddAttribute, spe),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GddAttribute, roi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dbv",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GddAttribute, dbv),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ddd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GddAttribute, ddd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GddAttribute, set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nol",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__GddAttribute, nol),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_members = {
  "v2x_msgs__msg",  // message namespace
  "GddAttribute",  // message name
  11,  // number of fields
  sizeof(v2x_msgs__msg__GddAttribute),
  v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_member_array,  // message members
  v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_type_support_handle = {
  0,
  &v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, GddAttribute)() {
  v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, InternationalSignApplicablePeriod)();
  v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, InternationalSignExemptedApplicablePeriod)();
  v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, InternationalSignDirectionalFlowOfLane)();
  v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, InternationalSignApplicableVehicleDimensions)();
  v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, InternationalSignSpeedLimits)();
  v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, InternationalSignRateOfIncline)();
  v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, InternationalSignDistanceBetweenVehicles)();
  v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, InternationalSignDestinationInformation)();
  v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, InternationalSignSection)();
  v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, InternationalSignNumberOfLane)();
  if (!v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__GddAttribute__rosidl_typesupport_introspection_c__GddAttribute_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
