// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ObjectClass.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/object_class__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `confidence`
#include "v2x_msgs/msg/detail/class_confidence__functions.h"
// Member `vehicle`
#include "v2x_msgs/msg/detail/vehicle_subclass__functions.h"
// Member `person`
#include "v2x_msgs/msg/detail/person_subclass__functions.h"
// Member `animal`
#include "v2x_msgs/msg/detail/animal_subclass__functions.h"
// Member `other`
#include "v2x_msgs/msg/detail/other_subclass__functions.h"

bool
v2x_msgs__msg__ObjectClass__init(v2x_msgs__msg__ObjectClass * msg)
{
  if (!msg) {
    return false;
  }
  // confidence
  if (!v2x_msgs__msg__ClassConfidence__init(&msg->confidence)) {
    v2x_msgs__msg__ObjectClass__fini(msg);
    return false;
  }
  // class_container_select
  msg->class_container_select = 0ll;
  // vehicle
  if (!v2x_msgs__msg__VehicleSubclass__init(&msg->vehicle)) {
    v2x_msgs__msg__ObjectClass__fini(msg);
    return false;
  }
  // person
  if (!v2x_msgs__msg__PersonSubclass__init(&msg->person)) {
    v2x_msgs__msg__ObjectClass__fini(msg);
    return false;
  }
  // animal
  if (!v2x_msgs__msg__AnimalSubclass__init(&msg->animal)) {
    v2x_msgs__msg__ObjectClass__fini(msg);
    return false;
  }
  // other
  if (!v2x_msgs__msg__OtherSubclass__init(&msg->other)) {
    v2x_msgs__msg__ObjectClass__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ObjectClass__fini(v2x_msgs__msg__ObjectClass * msg)
{
  if (!msg) {
    return;
  }
  // confidence
  v2x_msgs__msg__ClassConfidence__fini(&msg->confidence);
  // class_container_select
  // vehicle
  v2x_msgs__msg__VehicleSubclass__fini(&msg->vehicle);
  // person
  v2x_msgs__msg__PersonSubclass__fini(&msg->person);
  // animal
  v2x_msgs__msg__AnimalSubclass__fini(&msg->animal);
  // other
  v2x_msgs__msg__OtherSubclass__fini(&msg->other);
}

bool
v2x_msgs__msg__ObjectClass__are_equal(const v2x_msgs__msg__ObjectClass * lhs, const v2x_msgs__msg__ObjectClass * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // confidence
  if (!v2x_msgs__msg__ClassConfidence__are_equal(
      &(lhs->confidence), &(rhs->confidence)))
  {
    return false;
  }
  // class_container_select
  if (lhs->class_container_select != rhs->class_container_select) {
    return false;
  }
  // vehicle
  if (!v2x_msgs__msg__VehicleSubclass__are_equal(
      &(lhs->vehicle), &(rhs->vehicle)))
  {
    return false;
  }
  // person
  if (!v2x_msgs__msg__PersonSubclass__are_equal(
      &(lhs->person), &(rhs->person)))
  {
    return false;
  }
  // animal
  if (!v2x_msgs__msg__AnimalSubclass__are_equal(
      &(lhs->animal), &(rhs->animal)))
  {
    return false;
  }
  // other
  if (!v2x_msgs__msg__OtherSubclass__are_equal(
      &(lhs->other), &(rhs->other)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ObjectClass__copy(
  const v2x_msgs__msg__ObjectClass * input,
  v2x_msgs__msg__ObjectClass * output)
{
  if (!input || !output) {
    return false;
  }
  // confidence
  if (!v2x_msgs__msg__ClassConfidence__copy(
      &(input->confidence), &(output->confidence)))
  {
    return false;
  }
  // class_container_select
  output->class_container_select = input->class_container_select;
  // vehicle
  if (!v2x_msgs__msg__VehicleSubclass__copy(
      &(input->vehicle), &(output->vehicle)))
  {
    return false;
  }
  // person
  if (!v2x_msgs__msg__PersonSubclass__copy(
      &(input->person), &(output->person)))
  {
    return false;
  }
  // animal
  if (!v2x_msgs__msg__AnimalSubclass__copy(
      &(input->animal), &(output->animal)))
  {
    return false;
  }
  // other
  if (!v2x_msgs__msg__OtherSubclass__copy(
      &(input->other), &(output->other)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ObjectClass *
v2x_msgs__msg__ObjectClass__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ObjectClass * msg = (v2x_msgs__msg__ObjectClass *)allocator.allocate(sizeof(v2x_msgs__msg__ObjectClass), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ObjectClass));
  bool success = v2x_msgs__msg__ObjectClass__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ObjectClass__destroy(v2x_msgs__msg__ObjectClass * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ObjectClass__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ObjectClass__Sequence__init(v2x_msgs__msg__ObjectClass__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ObjectClass * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ObjectClass *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ObjectClass), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ObjectClass__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ObjectClass__fini(&data[i - 1]);
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
v2x_msgs__msg__ObjectClass__Sequence__fini(v2x_msgs__msg__ObjectClass__Sequence * array)
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
      v2x_msgs__msg__ObjectClass__fini(&array->data[i]);
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

v2x_msgs__msg__ObjectClass__Sequence *
v2x_msgs__msg__ObjectClass__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ObjectClass__Sequence * array = (v2x_msgs__msg__ObjectClass__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ObjectClass__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ObjectClass__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ObjectClass__Sequence__destroy(v2x_msgs__msg__ObjectClass__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ObjectClass__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ObjectClass__Sequence__are_equal(const v2x_msgs__msg__ObjectClass__Sequence * lhs, const v2x_msgs__msg__ObjectClass__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ObjectClass__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ObjectClass__Sequence__copy(
  const v2x_msgs__msg__ObjectClass__Sequence * input,
  v2x_msgs__msg__ObjectClass__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ObjectClass);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ObjectClass * data =
      (v2x_msgs__msg__ObjectClass *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ObjectClass__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ObjectClass__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ObjectClass__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
