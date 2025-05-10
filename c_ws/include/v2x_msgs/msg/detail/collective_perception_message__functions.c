// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/CollectivePerceptionMessage.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/collective_perception_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `generation_delta_time`
#include "v2x_msgs/msg/detail/generation_delta_time__functions.h"
// Member `cpm_parameters`
#include "v2x_msgs/msg/detail/cpm_parameters__functions.h"

bool
v2x_msgs__msg__CollectivePerceptionMessage__init(v2x_msgs__msg__CollectivePerceptionMessage * msg)
{
  if (!msg) {
    return false;
  }
  // generation_delta_time
  if (!v2x_msgs__msg__GenerationDeltaTime__init(&msg->generation_delta_time)) {
    v2x_msgs__msg__CollectivePerceptionMessage__fini(msg);
    return false;
  }
  // cpm_parameters
  if (!v2x_msgs__msg__CpmParameters__init(&msg->cpm_parameters)) {
    v2x_msgs__msg__CollectivePerceptionMessage__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__CollectivePerceptionMessage__fini(v2x_msgs__msg__CollectivePerceptionMessage * msg)
{
  if (!msg) {
    return;
  }
  // generation_delta_time
  v2x_msgs__msg__GenerationDeltaTime__fini(&msg->generation_delta_time);
  // cpm_parameters
  v2x_msgs__msg__CpmParameters__fini(&msg->cpm_parameters);
}

bool
v2x_msgs__msg__CollectivePerceptionMessage__are_equal(const v2x_msgs__msg__CollectivePerceptionMessage * lhs, const v2x_msgs__msg__CollectivePerceptionMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // generation_delta_time
  if (!v2x_msgs__msg__GenerationDeltaTime__are_equal(
      &(lhs->generation_delta_time), &(rhs->generation_delta_time)))
  {
    return false;
  }
  // cpm_parameters
  if (!v2x_msgs__msg__CpmParameters__are_equal(
      &(lhs->cpm_parameters), &(rhs->cpm_parameters)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__CollectivePerceptionMessage__copy(
  const v2x_msgs__msg__CollectivePerceptionMessage * input,
  v2x_msgs__msg__CollectivePerceptionMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // generation_delta_time
  if (!v2x_msgs__msg__GenerationDeltaTime__copy(
      &(input->generation_delta_time), &(output->generation_delta_time)))
  {
    return false;
  }
  // cpm_parameters
  if (!v2x_msgs__msg__CpmParameters__copy(
      &(input->cpm_parameters), &(output->cpm_parameters)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__CollectivePerceptionMessage *
v2x_msgs__msg__CollectivePerceptionMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CollectivePerceptionMessage * msg = (v2x_msgs__msg__CollectivePerceptionMessage *)allocator.allocate(sizeof(v2x_msgs__msg__CollectivePerceptionMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__CollectivePerceptionMessage));
  bool success = v2x_msgs__msg__CollectivePerceptionMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__CollectivePerceptionMessage__destroy(v2x_msgs__msg__CollectivePerceptionMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__CollectivePerceptionMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__CollectivePerceptionMessage__Sequence__init(v2x_msgs__msg__CollectivePerceptionMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CollectivePerceptionMessage * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__CollectivePerceptionMessage *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__CollectivePerceptionMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__CollectivePerceptionMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__CollectivePerceptionMessage__fini(&data[i - 1]);
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
v2x_msgs__msg__CollectivePerceptionMessage__Sequence__fini(v2x_msgs__msg__CollectivePerceptionMessage__Sequence * array)
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
      v2x_msgs__msg__CollectivePerceptionMessage__fini(&array->data[i]);
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

v2x_msgs__msg__CollectivePerceptionMessage__Sequence *
v2x_msgs__msg__CollectivePerceptionMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CollectivePerceptionMessage__Sequence * array = (v2x_msgs__msg__CollectivePerceptionMessage__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__CollectivePerceptionMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__CollectivePerceptionMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__CollectivePerceptionMessage__Sequence__destroy(v2x_msgs__msg__CollectivePerceptionMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__CollectivePerceptionMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__CollectivePerceptionMessage__Sequence__are_equal(const v2x_msgs__msg__CollectivePerceptionMessage__Sequence * lhs, const v2x_msgs__msg__CollectivePerceptionMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__CollectivePerceptionMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__CollectivePerceptionMessage__Sequence__copy(
  const v2x_msgs__msg__CollectivePerceptionMessage__Sequence * input,
  v2x_msgs__msg__CollectivePerceptionMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__CollectivePerceptionMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__CollectivePerceptionMessage * data =
      (v2x_msgs__msg__CollectivePerceptionMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__CollectivePerceptionMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__CollectivePerceptionMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__CollectivePerceptionMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
