// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/CoopAwareness.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/coop_awareness__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `generation_delta_time`
#include "v2x_msgs/msg/detail/generation_delta_time__functions.h"
// Member `cam_parameters`
#include "v2x_msgs/msg/detail/cam_parameters__functions.h"

bool
v2x_msgs__msg__CoopAwareness__init(v2x_msgs__msg__CoopAwareness * msg)
{
  if (!msg) {
    return false;
  }
  // generation_delta_time
  if (!v2x_msgs__msg__GenerationDeltaTime__init(&msg->generation_delta_time)) {
    v2x_msgs__msg__CoopAwareness__fini(msg);
    return false;
  }
  // cam_parameters
  if (!v2x_msgs__msg__CamParameters__init(&msg->cam_parameters)) {
    v2x_msgs__msg__CoopAwareness__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__CoopAwareness__fini(v2x_msgs__msg__CoopAwareness * msg)
{
  if (!msg) {
    return;
  }
  // generation_delta_time
  v2x_msgs__msg__GenerationDeltaTime__fini(&msg->generation_delta_time);
  // cam_parameters
  v2x_msgs__msg__CamParameters__fini(&msg->cam_parameters);
}

bool
v2x_msgs__msg__CoopAwareness__are_equal(const v2x_msgs__msg__CoopAwareness * lhs, const v2x_msgs__msg__CoopAwareness * rhs)
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
  // cam_parameters
  if (!v2x_msgs__msg__CamParameters__are_equal(
      &(lhs->cam_parameters), &(rhs->cam_parameters)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__CoopAwareness__copy(
  const v2x_msgs__msg__CoopAwareness * input,
  v2x_msgs__msg__CoopAwareness * output)
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
  // cam_parameters
  if (!v2x_msgs__msg__CamParameters__copy(
      &(input->cam_parameters), &(output->cam_parameters)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__CoopAwareness *
v2x_msgs__msg__CoopAwareness__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CoopAwareness * msg = (v2x_msgs__msg__CoopAwareness *)allocator.allocate(sizeof(v2x_msgs__msg__CoopAwareness), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__CoopAwareness));
  bool success = v2x_msgs__msg__CoopAwareness__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__CoopAwareness__destroy(v2x_msgs__msg__CoopAwareness * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__CoopAwareness__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__CoopAwareness__Sequence__init(v2x_msgs__msg__CoopAwareness__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CoopAwareness * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__CoopAwareness *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__CoopAwareness), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__CoopAwareness__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__CoopAwareness__fini(&data[i - 1]);
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
v2x_msgs__msg__CoopAwareness__Sequence__fini(v2x_msgs__msg__CoopAwareness__Sequence * array)
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
      v2x_msgs__msg__CoopAwareness__fini(&array->data[i]);
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

v2x_msgs__msg__CoopAwareness__Sequence *
v2x_msgs__msg__CoopAwareness__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CoopAwareness__Sequence * array = (v2x_msgs__msg__CoopAwareness__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__CoopAwareness__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__CoopAwareness__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__CoopAwareness__Sequence__destroy(v2x_msgs__msg__CoopAwareness__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__CoopAwareness__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__CoopAwareness__Sequence__are_equal(const v2x_msgs__msg__CoopAwareness__Sequence * lhs, const v2x_msgs__msg__CoopAwareness__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__CoopAwareness__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__CoopAwareness__Sequence__copy(
  const v2x_msgs__msg__CoopAwareness__Sequence * input,
  v2x_msgs__msg__CoopAwareness__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__CoopAwareness);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__CoopAwareness * data =
      (v2x_msgs__msg__CoopAwareness *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__CoopAwareness__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__CoopAwareness__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__CoopAwareness__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
