// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/NodeOffsetPointZ.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/node_offset_point_z__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `nodez1`
#include "v2x_msgs/msg/detail/offset_b10__functions.h"
// Member `nodez2`
#include "v2x_msgs/msg/detail/offset_b11__functions.h"
// Member `nodez3`
#include "v2x_msgs/msg/detail/offset_b12__functions.h"
// Member `nodez4`
#include "v2x_msgs/msg/detail/offset_b13__functions.h"
// Member `nodez5`
#include "v2x_msgs/msg/detail/offset_b14__functions.h"
// Member `nodez6`
#include "v2x_msgs/msg/detail/offset_b16__functions.h"

bool
v2x_msgs__msg__NodeOffsetPointZ__init(v2x_msgs__msg__NodeOffsetPointZ * msg)
{
  if (!msg) {
    return false;
  }
  // node_offset_point_z_container_select
  msg->node_offset_point_z_container_select = 0ll;
  // nodez1
  if (!v2x_msgs__msg__OffsetB10__init(&msg->nodez1)) {
    v2x_msgs__msg__NodeOffsetPointZ__fini(msg);
    return false;
  }
  // nodez2
  if (!v2x_msgs__msg__OffsetB11__init(&msg->nodez2)) {
    v2x_msgs__msg__NodeOffsetPointZ__fini(msg);
    return false;
  }
  // nodez3
  if (!v2x_msgs__msg__OffsetB12__init(&msg->nodez3)) {
    v2x_msgs__msg__NodeOffsetPointZ__fini(msg);
    return false;
  }
  // nodez4
  if (!v2x_msgs__msg__OffsetB13__init(&msg->nodez4)) {
    v2x_msgs__msg__NodeOffsetPointZ__fini(msg);
    return false;
  }
  // nodez5
  if (!v2x_msgs__msg__OffsetB14__init(&msg->nodez5)) {
    v2x_msgs__msg__NodeOffsetPointZ__fini(msg);
    return false;
  }
  // nodez6
  if (!v2x_msgs__msg__OffsetB16__init(&msg->nodez6)) {
    v2x_msgs__msg__NodeOffsetPointZ__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__NodeOffsetPointZ__fini(v2x_msgs__msg__NodeOffsetPointZ * msg)
{
  if (!msg) {
    return;
  }
  // node_offset_point_z_container_select
  // nodez1
  v2x_msgs__msg__OffsetB10__fini(&msg->nodez1);
  // nodez2
  v2x_msgs__msg__OffsetB11__fini(&msg->nodez2);
  // nodez3
  v2x_msgs__msg__OffsetB12__fini(&msg->nodez3);
  // nodez4
  v2x_msgs__msg__OffsetB13__fini(&msg->nodez4);
  // nodez5
  v2x_msgs__msg__OffsetB14__fini(&msg->nodez5);
  // nodez6
  v2x_msgs__msg__OffsetB16__fini(&msg->nodez6);
}

bool
v2x_msgs__msg__NodeOffsetPointZ__are_equal(const v2x_msgs__msg__NodeOffsetPointZ * lhs, const v2x_msgs__msg__NodeOffsetPointZ * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_offset_point_z_container_select
  if (lhs->node_offset_point_z_container_select != rhs->node_offset_point_z_container_select) {
    return false;
  }
  // nodez1
  if (!v2x_msgs__msg__OffsetB10__are_equal(
      &(lhs->nodez1), &(rhs->nodez1)))
  {
    return false;
  }
  // nodez2
  if (!v2x_msgs__msg__OffsetB11__are_equal(
      &(lhs->nodez2), &(rhs->nodez2)))
  {
    return false;
  }
  // nodez3
  if (!v2x_msgs__msg__OffsetB12__are_equal(
      &(lhs->nodez3), &(rhs->nodez3)))
  {
    return false;
  }
  // nodez4
  if (!v2x_msgs__msg__OffsetB13__are_equal(
      &(lhs->nodez4), &(rhs->nodez4)))
  {
    return false;
  }
  // nodez5
  if (!v2x_msgs__msg__OffsetB14__are_equal(
      &(lhs->nodez5), &(rhs->nodez5)))
  {
    return false;
  }
  // nodez6
  if (!v2x_msgs__msg__OffsetB16__are_equal(
      &(lhs->nodez6), &(rhs->nodez6)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__NodeOffsetPointZ__copy(
  const v2x_msgs__msg__NodeOffsetPointZ * input,
  v2x_msgs__msg__NodeOffsetPointZ * output)
{
  if (!input || !output) {
    return false;
  }
  // node_offset_point_z_container_select
  output->node_offset_point_z_container_select = input->node_offset_point_z_container_select;
  // nodez1
  if (!v2x_msgs__msg__OffsetB10__copy(
      &(input->nodez1), &(output->nodez1)))
  {
    return false;
  }
  // nodez2
  if (!v2x_msgs__msg__OffsetB11__copy(
      &(input->nodez2), &(output->nodez2)))
  {
    return false;
  }
  // nodez3
  if (!v2x_msgs__msg__OffsetB12__copy(
      &(input->nodez3), &(output->nodez3)))
  {
    return false;
  }
  // nodez4
  if (!v2x_msgs__msg__OffsetB13__copy(
      &(input->nodez4), &(output->nodez4)))
  {
    return false;
  }
  // nodez5
  if (!v2x_msgs__msg__OffsetB14__copy(
      &(input->nodez5), &(output->nodez5)))
  {
    return false;
  }
  // nodez6
  if (!v2x_msgs__msg__OffsetB16__copy(
      &(input->nodez6), &(output->nodez6)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__NodeOffsetPointZ *
v2x_msgs__msg__NodeOffsetPointZ__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__NodeOffsetPointZ * msg = (v2x_msgs__msg__NodeOffsetPointZ *)allocator.allocate(sizeof(v2x_msgs__msg__NodeOffsetPointZ), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__NodeOffsetPointZ));
  bool success = v2x_msgs__msg__NodeOffsetPointZ__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__NodeOffsetPointZ__destroy(v2x_msgs__msg__NodeOffsetPointZ * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__NodeOffsetPointZ__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__NodeOffsetPointZ__Sequence__init(v2x_msgs__msg__NodeOffsetPointZ__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__NodeOffsetPointZ * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__NodeOffsetPointZ *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__NodeOffsetPointZ), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__NodeOffsetPointZ__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__NodeOffsetPointZ__fini(&data[i - 1]);
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
v2x_msgs__msg__NodeOffsetPointZ__Sequence__fini(v2x_msgs__msg__NodeOffsetPointZ__Sequence * array)
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
      v2x_msgs__msg__NodeOffsetPointZ__fini(&array->data[i]);
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

v2x_msgs__msg__NodeOffsetPointZ__Sequence *
v2x_msgs__msg__NodeOffsetPointZ__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__NodeOffsetPointZ__Sequence * array = (v2x_msgs__msg__NodeOffsetPointZ__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__NodeOffsetPointZ__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__NodeOffsetPointZ__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__NodeOffsetPointZ__Sequence__destroy(v2x_msgs__msg__NodeOffsetPointZ__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__NodeOffsetPointZ__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__NodeOffsetPointZ__Sequence__are_equal(const v2x_msgs__msg__NodeOffsetPointZ__Sequence * lhs, const v2x_msgs__msg__NodeOffsetPointZ__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__NodeOffsetPointZ__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__NodeOffsetPointZ__Sequence__copy(
  const v2x_msgs__msg__NodeOffsetPointZ__Sequence * input,
  v2x_msgs__msg__NodeOffsetPointZ__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__NodeOffsetPointZ);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__NodeOffsetPointZ * data =
      (v2x_msgs__msg__NodeOffsetPointZ *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__NodeOffsetPointZ__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__NodeOffsetPointZ__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__NodeOffsetPointZ__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
