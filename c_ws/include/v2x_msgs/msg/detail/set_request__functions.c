// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/SetRequest.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/set_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `eid`
// Member `iid`
#include "v2x_msgs/msg/detail/dsrc_eid__functions.h"
// Member `access_credentials`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `attr_list`
#include "v2x_msgs/msg/detail/attribute_list__functions.h"

bool
v2x_msgs__msg__SetRequest__init(v2x_msgs__msg__SetRequest * msg)
{
  if (!msg) {
    return false;
  }
  // fill
  // mode
  // eid
  if (!v2x_msgs__msg__DsrcEID__init(&msg->eid)) {
    v2x_msgs__msg__SetRequest__fini(msg);
    return false;
  }
  // access_credentials_present
  msg->access_credentials_present = false;
  // access_credentials
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->access_credentials, 0)) {
    v2x_msgs__msg__SetRequest__fini(msg);
    return false;
  }
  // attr_list
  if (!v2x_msgs__msg__AttributeList__init(&msg->attr_list)) {
    v2x_msgs__msg__SetRequest__fini(msg);
    return false;
  }
  // iid_present
  msg->iid_present = false;
  // iid
  if (!v2x_msgs__msg__DsrcEID__init(&msg->iid)) {
    v2x_msgs__msg__SetRequest__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__SetRequest__fini(v2x_msgs__msg__SetRequest * msg)
{
  if (!msg) {
    return;
  }
  // fill
  // mode
  // eid
  v2x_msgs__msg__DsrcEID__fini(&msg->eid);
  // access_credentials_present
  // access_credentials
  rosidl_runtime_c__int64__Sequence__fini(&msg->access_credentials);
  // attr_list
  v2x_msgs__msg__AttributeList__fini(&msg->attr_list);
  // iid_present
  // iid
  v2x_msgs__msg__DsrcEID__fini(&msg->iid);
}

bool
v2x_msgs__msg__SetRequest__are_equal(const v2x_msgs__msg__SetRequest * lhs, const v2x_msgs__msg__SetRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fill
  if (lhs->fill != rhs->fill) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // eid
  if (!v2x_msgs__msg__DsrcEID__are_equal(
      &(lhs->eid), &(rhs->eid)))
  {
    return false;
  }
  // access_credentials_present
  if (lhs->access_credentials_present != rhs->access_credentials_present) {
    return false;
  }
  // access_credentials
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->access_credentials), &(rhs->access_credentials)))
  {
    return false;
  }
  // attr_list
  if (!v2x_msgs__msg__AttributeList__are_equal(
      &(lhs->attr_list), &(rhs->attr_list)))
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
  return true;
}

bool
v2x_msgs__msg__SetRequest__copy(
  const v2x_msgs__msg__SetRequest * input,
  v2x_msgs__msg__SetRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // fill
  output->fill = input->fill;
  // mode
  output->mode = input->mode;
  // eid
  if (!v2x_msgs__msg__DsrcEID__copy(
      &(input->eid), &(output->eid)))
  {
    return false;
  }
  // access_credentials_present
  output->access_credentials_present = input->access_credentials_present;
  // access_credentials
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->access_credentials), &(output->access_credentials)))
  {
    return false;
  }
  // attr_list
  if (!v2x_msgs__msg__AttributeList__copy(
      &(input->attr_list), &(output->attr_list)))
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
  return true;
}

v2x_msgs__msg__SetRequest *
v2x_msgs__msg__SetRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SetRequest * msg = (v2x_msgs__msg__SetRequest *)allocator.allocate(sizeof(v2x_msgs__msg__SetRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__SetRequest));
  bool success = v2x_msgs__msg__SetRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__SetRequest__destroy(v2x_msgs__msg__SetRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__SetRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__SetRequest__Sequence__init(v2x_msgs__msg__SetRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SetRequest * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__SetRequest *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__SetRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__SetRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__SetRequest__fini(&data[i - 1]);
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
v2x_msgs__msg__SetRequest__Sequence__fini(v2x_msgs__msg__SetRequest__Sequence * array)
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
      v2x_msgs__msg__SetRequest__fini(&array->data[i]);
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

v2x_msgs__msg__SetRequest__Sequence *
v2x_msgs__msg__SetRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SetRequest__Sequence * array = (v2x_msgs__msg__SetRequest__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__SetRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__SetRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__SetRequest__Sequence__destroy(v2x_msgs__msg__SetRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__SetRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__SetRequest__Sequence__are_equal(const v2x_msgs__msg__SetRequest__Sequence * lhs, const v2x_msgs__msg__SetRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__SetRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__SetRequest__Sequence__copy(
  const v2x_msgs__msg__SetRequest__Sequence * input,
  v2x_msgs__msg__SetRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__SetRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__SetRequest * data =
      (v2x_msgs__msg__SetRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__SetRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__SetRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__SetRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
