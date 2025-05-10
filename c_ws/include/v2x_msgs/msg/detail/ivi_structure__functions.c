// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/IviStructure.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/ivi_structure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mandatory`
#include "v2x_msgs/msg/detail/ivi_management_container__functions.h"
// Member `optional`
#include "v2x_msgs/msg/detail/ivi_containers__functions.h"

bool
v2x_msgs__msg__IviStructure__init(v2x_msgs__msg__IviStructure * msg)
{
  if (!msg) {
    return false;
  }
  // mandatory
  if (!v2x_msgs__msg__IviManagementContainer__init(&msg->mandatory)) {
    v2x_msgs__msg__IviStructure__fini(msg);
    return false;
  }
  // optional_present
  msg->optional_present = false;
  // optional
  if (!v2x_msgs__msg__IviContainers__init(&msg->optional)) {
    v2x_msgs__msg__IviStructure__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__IviStructure__fini(v2x_msgs__msg__IviStructure * msg)
{
  if (!msg) {
    return;
  }
  // mandatory
  v2x_msgs__msg__IviManagementContainer__fini(&msg->mandatory);
  // optional_present
  // optional
  v2x_msgs__msg__IviContainers__fini(&msg->optional);
}

bool
v2x_msgs__msg__IviStructure__are_equal(const v2x_msgs__msg__IviStructure * lhs, const v2x_msgs__msg__IviStructure * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mandatory
  if (!v2x_msgs__msg__IviManagementContainer__are_equal(
      &(lhs->mandatory), &(rhs->mandatory)))
  {
    return false;
  }
  // optional_present
  if (lhs->optional_present != rhs->optional_present) {
    return false;
  }
  // optional
  if (!v2x_msgs__msg__IviContainers__are_equal(
      &(lhs->optional), &(rhs->optional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__IviStructure__copy(
  const v2x_msgs__msg__IviStructure * input,
  v2x_msgs__msg__IviStructure * output)
{
  if (!input || !output) {
    return false;
  }
  // mandatory
  if (!v2x_msgs__msg__IviManagementContainer__copy(
      &(input->mandatory), &(output->mandatory)))
  {
    return false;
  }
  // optional_present
  output->optional_present = input->optional_present;
  // optional
  if (!v2x_msgs__msg__IviContainers__copy(
      &(input->optional), &(output->optional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__IviStructure *
v2x_msgs__msg__IviStructure__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IviStructure * msg = (v2x_msgs__msg__IviStructure *)allocator.allocate(sizeof(v2x_msgs__msg__IviStructure), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__IviStructure));
  bool success = v2x_msgs__msg__IviStructure__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__IviStructure__destroy(v2x_msgs__msg__IviStructure * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__IviStructure__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__IviStructure__Sequence__init(v2x_msgs__msg__IviStructure__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IviStructure * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__IviStructure *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__IviStructure), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__IviStructure__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__IviStructure__fini(&data[i - 1]);
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
v2x_msgs__msg__IviStructure__Sequence__fini(v2x_msgs__msg__IviStructure__Sequence * array)
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
      v2x_msgs__msg__IviStructure__fini(&array->data[i]);
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

v2x_msgs__msg__IviStructure__Sequence *
v2x_msgs__msg__IviStructure__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__IviStructure__Sequence * array = (v2x_msgs__msg__IviStructure__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__IviStructure__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__IviStructure__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__IviStructure__Sequence__destroy(v2x_msgs__msg__IviStructure__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__IviStructure__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__IviStructure__Sequence__are_equal(const v2x_msgs__msg__IviStructure__Sequence * lhs, const v2x_msgs__msg__IviStructure__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__IviStructure__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__IviStructure__Sequence__copy(
  const v2x_msgs__msg__IviStructure__Sequence * input,
  v2x_msgs__msg__IviStructure__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__IviStructure);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__IviStructure * data =
      (v2x_msgs__msg__IviStructure *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__IviStructure__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__IviStructure__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__IviStructure__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
