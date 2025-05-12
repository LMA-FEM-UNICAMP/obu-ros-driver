// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/RxSecurity.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/rx_security__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "v2x_msgs/msg/detail/decap_status__functions.h"
// Member `its_aid`
#include "v2x_msgs/msg/detail/its_aid__functions.h"
// Member `ssp_len`
#include "v2x_msgs/msg/detail/ssp_len__functions.h"
// Member `ssp`
#include "v2x_msgs/msg/detail/ssp__functions.h"

bool
v2x_msgs__msg__RxSecurity__init(v2x_msgs__msg__RxSecurity * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!v2x_msgs__msg__DecapStatus__init(&msg->status)) {
    v2x_msgs__msg__RxSecurity__fini(msg);
    return false;
  }
  // its_aid
  if (!v2x_msgs__msg__ItsAID__init(&msg->its_aid)) {
    v2x_msgs__msg__RxSecurity__fini(msg);
    return false;
  }
  // ssp_len
  if (!v2x_msgs__msg__SSPLen__init(&msg->ssp_len)) {
    v2x_msgs__msg__RxSecurity__fini(msg);
    return false;
  }
  // ssp
  if (!v2x_msgs__msg__SSP__init(&msg->ssp)) {
    v2x_msgs__msg__RxSecurity__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__RxSecurity__fini(v2x_msgs__msg__RxSecurity * msg)
{
  if (!msg) {
    return;
  }
  // status
  v2x_msgs__msg__DecapStatus__fini(&msg->status);
  // its_aid
  v2x_msgs__msg__ItsAID__fini(&msg->its_aid);
  // ssp_len
  v2x_msgs__msg__SSPLen__fini(&msg->ssp_len);
  // ssp
  v2x_msgs__msg__SSP__fini(&msg->ssp);
}

bool
v2x_msgs__msg__RxSecurity__are_equal(const v2x_msgs__msg__RxSecurity * lhs, const v2x_msgs__msg__RxSecurity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!v2x_msgs__msg__DecapStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // its_aid
  if (!v2x_msgs__msg__ItsAID__are_equal(
      &(lhs->its_aid), &(rhs->its_aid)))
  {
    return false;
  }
  // ssp_len
  if (!v2x_msgs__msg__SSPLen__are_equal(
      &(lhs->ssp_len), &(rhs->ssp_len)))
  {
    return false;
  }
  // ssp
  if (!v2x_msgs__msg__SSP__are_equal(
      &(lhs->ssp), &(rhs->ssp)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__RxSecurity__copy(
  const v2x_msgs__msg__RxSecurity * input,
  v2x_msgs__msg__RxSecurity * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!v2x_msgs__msg__DecapStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // its_aid
  if (!v2x_msgs__msg__ItsAID__copy(
      &(input->its_aid), &(output->its_aid)))
  {
    return false;
  }
  // ssp_len
  if (!v2x_msgs__msg__SSPLen__copy(
      &(input->ssp_len), &(output->ssp_len)))
  {
    return false;
  }
  // ssp
  if (!v2x_msgs__msg__SSP__copy(
      &(input->ssp), &(output->ssp)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__RxSecurity *
v2x_msgs__msg__RxSecurity__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RxSecurity * msg = (v2x_msgs__msg__RxSecurity *)allocator.allocate(sizeof(v2x_msgs__msg__RxSecurity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__RxSecurity));
  bool success = v2x_msgs__msg__RxSecurity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__RxSecurity__destroy(v2x_msgs__msg__RxSecurity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__RxSecurity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__RxSecurity__Sequence__init(v2x_msgs__msg__RxSecurity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RxSecurity * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__RxSecurity *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__RxSecurity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__RxSecurity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__RxSecurity__fini(&data[i - 1]);
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
v2x_msgs__msg__RxSecurity__Sequence__fini(v2x_msgs__msg__RxSecurity__Sequence * array)
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
      v2x_msgs__msg__RxSecurity__fini(&array->data[i]);
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

v2x_msgs__msg__RxSecurity__Sequence *
v2x_msgs__msg__RxSecurity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RxSecurity__Sequence * array = (v2x_msgs__msg__RxSecurity__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__RxSecurity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__RxSecurity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__RxSecurity__Sequence__destroy(v2x_msgs__msg__RxSecurity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__RxSecurity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__RxSecurity__Sequence__are_equal(const v2x_msgs__msg__RxSecurity__Sequence * lhs, const v2x_msgs__msg__RxSecurity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__RxSecurity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__RxSecurity__Sequence__copy(
  const v2x_msgs__msg__RxSecurity__Sequence * input,
  v2x_msgs__msg__RxSecurity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__RxSecurity);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__RxSecurity * data =
      (v2x_msgs__msg__RxSecurity *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__RxSecurity__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__RxSecurity__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__RxSecurity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
