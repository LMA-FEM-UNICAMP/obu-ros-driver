// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/DigitalMap.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/digital_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `map`
#include "v2x_msgs/msg/detail/reference_position__functions.h"

bool
v2x_msgs__msg__DigitalMap__init(v2x_msgs__msg__DigitalMap * msg)
{
  if (!msg) {
    return false;
  }
  // map
  if (!v2x_msgs__msg__ReferencePosition__Sequence__init(&msg->map, 0)) {
    v2x_msgs__msg__DigitalMap__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__DigitalMap__fini(v2x_msgs__msg__DigitalMap * msg)
{
  if (!msg) {
    return;
  }
  // map
  v2x_msgs__msg__ReferencePosition__Sequence__fini(&msg->map);
}

bool
v2x_msgs__msg__DigitalMap__are_equal(const v2x_msgs__msg__DigitalMap * lhs, const v2x_msgs__msg__DigitalMap * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map
  if (!v2x_msgs__msg__ReferencePosition__Sequence__are_equal(
      &(lhs->map), &(rhs->map)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__DigitalMap__copy(
  const v2x_msgs__msg__DigitalMap * input,
  v2x_msgs__msg__DigitalMap * output)
{
  if (!input || !output) {
    return false;
  }
  // map
  if (!v2x_msgs__msg__ReferencePosition__Sequence__copy(
      &(input->map), &(output->map)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__DigitalMap *
v2x_msgs__msg__DigitalMap__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DigitalMap * msg = (v2x_msgs__msg__DigitalMap *)allocator.allocate(sizeof(v2x_msgs__msg__DigitalMap), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__DigitalMap));
  bool success = v2x_msgs__msg__DigitalMap__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__DigitalMap__destroy(v2x_msgs__msg__DigitalMap * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__DigitalMap__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__DigitalMap__Sequence__init(v2x_msgs__msg__DigitalMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DigitalMap * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__DigitalMap *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__DigitalMap), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__DigitalMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__DigitalMap__fini(&data[i - 1]);
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
v2x_msgs__msg__DigitalMap__Sequence__fini(v2x_msgs__msg__DigitalMap__Sequence * array)
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
      v2x_msgs__msg__DigitalMap__fini(&array->data[i]);
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

v2x_msgs__msg__DigitalMap__Sequence *
v2x_msgs__msg__DigitalMap__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DigitalMap__Sequence * array = (v2x_msgs__msg__DigitalMap__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__DigitalMap__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__DigitalMap__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__DigitalMap__Sequence__destroy(v2x_msgs__msg__DigitalMap__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__DigitalMap__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__DigitalMap__Sequence__are_equal(const v2x_msgs__msg__DigitalMap__Sequence * lhs, const v2x_msgs__msg__DigitalMap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__DigitalMap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__DigitalMap__Sequence__copy(
  const v2x_msgs__msg__DigitalMap__Sequence * input,
  v2x_msgs__msg__DigitalMap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__DigitalMap);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__DigitalMap * data =
      (v2x_msgs__msg__DigitalMap *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__DigitalMap__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__DigitalMap__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__DigitalMap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
