// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/LayoutContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/layout_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `layout_components`
#include "v2x_msgs/msg/detail/layout_components__functions.h"

bool
v2x_msgs__msg__LayoutContainer__init(v2x_msgs__msg__LayoutContainer * msg)
{
  if (!msg) {
    return false;
  }
  // layout_id
  // height_present
  msg->height_present = false;
  // height
  // width_present
  msg->width_present = false;
  // width
  // layout_components
  if (!v2x_msgs__msg__LayoutComponents__init(&msg->layout_components)) {
    v2x_msgs__msg__LayoutContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__LayoutContainer__fini(v2x_msgs__msg__LayoutContainer * msg)
{
  if (!msg) {
    return;
  }
  // layout_id
  // height_present
  // height
  // width_present
  // width
  // layout_components
  v2x_msgs__msg__LayoutComponents__fini(&msg->layout_components);
}

bool
v2x_msgs__msg__LayoutContainer__are_equal(const v2x_msgs__msg__LayoutContainer * lhs, const v2x_msgs__msg__LayoutContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // layout_id
  if (lhs->layout_id != rhs->layout_id) {
    return false;
  }
  // height_present
  if (lhs->height_present != rhs->height_present) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // width_present
  if (lhs->width_present != rhs->width_present) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // layout_components
  if (!v2x_msgs__msg__LayoutComponents__are_equal(
      &(lhs->layout_components), &(rhs->layout_components)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__LayoutContainer__copy(
  const v2x_msgs__msg__LayoutContainer * input,
  v2x_msgs__msg__LayoutContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // layout_id
  output->layout_id = input->layout_id;
  // height_present
  output->height_present = input->height_present;
  // height
  output->height = input->height;
  // width_present
  output->width_present = input->width_present;
  // width
  output->width = input->width;
  // layout_components
  if (!v2x_msgs__msg__LayoutComponents__copy(
      &(input->layout_components), &(output->layout_components)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__LayoutContainer *
v2x_msgs__msg__LayoutContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LayoutContainer * msg = (v2x_msgs__msg__LayoutContainer *)allocator.allocate(sizeof(v2x_msgs__msg__LayoutContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__LayoutContainer));
  bool success = v2x_msgs__msg__LayoutContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__LayoutContainer__destroy(v2x_msgs__msg__LayoutContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__LayoutContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__LayoutContainer__Sequence__init(v2x_msgs__msg__LayoutContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LayoutContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__LayoutContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__LayoutContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__LayoutContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__LayoutContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__LayoutContainer__Sequence__fini(v2x_msgs__msg__LayoutContainer__Sequence * array)
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
      v2x_msgs__msg__LayoutContainer__fini(&array->data[i]);
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

v2x_msgs__msg__LayoutContainer__Sequence *
v2x_msgs__msg__LayoutContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__LayoutContainer__Sequence * array = (v2x_msgs__msg__LayoutContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__LayoutContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__LayoutContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__LayoutContainer__Sequence__destroy(v2x_msgs__msg__LayoutContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__LayoutContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__LayoutContainer__Sequence__are_equal(const v2x_msgs__msg__LayoutContainer__Sequence * lhs, const v2x_msgs__msg__LayoutContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__LayoutContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__LayoutContainer__Sequence__copy(
  const v2x_msgs__msg__LayoutContainer__Sequence * input,
  v2x_msgs__msg__LayoutContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__LayoutContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__LayoutContainer * data =
      (v2x_msgs__msg__LayoutContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__LayoutContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__LayoutContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__LayoutContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
