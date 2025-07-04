// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/node_offset_point_xy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `nodexy1`
#include "v2x_msgs/msg/detail/node_xy20b__functions.h"
// Member `nodexy2`
#include "v2x_msgs/msg/detail/node_xy22b__functions.h"
// Member `nodexy3`
#include "v2x_msgs/msg/detail/node_xy24b__functions.h"
// Member `nodexy4`
#include "v2x_msgs/msg/detail/node_xy26b__functions.h"
// Member `nodexy5`
#include "v2x_msgs/msg/detail/node_xy28b__functions.h"
// Member `nodexy6`
#include "v2x_msgs/msg/detail/node_xy32b__functions.h"
// Member `nodelat_lon`
#include "v2x_msgs/msg/detail/node_l_lm_d64b__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_node_offset_point_xy__functions.h"

bool
v2x_msgs__msg__NodeOffsetPointXY__init(v2x_msgs__msg__NodeOffsetPointXY * msg)
{
  if (!msg) {
    return false;
  }
  // node_offset_point_xy_container_select
  msg->node_offset_point_xy_container_select = 0ll;
  // nodexy1
  if (!v2x_msgs__msg__NodeXY20b__init(&msg->nodexy1)) {
    v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // nodexy2
  if (!v2x_msgs__msg__NodeXY22b__init(&msg->nodexy2)) {
    v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // nodexy3
  if (!v2x_msgs__msg__NodeXY24b__init(&msg->nodexy3)) {
    v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // nodexy4
  if (!v2x_msgs__msg__NodeXY26b__init(&msg->nodexy4)) {
    v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // nodexy5
  if (!v2x_msgs__msg__NodeXY28b__init(&msg->nodexy5)) {
    v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // nodexy6
  if (!v2x_msgs__msg__NodeXY32b__init(&msg->nodexy6)) {
    v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // nodelat_lon
  if (!v2x_msgs__msg__NodeLLmD64b__init(&msg->nodelat_lon)) {
    v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegNodeOffsetPointXY__init(&msg->regional)) {
    v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__NodeOffsetPointXY__fini(v2x_msgs__msg__NodeOffsetPointXY * msg)
{
  if (!msg) {
    return;
  }
  // node_offset_point_xy_container_select
  // nodexy1
  v2x_msgs__msg__NodeXY20b__fini(&msg->nodexy1);
  // nodexy2
  v2x_msgs__msg__NodeXY22b__fini(&msg->nodexy2);
  // nodexy3
  v2x_msgs__msg__NodeXY24b__fini(&msg->nodexy3);
  // nodexy4
  v2x_msgs__msg__NodeXY26b__fini(&msg->nodexy4);
  // nodexy5
  v2x_msgs__msg__NodeXY28b__fini(&msg->nodexy5);
  // nodexy6
  v2x_msgs__msg__NodeXY32b__fini(&msg->nodexy6);
  // nodelat_lon
  v2x_msgs__msg__NodeLLmD64b__fini(&msg->nodelat_lon);
  // regional
  v2x_msgs__msg__RegNodeOffsetPointXY__fini(&msg->regional);
}

bool
v2x_msgs__msg__NodeOffsetPointXY__are_equal(const v2x_msgs__msg__NodeOffsetPointXY * lhs, const v2x_msgs__msg__NodeOffsetPointXY * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_offset_point_xy_container_select
  if (lhs->node_offset_point_xy_container_select != rhs->node_offset_point_xy_container_select) {
    return false;
  }
  // nodexy1
  if (!v2x_msgs__msg__NodeXY20b__are_equal(
      &(lhs->nodexy1), &(rhs->nodexy1)))
  {
    return false;
  }
  // nodexy2
  if (!v2x_msgs__msg__NodeXY22b__are_equal(
      &(lhs->nodexy2), &(rhs->nodexy2)))
  {
    return false;
  }
  // nodexy3
  if (!v2x_msgs__msg__NodeXY24b__are_equal(
      &(lhs->nodexy3), &(rhs->nodexy3)))
  {
    return false;
  }
  // nodexy4
  if (!v2x_msgs__msg__NodeXY26b__are_equal(
      &(lhs->nodexy4), &(rhs->nodexy4)))
  {
    return false;
  }
  // nodexy5
  if (!v2x_msgs__msg__NodeXY28b__are_equal(
      &(lhs->nodexy5), &(rhs->nodexy5)))
  {
    return false;
  }
  // nodexy6
  if (!v2x_msgs__msg__NodeXY32b__are_equal(
      &(lhs->nodexy6), &(rhs->nodexy6)))
  {
    return false;
  }
  // nodelat_lon
  if (!v2x_msgs__msg__NodeLLmD64b__are_equal(
      &(lhs->nodelat_lon), &(rhs->nodelat_lon)))
  {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegNodeOffsetPointXY__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__NodeOffsetPointXY__copy(
  const v2x_msgs__msg__NodeOffsetPointXY * input,
  v2x_msgs__msg__NodeOffsetPointXY * output)
{
  if (!input || !output) {
    return false;
  }
  // node_offset_point_xy_container_select
  output->node_offset_point_xy_container_select = input->node_offset_point_xy_container_select;
  // nodexy1
  if (!v2x_msgs__msg__NodeXY20b__copy(
      &(input->nodexy1), &(output->nodexy1)))
  {
    return false;
  }
  // nodexy2
  if (!v2x_msgs__msg__NodeXY22b__copy(
      &(input->nodexy2), &(output->nodexy2)))
  {
    return false;
  }
  // nodexy3
  if (!v2x_msgs__msg__NodeXY24b__copy(
      &(input->nodexy3), &(output->nodexy3)))
  {
    return false;
  }
  // nodexy4
  if (!v2x_msgs__msg__NodeXY26b__copy(
      &(input->nodexy4), &(output->nodexy4)))
  {
    return false;
  }
  // nodexy5
  if (!v2x_msgs__msg__NodeXY28b__copy(
      &(input->nodexy5), &(output->nodexy5)))
  {
    return false;
  }
  // nodexy6
  if (!v2x_msgs__msg__NodeXY32b__copy(
      &(input->nodexy6), &(output->nodexy6)))
  {
    return false;
  }
  // nodelat_lon
  if (!v2x_msgs__msg__NodeLLmD64b__copy(
      &(input->nodelat_lon), &(output->nodelat_lon)))
  {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegNodeOffsetPointXY__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__NodeOffsetPointXY *
v2x_msgs__msg__NodeOffsetPointXY__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__NodeOffsetPointXY * msg = (v2x_msgs__msg__NodeOffsetPointXY *)allocator.allocate(sizeof(v2x_msgs__msg__NodeOffsetPointXY), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__NodeOffsetPointXY));
  bool success = v2x_msgs__msg__NodeOffsetPointXY__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__NodeOffsetPointXY__destroy(v2x_msgs__msg__NodeOffsetPointXY * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__NodeOffsetPointXY__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__NodeOffsetPointXY__Sequence__init(v2x_msgs__msg__NodeOffsetPointXY__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__NodeOffsetPointXY * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__NodeOffsetPointXY *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__NodeOffsetPointXY), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__NodeOffsetPointXY__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__NodeOffsetPointXY__fini(&data[i - 1]);
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
v2x_msgs__msg__NodeOffsetPointXY__Sequence__fini(v2x_msgs__msg__NodeOffsetPointXY__Sequence * array)
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
      v2x_msgs__msg__NodeOffsetPointXY__fini(&array->data[i]);
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

v2x_msgs__msg__NodeOffsetPointXY__Sequence *
v2x_msgs__msg__NodeOffsetPointXY__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__NodeOffsetPointXY__Sequence * array = (v2x_msgs__msg__NodeOffsetPointXY__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__NodeOffsetPointXY__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__NodeOffsetPointXY__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__NodeOffsetPointXY__Sequence__destroy(v2x_msgs__msg__NodeOffsetPointXY__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__NodeOffsetPointXY__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__NodeOffsetPointXY__Sequence__are_equal(const v2x_msgs__msg__NodeOffsetPointXY__Sequence * lhs, const v2x_msgs__msg__NodeOffsetPointXY__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__NodeOffsetPointXY__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__NodeOffsetPointXY__Sequence__copy(
  const v2x_msgs__msg__NodeOffsetPointXY__Sequence * input,
  v2x_msgs__msg__NodeOffsetPointXY__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__NodeOffsetPointXY);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__NodeOffsetPointXY * data =
      (v2x_msgs__msg__NodeOffsetPointXY *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__NodeOffsetPointXY__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__NodeOffsetPointXY__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__NodeOffsetPointXY__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
