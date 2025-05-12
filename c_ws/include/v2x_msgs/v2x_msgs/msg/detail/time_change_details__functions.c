// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/TimeChangeDetails.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/time_change_details__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `start_time`
// Member `min_end_time`
// Member `max_end_time`
// Member `likely_time`
// Member `next_time`
#include "v2x_msgs/msg/detail/time_mark__functions.h"
// Member `confidence`
#include "v2x_msgs/msg/detail/time_interval_confidence__functions.h"

bool
v2x_msgs__msg__TimeChangeDetails__init(v2x_msgs__msg__TimeChangeDetails * msg)
{
  if (!msg) {
    return false;
  }
  // start_time_present
  msg->start_time_present = false;
  // start_time
  if (!v2x_msgs__msg__TimeMark__init(&msg->start_time)) {
    v2x_msgs__msg__TimeChangeDetails__fini(msg);
    return false;
  }
  // min_end_time
  if (!v2x_msgs__msg__TimeMark__init(&msg->min_end_time)) {
    v2x_msgs__msg__TimeChangeDetails__fini(msg);
    return false;
  }
  // max_end_time_present
  msg->max_end_time_present = false;
  // max_end_time
  if (!v2x_msgs__msg__TimeMark__init(&msg->max_end_time)) {
    v2x_msgs__msg__TimeChangeDetails__fini(msg);
    return false;
  }
  // likely_time_present
  msg->likely_time_present = false;
  // likely_time
  if (!v2x_msgs__msg__TimeMark__init(&msg->likely_time)) {
    v2x_msgs__msg__TimeChangeDetails__fini(msg);
    return false;
  }
  // confidence_present
  msg->confidence_present = false;
  // confidence
  if (!v2x_msgs__msg__TimeIntervalConfidence__init(&msg->confidence)) {
    v2x_msgs__msg__TimeChangeDetails__fini(msg);
    return false;
  }
  // next_time_present
  msg->next_time_present = false;
  // next_time
  if (!v2x_msgs__msg__TimeMark__init(&msg->next_time)) {
    v2x_msgs__msg__TimeChangeDetails__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__TimeChangeDetails__fini(v2x_msgs__msg__TimeChangeDetails * msg)
{
  if (!msg) {
    return;
  }
  // start_time_present
  // start_time
  v2x_msgs__msg__TimeMark__fini(&msg->start_time);
  // min_end_time
  v2x_msgs__msg__TimeMark__fini(&msg->min_end_time);
  // max_end_time_present
  // max_end_time
  v2x_msgs__msg__TimeMark__fini(&msg->max_end_time);
  // likely_time_present
  // likely_time
  v2x_msgs__msg__TimeMark__fini(&msg->likely_time);
  // confidence_present
  // confidence
  v2x_msgs__msg__TimeIntervalConfidence__fini(&msg->confidence);
  // next_time_present
  // next_time
  v2x_msgs__msg__TimeMark__fini(&msg->next_time);
}

bool
v2x_msgs__msg__TimeChangeDetails__are_equal(const v2x_msgs__msg__TimeChangeDetails * lhs, const v2x_msgs__msg__TimeChangeDetails * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start_time_present
  if (lhs->start_time_present != rhs->start_time_present) {
    return false;
  }
  // start_time
  if (!v2x_msgs__msg__TimeMark__are_equal(
      &(lhs->start_time), &(rhs->start_time)))
  {
    return false;
  }
  // min_end_time
  if (!v2x_msgs__msg__TimeMark__are_equal(
      &(lhs->min_end_time), &(rhs->min_end_time)))
  {
    return false;
  }
  // max_end_time_present
  if (lhs->max_end_time_present != rhs->max_end_time_present) {
    return false;
  }
  // max_end_time
  if (!v2x_msgs__msg__TimeMark__are_equal(
      &(lhs->max_end_time), &(rhs->max_end_time)))
  {
    return false;
  }
  // likely_time_present
  if (lhs->likely_time_present != rhs->likely_time_present) {
    return false;
  }
  // likely_time
  if (!v2x_msgs__msg__TimeMark__are_equal(
      &(lhs->likely_time), &(rhs->likely_time)))
  {
    return false;
  }
  // confidence_present
  if (lhs->confidence_present != rhs->confidence_present) {
    return false;
  }
  // confidence
  if (!v2x_msgs__msg__TimeIntervalConfidence__are_equal(
      &(lhs->confidence), &(rhs->confidence)))
  {
    return false;
  }
  // next_time_present
  if (lhs->next_time_present != rhs->next_time_present) {
    return false;
  }
  // next_time
  if (!v2x_msgs__msg__TimeMark__are_equal(
      &(lhs->next_time), &(rhs->next_time)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__TimeChangeDetails__copy(
  const v2x_msgs__msg__TimeChangeDetails * input,
  v2x_msgs__msg__TimeChangeDetails * output)
{
  if (!input || !output) {
    return false;
  }
  // start_time_present
  output->start_time_present = input->start_time_present;
  // start_time
  if (!v2x_msgs__msg__TimeMark__copy(
      &(input->start_time), &(output->start_time)))
  {
    return false;
  }
  // min_end_time
  if (!v2x_msgs__msg__TimeMark__copy(
      &(input->min_end_time), &(output->min_end_time)))
  {
    return false;
  }
  // max_end_time_present
  output->max_end_time_present = input->max_end_time_present;
  // max_end_time
  if (!v2x_msgs__msg__TimeMark__copy(
      &(input->max_end_time), &(output->max_end_time)))
  {
    return false;
  }
  // likely_time_present
  output->likely_time_present = input->likely_time_present;
  // likely_time
  if (!v2x_msgs__msg__TimeMark__copy(
      &(input->likely_time), &(output->likely_time)))
  {
    return false;
  }
  // confidence_present
  output->confidence_present = input->confidence_present;
  // confidence
  if (!v2x_msgs__msg__TimeIntervalConfidence__copy(
      &(input->confidence), &(output->confidence)))
  {
    return false;
  }
  // next_time_present
  output->next_time_present = input->next_time_present;
  // next_time
  if (!v2x_msgs__msg__TimeMark__copy(
      &(input->next_time), &(output->next_time)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__TimeChangeDetails *
v2x_msgs__msg__TimeChangeDetails__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TimeChangeDetails * msg = (v2x_msgs__msg__TimeChangeDetails *)allocator.allocate(sizeof(v2x_msgs__msg__TimeChangeDetails), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__TimeChangeDetails));
  bool success = v2x_msgs__msg__TimeChangeDetails__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__TimeChangeDetails__destroy(v2x_msgs__msg__TimeChangeDetails * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__TimeChangeDetails__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__TimeChangeDetails__Sequence__init(v2x_msgs__msg__TimeChangeDetails__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TimeChangeDetails * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__TimeChangeDetails *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__TimeChangeDetails), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__TimeChangeDetails__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__TimeChangeDetails__fini(&data[i - 1]);
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
v2x_msgs__msg__TimeChangeDetails__Sequence__fini(v2x_msgs__msg__TimeChangeDetails__Sequence * array)
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
      v2x_msgs__msg__TimeChangeDetails__fini(&array->data[i]);
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

v2x_msgs__msg__TimeChangeDetails__Sequence *
v2x_msgs__msg__TimeChangeDetails__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__TimeChangeDetails__Sequence * array = (v2x_msgs__msg__TimeChangeDetails__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__TimeChangeDetails__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__TimeChangeDetails__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__TimeChangeDetails__Sequence__destroy(v2x_msgs__msg__TimeChangeDetails__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__TimeChangeDetails__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__TimeChangeDetails__Sequence__are_equal(const v2x_msgs__msg__TimeChangeDetails__Sequence * lhs, const v2x_msgs__msg__TimeChangeDetails__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__TimeChangeDetails__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__TimeChangeDetails__Sequence__copy(
  const v2x_msgs__msg__TimeChangeDetails__Sequence * input,
  v2x_msgs__msg__TimeChangeDetails__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__TimeChangeDetails);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__TimeChangeDetails * data =
      (v2x_msgs__msg__TimeChangeDetails *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__TimeChangeDetails__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__TimeChangeDetails__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__TimeChangeDetails__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
