// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/RequestorType.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/requestor_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `role`
#include "v2x_msgs/msg/detail/basic_vehicle_role__functions.h"
// Member `subrole`
#include "v2x_msgs/msg/detail/request_sub_role__functions.h"
// Member `request`
#include "v2x_msgs/msg/detail/request_importance_level__functions.h"
// Member `iso3883`
#include "v2x_msgs/msg/detail/iso3833_vehicle_type__functions.h"
// Member `hpms_type`
#include "v2x_msgs/msg/detail/vehicle_type__functions.h"
// Member `regional`
#include "v2x_msgs/msg/detail/regional_extension__functions.h"

bool
v2x_msgs__msg__RequestorType__init(v2x_msgs__msg__RequestorType * msg)
{
  if (!msg) {
    return false;
  }
  // role
  if (!v2x_msgs__msg__BasicVehicleRole__init(&msg->role)) {
    v2x_msgs__msg__RequestorType__fini(msg);
    return false;
  }
  // subrole_present
  msg->subrole_present = false;
  // subrole
  if (!v2x_msgs__msg__RequestSubRole__init(&msg->subrole)) {
    v2x_msgs__msg__RequestorType__fini(msg);
    return false;
  }
  // request_present
  msg->request_present = false;
  // request
  if (!v2x_msgs__msg__RequestImportanceLevel__init(&msg->request)) {
    v2x_msgs__msg__RequestorType__fini(msg);
    return false;
  }
  // iso3883_present
  msg->iso3883_present = false;
  // iso3883
  if (!v2x_msgs__msg__Iso3833VehicleType__init(&msg->iso3883)) {
    v2x_msgs__msg__RequestorType__fini(msg);
    return false;
  }
  // hpms_type_present
  msg->hpms_type_present = false;
  // hpms_type
  if (!v2x_msgs__msg__VehicleType__init(&msg->hpms_type)) {
    v2x_msgs__msg__RequestorType__fini(msg);
    return false;
  }
  // regional_present
  msg->regional_present = false;
  // regional
  if (!v2x_msgs__msg__RegionalExtension__init(&msg->regional)) {
    v2x_msgs__msg__RequestorType__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__RequestorType__fini(v2x_msgs__msg__RequestorType * msg)
{
  if (!msg) {
    return;
  }
  // role
  v2x_msgs__msg__BasicVehicleRole__fini(&msg->role);
  // subrole_present
  // subrole
  v2x_msgs__msg__RequestSubRole__fini(&msg->subrole);
  // request_present
  // request
  v2x_msgs__msg__RequestImportanceLevel__fini(&msg->request);
  // iso3883_present
  // iso3883
  v2x_msgs__msg__Iso3833VehicleType__fini(&msg->iso3883);
  // hpms_type_present
  // hpms_type
  v2x_msgs__msg__VehicleType__fini(&msg->hpms_type);
  // regional_present
  // regional
  v2x_msgs__msg__RegionalExtension__fini(&msg->regional);
}

bool
v2x_msgs__msg__RequestorType__are_equal(const v2x_msgs__msg__RequestorType * lhs, const v2x_msgs__msg__RequestorType * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // role
  if (!v2x_msgs__msg__BasicVehicleRole__are_equal(
      &(lhs->role), &(rhs->role)))
  {
    return false;
  }
  // subrole_present
  if (lhs->subrole_present != rhs->subrole_present) {
    return false;
  }
  // subrole
  if (!v2x_msgs__msg__RequestSubRole__are_equal(
      &(lhs->subrole), &(rhs->subrole)))
  {
    return false;
  }
  // request_present
  if (lhs->request_present != rhs->request_present) {
    return false;
  }
  // request
  if (!v2x_msgs__msg__RequestImportanceLevel__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // iso3883_present
  if (lhs->iso3883_present != rhs->iso3883_present) {
    return false;
  }
  // iso3883
  if (!v2x_msgs__msg__Iso3833VehicleType__are_equal(
      &(lhs->iso3883), &(rhs->iso3883)))
  {
    return false;
  }
  // hpms_type_present
  if (lhs->hpms_type_present != rhs->hpms_type_present) {
    return false;
  }
  // hpms_type
  if (!v2x_msgs__msg__VehicleType__are_equal(
      &(lhs->hpms_type), &(rhs->hpms_type)))
  {
    return false;
  }
  // regional_present
  if (lhs->regional_present != rhs->regional_present) {
    return false;
  }
  // regional
  if (!v2x_msgs__msg__RegionalExtension__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__RequestorType__copy(
  const v2x_msgs__msg__RequestorType * input,
  v2x_msgs__msg__RequestorType * output)
{
  if (!input || !output) {
    return false;
  }
  // role
  if (!v2x_msgs__msg__BasicVehicleRole__copy(
      &(input->role), &(output->role)))
  {
    return false;
  }
  // subrole_present
  output->subrole_present = input->subrole_present;
  // subrole
  if (!v2x_msgs__msg__RequestSubRole__copy(
      &(input->subrole), &(output->subrole)))
  {
    return false;
  }
  // request_present
  output->request_present = input->request_present;
  // request
  if (!v2x_msgs__msg__RequestImportanceLevel__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // iso3883_present
  output->iso3883_present = input->iso3883_present;
  // iso3883
  if (!v2x_msgs__msg__Iso3833VehicleType__copy(
      &(input->iso3883), &(output->iso3883)))
  {
    return false;
  }
  // hpms_type_present
  output->hpms_type_present = input->hpms_type_present;
  // hpms_type
  if (!v2x_msgs__msg__VehicleType__copy(
      &(input->hpms_type), &(output->hpms_type)))
  {
    return false;
  }
  // regional_present
  output->regional_present = input->regional_present;
  // regional
  if (!v2x_msgs__msg__RegionalExtension__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__RequestorType *
v2x_msgs__msg__RequestorType__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RequestorType * msg = (v2x_msgs__msg__RequestorType *)allocator.allocate(sizeof(v2x_msgs__msg__RequestorType), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__RequestorType));
  bool success = v2x_msgs__msg__RequestorType__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__RequestorType__destroy(v2x_msgs__msg__RequestorType * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__RequestorType__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__RequestorType__Sequence__init(v2x_msgs__msg__RequestorType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RequestorType * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__RequestorType *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__RequestorType), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__RequestorType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__RequestorType__fini(&data[i - 1]);
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
v2x_msgs__msg__RequestorType__Sequence__fini(v2x_msgs__msg__RequestorType__Sequence * array)
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
      v2x_msgs__msg__RequestorType__fini(&array->data[i]);
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

v2x_msgs__msg__RequestorType__Sequence *
v2x_msgs__msg__RequestorType__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__RequestorType__Sequence * array = (v2x_msgs__msg__RequestorType__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__RequestorType__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__RequestorType__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__RequestorType__Sequence__destroy(v2x_msgs__msg__RequestorType__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__RequestorType__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__RequestorType__Sequence__are_equal(const v2x_msgs__msg__RequestorType__Sequence * lhs, const v2x_msgs__msg__RequestorType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__RequestorType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__RequestorType__Sequence__copy(
  const v2x_msgs__msg__RequestorType__Sequence * input,
  v2x_msgs__msg__RequestorType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__RequestorType);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__RequestorType * data =
      (v2x_msgs__msg__RequestorType *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__RequestorType__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__RequestorType__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__RequestorType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
