// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/RequestorDescription.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/requestor_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "v2x_msgs/msg/detail/vehicle_id__functions.h"
// Member `type`
#include "v2x_msgs/msg/detail/requestor_type__functions.h"
// Member `position`
#include "v2x_msgs/msg/detail/requestor_position_vector__functions.h"
// Member `name`
// Member `route_name`
#include "v2x_msgs/msg/detail/descriptive_name__functions.h"
// Member `transit_status`
#include "v2x_msgs/msg/detail/transit_vehicle_status__functions.h"
// Member `transit_occupancy`
#include "v2x_msgs/msg/detail/transit_vehicle_occupancy__functions.h"
// Member `transit_schedule`
#include "v2x_msgs/msg/detail/delta_time__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/reg_requestor_description__functions.h"

bool
v2x_msgs__msg__RequestorDescription__init(v2x_msgs__msg__RequestorDescription * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!v2x_msgs__msg__VehicleID__init(&msg->id)) {
    v2x_msgs__msg__RequestorDescription__fini(msg);
    return false;
  }
  // type_present
  msg->type_present = false;
  // type
  if (!v2x_msgs__msg__RequestorType__init(&msg->type)) {
    v2x_msgs__msg__RequestorDescription__fini(msg);
    return false;
  }
  // position_present
  msg->position_present = false;
  // position
  if (!v2x_msgs__msg__RequestorPositionVector__init(&msg->position)) {
    v2x_msgs__msg__RequestorDescription__fini(msg);
    return false;
  }
  // name_present
  msg->name_present = false;
  // name
  if (!v2x_msgs__msg__DescriptiveName__init(&msg->name)) {
    v2x_msgs__msg__RequestorDescription__fini(msg);
    return false;
  }
  // route_name_present
  msg->route_name_present = false;
  // route_name
  if (!v2x_msgs__msg__DescriptiveName__init(&msg->route_name)) {
    v2x_msgs__msg__RequestorDescription__fini(msg);
    return false;
  }
  // transit_status_present
  msg->transit_status_present = false;
  // transit_status
  if (!v2x_msgs__msg__TransitVehicleStatus__init(&msg->transit_status)) {
    v2x_msgs__msg__RequestorDescription__fini(msg);
    return false;
  }
  // transit_occupancy_present
  msg->transit_occupancy_present = false;
  // transit_occupancy
  if (!v2x_msgs__msg__TransitVehicleOccupancy__init(&msg->transit_occupancy)) {
    v2x_msgs__msg__RequestorDescription__fini(msg);
    return false;
  }
  // transit_schedule_present
  msg->transit_schedule_present = false;
  // transit_schedule
  if (!v2x_msgs__msg__DeltaTime__init(&msg->transit_schedule)) {
    v2x_msgs__msg__RequestorDescription__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegRequestorDescription__Sequence__init(&msg->regional, 0)) {
    v2x_msgs__msg__RequestorDescription__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__RequestorDescription__fini(v2x_msgs__msg__RequestorDescription * msg)
{
  if (!msg) {
    return;
  }
  // id
  v2x_msgs__msg__VehicleID__fini(&msg->id);
  // type_present
  // type
  v2x_msgs__msg__RequestorType__fini(&msg->type);
  // position_present
  // position
  v2x_msgs__msg__RequestorPositionVector__fini(&msg->position);
  // name_present
  // name
  v2x_msgs__msg__DescriptiveName__fini(&msg->name);
  // route_name_present
  // route_name
  v2x_msgs__msg__DescriptiveName__fini(&msg->route_name);
  // transit_status_present
  // transit_status
  v2x_msgs__msg__TransitVehicleStatus__fini(&msg->transit_status);
  // transit_occupancy_present
  // transit_occupancy
  v2x_msgs__msg__TransitVehicleOccupancy__fini(&msg->transit_occupancy);
  // transit_schedule_present
  // transit_schedule
  v2x_msgs__msg__DeltaTime__fini(&msg->transit_schedule);
  // regional_present
  // regional
  v2x_msgs__msg__RegRequestorDescription__Sequence__fini(&msg->regional);
}

bool
v2x_msgs__msg__RequestorDescription__are_equal(const v2x_msgs__msg__RequestorDescription * lhs, const v2x_msgs__msg__RequestorDescription * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!v2x_msgs__msg__VehicleID__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // type_present
  if (lhs->type_present != rhs->type_present) {
    return false;
  }
  // type
  if (!v2x_msgs__msg__RequestorType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // position_present
  if (lhs->position_present != rhs->position_present) {
    return false;
  }
  // position
  if (!v2x_msgs__msg__RequestorPositionVector__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // name_present
  if (lhs->name_present != rhs->name_present) {
    return false;
  }
  // name
  if (!v2x_msgs__msg__DescriptiveName__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // route_name_present
  if (lhs->route_name_present != rhs->route_name_present) {
    return false;
  }
  // route_name
  if (!v2x_msgs__msg__DescriptiveName__are_equal(
      &(lhs->route_name), &(rhs->route_name)))
  {
    return false;
  }
  // transit_status_present
  if (lhs->transit_status_present != rhs->transit_status_present) {
    return false;
  }
  // transit_status
  if (!v2x_msgs__msg__TransitVehicleStatus__are_equal(
      &(lhs->transit_status), &(rhs->transit_status)))
  {
    return false;
  }
  // transit_occupancy_present
  if (lhs->transit_occupancy_present != rhs->transit_occupancy_present) {
    return false;
  }
  // transit_occupancy
  if (!v2x_msgs__msg__TransitVehicleOccupancy__are_equal(
      &(lhs->transit_occupancy), &(rhs->transit_occupancy)))
  {
    return false;
  }
  // transit_schedule_present
  if (lhs->transit_schedule_present != rhs->transit_schedule_present) {
    return false;
  }
  // transit_schedule
  if (!v2x_msgs__msg__DeltaTime__are_equal(
      &(lhs->transit_schedule), &(rhs->transit_schedule)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegRequestorDescription__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__RequestorDescription__copy(
  const v2x_msgs__msg__RequestorDescription * input,
  v2x_msgs__msg__RequestorDescription * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!v2x_msgs__msg__VehicleID__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // type_present
  output->type_present = input->type_present;
  // type
  if (!v2x_msgs__msg__RequestorType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // position_present
  output->position_present = input->position_present;
  // position
  if (!v2x_msgs__msg__RequestorPositionVector__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // name_present
  output->name_present = input->name_present;
  // name
  if (!v2x_msgs__msg__DescriptiveName__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // route_name_present
  output->route_name_present = input->route_name_present;
  // route_name
  if (!v2x_msgs__msg__DescriptiveName__copy(
      &(input->route_name), &(output->route_name)))
  {
    return false;
  }
  // transit_status_present
  output->transit_status_present = input->transit_status_present;
  // transit_status
  if (!v2x_msgs__msg__TransitVehicleStatus__copy(
      &(input->transit_status), &(output->transit_status)))
  {
    return false;
  }
  // transit_occupancy_present
  output->transit_occupancy_present = input->transit_occupancy_present;
  // transit_occupancy
  if (!v2x_msgs__msg__TransitVehicleOccupancy__copy(
      &(input->transit_occupancy), &(output->transit_occupancy)))
  {
    return false;
  }
  // transit_schedule_present
  output->transit_schedule_present = input->transit_schedule_present;
  // transit_schedule
  if (!v2x_msgs__msg__DeltaTime__copy(
      &(input->transit_schedule), &(output->transit_schedule)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegRequestorDescription__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__RequestorDescription *
v2x_msgs__msg__RequestorDescription__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RequestorDescription * msg = (v2x_msgs__msg__RequestorDescription *)allocator.allocate(sizeof(v2x_msgs__msg__RequestorDescription), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__RequestorDescription));
  bool success = v2x_msgs__msg__RequestorDescription__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__RequestorDescription__destroy(v2x_msgs__msg__RequestorDescription * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__RequestorDescription__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__RequestorDescription__Sequence__init(v2x_msgs__msg__RequestorDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RequestorDescription * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__RequestorDescription *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__RequestorDescription), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__RequestorDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__RequestorDescription__fini(&data[i - 1]);
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
v2x_msgs__msg__RequestorDescription__Sequence__fini(v2x_msgs__msg__RequestorDescription__Sequence * array)
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
      v2x_msgs__msg__RequestorDescription__fini(&array->data[i]);
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

v2x_msgs__msg__RequestorDescription__Sequence *
v2x_msgs__msg__RequestorDescription__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RequestorDescription__Sequence * array = (v2x_msgs__msg__RequestorDescription__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__RequestorDescription__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__RequestorDescription__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__RequestorDescription__Sequence__destroy(v2x_msgs__msg__RequestorDescription__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__RequestorDescription__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__RequestorDescription__Sequence__are_equal(const v2x_msgs__msg__RequestorDescription__Sequence * lhs, const v2x_msgs__msg__RequestorDescription__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__RequestorDescription__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__RequestorDescription__Sequence__copy(
  const v2x_msgs__msg__RequestorDescription__Sequence * input,
  v2x_msgs__msg__RequestorDescription__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__RequestorDescription);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__RequestorDescription * data =
      (v2x_msgs__msg__RequestorDescription *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__RequestorDescription__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__RequestorDescription__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__RequestorDescription__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
