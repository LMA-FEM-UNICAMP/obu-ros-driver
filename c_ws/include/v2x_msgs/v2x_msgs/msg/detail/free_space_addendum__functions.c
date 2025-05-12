// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/FreeSpaceAddendum.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/free_space_addendum__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `free_space_confidence`
#include "v2x_msgs/msg/detail/free_space_confidence__functions.h"
// Member `free_space_area`
#include "v2x_msgs/msg/detail/free_space_area__functions.h"
// Member `sensor_idlist`
#include "v2x_msgs/msg/detail/sensor_id_list__functions.h"
// Member `shadowing_applies`
#include "v2x_msgs/msg/detail/shadowing_applies__functions.h"

bool
v2x_msgs__msg__FreeSpaceAddendum__init(v2x_msgs__msg__FreeSpaceAddendum * msg)
{
  if (!msg) {
    return false;
  }
  // free_space_confidence
  if (!v2x_msgs__msg__FreeSpaceConfidence__init(&msg->free_space_confidence)) {
    v2x_msgs__msg__FreeSpaceAddendum__fini(msg);
    return false;
  }
  // free_space_area
  if (!v2x_msgs__msg__FreeSpaceArea__init(&msg->free_space_area)) {
    v2x_msgs__msg__FreeSpaceAddendum__fini(msg);
    return false;
  }
  // sensor_idlist_present
  msg->sensor_idlist_present = false;
  // sensor_idlist
  if (!v2x_msgs__msg__SensorIdList__init(&msg->sensor_idlist)) {
    v2x_msgs__msg__FreeSpaceAddendum__fini(msg);
    return false;
  }
  // shadowing_applies_present
  msg->shadowing_applies_present = false;
  // shadowing_applies
  if (!v2x_msgs__msg__ShadowingApplies__init(&msg->shadowing_applies)) {
    v2x_msgs__msg__FreeSpaceAddendum__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__FreeSpaceAddendum__fini(v2x_msgs__msg__FreeSpaceAddendum * msg)
{
  if (!msg) {
    return;
  }
  // free_space_confidence
  v2x_msgs__msg__FreeSpaceConfidence__fini(&msg->free_space_confidence);
  // free_space_area
  v2x_msgs__msg__FreeSpaceArea__fini(&msg->free_space_area);
  // sensor_idlist_present
  // sensor_idlist
  v2x_msgs__msg__SensorIdList__fini(&msg->sensor_idlist);
  // shadowing_applies_present
  // shadowing_applies
  v2x_msgs__msg__ShadowingApplies__fini(&msg->shadowing_applies);
}

bool
v2x_msgs__msg__FreeSpaceAddendum__are_equal(const v2x_msgs__msg__FreeSpaceAddendum * lhs, const v2x_msgs__msg__FreeSpaceAddendum * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // free_space_confidence
  if (!v2x_msgs__msg__FreeSpaceConfidence__are_equal(
      &(lhs->free_space_confidence), &(rhs->free_space_confidence)))
  {
    return false;
  }
  // free_space_area
  if (!v2x_msgs__msg__FreeSpaceArea__are_equal(
      &(lhs->free_space_area), &(rhs->free_space_area)))
  {
    return false;
  }
  // sensor_idlist_present
  if (lhs->sensor_idlist_present != rhs->sensor_idlist_present) {
    return false;
  }
  // sensor_idlist
  if (!v2x_msgs__msg__SensorIdList__are_equal(
      &(lhs->sensor_idlist), &(rhs->sensor_idlist)))
  {
    return false;
  }
  // shadowing_applies_present
  if (lhs->shadowing_applies_present != rhs->shadowing_applies_present) {
    return false;
  }
  // shadowing_applies
  if (!v2x_msgs__msg__ShadowingApplies__are_equal(
      &(lhs->shadowing_applies), &(rhs->shadowing_applies)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__FreeSpaceAddendum__copy(
  const v2x_msgs__msg__FreeSpaceAddendum * input,
  v2x_msgs__msg__FreeSpaceAddendum * output)
{
  if (!input || !output) {
    return false;
  }
  // free_space_confidence
  if (!v2x_msgs__msg__FreeSpaceConfidence__copy(
      &(input->free_space_confidence), &(output->free_space_confidence)))
  {
    return false;
  }
  // free_space_area
  if (!v2x_msgs__msg__FreeSpaceArea__copy(
      &(input->free_space_area), &(output->free_space_area)))
  {
    return false;
  }
  // sensor_idlist_present
  output->sensor_idlist_present = input->sensor_idlist_present;
  // sensor_idlist
  if (!v2x_msgs__msg__SensorIdList__copy(
      &(input->sensor_idlist), &(output->sensor_idlist)))
  {
    return false;
  }
  // shadowing_applies_present
  output->shadowing_applies_present = input->shadowing_applies_present;
  // shadowing_applies
  if (!v2x_msgs__msg__ShadowingApplies__copy(
      &(input->shadowing_applies), &(output->shadowing_applies)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__FreeSpaceAddendum *
v2x_msgs__msg__FreeSpaceAddendum__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__FreeSpaceAddendum * msg = (v2x_msgs__msg__FreeSpaceAddendum *)allocator.allocate(sizeof(v2x_msgs__msg__FreeSpaceAddendum), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__FreeSpaceAddendum));
  bool success = v2x_msgs__msg__FreeSpaceAddendum__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__FreeSpaceAddendum__destroy(v2x_msgs__msg__FreeSpaceAddendum * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__FreeSpaceAddendum__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__FreeSpaceAddendum__Sequence__init(v2x_msgs__msg__FreeSpaceAddendum__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__FreeSpaceAddendum * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__FreeSpaceAddendum *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__FreeSpaceAddendum), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__FreeSpaceAddendum__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__FreeSpaceAddendum__fini(&data[i - 1]);
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
v2x_msgs__msg__FreeSpaceAddendum__Sequence__fini(v2x_msgs__msg__FreeSpaceAddendum__Sequence * array)
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
      v2x_msgs__msg__FreeSpaceAddendum__fini(&array->data[i]);
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

v2x_msgs__msg__FreeSpaceAddendum__Sequence *
v2x_msgs__msg__FreeSpaceAddendum__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__FreeSpaceAddendum__Sequence * array = (v2x_msgs__msg__FreeSpaceAddendum__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__FreeSpaceAddendum__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__FreeSpaceAddendum__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__FreeSpaceAddendum__Sequence__destroy(v2x_msgs__msg__FreeSpaceAddendum__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__FreeSpaceAddendum__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__FreeSpaceAddendum__Sequence__are_equal(const v2x_msgs__msg__FreeSpaceAddendum__Sequence * lhs, const v2x_msgs__msg__FreeSpaceAddendum__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__FreeSpaceAddendum__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__FreeSpaceAddendum__Sequence__copy(
  const v2x_msgs__msg__FreeSpaceAddendum__Sequence * input,
  v2x_msgs__msg__FreeSpaceAddendum__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__FreeSpaceAddendum);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__FreeSpaceAddendum * data =
      (v2x_msgs__msg__FreeSpaceAddendum *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__FreeSpaceAddendum__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__FreeSpaceAddendum__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__FreeSpaceAddendum__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
