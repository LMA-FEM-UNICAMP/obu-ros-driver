// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/FreeSpaceArea.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/free_space_area__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `free_space_polygon`
#include "v2x_msgs/msg/detail/area_polygon__functions.h"
// Member `free_space_circular`
#include "v2x_msgs/msg/detail/area_circular__functions.h"
// Member `free_space_ellipse`
#include "v2x_msgs/msg/detail/area_ellipse__functions.h"
// Member `free_space_rectangle`
#include "v2x_msgs/msg/detail/area_rectangle__functions.h"

bool
v2x_msgs__msg__FreeSpaceArea__init(v2x_msgs__msg__FreeSpaceArea * msg)
{
  if (!msg) {
    return false;
  }
  // free_space_area_container_select
  msg->free_space_area_container_select = 0ll;
  // free_space_polygon
  if (!v2x_msgs__msg__AreaPolygon__init(&msg->free_space_polygon)) {
    v2x_msgs__msg__FreeSpaceArea__fini(msg);
    return false;
  }
  // free_space_circular
  if (!v2x_msgs__msg__AreaCircular__init(&msg->free_space_circular)) {
    v2x_msgs__msg__FreeSpaceArea__fini(msg);
    return false;
  }
  // free_space_ellipse
  if (!v2x_msgs__msg__AreaEllipse__init(&msg->free_space_ellipse)) {
    v2x_msgs__msg__FreeSpaceArea__fini(msg);
    return false;
  }
  // free_space_rectangle
  if (!v2x_msgs__msg__AreaRectangle__init(&msg->free_space_rectangle)) {
    v2x_msgs__msg__FreeSpaceArea__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__FreeSpaceArea__fini(v2x_msgs__msg__FreeSpaceArea * msg)
{
  if (!msg) {
    return;
  }
  // free_space_area_container_select
  // free_space_polygon
  v2x_msgs__msg__AreaPolygon__fini(&msg->free_space_polygon);
  // free_space_circular
  v2x_msgs__msg__AreaCircular__fini(&msg->free_space_circular);
  // free_space_ellipse
  v2x_msgs__msg__AreaEllipse__fini(&msg->free_space_ellipse);
  // free_space_rectangle
  v2x_msgs__msg__AreaRectangle__fini(&msg->free_space_rectangle);
}

bool
v2x_msgs__msg__FreeSpaceArea__are_equal(const v2x_msgs__msg__FreeSpaceArea * lhs, const v2x_msgs__msg__FreeSpaceArea * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // free_space_area_container_select
  if (lhs->free_space_area_container_select != rhs->free_space_area_container_select) {
    return false;
  }
  // free_space_polygon
  if (!v2x_msgs__msg__AreaPolygon__are_equal(
      &(lhs->free_space_polygon), &(rhs->free_space_polygon)))
  {
    return false;
  }
  // free_space_circular
  if (!v2x_msgs__msg__AreaCircular__are_equal(
      &(lhs->free_space_circular), &(rhs->free_space_circular)))
  {
    return false;
  }
  // free_space_ellipse
  if (!v2x_msgs__msg__AreaEllipse__are_equal(
      &(lhs->free_space_ellipse), &(rhs->free_space_ellipse)))
  {
    return false;
  }
  // free_space_rectangle
  if (!v2x_msgs__msg__AreaRectangle__are_equal(
      &(lhs->free_space_rectangle), &(rhs->free_space_rectangle)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__FreeSpaceArea__copy(
  const v2x_msgs__msg__FreeSpaceArea * input,
  v2x_msgs__msg__FreeSpaceArea * output)
{
  if (!input || !output) {
    return false;
  }
  // free_space_area_container_select
  output->free_space_area_container_select = input->free_space_area_container_select;
  // free_space_polygon
  if (!v2x_msgs__msg__AreaPolygon__copy(
      &(input->free_space_polygon), &(output->free_space_polygon)))
  {
    return false;
  }
  // free_space_circular
  if (!v2x_msgs__msg__AreaCircular__copy(
      &(input->free_space_circular), &(output->free_space_circular)))
  {
    return false;
  }
  // free_space_ellipse
  if (!v2x_msgs__msg__AreaEllipse__copy(
      &(input->free_space_ellipse), &(output->free_space_ellipse)))
  {
    return false;
  }
  // free_space_rectangle
  if (!v2x_msgs__msg__AreaRectangle__copy(
      &(input->free_space_rectangle), &(output->free_space_rectangle)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__FreeSpaceArea *
v2x_msgs__msg__FreeSpaceArea__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__FreeSpaceArea * msg = (v2x_msgs__msg__FreeSpaceArea *)allocator.allocate(sizeof(v2x_msgs__msg__FreeSpaceArea), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__FreeSpaceArea));
  bool success = v2x_msgs__msg__FreeSpaceArea__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__FreeSpaceArea__destroy(v2x_msgs__msg__FreeSpaceArea * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__FreeSpaceArea__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__FreeSpaceArea__Sequence__init(v2x_msgs__msg__FreeSpaceArea__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__FreeSpaceArea * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__FreeSpaceArea *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__FreeSpaceArea), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__FreeSpaceArea__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__FreeSpaceArea__fini(&data[i - 1]);
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
v2x_msgs__msg__FreeSpaceArea__Sequence__fini(v2x_msgs__msg__FreeSpaceArea__Sequence * array)
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
      v2x_msgs__msg__FreeSpaceArea__fini(&array->data[i]);
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

v2x_msgs__msg__FreeSpaceArea__Sequence *
v2x_msgs__msg__FreeSpaceArea__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__FreeSpaceArea__Sequence * array = (v2x_msgs__msg__FreeSpaceArea__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__FreeSpaceArea__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__FreeSpaceArea__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__FreeSpaceArea__Sequence__destroy(v2x_msgs__msg__FreeSpaceArea__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__FreeSpaceArea__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__FreeSpaceArea__Sequence__are_equal(const v2x_msgs__msg__FreeSpaceArea__Sequence * lhs, const v2x_msgs__msg__FreeSpaceArea__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__FreeSpaceArea__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__FreeSpaceArea__Sequence__copy(
  const v2x_msgs__msg__FreeSpaceArea__Sequence * input,
  v2x_msgs__msg__FreeSpaceArea__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__FreeSpaceArea);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__FreeSpaceArea * data =
      (v2x_msgs__msg__FreeSpaceArea *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__FreeSpaceArea__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__FreeSpaceArea__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__FreeSpaceArea__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
