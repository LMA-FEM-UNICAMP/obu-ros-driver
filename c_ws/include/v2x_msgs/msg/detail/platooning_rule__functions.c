// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/PlatooningRule.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/platooning_rule__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `priority`
#include "v2x_msgs/msg/detail/priority_level__functions.h"
// Member `allowed_sae_automation_levels`
#include "v2x_msgs/msg/detail/sae_automation_levels__functions.h"
// Member `max_no_of_vehicles`
#include "v2x_msgs/msg/detail/max_no_of_vehicles__functions.h"
// Member `max_lenght_of_platoon`
#include "v2x_msgs/msg/detail/max_lenght_of_platoon__functions.h"
// Member `min_gap_between_vehicles`
#include "v2x_msgs/msg/detail/gap_between_vehicles__functions.h"
// Member `platoon_max_speed_limit`
// Member `platoon_min_speed_limit`
// Member `platoon_speed_recommendation`
#include "v2x_msgs/msg/detail/speed_value__functions.h"
// Member `road_sign_codes`
#include "v2x_msgs/msg/detail/road_sign_codes__functions.h"
// Member `extra_text`
#include "v2x_msgs/msg/detail/constraint_text_lines2__functions.h"

bool
v2x_msgs__msg__PlatooningRule__init(v2x_msgs__msg__PlatooningRule * msg)
{
  if (!msg) {
    return false;
  }
  // priority
  if (!v2x_msgs__msg__PriorityLevel__init(&msg->priority)) {
    v2x_msgs__msg__PlatooningRule__fini(msg);
    return false;
  }
  // allowed_sae_automation_levels
  if (!v2x_msgs__msg__SaeAutomationLevels__init(&msg->allowed_sae_automation_levels)) {
    v2x_msgs__msg__PlatooningRule__fini(msg);
    return false;
  }
  // max_no_of_vehicles_present
  msg->max_no_of_vehicles_present = false;
  // max_no_of_vehicles
  if (!v2x_msgs__msg__MaxNoOfVehicles__init(&msg->max_no_of_vehicles)) {
    v2x_msgs__msg__PlatooningRule__fini(msg);
    return false;
  }
  // max_lenght_of_platoon_present
  msg->max_lenght_of_platoon_present = false;
  // max_lenght_of_platoon
  if (!v2x_msgs__msg__MaxLenghtOfPlatoon__init(&msg->max_lenght_of_platoon)) {
    v2x_msgs__msg__PlatooningRule__fini(msg);
    return false;
  }
  // min_gap_between_vehicles_present
  msg->min_gap_between_vehicles_present = false;
  // min_gap_between_vehicles
  if (!v2x_msgs__msg__GapBetweenVehicles__init(&msg->min_gap_between_vehicles)) {
    v2x_msgs__msg__PlatooningRule__fini(msg);
    return false;
  }
  // platoon_max_speed_limit_present
  msg->platoon_max_speed_limit_present = false;
  // platoon_max_speed_limit
  if (!v2x_msgs__msg__SpeedValue__init(&msg->platoon_max_speed_limit)) {
    v2x_msgs__msg__PlatooningRule__fini(msg);
    return false;
  }
  // platoon_min_speed_limit_present
  msg->platoon_min_speed_limit_present = false;
  // platoon_min_speed_limit
  if (!v2x_msgs__msg__SpeedValue__init(&msg->platoon_min_speed_limit)) {
    v2x_msgs__msg__PlatooningRule__fini(msg);
    return false;
  }
  // platoon_speed_recommendation_present
  msg->platoon_speed_recommendation_present = false;
  // platoon_speed_recommendation
  if (!v2x_msgs__msg__SpeedValue__init(&msg->platoon_speed_recommendation)) {
    v2x_msgs__msg__PlatooningRule__fini(msg);
    return false;
  }
  // road_sign_codes_present
  msg->road_sign_codes_present = false;
  // road_sign_codes
  if (!v2x_msgs__msg__RoadSignCodes__init(&msg->road_sign_codes)) {
    v2x_msgs__msg__PlatooningRule__fini(msg);
    return false;
  }
  // extra_text_present
  msg->extra_text_present = false;
  // extra_text
  if (!v2x_msgs__msg__ConstraintTextLines2__init(&msg->extra_text)) {
    v2x_msgs__msg__PlatooningRule__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__PlatooningRule__fini(v2x_msgs__msg__PlatooningRule * msg)
{
  if (!msg) {
    return;
  }
  // priority
  v2x_msgs__msg__PriorityLevel__fini(&msg->priority);
  // allowed_sae_automation_levels
  v2x_msgs__msg__SaeAutomationLevels__fini(&msg->allowed_sae_automation_levels);
  // max_no_of_vehicles_present
  // max_no_of_vehicles
  v2x_msgs__msg__MaxNoOfVehicles__fini(&msg->max_no_of_vehicles);
  // max_lenght_of_platoon_present
  // max_lenght_of_platoon
  v2x_msgs__msg__MaxLenghtOfPlatoon__fini(&msg->max_lenght_of_platoon);
  // min_gap_between_vehicles_present
  // min_gap_between_vehicles
  v2x_msgs__msg__GapBetweenVehicles__fini(&msg->min_gap_between_vehicles);
  // platoon_max_speed_limit_present
  // platoon_max_speed_limit
  v2x_msgs__msg__SpeedValue__fini(&msg->platoon_max_speed_limit);
  // platoon_min_speed_limit_present
  // platoon_min_speed_limit
  v2x_msgs__msg__SpeedValue__fini(&msg->platoon_min_speed_limit);
  // platoon_speed_recommendation_present
  // platoon_speed_recommendation
  v2x_msgs__msg__SpeedValue__fini(&msg->platoon_speed_recommendation);
  // road_sign_codes_present
  // road_sign_codes
  v2x_msgs__msg__RoadSignCodes__fini(&msg->road_sign_codes);
  // extra_text_present
  // extra_text
  v2x_msgs__msg__ConstraintTextLines2__fini(&msg->extra_text);
}

bool
v2x_msgs__msg__PlatooningRule__are_equal(const v2x_msgs__msg__PlatooningRule * lhs, const v2x_msgs__msg__PlatooningRule * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // priority
  if (!v2x_msgs__msg__PriorityLevel__are_equal(
      &(lhs->priority), &(rhs->priority)))
  {
    return false;
  }
  // allowed_sae_automation_levels
  if (!v2x_msgs__msg__SaeAutomationLevels__are_equal(
      &(lhs->allowed_sae_automation_levels), &(rhs->allowed_sae_automation_levels)))
  {
    return false;
  }
  // max_no_of_vehicles_present
  if (lhs->max_no_of_vehicles_present != rhs->max_no_of_vehicles_present) {
    return false;
  }
  // max_no_of_vehicles
  if (!v2x_msgs__msg__MaxNoOfVehicles__are_equal(
      &(lhs->max_no_of_vehicles), &(rhs->max_no_of_vehicles)))
  {
    return false;
  }
  // max_lenght_of_platoon_present
  if (lhs->max_lenght_of_platoon_present != rhs->max_lenght_of_platoon_present) {
    return false;
  }
  // max_lenght_of_platoon
  if (!v2x_msgs__msg__MaxLenghtOfPlatoon__are_equal(
      &(lhs->max_lenght_of_platoon), &(rhs->max_lenght_of_platoon)))
  {
    return false;
  }
  // min_gap_between_vehicles_present
  if (lhs->min_gap_between_vehicles_present != rhs->min_gap_between_vehicles_present) {
    return false;
  }
  // min_gap_between_vehicles
  if (!v2x_msgs__msg__GapBetweenVehicles__are_equal(
      &(lhs->min_gap_between_vehicles), &(rhs->min_gap_between_vehicles)))
  {
    return false;
  }
  // platoon_max_speed_limit_present
  if (lhs->platoon_max_speed_limit_present != rhs->platoon_max_speed_limit_present) {
    return false;
  }
  // platoon_max_speed_limit
  if (!v2x_msgs__msg__SpeedValue__are_equal(
      &(lhs->platoon_max_speed_limit), &(rhs->platoon_max_speed_limit)))
  {
    return false;
  }
  // platoon_min_speed_limit_present
  if (lhs->platoon_min_speed_limit_present != rhs->platoon_min_speed_limit_present) {
    return false;
  }
  // platoon_min_speed_limit
  if (!v2x_msgs__msg__SpeedValue__are_equal(
      &(lhs->platoon_min_speed_limit), &(rhs->platoon_min_speed_limit)))
  {
    return false;
  }
  // platoon_speed_recommendation_present
  if (lhs->platoon_speed_recommendation_present != rhs->platoon_speed_recommendation_present) {
    return false;
  }
  // platoon_speed_recommendation
  if (!v2x_msgs__msg__SpeedValue__are_equal(
      &(lhs->platoon_speed_recommendation), &(rhs->platoon_speed_recommendation)))
  {
    return false;
  }
  // road_sign_codes_present
  if (lhs->road_sign_codes_present != rhs->road_sign_codes_present) {
    return false;
  }
  // road_sign_codes
  if (!v2x_msgs__msg__RoadSignCodes__are_equal(
      &(lhs->road_sign_codes), &(rhs->road_sign_codes)))
  {
    return false;
  }
  // extra_text_present
  if (lhs->extra_text_present != rhs->extra_text_present) {
    return false;
  }
  // extra_text
  if (!v2x_msgs__msg__ConstraintTextLines2__are_equal(
      &(lhs->extra_text), &(rhs->extra_text)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__PlatooningRule__copy(
  const v2x_msgs__msg__PlatooningRule * input,
  v2x_msgs__msg__PlatooningRule * output)
{
  if (!input || !output) {
    return false;
  }
  // priority
  if (!v2x_msgs__msg__PriorityLevel__copy(
      &(input->priority), &(output->priority)))
  {
    return false;
  }
  // allowed_sae_automation_levels
  if (!v2x_msgs__msg__SaeAutomationLevels__copy(
      &(input->allowed_sae_automation_levels), &(output->allowed_sae_automation_levels)))
  {
    return false;
  }
  // max_no_of_vehicles_present
  output->max_no_of_vehicles_present = input->max_no_of_vehicles_present;
  // max_no_of_vehicles
  if (!v2x_msgs__msg__MaxNoOfVehicles__copy(
      &(input->max_no_of_vehicles), &(output->max_no_of_vehicles)))
  {
    return false;
  }
  // max_lenght_of_platoon_present
  output->max_lenght_of_platoon_present = input->max_lenght_of_platoon_present;
  // max_lenght_of_platoon
  if (!v2x_msgs__msg__MaxLenghtOfPlatoon__copy(
      &(input->max_lenght_of_platoon), &(output->max_lenght_of_platoon)))
  {
    return false;
  }
  // min_gap_between_vehicles_present
  output->min_gap_between_vehicles_present = input->min_gap_between_vehicles_present;
  // min_gap_between_vehicles
  if (!v2x_msgs__msg__GapBetweenVehicles__copy(
      &(input->min_gap_between_vehicles), &(output->min_gap_between_vehicles)))
  {
    return false;
  }
  // platoon_max_speed_limit_present
  output->platoon_max_speed_limit_present = input->platoon_max_speed_limit_present;
  // platoon_max_speed_limit
  if (!v2x_msgs__msg__SpeedValue__copy(
      &(input->platoon_max_speed_limit), &(output->platoon_max_speed_limit)))
  {
    return false;
  }
  // platoon_min_speed_limit_present
  output->platoon_min_speed_limit_present = input->platoon_min_speed_limit_present;
  // platoon_min_speed_limit
  if (!v2x_msgs__msg__SpeedValue__copy(
      &(input->platoon_min_speed_limit), &(output->platoon_min_speed_limit)))
  {
    return false;
  }
  // platoon_speed_recommendation_present
  output->platoon_speed_recommendation_present = input->platoon_speed_recommendation_present;
  // platoon_speed_recommendation
  if (!v2x_msgs__msg__SpeedValue__copy(
      &(input->platoon_speed_recommendation), &(output->platoon_speed_recommendation)))
  {
    return false;
  }
  // road_sign_codes_present
  output->road_sign_codes_present = input->road_sign_codes_present;
  // road_sign_codes
  if (!v2x_msgs__msg__RoadSignCodes__copy(
      &(input->road_sign_codes), &(output->road_sign_codes)))
  {
    return false;
  }
  // extra_text_present
  output->extra_text_present = input->extra_text_present;
  // extra_text
  if (!v2x_msgs__msg__ConstraintTextLines2__copy(
      &(input->extra_text), &(output->extra_text)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__PlatooningRule *
v2x_msgs__msg__PlatooningRule__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PlatooningRule * msg = (v2x_msgs__msg__PlatooningRule *)allocator.allocate(sizeof(v2x_msgs__msg__PlatooningRule), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__PlatooningRule));
  bool success = v2x_msgs__msg__PlatooningRule__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__PlatooningRule__destroy(v2x_msgs__msg__PlatooningRule * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__PlatooningRule__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__PlatooningRule__Sequence__init(v2x_msgs__msg__PlatooningRule__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PlatooningRule * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__PlatooningRule *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__PlatooningRule), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__PlatooningRule__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__PlatooningRule__fini(&data[i - 1]);
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
v2x_msgs__msg__PlatooningRule__Sequence__fini(v2x_msgs__msg__PlatooningRule__Sequence * array)
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
      v2x_msgs__msg__PlatooningRule__fini(&array->data[i]);
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

v2x_msgs__msg__PlatooningRule__Sequence *
v2x_msgs__msg__PlatooningRule__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__PlatooningRule__Sequence * array = (v2x_msgs__msg__PlatooningRule__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__PlatooningRule__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__PlatooningRule__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__PlatooningRule__Sequence__destroy(v2x_msgs__msg__PlatooningRule__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__PlatooningRule__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__PlatooningRule__Sequence__are_equal(const v2x_msgs__msg__PlatooningRule__Sequence * lhs, const v2x_msgs__msg__PlatooningRule__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__PlatooningRule__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__PlatooningRule__Sequence__copy(
  const v2x_msgs__msg__PlatooningRule__Sequence * input,
  v2x_msgs__msg__PlatooningRule__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__PlatooningRule);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__PlatooningRule * data =
      (v2x_msgs__msg__PlatooningRule *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__PlatooningRule__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__PlatooningRule__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__PlatooningRule__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
