// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/node_attribute_set_xy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `local_node`
#include "v2x_msgs/msg/detail/node_attribute_xy_list__functions.h"
// Member `disabled`
// Member `enabled`
#include "v2x_msgs/msg/detail/segment_attribute_xy_list__functions.h"
// Member `data`
#include "v2x_msgs/msg/detail/lane_data_attribute_list__functions.h"
// Member `d_width`
// Member `d_elevation`
#include "v2x_msgs/msg/detail/offset_b10__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_node_attribute_set_xy__functions.h"

bool
v2x_msgs__msg__NodeAttributeSetXY__init(v2x_msgs__msg__NodeAttributeSetXY * msg)
{
  if (!msg) {
    return false;
  }
  // local_node_present
  msg->local_node_present = false;
  // local_node
  if (!v2x_msgs__msg__NodeAttributeXYList__init(&msg->local_node)) {
    v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
    return false;
  }
  // disabled_present
  msg->disabled_present = false;
  // disabled
  if (!v2x_msgs__msg__SegmentAttributeXYList__init(&msg->disabled)) {
    v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
    return false;
  }
  // enabled_present
  msg->enabled_present = false;
  // enabled
  if (!v2x_msgs__msg__SegmentAttributeXYList__init(&msg->enabled)) {
    v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
    return false;
  }
  // data_present
  msg->data_present = false;
  // data
  if (!v2x_msgs__msg__LaneDataAttributeList__init(&msg->data)) {
    v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
    return false;
  }
  // d_width_present
  msg->d_width_present = false;
  // d_width
  if (!v2x_msgs__msg__OffsetB10__init(&msg->d_width)) {
    v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
    return false;
  }
  // d_elevation_present
  msg->d_elevation_present = false;
  // d_elevation
  if (!v2x_msgs__msg__OffsetB10__init(&msg->d_elevation)) {
    v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegNodeAttributeSetXY__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__NodeAttributeSetXY__fini(v2x_msgs__msg__NodeAttributeSetXY * msg)
{
  if (!msg) {
    return;
  }
  // local_node_present
  // local_node
  v2x_msgs__msg__NodeAttributeXYList__fini(&msg->local_node);
  // disabled_present
  // disabled
  v2x_msgs__msg__SegmentAttributeXYList__fini(&msg->disabled);
  // enabled_present
  // enabled
  v2x_msgs__msg__SegmentAttributeXYList__fini(&msg->enabled);
  // data_present
  // data
  v2x_msgs__msg__LaneDataAttributeList__fini(&msg->data);
  // d_width_present
  // d_width
  v2x_msgs__msg__OffsetB10__fini(&msg->d_width);
  // d_elevation_present
  // d_elevation
  v2x_msgs__msg__OffsetB10__fini(&msg->d_elevation);
  // regional_present
  // regional
  v2x_msgs__msg__RegNodeAttributeSetXY__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__NodeAttributeSetXY__are_equal(const v2x_msgs__msg__NodeAttributeSetXY * lhs, const v2x_msgs__msg__NodeAttributeSetXY * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // local_node_present
  if (lhs->local_node_present != rhs->local_node_present) {
    return false;
  }
  // local_node
  if (!v2x_msgs__msg__NodeAttributeXYList__are_equal(
      &(lhs->local_node), &(rhs->local_node)))
  {
    return false;
  }
  // disabled_present
  if (lhs->disabled_present != rhs->disabled_present) {
    return false;
  }
  // disabled
  if (!v2x_msgs__msg__SegmentAttributeXYList__are_equal(
      &(lhs->disabled), &(rhs->disabled)))
  {
    return false;
  }
  // enabled_present
  if (lhs->enabled_present != rhs->enabled_present) {
    return false;
  }
  // enabled
  if (!v2x_msgs__msg__SegmentAttributeXYList__are_equal(
      &(lhs->enabled), &(rhs->enabled)))
  {
    return false;
  }
  // data_present
  if (lhs->data_present != rhs->data_present) {
    return false;
  }
  // data
  if (!v2x_msgs__msg__LaneDataAttributeList__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // d_width_present
  if (lhs->d_width_present != rhs->d_width_present) {
    return false;
  }
  // d_width
  if (!v2x_msgs__msg__OffsetB10__are_equal(
      &(lhs->d_width), &(rhs->d_width)))
  {
    return false;
  }
  // d_elevation_present
  if (lhs->d_elevation_present != rhs->d_elevation_present) {
    return false;
  }
  // d_elevation
  if (!v2x_msgs__msg__OffsetB10__are_equal(
      &(lhs->d_elevation), &(rhs->d_elevation)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegNodeAttributeSetXY__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__NodeAttributeSetXY__copy(
  const v2x_msgs__msg__NodeAttributeSetXY * input,
  v2x_msgs__msg__NodeAttributeSetXY * output)
{
  if (!input || !output) {
    return false;
  }
  // local_node_present
  output->local_node_present = input->local_node_present;
  // local_node
  if (!v2x_msgs__msg__NodeAttributeXYList__copy(
      &(input->local_node), &(output->local_node)))
  {
    return false;
  }
  // disabled_present
  output->disabled_present = input->disabled_present;
  // disabled
  if (!v2x_msgs__msg__SegmentAttributeXYList__copy(
      &(input->disabled), &(output->disabled)))
  {
    return false;
  }
  // enabled_present
  output->enabled_present = input->enabled_present;
  // enabled
  if (!v2x_msgs__msg__SegmentAttributeXYList__copy(
      &(input->enabled), &(output->enabled)))
  {
    return false;
  }
  // data_present
  output->data_present = input->data_present;
  // data
  if (!v2x_msgs__msg__LaneDataAttributeList__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // d_width_present
  output->d_width_present = input->d_width_present;
  // d_width
  if (!v2x_msgs__msg__OffsetB10__copy(
      &(input->d_width), &(output->d_width)))
  {
    return false;
  }
  // d_elevation_present
  output->d_elevation_present = input->d_elevation_present;
  // d_elevation
  if (!v2x_msgs__msg__OffsetB10__copy(
      &(input->d_elevation), &(output->d_elevation)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegNodeAttributeSetXY__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__NodeAttributeSetXY *
v2x_msgs__msg__NodeAttributeSetXY__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__NodeAttributeSetXY * msg = (v2x_msgs__msg__NodeAttributeSetXY *)allocator.allocate(sizeof(v2x_msgs__msg__NodeAttributeSetXY), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__NodeAttributeSetXY));
  bool success = v2x_msgs__msg__NodeAttributeSetXY__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__NodeAttributeSetXY__destroy(v2x_msgs__msg__NodeAttributeSetXY * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__NodeAttributeSetXY__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__NodeAttributeSetXY__Sequence__init(v2x_msgs__msg__NodeAttributeSetXY__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__NodeAttributeSetXY * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__NodeAttributeSetXY *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__NodeAttributeSetXY), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__NodeAttributeSetXY__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__NodeAttributeSetXY__fini(&data[i - 1]);
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
v2x_msgs__msg__NodeAttributeSetXY__Sequence__fini(v2x_msgs__msg__NodeAttributeSetXY__Sequence * array)
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
      v2x_msgs__msg__NodeAttributeSetXY__fini(&array->data[i]);
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

v2x_msgs__msg__NodeAttributeSetXY__Sequence *
v2x_msgs__msg__NodeAttributeSetXY__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__NodeAttributeSetXY__Sequence * array = (v2x_msgs__msg__NodeAttributeSetXY__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__NodeAttributeSetXY__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__NodeAttributeSetXY__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__NodeAttributeSetXY__Sequence__destroy(v2x_msgs__msg__NodeAttributeSetXY__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__NodeAttributeSetXY__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__NodeAttributeSetXY__Sequence__are_equal(const v2x_msgs__msg__NodeAttributeSetXY__Sequence * lhs, const v2x_msgs__msg__NodeAttributeSetXY__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__NodeAttributeSetXY__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__NodeAttributeSetXY__Sequence__copy(
  const v2x_msgs__msg__NodeAttributeSetXY__Sequence * input,
  v2x_msgs__msg__NodeAttributeSetXY__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__NodeAttributeSetXY);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__NodeAttributeSetXY * data =
      (v2x_msgs__msg__NodeAttributeSetXY *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__NodeAttributeSetXY__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__NodeAttributeSetXY__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__NodeAttributeSetXY__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
