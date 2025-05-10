// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/CpmManagementContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/cpm_management_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `station_type`
#include "v2x_msgs/msg/detail/station_type__functions.h"
// Member `perceived_object_container_segment_info`
#include "v2x_msgs/msg/detail/perceived_object_container_segment_info__functions.h"
// Member `reference_position`
#include "v2x_msgs/msg/detail/reference_position__functions.h"

bool
v2x_msgs__msg__CpmManagementContainer__init(v2x_msgs__msg__CpmManagementContainer * msg)
{
  if (!msg) {
    return false;
  }
  // station_type
  if (!v2x_msgs__msg__StationType__init(&msg->station_type)) {
    v2x_msgs__msg__CpmManagementContainer__fini(msg);
    return false;
  }
  // perceived_object_container_segment_info_present
  msg->perceived_object_container_segment_info_present = false;
  // perceived_object_container_segment_info
  if (!v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__init(&msg->perceived_object_container_segment_info)) {
    v2x_msgs__msg__CpmManagementContainer__fini(msg);
    return false;
  }
  // reference_position
  if (!v2x_msgs__msg__ReferencePosition__init(&msg->reference_position)) {
    v2x_msgs__msg__CpmManagementContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__CpmManagementContainer__fini(v2x_msgs__msg__CpmManagementContainer * msg)
{
  if (!msg) {
    return;
  }
  // station_type
  v2x_msgs__msg__StationType__fini(&msg->station_type);
  // perceived_object_container_segment_info_present
  // perceived_object_container_segment_info
  v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__fini(&msg->perceived_object_container_segment_info);
  // reference_position
  v2x_msgs__msg__ReferencePosition__fini(&msg->reference_position);
}

bool
v2x_msgs__msg__CpmManagementContainer__are_equal(const v2x_msgs__msg__CpmManagementContainer * lhs, const v2x_msgs__msg__CpmManagementContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // station_type
  if (!v2x_msgs__msg__StationType__are_equal(
      &(lhs->station_type), &(rhs->station_type)))
  {
    return false;
  }
  // perceived_object_container_segment_info_present
  if (lhs->perceived_object_container_segment_info_present != rhs->perceived_object_container_segment_info_present) {
    return false;
  }
  // perceived_object_container_segment_info
  if (!v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__are_equal(
      &(lhs->perceived_object_container_segment_info), &(rhs->perceived_object_container_segment_info)))
  {
    return false;
  }
  // reference_position
  if (!v2x_msgs__msg__ReferencePosition__are_equal(
      &(lhs->reference_position), &(rhs->reference_position)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__CpmManagementContainer__copy(
  const v2x_msgs__msg__CpmManagementContainer * input,
  v2x_msgs__msg__CpmManagementContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // station_type
  if (!v2x_msgs__msg__StationType__copy(
      &(input->station_type), &(output->station_type)))
  {
    return false;
  }
  // perceived_object_container_segment_info_present
  output->perceived_object_container_segment_info_present = input->perceived_object_container_segment_info_present;
  // perceived_object_container_segment_info
  if (!v2x_msgs__msg__PerceivedObjectContainerSegmentInfo__copy(
      &(input->perceived_object_container_segment_info), &(output->perceived_object_container_segment_info)))
  {
    return false;
  }
  // reference_position
  if (!v2x_msgs__msg__ReferencePosition__copy(
      &(input->reference_position), &(output->reference_position)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__CpmManagementContainer *
v2x_msgs__msg__CpmManagementContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CpmManagementContainer * msg = (v2x_msgs__msg__CpmManagementContainer *)allocator.allocate(sizeof(v2x_msgs__msg__CpmManagementContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__CpmManagementContainer));
  bool success = v2x_msgs__msg__CpmManagementContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__CpmManagementContainer__destroy(v2x_msgs__msg__CpmManagementContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__CpmManagementContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__CpmManagementContainer__Sequence__init(v2x_msgs__msg__CpmManagementContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CpmManagementContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__CpmManagementContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__CpmManagementContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__CpmManagementContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__CpmManagementContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__CpmManagementContainer__Sequence__fini(v2x_msgs__msg__CpmManagementContainer__Sequence * array)
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
      v2x_msgs__msg__CpmManagementContainer__fini(&array->data[i]);
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

v2x_msgs__msg__CpmManagementContainer__Sequence *
v2x_msgs__msg__CpmManagementContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CpmManagementContainer__Sequence * array = (v2x_msgs__msg__CpmManagementContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__CpmManagementContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__CpmManagementContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__CpmManagementContainer__Sequence__destroy(v2x_msgs__msg__CpmManagementContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__CpmManagementContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__CpmManagementContainer__Sequence__are_equal(const v2x_msgs__msg__CpmManagementContainer__Sequence * lhs, const v2x_msgs__msg__CpmManagementContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__CpmManagementContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__CpmManagementContainer__Sequence__copy(
  const v2x_msgs__msg__CpmManagementContainer__Sequence * input,
  v2x_msgs__msg__CpmManagementContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__CpmManagementContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__CpmManagementContainer * data =
      (v2x_msgs__msg__CpmManagementContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__CpmManagementContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__CpmManagementContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__CpmManagementContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
