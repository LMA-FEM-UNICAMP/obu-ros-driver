// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/AviEriDateTime.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/avi_eri_date_time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `avi_eri_date_time`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
v2x_msgs__msg__AviEriDateTime__init(v2x_msgs__msg__AviEriDateTime * msg)
{
  if (!msg) {
    return false;
  }
  // avi_eri_date_time
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->avi_eri_date_time, 0)) {
    v2x_msgs__msg__AviEriDateTime__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__AviEriDateTime__fini(v2x_msgs__msg__AviEriDateTime * msg)
{
  if (!msg) {
    return;
  }
  // avi_eri_date_time
  rosidl_runtime_c__int64__Sequence__fini(&msg->avi_eri_date_time);
}

bool
v2x_msgs__msg__AviEriDateTime__are_equal(const v2x_msgs__msg__AviEriDateTime * lhs, const v2x_msgs__msg__AviEriDateTime * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // avi_eri_date_time
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->avi_eri_date_time), &(rhs->avi_eri_date_time)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__AviEriDateTime__copy(
  const v2x_msgs__msg__AviEriDateTime * input,
  v2x_msgs__msg__AviEriDateTime * output)
{
  if (!input || !output) {
    return false;
  }
  // avi_eri_date_time
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->avi_eri_date_time), &(output->avi_eri_date_time)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__AviEriDateTime *
v2x_msgs__msg__AviEriDateTime__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AviEriDateTime * msg = (v2x_msgs__msg__AviEriDateTime *)allocator.allocate(sizeof(v2x_msgs__msg__AviEriDateTime), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__AviEriDateTime));
  bool success = v2x_msgs__msg__AviEriDateTime__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__AviEriDateTime__destroy(v2x_msgs__msg__AviEriDateTime * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__AviEriDateTime__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__AviEriDateTime__Sequence__init(v2x_msgs__msg__AviEriDateTime__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AviEriDateTime * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__AviEriDateTime *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__AviEriDateTime), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__AviEriDateTime__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__AviEriDateTime__fini(&data[i - 1]);
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
v2x_msgs__msg__AviEriDateTime__Sequence__fini(v2x_msgs__msg__AviEriDateTime__Sequence * array)
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
      v2x_msgs__msg__AviEriDateTime__fini(&array->data[i]);
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

v2x_msgs__msg__AviEriDateTime__Sequence *
v2x_msgs__msg__AviEriDateTime__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AviEriDateTime__Sequence * array = (v2x_msgs__msg__AviEriDateTime__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__AviEriDateTime__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__AviEriDateTime__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__AviEriDateTime__Sequence__destroy(v2x_msgs__msg__AviEriDateTime__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__AviEriDateTime__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__AviEriDateTime__Sequence__are_equal(const v2x_msgs__msg__AviEriDateTime__Sequence * lhs, const v2x_msgs__msg__AviEriDateTime__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__AviEriDateTime__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__AviEriDateTime__Sequence__copy(
  const v2x_msgs__msg__AviEriDateTime__Sequence * input,
  v2x_msgs__msg__AviEriDateTime__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__AviEriDateTime);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__AviEriDateTime * data =
      (v2x_msgs__msg__AviEriDateTime *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__AviEriDateTime__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__AviEriDateTime__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__AviEriDateTime__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
