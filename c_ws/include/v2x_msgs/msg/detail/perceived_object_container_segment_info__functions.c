// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/PerceivedObjectContainerSegmentInfo.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/perceived_object_container_segment_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `total_msg_segments`
// Member `this_segment_num`
#include "v2x_msgs/msg/detail/segment_count__functions.h"

bool
v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__init(v2x_msgs__msg__PerceivedObjectContainerSegmentInfo * msg)
{
  if (!msg) {
    return false;
  }
  // total_msg_segments
  if (!v2x_msgs__msg__SegmentCount__init(&msg->total_msg_segments)) {
    v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__fini(msg);
    return false;
  }
  // this_segment_num
  if (!v2x_msgs__msg__SegmentCount__init(&msg->this_segment_num)) {
    v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__fini(v2x_msgs__msg__PerceivedObjectContainerSegmentInfo * msg)
{
  if (!msg) {
    return;
  }
  // total_msg_segments
  v2x_msgs__msg__SegmentCount__fini(&msg->total_msg_segments);
  // this_segment_num
  v2x_msgs__msg__SegmentCount__fini(&msg->this_segment_num);
}

bool
v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__are_equal(const v2x_msgs__msg__PerceivedObjectContainerSegmentInfo * lhs, const v2x_msgs__msg__PerceivedObjectContainerSegmentInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // total_msg_segments
  if (!v2x_msgs__msg__SegmentCount__are_equal(
      &(lhs->total_msg_segments), &(rhs->total_msg_segments)))
  {
    return false;
  }
  // this_segment_num
  if (!v2x_msgs__msg__SegmentCount__are_equal(
      &(lhs->this_segment_num), &(rhs->this_segment_num)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__copy(
  const v2x_msgs__msg__PerceivedObjectContainerSegmentInfo * input,
  v2x_msgs__msg__PerceivedObjectContainerSegmentInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // total_msg_segments
  if (!v2x_msgs__msg__SegmentCount__copy(
      &(input->total_msg_segments), &(output->total_msg_segments)))
  {
    return false;
  }
  // this_segment_num
  if (!v2x_msgs__msg__SegmentCount__copy(
      &(input->this_segment_num), &(output->this_segment_num)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__PerceivedObjectContainerSegmentInfo *
v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PerceivedObjectContainerSegmentInfo * msg = (v2x_msgs__msg__PerceivedObjectContainerSegmentInfo *)allocator.allocate(sizeof(v2x_msgs__msg__PerceivedObjectContainerSegmentInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__PerceivedObjectContainerSegmentInfo));
  bool success = v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__destroy(v2x_msgs__msg__PerceivedObjectContainerSegmentInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence__init(v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PerceivedObjectContainerSegmentInfo * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__PerceivedObjectContainerSegmentInfo *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__PerceivedObjectContainerSegmentInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__fini(&data[i - 1]);
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
v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence__fini(v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence * array)
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
      v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__fini(&array->data[i]);
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

v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence *
v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence * array = (v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence__destroy(v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence__are_equal(const v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence * lhs, const v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence__copy(
  const v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence * input,
  v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__PerceivedObjectContainerSegmentInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__PerceivedObjectContainerSegmentInfo * data =
      (v2x_msgs__msg__PerceivedObjectContainerSegmentInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
