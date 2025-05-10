// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/DDateTime.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/d_date_time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `year`
#include "v2x_msgs/msg/detail/d_year__functions.h"
// Member `month`
#include "v2x_msgs/msg/detail/d_month__functions.h"
// Member `day`
#include "v2x_msgs/msg/detail/d_day__functions.h"
// Member `hour`
#include "v2x_msgs/msg/detail/d_hour__functions.h"
// Member `minute`
#include "v2x_msgs/msg/detail/d_minute__functions.h"
// Member `second`
#include "v2x_msgs/msg/detail/d_second__functions.h"
// Member `offset`
#include "v2x_msgs/msg/detail/d_offset__functions.h"

bool
v2x_msgs__msg__DDateTime__init(v2x_msgs__msg__DDateTime * msg)
{
  if (!msg) {
    return false;
  }
  // year_present
  msg->year_present = false;
  // year
  if (!v2x_msgs__msg__DYear__init(&msg->year)) {
    v2x_msgs__msg__DDateTime__fini(msg);
    return false;
  }
  // month_present
  msg->month_present = false;
  // month
  if (!v2x_msgs__msg__DMonth__init(&msg->month)) {
    v2x_msgs__msg__DDateTime__fini(msg);
    return false;
  }
  // day_present
  msg->day_present = false;
  // day
  if (!v2x_msgs__msg__DDay__init(&msg->day)) {
    v2x_msgs__msg__DDateTime__fini(msg);
    return false;
  }
  // hour_present
  msg->hour_present = false;
  // hour
  if (!v2x_msgs__msg__DHour__init(&msg->hour)) {
    v2x_msgs__msg__DDateTime__fini(msg);
    return false;
  }
  // minute_present
  msg->minute_present = false;
  // minute
  if (!v2x_msgs__msg__DMinute__init(&msg->minute)) {
    v2x_msgs__msg__DDateTime__fini(msg);
    return false;
  }
  // second_present
  msg->second_present = false;
  // second
  if (!v2x_msgs__msg__DSecond__init(&msg->second)) {
    v2x_msgs__msg__DDateTime__fini(msg);
    return false;
  }
  // offset_present
  msg->offset_present = false;
  // offset
  if (!v2x_msgs__msg__DOffset__init(&msg->offset)) {
    v2x_msgs__msg__DDateTime__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__DDateTime__fini(v2x_msgs__msg__DDateTime * msg)
{
  if (!msg) {
    return;
  }
  // year_present
  // year
  v2x_msgs__msg__DYear__fini(&msg->year);
  // month_present
  // month
  v2x_msgs__msg__DMonth__fini(&msg->month);
  // day_present
  // day
  v2x_msgs__msg__DDay__fini(&msg->day);
  // hour_present
  // hour
  v2x_msgs__msg__DHour__fini(&msg->hour);
  // minute_present
  // minute
  v2x_msgs__msg__DMinute__fini(&msg->minute);
  // second_present
  // second
  v2x_msgs__msg__DSecond__fini(&msg->second);
  // offset_present
  // offset
  v2x_msgs__msg__DOffset__fini(&msg->offset);
}

bool
v2x_msgs__msg__DDateTime__are_equal(const v2x_msgs__msg__DDateTime * lhs, const v2x_msgs__msg__DDateTime * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // year_present
  if (lhs->year_present != rhs->year_present) {
    return false;
  }
  // year
  if (!v2x_msgs__msg__DYear__are_equal(
      &(lhs->year), &(rhs->year)))
  {
    return false;
  }
  // month_present
  if (lhs->month_present != rhs->month_present) {
    return false;
  }
  // month
  if (!v2x_msgs__msg__DMonth__are_equal(
      &(lhs->month), &(rhs->month)))
  {
    return false;
  }
  // day_present
  if (lhs->day_present != rhs->day_present) {
    return false;
  }
  // day
  if (!v2x_msgs__msg__DDay__are_equal(
      &(lhs->day), &(rhs->day)))
  {
    return false;
  }
  // hour_present
  if (lhs->hour_present != rhs->hour_present) {
    return false;
  }
  // hour
  if (!v2x_msgs__msg__DHour__are_equal(
      &(lhs->hour), &(rhs->hour)))
  {
    return false;
  }
  // minute_present
  if (lhs->minute_present != rhs->minute_present) {
    return false;
  }
  // minute
  if (!v2x_msgs__msg__DMinute__are_equal(
      &(lhs->minute), &(rhs->minute)))
  {
    return false;
  }
  // second_present
  if (lhs->second_present != rhs->second_present) {
    return false;
  }
  // second
  if (!v2x_msgs__msg__DSecond__are_equal(
      &(lhs->second), &(rhs->second)))
  {
    return false;
  }
  // offset_present
  if (lhs->offset_present != rhs->offset_present) {
    return false;
  }
  // offset
  if (!v2x_msgs__msg__DOffset__are_equal(
      &(lhs->offset), &(rhs->offset)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__DDateTime__copy(
  const v2x_msgs__msg__DDateTime * input,
  v2x_msgs__msg__DDateTime * output)
{
  if (!input || !output) {
    return false;
  }
  // year_present
  output->year_present = input->year_present;
  // year
  if (!v2x_msgs__msg__DYear__copy(
      &(input->year), &(output->year)))
  {
    return false;
  }
  // month_present
  output->month_present = input->month_present;
  // month
  if (!v2x_msgs__msg__DMonth__copy(
      &(input->month), &(output->month)))
  {
    return false;
  }
  // day_present
  output->day_present = input->day_present;
  // day
  if (!v2x_msgs__msg__DDay__copy(
      &(input->day), &(output->day)))
  {
    return false;
  }
  // hour_present
  output->hour_present = input->hour_present;
  // hour
  if (!v2x_msgs__msg__DHour__copy(
      &(input->hour), &(output->hour)))
  {
    return false;
  }
  // minute_present
  output->minute_present = input->minute_present;
  // minute
  if (!v2x_msgs__msg__DMinute__copy(
      &(input->minute), &(output->minute)))
  {
    return false;
  }
  // second_present
  output->second_present = input->second_present;
  // second
  if (!v2x_msgs__msg__DSecond__copy(
      &(input->second), &(output->second)))
  {
    return false;
  }
  // offset_present
  output->offset_present = input->offset_present;
  // offset
  if (!v2x_msgs__msg__DOffset__copy(
      &(input->offset), &(output->offset)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__DDateTime *
v2x_msgs__msg__DDateTime__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DDateTime * msg = (v2x_msgs__msg__DDateTime *)allocator.allocate(sizeof(v2x_msgs__msg__DDateTime), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__DDateTime));
  bool success = v2x_msgs__msg__DDateTime__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__DDateTime__destroy(v2x_msgs__msg__DDateTime * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__DDateTime__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__DDateTime__Sequence__init(v2x_msgs__msg__DDateTime__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DDateTime * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__DDateTime *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__DDateTime), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__DDateTime__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__DDateTime__fini(&data[i - 1]);
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
v2x_msgs__msg__DDateTime__Sequence__fini(v2x_msgs__msg__DDateTime__Sequence * array)
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
      v2x_msgs__msg__DDateTime__fini(&array->data[i]);
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

v2x_msgs__msg__DDateTime__Sequence *
v2x_msgs__msg__DDateTime__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DDateTime__Sequence * array = (v2x_msgs__msg__DDateTime__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__DDateTime__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__DDateTime__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__DDateTime__Sequence__destroy(v2x_msgs__msg__DDateTime__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__DDateTime__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__DDateTime__Sequence__are_equal(const v2x_msgs__msg__DDateTime__Sequence * lhs, const v2x_msgs__msg__DDateTime__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__DDateTime__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__DDateTime__Sequence__copy(
  const v2x_msgs__msg__DDateTime__Sequence * input,
  v2x_msgs__msg__DDateTime__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__DDateTime);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__DDateTime * data =
      (v2x_msgs__msg__DDateTime *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__DDateTime__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__DDateTime__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__DDateTime__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
