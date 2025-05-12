// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/BST.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/bst__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `rsu`
#include "v2x_msgs/msg/detail/beacon_id__functions.h"
// Member `time`
#include "v2x_msgs/msg/detail/time__functions.h"
// Member `profile`
// Member `list`
#include "v2x_msgs/msg/detail/profile__functions.h"
// Member `mand_applications`
// Member `nonmand_applications`
#include "v2x_msgs/msg/detail/application_list__functions.h"

bool
v2x_msgs__msg__BST__init(v2x_msgs__msg__BST * msg)
{
  if (!msg) {
    return false;
  }
  // rsu
  if (!v2x_msgs__msg__BeaconID__init(&msg->rsu)) {
    v2x_msgs__msg__BST__fini(msg);
    return false;
  }
  // time
  if (!v2x_msgs__msg__Time__init(&msg->time)) {
    v2x_msgs__msg__BST__fini(msg);
    return false;
  }
  // profile
  if (!v2x_msgs__msg__Profile__init(&msg->profile)) {
    v2x_msgs__msg__BST__fini(msg);
    return false;
  }
  // mand_applications
  if (!v2x_msgs__msg__ApplicationList__init(&msg->mand_applications)) {
    v2x_msgs__msg__BST__fini(msg);
    return false;
  }
  // nonmand_applications_present
  msg->nonmand_applications_present = false;
  // nonmand_applications
  if (!v2x_msgs__msg__ApplicationList__init(&msg->nonmand_applications)) {
    v2x_msgs__msg__BST__fini(msg);
    return false;
  }
  // list
  if (!v2x_msgs__msg__Profile__Sequence__init(&msg->list, 0)) {
    v2x_msgs__msg__BST__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__BST__fini(v2x_msgs__msg__BST * msg)
{
  if (!msg) {
    return;
  }
  // rsu
  v2x_msgs__msg__BeaconID__fini(&msg->rsu);
  // time
  v2x_msgs__msg__Time__fini(&msg->time);
  // profile
  v2x_msgs__msg__Profile__fini(&msg->profile);
  // mand_applications
  v2x_msgs__msg__ApplicationList__fini(&msg->mand_applications);
  // nonmand_applications_present
  // nonmand_applications
  v2x_msgs__msg__ApplicationList__fini(&msg->nonmand_applications);
  // list
  v2x_msgs__msg__Profile__Sequence__fini(&msg->list);
}

bool
v2x_msgs__msg__BST__are_equal(const v2x_msgs__msg__BST * lhs, const v2x_msgs__msg__BST * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rsu
  if (!v2x_msgs__msg__BeaconID__are_equal(
      &(lhs->rsu), &(rhs->rsu)))
  {
    return false;
  }
  // time
  if (!v2x_msgs__msg__Time__are_equal(
      &(lhs->time), &(rhs->time)))
  {
    return false;
  }
  // profile
  if (!v2x_msgs__msg__Profile__are_equal(
      &(lhs->profile), &(rhs->profile)))
  {
    return false;
  }
  // mand_applications
  if (!v2x_msgs__msg__ApplicationList__are_equal(
      &(lhs->mand_applications), &(rhs->mand_applications)))
  {
    return false;
  }
  // nonmand_applications_present
  if (lhs->nonmand_applications_present != rhs->nonmand_applications_present) {
    return false;
  }
  // nonmand_applications
  if (!v2x_msgs__msg__ApplicationList__are_equal(
      &(lhs->nonmand_applications), &(rhs->nonmand_applications)))
  {
    return false;
  }
  // list
  if (!v2x_msgs__msg__Profile__Sequence__are_equal(
      &(lhs->list), &(rhs->list)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__BST__copy(
  const v2x_msgs__msg__BST * input,
  v2x_msgs__msg__BST * output)
{
  if (!input || !output) {
    return false;
  }
  // rsu
  if (!v2x_msgs__msg__BeaconID__copy(
      &(input->rsu), &(output->rsu)))
  {
    return false;
  }
  // time
  if (!v2x_msgs__msg__Time__copy(
      &(input->time), &(output->time)))
  {
    return false;
  }
  // profile
  if (!v2x_msgs__msg__Profile__copy(
      &(input->profile), &(output->profile)))
  {
    return false;
  }
  // mand_applications
  if (!v2x_msgs__msg__ApplicationList__copy(
      &(input->mand_applications), &(output->mand_applications)))
  {
    return false;
  }
  // nonmand_applications_present
  output->nonmand_applications_present = input->nonmand_applications_present;
  // nonmand_applications
  if (!v2x_msgs__msg__ApplicationList__copy(
      &(input->nonmand_applications), &(output->nonmand_applications)))
  {
    return false;
  }
  // list
  if (!v2x_msgs__msg__Profile__Sequence__copy(
      &(input->list), &(output->list)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__BST *
v2x_msgs__msg__BST__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__BST * msg = (v2x_msgs__msg__BST *)allocator.allocate(sizeof(v2x_msgs__msg__BST), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__BST));
  bool success = v2x_msgs__msg__BST__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__BST__destroy(v2x_msgs__msg__BST * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__BST__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__BST__Sequence__init(v2x_msgs__msg__BST__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__BST * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__BST *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__BST), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__BST__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__BST__fini(&data[i - 1]);
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
v2x_msgs__msg__BST__Sequence__fini(v2x_msgs__msg__BST__Sequence * array)
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
      v2x_msgs__msg__BST__fini(&array->data[i]);
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

v2x_msgs__msg__BST__Sequence *
v2x_msgs__msg__BST__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__BST__Sequence * array = (v2x_msgs__msg__BST__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__BST__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__BST__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__BST__Sequence__destroy(v2x_msgs__msg__BST__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__BST__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__BST__Sequence__are_equal(const v2x_msgs__msg__BST__Sequence * lhs, const v2x_msgs__msg__BST__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__BST__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__BST__Sequence__copy(
  const v2x_msgs__msg__BST__Sequence * input,
  v2x_msgs__msg__BST__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__BST);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__BST * data =
      (v2x_msgs__msg__BST *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__BST__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__BST__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__BST__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
