// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/SafetyCarContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/safety_car_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `light_bar_siren_in_use`
#include "v2x_msgs/msg/detail/light_bar_siren_in_use__functions.h"
// Member `incident_indication`
#include "v2x_msgs/msg/detail/cause_code__functions.h"
// Member `traffic_rule`
#include "v2x_msgs/msg/detail/traffic_rule__functions.h"
// Member `speed_limit`
#include "v2x_msgs/msg/detail/speed_limit__functions.h"

bool
v2x_msgs__msg__SafetyCarContainer__init(v2x_msgs__msg__SafetyCarContainer * msg)
{
  if (!msg) {
    return false;
  }
  // light_bar_siren_in_use
  if (!v2x_msgs__msg__LightBarSirenInUse__init(&msg->light_bar_siren_in_use)) {
    v2x_msgs__msg__SafetyCarContainer__fini(msg);
    return false;
  }
  // incident_indication_present
  msg->incident_indication_present = false;
  // incident_indication
  if (!v2x_msgs__msg__CauseCode__init(&msg->incident_indication)) {
    v2x_msgs__msg__SafetyCarContainer__fini(msg);
    return false;
  }
  // traffic_rule_present
  msg->traffic_rule_present = false;
  // traffic_rule
  if (!v2x_msgs__msg__TrafficRule__init(&msg->traffic_rule)) {
    v2x_msgs__msg__SafetyCarContainer__fini(msg);
    return false;
  }
  // speed_limit_present
  msg->speed_limit_present = false;
  // speed_limit
  if (!v2x_msgs__msg__SpeedLimit__init(&msg->speed_limit)) {
    v2x_msgs__msg__SafetyCarContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__SafetyCarContainer__fini(v2x_msgs__msg__SafetyCarContainer * msg)
{
  if (!msg) {
    return;
  }
  // light_bar_siren_in_use
  v2x_msgs__msg__LightBarSirenInUse__fini(&msg->light_bar_siren_in_use);
  // incident_indication_present
  // incident_indication
  v2x_msgs__msg__CauseCode__fini(&msg->incident_indication);
  // traffic_rule_present
  // traffic_rule
  v2x_msgs__msg__TrafficRule__fini(&msg->traffic_rule);
  // speed_limit_present
  // speed_limit
  v2x_msgs__msg__SpeedLimit__fini(&msg->speed_limit);
}

bool
v2x_msgs__msg__SafetyCarContainer__are_equal(const v2x_msgs__msg__SafetyCarContainer * lhs, const v2x_msgs__msg__SafetyCarContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // light_bar_siren_in_use
  if (!v2x_msgs__msg__LightBarSirenInUse__are_equal(
      &(lhs->light_bar_siren_in_use), &(rhs->light_bar_siren_in_use)))
  {
    return false;
  }
  // incident_indication_present
  if (lhs->incident_indication_present != rhs->incident_indication_present) {
    return false;
  }
  // incident_indication
  if (!v2x_msgs__msg__CauseCode__are_equal(
      &(lhs->incident_indication), &(rhs->incident_indication)))
  {
    return false;
  }
  // traffic_rule_present
  if (lhs->traffic_rule_present != rhs->traffic_rule_present) {
    return false;
  }
  // traffic_rule
  if (!v2x_msgs__msg__TrafficRule__are_equal(
      &(lhs->traffic_rule), &(rhs->traffic_rule)))
  {
    return false;
  }
  // speed_limit_present
  if (lhs->speed_limit_present != rhs->speed_limit_present) {
    return false;
  }
  // speed_limit
  if (!v2x_msgs__msg__SpeedLimit__are_equal(
      &(lhs->speed_limit), &(rhs->speed_limit)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__SafetyCarContainer__copy(
  const v2x_msgs__msg__SafetyCarContainer * input,
  v2x_msgs__msg__SafetyCarContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // light_bar_siren_in_use
  if (!v2x_msgs__msg__LightBarSirenInUse__copy(
      &(input->light_bar_siren_in_use), &(output->light_bar_siren_in_use)))
  {
    return false;
  }
  // incident_indication_present
  output->incident_indication_present = input->incident_indication_present;
  // incident_indication
  if (!v2x_msgs__msg__CauseCode__copy(
      &(input->incident_indication), &(output->incident_indication)))
  {
    return false;
  }
  // traffic_rule_present
  output->traffic_rule_present = input->traffic_rule_present;
  // traffic_rule
  if (!v2x_msgs__msg__TrafficRule__copy(
      &(input->traffic_rule), &(output->traffic_rule)))
  {
    return false;
  }
  // speed_limit_present
  output->speed_limit_present = input->speed_limit_present;
  // speed_limit
  if (!v2x_msgs__msg__SpeedLimit__copy(
      &(input->speed_limit), &(output->speed_limit)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__SafetyCarContainer *
v2x_msgs__msg__SafetyCarContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SafetyCarContainer * msg = (v2x_msgs__msg__SafetyCarContainer *)allocator.allocate(sizeof(v2x_msgs__msg__SafetyCarContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__SafetyCarContainer));
  bool success = v2x_msgs__msg__SafetyCarContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__SafetyCarContainer__destroy(v2x_msgs__msg__SafetyCarContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__SafetyCarContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__SafetyCarContainer__Sequence__init(v2x_msgs__msg__SafetyCarContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SafetyCarContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__SafetyCarContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__SafetyCarContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__SafetyCarContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__SafetyCarContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__SafetyCarContainer__Sequence__fini(v2x_msgs__msg__SafetyCarContainer__Sequence * array)
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
      v2x_msgs__msg__SafetyCarContainer__fini(&array->data[i]);
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

v2x_msgs__msg__SafetyCarContainer__Sequence *
v2x_msgs__msg__SafetyCarContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__SafetyCarContainer__Sequence * array = (v2x_msgs__msg__SafetyCarContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__SafetyCarContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__SafetyCarContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__SafetyCarContainer__Sequence__destroy(v2x_msgs__msg__SafetyCarContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__SafetyCarContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__SafetyCarContainer__Sequence__are_equal(const v2x_msgs__msg__SafetyCarContainer__Sequence * lhs, const v2x_msgs__msg__SafetyCarContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__SafetyCarContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__SafetyCarContainer__Sequence__copy(
  const v2x_msgs__msg__SafetyCarContainer__Sequence * input,
  v2x_msgs__msg__SafetyCarContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__SafetyCarContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__SafetyCarContainer * data =
      (v2x_msgs__msg__SafetyCarContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__SafetyCarContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__SafetyCarContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__SafetyCarContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
