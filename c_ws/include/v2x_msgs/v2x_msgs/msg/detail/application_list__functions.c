// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ApplicationList.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/application_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `aid`
#include "v2x_msgs/msg/detail/dsrc_application_entity_id__functions.h"
// Member `eid`
#include "v2x_msgs/msg/detail/dsrc_eid__functions.h"
// Member `parameter`
#include "v2x_msgs/msg/detail/application_context_mark__functions.h"

bool
v2x_msgs__msg__ApplicationList__init(v2x_msgs__msg__ApplicationList * msg)
{
  if (!msg) {
    return false;
  }
  // aid
  if (!v2x_msgs__msg__DSRCApplicationEntityID__init(&msg->aid)) {
    v2x_msgs__msg__ApplicationList__fini(msg);
    return false;
  }
  // eid_present
  msg->eid_present = false;
  // eid
  if (!v2x_msgs__msg__DsrcEID__init(&msg->eid)) {
    v2x_msgs__msg__ApplicationList__fini(msg);
    return false;
  }
  // parameter_present
  msg->parameter_present = false;
  // parameter
  if (!v2x_msgs__msg__ApplicationContextMark__init(&msg->parameter)) {
    v2x_msgs__msg__ApplicationList__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ApplicationList__fini(v2x_msgs__msg__ApplicationList * msg)
{
  if (!msg) {
    return;
  }
  // aid
  v2x_msgs__msg__DSRCApplicationEntityID__fini(&msg->aid);
  // eid_present
  // eid
  v2x_msgs__msg__DsrcEID__fini(&msg->eid);
  // parameter_present
  // parameter
  v2x_msgs__msg__ApplicationContextMark__fini(&msg->parameter);
}

bool
v2x_msgs__msg__ApplicationList__are_equal(const v2x_msgs__msg__ApplicationList * lhs, const v2x_msgs__msg__ApplicationList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // aid
  if (!v2x_msgs__msg__DSRCApplicationEntityID__are_equal(
      &(lhs->aid), &(rhs->aid)))
  {
    return false;
  }
  // eid_present
  if (lhs->eid_present != rhs->eid_present) {
    return false;
  }
  // eid
  if (!v2x_msgs__msg__DsrcEID__are_equal(
      &(lhs->eid), &(rhs->eid)))
  {
    return false;
  }
  // parameter_present
  if (lhs->parameter_present != rhs->parameter_present) {
    return false;
  }
  // parameter
  if (!v2x_msgs__msg__ApplicationContextMark__are_equal(
      &(lhs->parameter), &(rhs->parameter)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ApplicationList__copy(
  const v2x_msgs__msg__ApplicationList * input,
  v2x_msgs__msg__ApplicationList * output)
{
  if (!input || !output) {
    return false;
  }
  // aid
  if (!v2x_msgs__msg__DSRCApplicationEntityID__copy(
      &(input->aid), &(output->aid)))
  {
    return false;
  }
  // eid_present
  output->eid_present = input->eid_present;
  // eid
  if (!v2x_msgs__msg__DsrcEID__copy(
      &(input->eid), &(output->eid)))
  {
    return false;
  }
  // parameter_present
  output->parameter_present = input->parameter_present;
  // parameter
  if (!v2x_msgs__msg__ApplicationContextMark__copy(
      &(input->parameter), &(output->parameter)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ApplicationList *
v2x_msgs__msg__ApplicationList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ApplicationList * msg = (v2x_msgs__msg__ApplicationList *)allocator.allocate(sizeof(v2x_msgs__msg__ApplicationList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ApplicationList));
  bool success = v2x_msgs__msg__ApplicationList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ApplicationList__destroy(v2x_msgs__msg__ApplicationList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ApplicationList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ApplicationList__Sequence__init(v2x_msgs__msg__ApplicationList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ApplicationList * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ApplicationList *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ApplicationList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ApplicationList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ApplicationList__fini(&data[i - 1]);
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
v2x_msgs__msg__ApplicationList__Sequence__fini(v2x_msgs__msg__ApplicationList__Sequence * array)
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
      v2x_msgs__msg__ApplicationList__fini(&array->data[i]);
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

v2x_msgs__msg__ApplicationList__Sequence *
v2x_msgs__msg__ApplicationList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ApplicationList__Sequence * array = (v2x_msgs__msg__ApplicationList__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ApplicationList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ApplicationList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ApplicationList__Sequence__destroy(v2x_msgs__msg__ApplicationList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ApplicationList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ApplicationList__Sequence__are_equal(const v2x_msgs__msg__ApplicationList__Sequence * lhs, const v2x_msgs__msg__ApplicationList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ApplicationList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ApplicationList__Sequence__copy(
  const v2x_msgs__msg__ApplicationList__Sequence * input,
  v2x_msgs__msg__ApplicationList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ApplicationList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ApplicationList * data =
      (v2x_msgs__msg__ApplicationList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ApplicationList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ApplicationList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ApplicationList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
