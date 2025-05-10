// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/StationDataContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/station_data_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `originating_vehicle_container`
#include "v2x_msgs/msg/detail/originating_vehicle_container__functions.h"
// Member `originating_rsucontainer`
#include "v2x_msgs/msg/detail/originating_rsu_container__functions.h"

bool
v2x_msgs__msg__StationDataContainer__init(v2x_msgs__msg__StationDataContainer * msg)
{
  if (!msg) {
    return false;
  }
  // station_data_container_container_select
  msg->station_data_container_container_select = 0ll;
  // originating_vehicle_container
  if (!v2x_msgs__msg__OriginatingVehicleContainer__init(&msg->originating_vehicle_container)) {
    v2x_msgs__msg__StationDataContainer__fini(msg);
    return false;
  }
  // originating_rsucontainer
  if (!v2x_msgs__msg__OriginatingRSUContainer__init(&msg->originating_rsucontainer)) {
    v2x_msgs__msg__StationDataContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__StationDataContainer__fini(v2x_msgs__msg__StationDataContainer * msg)
{
  if (!msg) {
    return;
  }
  // station_data_container_container_select
  // originating_vehicle_container
  v2x_msgs__msg__OriginatingVehicleContainer__fini(&msg->originating_vehicle_container);
  // originating_rsucontainer
  v2x_msgs__msg__OriginatingRSUContainer__fini(&msg->originating_rsucontainer);
}

bool
v2x_msgs__msg__StationDataContainer__are_equal(const v2x_msgs__msg__StationDataContainer * lhs, const v2x_msgs__msg__StationDataContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // station_data_container_container_select
  if (lhs->station_data_container_container_select != rhs->station_data_container_container_select) {
    return false;
  }
  // originating_vehicle_container
  if (!v2x_msgs__msg__OriginatingVehicleContainer__are_equal(
      &(lhs->originating_vehicle_container), &(rhs->originating_vehicle_container)))
  {
    return false;
  }
  // originating_rsucontainer
  if (!v2x_msgs__msg__OriginatingRSUContainer__are_equal(
      &(lhs->originating_rsucontainer), &(rhs->originating_rsucontainer)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__StationDataContainer__copy(
  const v2x_msgs__msg__StationDataContainer * input,
  v2x_msgs__msg__StationDataContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // station_data_container_container_select
  output->station_data_container_container_select = input->station_data_container_container_select;
  // originating_vehicle_container
  if (!v2x_msgs__msg__OriginatingVehicleContainer__copy(
      &(input->originating_vehicle_container), &(output->originating_vehicle_container)))
  {
    return false;
  }
  // originating_rsucontainer
  if (!v2x_msgs__msg__OriginatingRSUContainer__copy(
      &(input->originating_rsucontainer), &(output->originating_rsucontainer)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__StationDataContainer *
v2x_msgs__msg__StationDataContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__StationDataContainer * msg = (v2x_msgs__msg__StationDataContainer *)allocator.allocate(sizeof(v2x_msgs__msg__StationDataContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__StationDataContainer));
  bool success = v2x_msgs__msg__StationDataContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__StationDataContainer__destroy(v2x_msgs__msg__StationDataContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__StationDataContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__StationDataContainer__Sequence__init(v2x_msgs__msg__StationDataContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__StationDataContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__StationDataContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__StationDataContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__StationDataContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__StationDataContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__StationDataContainer__Sequence__fini(v2x_msgs__msg__StationDataContainer__Sequence * array)
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
      v2x_msgs__msg__StationDataContainer__fini(&array->data[i]);
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

v2x_msgs__msg__StationDataContainer__Sequence *
v2x_msgs__msg__StationDataContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__StationDataContainer__Sequence * array = (v2x_msgs__msg__StationDataContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__StationDataContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__StationDataContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__StationDataContainer__Sequence__destroy(v2x_msgs__msg__StationDataContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__StationDataContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__StationDataContainer__Sequence__are_equal(const v2x_msgs__msg__StationDataContainer__Sequence * lhs, const v2x_msgs__msg__StationDataContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__StationDataContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__StationDataContainer__Sequence__copy(
  const v2x_msgs__msg__StationDataContainer__Sequence * input,
  v2x_msgs__msg__StationDataContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__StationDataContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__StationDataContainer * data =
      (v2x_msgs__msg__StationDataContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__StationDataContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__StationDataContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__StationDataContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
