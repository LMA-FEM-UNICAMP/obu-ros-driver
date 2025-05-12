// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/CS3.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/cs3__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `start_time`
#include "v2x_msgs/msg/detail/start_time__functions.h"
// Member `stop_time`
#include "v2x_msgs/msg/detail/stop_time__functions.h"
// Member `geograph_limit`
#include "v2x_msgs/msg/detail/geo_graphical_limit__functions.h"
// Member `service_app_limit`
#include "v2x_msgs/msg/detail/service_application_limit__functions.h"

bool
v2x_msgs__msg__CS3__init(v2x_msgs__msg__CS3 * msg)
{
  if (!msg) {
    return false;
  }
  // start_time
  if (!v2x_msgs__msg__StartTime__init(&msg->start_time)) {
    v2x_msgs__msg__CS3__fini(msg);
    return false;
  }
  // stop_time
  if (!v2x_msgs__msg__StopTime__init(&msg->stop_time)) {
    v2x_msgs__msg__CS3__fini(msg);
    return false;
  }
  // geograph_limit
  if (!v2x_msgs__msg__GeoGraphicalLimit__init(&msg->geograph_limit)) {
    v2x_msgs__msg__CS3__fini(msg);
    return false;
  }
  // service_app_limit
  if (!v2x_msgs__msg__ServiceApplicationLimit__init(&msg->service_app_limit)) {
    v2x_msgs__msg__CS3__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__CS3__fini(v2x_msgs__msg__CS3 * msg)
{
  if (!msg) {
    return;
  }
  // start_time
  v2x_msgs__msg__StartTime__fini(&msg->start_time);
  // stop_time
  v2x_msgs__msg__StopTime__fini(&msg->stop_time);
  // geograph_limit
  v2x_msgs__msg__GeoGraphicalLimit__fini(&msg->geograph_limit);
  // service_app_limit
  v2x_msgs__msg__ServiceApplicationLimit__fini(&msg->service_app_limit);
}

bool
v2x_msgs__msg__CS3__are_equal(const v2x_msgs__msg__CS3 * lhs, const v2x_msgs__msg__CS3 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start_time
  if (!v2x_msgs__msg__StartTime__are_equal(
      &(lhs->start_time), &(rhs->start_time)))
  {
    return false;
  }
  // stop_time
  if (!v2x_msgs__msg__StopTime__are_equal(
      &(lhs->stop_time), &(rhs->stop_time)))
  {
    return false;
  }
  // geograph_limit
  if (!v2x_msgs__msg__GeoGraphicalLimit__are_equal(
      &(lhs->geograph_limit), &(rhs->geograph_limit)))
  {
    return false;
  }
  // service_app_limit
  if (!v2x_msgs__msg__ServiceApplicationLimit__are_equal(
      &(lhs->service_app_limit), &(rhs->service_app_limit)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__CS3__copy(
  const v2x_msgs__msg__CS3 * input,
  v2x_msgs__msg__CS3 * output)
{
  if (!input || !output) {
    return false;
  }
  // start_time
  if (!v2x_msgs__msg__StartTime__copy(
      &(input->start_time), &(output->start_time)))
  {
    return false;
  }
  // stop_time
  if (!v2x_msgs__msg__StopTime__copy(
      &(input->stop_time), &(output->stop_time)))
  {
    return false;
  }
  // geograph_limit
  if (!v2x_msgs__msg__GeoGraphicalLimit__copy(
      &(input->geograph_limit), &(output->geograph_limit)))
  {
    return false;
  }
  // service_app_limit
  if (!v2x_msgs__msg__ServiceApplicationLimit__copy(
      &(input->service_app_limit), &(output->service_app_limit)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__CS3 *
v2x_msgs__msg__CS3__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CS3 * msg = (v2x_msgs__msg__CS3 *)allocator.allocate(sizeof(v2x_msgs__msg__CS3), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__CS3));
  bool success = v2x_msgs__msg__CS3__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__CS3__destroy(v2x_msgs__msg__CS3 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__CS3__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__CS3__Sequence__init(v2x_msgs__msg__CS3__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CS3 * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__CS3 *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__CS3), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__CS3__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__CS3__fini(&data[i - 1]);
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
v2x_msgs__msg__CS3__Sequence__fini(v2x_msgs__msg__CS3__Sequence * array)
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
      v2x_msgs__msg__CS3__fini(&array->data[i]);
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

v2x_msgs__msg__CS3__Sequence *
v2x_msgs__msg__CS3__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__CS3__Sequence * array = (v2x_msgs__msg__CS3__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__CS3__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__CS3__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__CS3__Sequence__destroy(v2x_msgs__msg__CS3__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__CS3__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__CS3__Sequence__are_equal(const v2x_msgs__msg__CS3__Sequence * lhs, const v2x_msgs__msg__CS3__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__CS3__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__CS3__Sequence__copy(
  const v2x_msgs__msg__CS3__Sequence * input,
  v2x_msgs__msg__CS3__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__CS3);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__CS3 * data =
      (v2x_msgs__msg__CS3 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__CS3__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__CS3__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__CS3__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
