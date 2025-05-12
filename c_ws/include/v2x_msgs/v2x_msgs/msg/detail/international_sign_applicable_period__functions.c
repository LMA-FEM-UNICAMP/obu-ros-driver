// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/InternationalSignApplicablePeriod.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/international_sign_applicable_period__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `date_range_start_month_day`
// Member `date_range_end_month_day`
#include "v2x_msgs/msg/detail/month_day__functions.h"
// Member `repeating_period_day_types`
#include "v2x_msgs/msg/detail/repeating_period_day_types__functions.h"
// Member `time_range_start_time`
// Member `time_range_end_time`
// Member `duration_hour_minute`
#include "v2x_msgs/msg/detail/hours_minutes__functions.h"
// Member `date_range_of_week`
#include "v2x_msgs/msg/detail/day_of_week__functions.h"

bool
v2x_msgs__msg__InternationalSignApplicablePeriod__init(v2x_msgs__msg__InternationalSignApplicablePeriod * msg)
{
  if (!msg) {
    return false;
  }
  // year_range_start_year
  // year_range_end_year
  // date_range_start_month_day
  if (!v2x_msgs__msg__MonthDay__init(&msg->date_range_start_month_day)) {
    v2x_msgs__msg__InternationalSignApplicablePeriod__fini(msg);
    return false;
  }
  // date_range_end_month_day
  if (!v2x_msgs__msg__MonthDay__init(&msg->date_range_end_month_day)) {
    v2x_msgs__msg__InternationalSignApplicablePeriod__fini(msg);
    return false;
  }
  // repeating_period_day_types_present
  msg->repeating_period_day_types_present = false;
  // repeating_period_day_types
  if (!v2x_msgs__msg__RepeatingPeriodDayTypes__init(&msg->repeating_period_day_types)) {
    v2x_msgs__msg__InternationalSignApplicablePeriod__fini(msg);
    return false;
  }
  // time_range_start_time
  if (!v2x_msgs__msg__HoursMinutes__init(&msg->time_range_start_time)) {
    v2x_msgs__msg__InternationalSignApplicablePeriod__fini(msg);
    return false;
  }
  // time_range_end_time
  if (!v2x_msgs__msg__HoursMinutes__init(&msg->time_range_end_time)) {
    v2x_msgs__msg__InternationalSignApplicablePeriod__fini(msg);
    return false;
  }
  // date_range_of_week_present
  msg->date_range_of_week_present = false;
  // date_range_of_week
  if (!v2x_msgs__msg__DayOfWeek__init(&msg->date_range_of_week)) {
    v2x_msgs__msg__InternationalSignApplicablePeriod__fini(msg);
    return false;
  }
  // duration_hour_minute_present
  msg->duration_hour_minute_present = false;
  // duration_hour_minute
  if (!v2x_msgs__msg__HoursMinutes__init(&msg->duration_hour_minute)) {
    v2x_msgs__msg__InternationalSignApplicablePeriod__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__InternationalSignApplicablePeriod__fini(v2x_msgs__msg__InternationalSignApplicablePeriod * msg)
{
  if (!msg) {
    return;
  }
  // year_range_start_year
  // year_range_end_year
  // date_range_start_month_day
  v2x_msgs__msg__MonthDay__fini(&msg->date_range_start_month_day);
  // date_range_end_month_day
  v2x_msgs__msg__MonthDay__fini(&msg->date_range_end_month_day);
  // repeating_period_day_types_present
  // repeating_period_day_types
  v2x_msgs__msg__RepeatingPeriodDayTypes__fini(&msg->repeating_period_day_types);
  // time_range_start_time
  v2x_msgs__msg__HoursMinutes__fini(&msg->time_range_start_time);
  // time_range_end_time
  v2x_msgs__msg__HoursMinutes__fini(&msg->time_range_end_time);
  // date_range_of_week_present
  // date_range_of_week
  v2x_msgs__msg__DayOfWeek__fini(&msg->date_range_of_week);
  // duration_hour_minute_present
  // duration_hour_minute
  v2x_msgs__msg__HoursMinutes__fini(&msg->duration_hour_minute);
}

bool
v2x_msgs__msg__InternationalSignApplicablePeriod__are_equal(const v2x_msgs__msg__InternationalSignApplicablePeriod * lhs, const v2x_msgs__msg__InternationalSignApplicablePeriod * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // year_range_start_year
  if (lhs->year_range_start_year != rhs->year_range_start_year) {
    return false;
  }
  // year_range_end_year
  if (lhs->year_range_end_year != rhs->year_range_end_year) {
    return false;
  }
  // date_range_start_month_day
  if (!v2x_msgs__msg__MonthDay__are_equal(
      &(lhs->date_range_start_month_day), &(rhs->date_range_start_month_day)))
  {
    return false;
  }
  // date_range_end_month_day
  if (!v2x_msgs__msg__MonthDay__are_equal(
      &(lhs->date_range_end_month_day), &(rhs->date_range_end_month_day)))
  {
    return false;
  }
  // repeating_period_day_types_present
  if (lhs->repeating_period_day_types_present != rhs->repeating_period_day_types_present) {
    return false;
  }
  // repeating_period_day_types
  if (!v2x_msgs__msg__RepeatingPeriodDayTypes__are_equal(
      &(lhs->repeating_period_day_types), &(rhs->repeating_period_day_types)))
  {
    return false;
  }
  // time_range_start_time
  if (!v2x_msgs__msg__HoursMinutes__are_equal(
      &(lhs->time_range_start_time), &(rhs->time_range_start_time)))
  {
    return false;
  }
  // time_range_end_time
  if (!v2x_msgs__msg__HoursMinutes__are_equal(
      &(lhs->time_range_end_time), &(rhs->time_range_end_time)))
  {
    return false;
  }
  // date_range_of_week_present
  if (lhs->date_range_of_week_present != rhs->date_range_of_week_present) {
    return false;
  }
  // date_range_of_week
  if (!v2x_msgs__msg__DayOfWeek__are_equal(
      &(lhs->date_range_of_week), &(rhs->date_range_of_week)))
  {
    return false;
  }
  // duration_hour_minute_present
  if (lhs->duration_hour_minute_present != rhs->duration_hour_minute_present) {
    return false;
  }
  // duration_hour_minute
  if (!v2x_msgs__msg__HoursMinutes__are_equal(
      &(lhs->duration_hour_minute), &(rhs->duration_hour_minute)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__InternationalSignApplicablePeriod__copy(
  const v2x_msgs__msg__InternationalSignApplicablePeriod * input,
  v2x_msgs__msg__InternationalSignApplicablePeriod * output)
{
  if (!input || !output) {
    return false;
  }
  // year_range_start_year
  output->year_range_start_year = input->year_range_start_year;
  // year_range_end_year
  output->year_range_end_year = input->year_range_end_year;
  // date_range_start_month_day
  if (!v2x_msgs__msg__MonthDay__copy(
      &(input->date_range_start_month_day), &(output->date_range_start_month_day)))
  {
    return false;
  }
  // date_range_end_month_day
  if (!v2x_msgs__msg__MonthDay__copy(
      &(input->date_range_end_month_day), &(output->date_range_end_month_day)))
  {
    return false;
  }
  // repeating_period_day_types_present
  output->repeating_period_day_types_present = input->repeating_period_day_types_present;
  // repeating_period_day_types
  if (!v2x_msgs__msg__RepeatingPeriodDayTypes__copy(
      &(input->repeating_period_day_types), &(output->repeating_period_day_types)))
  {
    return false;
  }
  // time_range_start_time
  if (!v2x_msgs__msg__HoursMinutes__copy(
      &(input->time_range_start_time), &(output->time_range_start_time)))
  {
    return false;
  }
  // time_range_end_time
  if (!v2x_msgs__msg__HoursMinutes__copy(
      &(input->time_range_end_time), &(output->time_range_end_time)))
  {
    return false;
  }
  // date_range_of_week_present
  output->date_range_of_week_present = input->date_range_of_week_present;
  // date_range_of_week
  if (!v2x_msgs__msg__DayOfWeek__copy(
      &(input->date_range_of_week), &(output->date_range_of_week)))
  {
    return false;
  }
  // duration_hour_minute_present
  output->duration_hour_minute_present = input->duration_hour_minute_present;
  // duration_hour_minute
  if (!v2x_msgs__msg__HoursMinutes__copy(
      &(input->duration_hour_minute), &(output->duration_hour_minute)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__InternationalSignApplicablePeriod *
v2x_msgs__msg__InternationalSignApplicablePeriod__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__InternationalSignApplicablePeriod * msg = (v2x_msgs__msg__InternationalSignApplicablePeriod *)allocator.allocate(sizeof(v2x_msgs__msg__InternationalSignApplicablePeriod), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__InternationalSignApplicablePeriod));
  bool success = v2x_msgs__msg__InternationalSignApplicablePeriod__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__InternationalSignApplicablePeriod__destroy(v2x_msgs__msg__InternationalSignApplicablePeriod * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__InternationalSignApplicablePeriod__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence__init(v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__InternationalSignApplicablePeriod * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__InternationalSignApplicablePeriod *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__InternationalSignApplicablePeriod), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__InternationalSignApplicablePeriod__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__InternationalSignApplicablePeriod__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence__fini(v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_msgs__msg__InternationalSignApplicablePeriod__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence *
v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence * array = (v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence__destroy(v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence__are_equal(const v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence * lhs, const v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__InternationalSignApplicablePeriod__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence__copy(
  const v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence * input,
  v2x_msgs__msg__InternationalSignApplicablePeriod__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__InternationalSignApplicablePeriod);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__InternationalSignApplicablePeriod * data =
      (v2x_msgs__msg__InternationalSignApplicablePeriod *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__InternationalSignApplicablePeriod__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__InternationalSignApplicablePeriod__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__InternationalSignApplicablePeriod__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
