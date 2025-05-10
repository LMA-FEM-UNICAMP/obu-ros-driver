// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/EventReportResponse.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/event_report_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `eid`
// Member `iid`
#include "v2x_msgs/msg/detail/dsrc_eid__functions.h"
// Member `ret`
#include "v2x_msgs/msg/detail/return_status__functions.h"

bool
v2x_msgs__msg__EventReportResponse__init(v2x_msgs__msg__EventReportResponse * msg)
{
  if (!msg) {
    return false;
  }
  // fill
  // eid
  if (!v2x_msgs__msg__DsrcEID__init(&msg->eid)) {
    v2x_msgs__msg__EventReportResponse__fini(msg);
    return false;
  }
  // iid_present
  msg->iid_present = false;
  // iid
  if (!v2x_msgs__msg__DsrcEID__init(&msg->iid)) {
    v2x_msgs__msg__EventReportResponse__fini(msg);
    return false;
  }
  // ret_present
  msg->ret_present = false;
  // ret
  if (!v2x_msgs__msg__ReturnStatus__init(&msg->ret)) {
    v2x_msgs__msg__EventReportResponse__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__EventReportResponse__fini(v2x_msgs__msg__EventReportResponse * msg)
{
  if (!msg) {
    return;
  }
  // fill
  // eid
  v2x_msgs__msg__DsrcEID__fini(&msg->eid);
  // iid_present
  // iid
  v2x_msgs__msg__DsrcEID__fini(&msg->iid);
  // ret_present
  // ret
  v2x_msgs__msg__ReturnStatus__fini(&msg->ret);
}

bool
v2x_msgs__msg__EventReportResponse__are_equal(const v2x_msgs__msg__EventReportResponse * lhs, const v2x_msgs__msg__EventReportResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fill
  if (lhs->fill != rhs->fill) {
    return false;
  }
  // eid
  if (!v2x_msgs__msg__DsrcEID__are_equal(
      &(lhs->eid), &(rhs->eid)))
  {
    return false;
  }
  // iid_present
  if (lhs->iid_present != rhs->iid_present) {
    return false;
  }
  // iid
  if (!v2x_msgs__msg__DsrcEID__are_equal(
      &(lhs->iid), &(rhs->iid)))
  {
    return false;
  }
  // ret_present
  if (lhs->ret_present != rhs->ret_present) {
    return false;
  }
  // ret
  if (!v2x_msgs__msg__ReturnStatus__are_equal(
      &(lhs->ret), &(rhs->ret)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__EventReportResponse__copy(
  const v2x_msgs__msg__EventReportResponse * input,
  v2x_msgs__msg__EventReportResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // fill
  output->fill = input->fill;
  // eid
  if (!v2x_msgs__msg__DsrcEID__copy(
      &(input->eid), &(output->eid)))
  {
    return false;
  }
  // iid_present
  output->iid_present = input->iid_present;
  // iid
  if (!v2x_msgs__msg__DsrcEID__copy(
      &(input->iid), &(output->iid)))
  {
    return false;
  }
  // ret_present
  output->ret_present = input->ret_present;
  // ret
  if (!v2x_msgs__msg__ReturnStatus__copy(
      &(input->ret), &(output->ret)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__EventReportResponse *
v2x_msgs__msg__EventReportResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__EventReportResponse * msg = (v2x_msgs__msg__EventReportResponse *)allocator.allocate(sizeof(v2x_msgs__msg__EventReportResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__EventReportResponse));
  bool success = v2x_msgs__msg__EventReportResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__EventReportResponse__destroy(v2x_msgs__msg__EventReportResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__EventReportResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__EventReportResponse__Sequence__init(v2x_msgs__msg__EventReportResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__EventReportResponse * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__EventReportResponse *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__EventReportResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__EventReportResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__EventReportResponse__fini(&data[i - 1]);
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
v2x_msgs__msg__EventReportResponse__Sequence__fini(v2x_msgs__msg__EventReportResponse__Sequence * array)
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
      v2x_msgs__msg__EventReportResponse__fini(&array->data[i]);
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

v2x_msgs__msg__EventReportResponse__Sequence *
v2x_msgs__msg__EventReportResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__EventReportResponse__Sequence * array = (v2x_msgs__msg__EventReportResponse__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__EventReportResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__EventReportResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__EventReportResponse__Sequence__destroy(v2x_msgs__msg__EventReportResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__EventReportResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__EventReportResponse__Sequence__are_equal(const v2x_msgs__msg__EventReportResponse__Sequence * lhs, const v2x_msgs__msg__EventReportResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__EventReportResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__EventReportResponse__Sequence__copy(
  const v2x_msgs__msg__EventReportResponse__Sequence * input,
  v2x_msgs__msg__EventReportResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__EventReportResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__EventReportResponse * data =
      (v2x_msgs__msg__EventReportResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__EventReportResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__EventReportResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__EventReportResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
