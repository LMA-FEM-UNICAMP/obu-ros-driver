// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from v2x_msgs:msg/InternationalSignApplicablePeriod.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "v2x_msgs/msg/detail/international_sign_applicable_period__rosidl_typesupport_introspection_c.h"
#include "v2x_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "v2x_msgs/msg/detail/international_sign_applicable_period__functions.h"
#include "v2x_msgs/msg/detail/international_sign_applicable_period__struct.h"


// Include directives for member types
// Member `date_range_start_month_day`
// Member `date_range_end_month_day`
#include "v2x_msgs/msg/month_day.h"
// Member `date_range_start_month_day`
// Member `date_range_end_month_day`
#include "v2x_msgs/msg/detail/month_day__rosidl_typesupport_introspection_c.h"
// Member `repeating_period_day_types`
#include "v2x_msgs/msg/repeating_period_day_types.h"
// Member `repeating_period_day_types`
#include "v2x_msgs/msg/detail/repeating_period_day_types__rosidl_typesupport_introspection_c.h"
// Member `time_range_start_time`
// Member `time_range_end_time`
// Member `duration_hour_minute`
#include "v2x_msgs/msg/hours_minutes.h"
// Member `time_range_start_time`
// Member `time_range_end_time`
// Member `duration_hour_minute`
#include "v2x_msgs/msg/detail/hours_minutes__rosidl_typesupport_introspection_c.h"
// Member `date_range_of_week`
#include "v2x_msgs/msg/day_of_week.h"
// Member `date_range_of_week`
#include "v2x_msgs/msg/detail/day_of_week__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  v2x_msgs__msg__InternationalSignApplicablePeriod__init(message_memory);
}

void v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_fini_function(void * message_memory)
{
  v2x_msgs__msg__InternationalSignApplicablePeriod__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_message_member_array[12] = {
  {
    "year_range_start_year",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__InternationalSignApplicablePeriod, year_range_start_year),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "year_range_end_year",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__InternationalSignApplicablePeriod, year_range_end_year),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "date_range_start_month_day",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__InternationalSignApplicablePeriod, date_range_start_month_day),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "date_range_end_month_day",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__InternationalSignApplicablePeriod, date_range_end_month_day),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "repeating_period_day_types_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__InternationalSignApplicablePeriod, repeating_period_day_types_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "repeating_period_day_types",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__InternationalSignApplicablePeriod, repeating_period_day_types),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_range_start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__InternationalSignApplicablePeriod, time_range_start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_range_end_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__InternationalSignApplicablePeriod, time_range_end_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "date_range_of_week_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__InternationalSignApplicablePeriod, date_range_of_week_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "date_range_of_week",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__InternationalSignApplicablePeriod, date_range_of_week),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration_hour_minute_present",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__InternationalSignApplicablePeriod, duration_hour_minute_present),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration_hour_minute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(v2x_msgs__msg__InternationalSignApplicablePeriod, duration_hour_minute),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_message_members = {
  "v2x_msgs__msg",  // message namespace
  "InternationalSignApplicablePeriod",  // message name
  12,  // number of fields
  sizeof(v2x_msgs__msg__InternationalSignApplicablePeriod),
  v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_message_member_array,  // message members
  v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_init_function,  // function to initialize message memory (memory has to be allocated)
  v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_message_type_support_handle = {
  0,
  &v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_v2x_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, InternationalSignApplicablePeriod)() {
  v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MonthDay)();
  v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, MonthDay)();
  v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, RepeatingPeriodDayTypes)();
  v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, HoursMinutes)();
  v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, HoursMinutes)();
  v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, DayOfWeek)();
  v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, v2x_msgs, msg, HoursMinutes)();
  if (!v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_message_type_support_handle.typesupport_identifier) {
    v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &v2x_msgs__msg__InternationalSignApplicablePeriod__rosidl_typesupport_introspection_c__InternationalSignApplicablePeriod_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
