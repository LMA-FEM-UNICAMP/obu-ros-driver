// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/OriginatingRSUContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/originating_rsu_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `intersection_reference_id`
#include "v2x_msgs/msg/detail/intersection_reference_id__functions.h"
// Member `road_segment_reference_id`
#include "v2x_msgs/msg/detail/road_segment_reference_id__functions.h"

bool
v2x_msgs__msg__OriginatingRSUContainer__init(v2x_msgs__msg__OriginatingRSUContainer * msg)
{
  if (!msg) {
    return false;
  }
  // originating_rsucontainer_container_select
  msg->originating_rsucontainer_container_select = 0ll;
  // intersection_reference_id
  if (!v2x_msgs__msg__IntersectionReferenceID__init(&msg->intersection_reference_id)) {
    v2x_msgs__msg__OriginatingRSUContainer__fini(msg);
    return false;
  }
  // road_segment_reference_id
  if (!v2x_msgs__msg__RoadSegmentReferenceID__init(&msg->road_segment_reference_id)) {
    v2x_msgs__msg__OriginatingRSUContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__OriginatingRSUContainer__fini(v2x_msgs__msg__OriginatingRSUContainer * msg)
{
  if (!msg) {
    return;
  }
  // originating_rsucontainer_container_select
  // intersection_reference_id
  v2x_msgs__msg__IntersectionReferenceID__fini(&msg->intersection_reference_id);
  // road_segment_reference_id
  v2x_msgs__msg__RoadSegmentReferenceID__fini(&msg->road_segment_reference_id);
}

bool
v2x_msgs__msg__OriginatingRSUContainer__are_equal(const v2x_msgs__msg__OriginatingRSUContainer * lhs, const v2x_msgs__msg__OriginatingRSUContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // originating_rsucontainer_container_select
  if (lhs->originating_rsucontainer_container_select != rhs->originating_rsucontainer_container_select) {
    return false;
  }
  // intersection_reference_id
  if (!v2x_msgs__msg__IntersectionReferenceID__are_equal(
      &(lhs->intersection_reference_id), &(rhs->intersection_reference_id)))
  {
    return false;
  }
  // road_segment_reference_id
  if (!v2x_msgs__msg__RoadSegmentReferenceID__are_equal(
      &(lhs->road_segment_reference_id), &(rhs->road_segment_reference_id)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__OriginatingRSUContainer__copy(
  const v2x_msgs__msg__OriginatingRSUContainer * input,
  v2x_msgs__msg__OriginatingRSUContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // originating_rsucontainer_container_select
  output->originating_rsucontainer_container_select = input->originating_rsucontainer_container_select;
  // intersection_reference_id
  if (!v2x_msgs__msg__IntersectionReferenceID__copy(
      &(input->intersection_reference_id), &(output->intersection_reference_id)))
  {
    return false;
  }
  // road_segment_reference_id
  if (!v2x_msgs__msg__RoadSegmentReferenceID__copy(
      &(input->road_segment_reference_id), &(output->road_segment_reference_id)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__OriginatingRSUContainer *
v2x_msgs__msg__OriginatingRSUContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__OriginatingRSUContainer * msg = (v2x_msgs__msg__OriginatingRSUContainer *)allocator.allocate(sizeof(v2x_msgs__msg__OriginatingRSUContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__OriginatingRSUContainer));
  bool success = v2x_msgs__msg__OriginatingRSUContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__OriginatingRSUContainer__destroy(v2x_msgs__msg__OriginatingRSUContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__OriginatingRSUContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__OriginatingRSUContainer__Sequence__init(v2x_msgs__msg__OriginatingRSUContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__OriginatingRSUContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__OriginatingRSUContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__OriginatingRSUContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__OriginatingRSUContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__OriginatingRSUContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__OriginatingRSUContainer__Sequence__fini(v2x_msgs__msg__OriginatingRSUContainer__Sequence * array)
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
      v2x_msgs__msg__OriginatingRSUContainer__fini(&array->data[i]);
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

v2x_msgs__msg__OriginatingRSUContainer__Sequence *
v2x_msgs__msg__OriginatingRSUContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__OriginatingRSUContainer__Sequence * array = (v2x_msgs__msg__OriginatingRSUContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__OriginatingRSUContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__OriginatingRSUContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__OriginatingRSUContainer__Sequence__destroy(v2x_msgs__msg__OriginatingRSUContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__OriginatingRSUContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__OriginatingRSUContainer__Sequence__are_equal(const v2x_msgs__msg__OriginatingRSUContainer__Sequence * lhs, const v2x_msgs__msg__OriginatingRSUContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__OriginatingRSUContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__OriginatingRSUContainer__Sequence__copy(
  const v2x_msgs__msg__OriginatingRSUContainer__Sequence * input,
  v2x_msgs__msg__OriginatingRSUContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__OriginatingRSUContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__OriginatingRSUContainer * data =
      (v2x_msgs__msg__OriginatingRSUContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__OriginatingRSUContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__OriginatingRSUContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__OriginatingRSUContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
