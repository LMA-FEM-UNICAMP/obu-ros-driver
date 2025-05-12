// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/NodeAttributeSetAddGrpC.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/node_attribute_set_add_grp_c__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ptv_request`
#include "v2x_msgs/msg/detail/ptv_request_type__functions.h"
// Member `node_link`
#include "v2x_msgs/msg/detail/node_link__functions.h"
// Member `node`
#include "v2x_msgs/msg/detail/node__functions.h"

bool
v2x_msgs__msg__NodeAttributeSetAddGrpC__init(v2x_msgs__msg__NodeAttributeSetAddGrpC * msg)
{
  if (!msg) {
    return false;
  }
  // ptv_request_present
  msg->ptv_request_present = false;
  // ptv_request
  if (!v2x_msgs__msg__PtvRequestType__init(&msg->ptv_request)) {
    v2x_msgs__msg__NodeAttributeSetAddGrpC__fini(msg);
    return false;
  }
  // node_link_present
  msg->node_link_present = false;
  // node_link
  if (!v2x_msgs__msg__NodeLink__init(&msg->node_link)) {
    v2x_msgs__msg__NodeAttributeSetAddGrpC__fini(msg);
    return false;
  }
  // node_present
  msg->node_present = false;
  // node
  if (!v2x_msgs__msg__Node__init(&msg->node)) {
    v2x_msgs__msg__NodeAttributeSetAddGrpC__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__NodeAttributeSetAddGrpC__fini(v2x_msgs__msg__NodeAttributeSetAddGrpC * msg)
{
  if (!msg) {
    return;
  }
  // ptv_request_present
  // ptv_request
  v2x_msgs__msg__PtvRequestType__fini(&msg->ptv_request);
  // node_link_present
  // node_link
  v2x_msgs__msg__NodeLink__fini(&msg->node_link);
  // node_present
  // node
  v2x_msgs__msg__Node__fini(&msg->node);
}

bool
v2x_msgs__msg__NodeAttributeSetAddGrpC__are_equal(const v2x_msgs__msg__NodeAttributeSetAddGrpC * lhs, const v2x_msgs__msg__NodeAttributeSetAddGrpC * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ptv_request_present
  if (lhs->ptv_request_present != rhs->ptv_request_present) {
    return false;
  }
  // ptv_request
  if (!v2x_msgs__msg__PtvRequestType__are_equal(
      &(lhs->ptv_request), &(rhs->ptv_request)))
  {
    return false;
  }
  // node_link_present
  if (lhs->node_link_present != rhs->node_link_present) {
    return false;
  }
  // node_link
  if (!v2x_msgs__msg__NodeLink__are_equal(
      &(lhs->node_link), &(rhs->node_link)))
  {
    return false;
  }
  // node_present
  if (lhs->node_present != rhs->node_present) {
    return false;
  }
  // node
  if (!v2x_msgs__msg__Node__are_equal(
      &(lhs->node), &(rhs->node)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__NodeAttributeSetAddGrpC__copy(
  const v2x_msgs__msg__NodeAttributeSetAddGrpC * input,
  v2x_msgs__msg__NodeAttributeSetAddGrpC * output)
{
  if (!input || !output) {
    return false;
  }
  // ptv_request_present
  output->ptv_request_present = input->ptv_request_present;
  // ptv_request
  if (!v2x_msgs__msg__PtvRequestType__copy(
      &(input->ptv_request), &(output->ptv_request)))
  {
    return false;
  }
  // node_link_present
  output->node_link_present = input->node_link_present;
  // node_link
  if (!v2x_msgs__msg__NodeLink__copy(
      &(input->node_link), &(output->node_link)))
  {
    return false;
  }
  // node_present
  output->node_present = input->node_present;
  // node
  if (!v2x_msgs__msg__Node__copy(
      &(input->node), &(output->node)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__NodeAttributeSetAddGrpC *
v2x_msgs__msg__NodeAttributeSetAddGrpC__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__NodeAttributeSetAddGrpC * msg = (v2x_msgs__msg__NodeAttributeSetAddGrpC *)allocator.allocate(sizeof(v2x_msgs__msg__NodeAttributeSetAddGrpC), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__NodeAttributeSetAddGrpC));
  bool success = v2x_msgs__msg__NodeAttributeSetAddGrpC__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__NodeAttributeSetAddGrpC__destroy(v2x_msgs__msg__NodeAttributeSetAddGrpC * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__NodeAttributeSetAddGrpC__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence__init(v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__NodeAttributeSetAddGrpC * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__NodeAttributeSetAddGrpC *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__NodeAttributeSetAddGrpC), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__NodeAttributeSetAddGrpC__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__NodeAttributeSetAddGrpC__fini(&data[i - 1]);
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
v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence__fini(v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence * array)
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
      v2x_msgs__msg__NodeAttributeSetAddGrpC__fini(&array->data[i]);
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

v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence *
v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence * array = (v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence__destroy(v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence__are_equal(const v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence * lhs, const v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__NodeAttributeSetAddGrpC__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence__copy(
  const v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence * input,
  v2x_msgs__msg__NodeAttributeSetAddGrpC__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__NodeAttributeSetAddGrpC);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__NodeAttributeSetAddGrpC * data =
      (v2x_msgs__msg__NodeAttributeSetAddGrpC *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__NodeAttributeSetAddGrpC__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__NodeAttributeSetAddGrpC__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__NodeAttributeSetAddGrpC__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
