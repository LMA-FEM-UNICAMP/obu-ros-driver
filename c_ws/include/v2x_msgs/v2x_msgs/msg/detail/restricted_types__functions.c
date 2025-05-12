// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/RestrictedTypes.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/restricted_types__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `types`
#include "v2x_msgs/msg/detail/station_type__functions.h"

bool
v2x_msgs__msg__RestrictedTypes__init(v2x_msgs__msg__RestrictedTypes * msg)
{
  if (!msg) {
    return false;
  }
  // types
  if (!v2x_msgs__msg__StationType__Sequence__init(&msg->types, 0)) {
    v2x_msgs__msg__RestrictedTypes__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__RestrictedTypes__fini(v2x_msgs__msg__RestrictedTypes * msg)
{
  if (!msg) {
    return;
  }
  // types
  v2x_msgs__msg__StationType__Sequence__fini(&msg->types);
}

bool
v2x_msgs__msg__RestrictedTypes__are_equal(const v2x_msgs__msg__RestrictedTypes * lhs, const v2x_msgs__msg__RestrictedTypes * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // types
  if (!v2x_msgs__msg__StationType__Sequence__are_equal(
      &(lhs->types), &(rhs->types)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__RestrictedTypes__copy(
  const v2x_msgs__msg__RestrictedTypes * input,
  v2x_msgs__msg__RestrictedTypes * output)
{
  if (!input || !output) {
    return false;
  }
  // types
  if (!v2x_msgs__msg__StationType__Sequence__copy(
      &(input->types), &(output->types)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__RestrictedTypes *
v2x_msgs__msg__RestrictedTypes__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RestrictedTypes * msg = (v2x_msgs__msg__RestrictedTypes *)allocator.allocate(sizeof(v2x_msgs__msg__RestrictedTypes), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__RestrictedTypes));
  bool success = v2x_msgs__msg__RestrictedTypes__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__RestrictedTypes__destroy(v2x_msgs__msg__RestrictedTypes * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__RestrictedTypes__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__RestrictedTypes__Sequence__init(v2x_msgs__msg__RestrictedTypes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RestrictedTypes * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__RestrictedTypes *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__RestrictedTypes), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__RestrictedTypes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__RestrictedTypes__fini(&data[i - 1]);
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
v2x_msgs__msg__RestrictedTypes__Sequence__fini(v2x_msgs__msg__RestrictedTypes__Sequence * array)
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
      v2x_msgs__msg__RestrictedTypes__fini(&array->data[i]);
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

v2x_msgs__msg__RestrictedTypes__Sequence *
v2x_msgs__msg__RestrictedTypes__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RestrictedTypes__Sequence * array = (v2x_msgs__msg__RestrictedTypes__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__RestrictedTypes__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__RestrictedTypes__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__RestrictedTypes__Sequence__destroy(v2x_msgs__msg__RestrictedTypes__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__RestrictedTypes__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__RestrictedTypes__Sequence__are_equal(const v2x_msgs__msg__RestrictedTypes__Sequence * lhs, const v2x_msgs__msg__RestrictedTypes__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__RestrictedTypes__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__RestrictedTypes__Sequence__copy(
  const v2x_msgs__msg__RestrictedTypes__Sequence * input,
  v2x_msgs__msg__RestrictedTypes__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__RestrictedTypes);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__RestrictedTypes * data =
      (v2x_msgs__msg__RestrictedTypes *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__RestrictedTypes__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__RestrictedTypes__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__RestrictedTypes__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
