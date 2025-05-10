// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/SituationContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/situation_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `information_quality`
#include "v2x_msgs/msg/detail/information_quality__functions.h"
// Member `event_type`
// Member `linked_cause`
#include "v2x_msgs/msg/detail/cause_code__functions.h"
// Member `event_history`
#include "v2x_msgs/msg/detail/event_history__functions.h"

bool
v2x_msgs__msg__SituationContainer__init(v2x_msgs__msg__SituationContainer * msg)
{
  if (!msg) {
    return false;
  }
  // information_quality
  if (!v2x_msgs__msg__InformationQuality__init(&msg->information_quality)) {
    v2x_msgs__msg__SituationContainer__fini(msg);
    return false;
  }
  // event_type
  if (!v2x_msgs__msg__CauseCode__init(&msg->event_type)) {
    v2x_msgs__msg__SituationContainer__fini(msg);
    return false;
  }
  // linked_cause_present
  msg->linked_cause_present = false;
  // linked_cause
  if (!v2x_msgs__msg__CauseCode__init(&msg->linked_cause)) {
    v2x_msgs__msg__SituationContainer__fini(msg);
    return false;
  }
  // event_history_present
  msg->event_history_present = false;
  // event_history
  if (!v2x_msgs__msg__EventHistory__init(&msg->event_history)) {
    v2x_msgs__msg__SituationContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__SituationContainer__fini(v2x_msgs__msg__SituationContainer * msg)
{
  if (!msg) {
    return;
  }
  // information_quality
  v2x_msgs__msg__InformationQuality__fini(&msg->information_quality);
  // event_type
  v2x_msgs__msg__CauseCode__fini(&msg->event_type);
  // linked_cause_present
  // linked_cause
  v2x_msgs__msg__CauseCode__fini(&msg->linked_cause);
  // event_history_present
  // event_history
  v2x_msgs__msg__EventHistory__fini(&msg->event_history);
}

bool
v2x_msgs__msg__SituationContainer__are_equal(const v2x_msgs__msg__SituationContainer * lhs, const v2x_msgs__msg__SituationContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // information_quality
  if (!v2x_msgs__msg__InformationQuality__are_equal(
      &(lhs->information_quality), &(rhs->information_quality)))
  {
    return false;
  }
  // event_type
  if (!v2x_msgs__msg__CauseCode__are_equal(
      &(lhs->event_type), &(rhs->event_type)))
  {
    return false;
  }
  // linked_cause_present
  if (lhs->linked_cause_present != rhs->linked_cause_present) {
    return false;
  }
  // linked_cause
  if (!v2x_msgs__msg__CauseCode__are_equal(
      &(lhs->linked_cause), &(rhs->linked_cause)))
  {
    return false;
  }
  // event_history_present
  if (lhs->event_history_present != rhs->event_history_present) {
    return false;
  }
  // event_history
  if (!v2x_msgs__msg__EventHistory__are_equal(
      &(lhs->event_history), &(rhs->event_history)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__SituationContainer__copy(
  const v2x_msgs__msg__SituationContainer * input,
  v2x_msgs__msg__SituationContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // information_quality
  if (!v2x_msgs__msg__InformationQuality__copy(
      &(input->information_quality), &(output->information_quality)))
  {
    return false;
  }
  // event_type
  if (!v2x_msgs__msg__CauseCode__copy(
      &(input->event_type), &(output->event_type)))
  {
    return false;
  }
  // linked_cause_present
  output->linked_cause_present = input->linked_cause_present;
  // linked_cause
  if (!v2x_msgs__msg__CauseCode__copy(
      &(input->linked_cause), &(output->linked_cause)))
  {
    return false;
  }
  // event_history_present
  output->event_history_present = input->event_history_present;
  // event_history
  if (!v2x_msgs__msg__EventHistory__copy(
      &(input->event_history), &(output->event_history)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__SituationContainer *
v2x_msgs__msg__SituationContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SituationContainer * msg = (v2x_msgs__msg__SituationContainer *)allocator.allocate(sizeof(v2x_msgs__msg__SituationContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__SituationContainer));
  bool success = v2x_msgs__msg__SituationContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__SituationContainer__destroy(v2x_msgs__msg__SituationContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__SituationContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__SituationContainer__Sequence__init(v2x_msgs__msg__SituationContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SituationContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__SituationContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__SituationContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__SituationContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__SituationContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__SituationContainer__Sequence__fini(v2x_msgs__msg__SituationContainer__Sequence * array)
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
      v2x_msgs__msg__SituationContainer__fini(&array->data[i]);
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

v2x_msgs__msg__SituationContainer__Sequence *
v2x_msgs__msg__SituationContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SituationContainer__Sequence * array = (v2x_msgs__msg__SituationContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__SituationContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__SituationContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__SituationContainer__Sequence__destroy(v2x_msgs__msg__SituationContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__SituationContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__SituationContainer__Sequence__are_equal(const v2x_msgs__msg__SituationContainer__Sequence * lhs, const v2x_msgs__msg__SituationContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__SituationContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__SituationContainer__Sequence__copy(
  const v2x_msgs__msg__SituationContainer__Sequence * input,
  v2x_msgs__msg__SituationContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__SituationContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__SituationContainer * data =
      (v2x_msgs__msg__SituationContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__SituationContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__SituationContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__SituationContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
