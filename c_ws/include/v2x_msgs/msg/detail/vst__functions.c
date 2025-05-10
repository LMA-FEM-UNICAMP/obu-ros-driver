// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/VST.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/vst__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `profile`
#include "v2x_msgs/msg/detail/profile__functions.h"
// Member `applications`
#include "v2x_msgs/msg/detail/application_list__functions.h"
// Member `obe_configuration`
#include "v2x_msgs/msg/detail/obe_configuration__functions.h"

bool
v2x_msgs__msg__VST__init(v2x_msgs__msg__VST * msg)
{
  if (!msg) {
    return false;
  }
  // fill
  // profile
  if (!v2x_msgs__msg__Profile__init(&msg->profile)) {
    v2x_msgs__msg__VST__fini(msg);
    return false;
  }
  // applications
  if (!v2x_msgs__msg__ApplicationList__init(&msg->applications)) {
    v2x_msgs__msg__VST__fini(msg);
    return false;
  }
  // obe_configuration
  if (!v2x_msgs__msg__ObeConfiguration__init(&msg->obe_configuration)) {
    v2x_msgs__msg__VST__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__VST__fini(v2x_msgs__msg__VST * msg)
{
  if (!msg) {
    return;
  }
  // fill
  // profile
  v2x_msgs__msg__Profile__fini(&msg->profile);
  // applications
  v2x_msgs__msg__ApplicationList__fini(&msg->applications);
  // obe_configuration
  v2x_msgs__msg__ObeConfiguration__fini(&msg->obe_configuration);
}

bool
v2x_msgs__msg__VST__are_equal(const v2x_msgs__msg__VST * lhs, const v2x_msgs__msg__VST * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fill
  if (lhs->fill != rhs->fill) {
    return false;
  }
  // profile
  if (!v2x_msgs__msg__Profile__are_equal(
      &(lhs->profile), &(rhs->profile)))
  {
    return false;
  }
  // applications
  if (!v2x_msgs__msg__ApplicationList__are_equal(
      &(lhs->applications), &(rhs->applications)))
  {
    return false;
  }
  // obe_configuration
  if (!v2x_msgs__msg__ObeConfiguration__are_equal(
      &(lhs->obe_configuration), &(rhs->obe_configuration)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__VST__copy(
  const v2x_msgs__msg__VST * input,
  v2x_msgs__msg__VST * output)
{
  if (!input || !output) {
    return false;
  }
  // fill
  output->fill = input->fill;
  // profile
  if (!v2x_msgs__msg__Profile__copy(
      &(input->profile), &(output->profile)))
  {
    return false;
  }
  // applications
  if (!v2x_msgs__msg__ApplicationList__copy(
      &(input->applications), &(output->applications)))
  {
    return false;
  }
  // obe_configuration
  if (!v2x_msgs__msg__ObeConfiguration__copy(
      &(input->obe_configuration), &(output->obe_configuration)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__VST *
v2x_msgs__msg__VST__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VST * msg = (v2x_msgs__msg__VST *)allocator.allocate(sizeof(v2x_msgs__msg__VST), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__VST));
  bool success = v2x_msgs__msg__VST__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__VST__destroy(v2x_msgs__msg__VST * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__VST__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__VST__Sequence__init(v2x_msgs__msg__VST__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VST * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__VST *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__VST), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__VST__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__VST__fini(&data[i - 1]);
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
v2x_msgs__msg__VST__Sequence__fini(v2x_msgs__msg__VST__Sequence * array)
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
      v2x_msgs__msg__VST__fini(&array->data[i]);
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

v2x_msgs__msg__VST__Sequence *
v2x_msgs__msg__VST__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__VST__Sequence * array = (v2x_msgs__msg__VST__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__VST__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__VST__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__VST__Sequence__destroy(v2x_msgs__msg__VST__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__VST__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__VST__Sequence__are_equal(const v2x_msgs__msg__VST__Sequence * lhs, const v2x_msgs__msg__VST__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__VST__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__VST__Sequence__copy(
  const v2x_msgs__msg__VST__Sequence * input,
  v2x_msgs__msg__VST__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__VST);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__VST * data =
      (v2x_msgs__msg__VST *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__VST__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__VST__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__VST__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
