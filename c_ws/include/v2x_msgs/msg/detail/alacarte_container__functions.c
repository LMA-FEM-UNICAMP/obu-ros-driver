// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/AlacarteContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/alacarte_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lane_position`
#include "v2x_msgs/msg/detail/lane_position__functions.h"
// Member `impact_reduction`
#include "v2x_msgs/msg/detail/impact_reduction_container__functions.h"
// Member `external_temperature`
#include "v2x_msgs/msg/detail/temperature__functions.h"
// Member `road_works`
#include "v2x_msgs/msg/detail/road_works_container_extended__functions.h"
// Member `positioning_solution`
#include "v2x_msgs/msg/detail/positioning_solution_type__functions.h"
// Member `stationary_vehicle`
#include "v2x_msgs/msg/detail/stationary_vehicle_container__functions.h"

bool
v2x_msgs__msg__AlacarteContainer__init(v2x_msgs__msg__AlacarteContainer * msg)
{
  if (!msg) {
    return false;
  }
  // lane_position_present
  msg->lane_position_present = false;
  // lane_position
  if (!v2x_msgs__msg__LanePosition__init(&msg->lane_position)) {
    v2x_msgs__msg__AlacarteContainer__fini(msg);
    return false;
  }
  // impact_reduction_present
  msg->impact_reduction_present = false;
  // impact_reduction
  if (!v2x_msgs__msg__ImpactReductionContainer__init(&msg->impact_reduction)) {
    v2x_msgs__msg__AlacarteContainer__fini(msg);
    return false;
  }
  // external_temperature_present
  msg->external_temperature_present = false;
  // external_temperature
  if (!v2x_msgs__msg__Temperature__init(&msg->external_temperature)) {
    v2x_msgs__msg__AlacarteContainer__fini(msg);
    return false;
  }
  // road_works_present
  msg->road_works_present = false;
  // road_works
  if (!v2x_msgs__msg__RoadWorksContainerExtended__init(&msg->road_works)) {
    v2x_msgs__msg__AlacarteContainer__fini(msg);
    return false;
  }
  // positioning_solution_present
  msg->positioning_solution_present = false;
  // positioning_solution
  if (!v2x_msgs__msg__PositioningSolutionType__init(&msg->positioning_solution)) {
    v2x_msgs__msg__AlacarteContainer__fini(msg);
    return false;
  }
  // stationary_vehicle_present
  msg->stationary_vehicle_present = false;
  // stationary_vehicle
  if (!v2x_msgs__msg__StationaryVehicleContainer__init(&msg->stationary_vehicle)) {
    v2x_msgs__msg__AlacarteContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__AlacarteContainer__fini(v2x_msgs__msg__AlacarteContainer * msg)
{
  if (!msg) {
    return;
  }
  // lane_position_present
  // lane_position
  v2x_msgs__msg__LanePosition__fini(&msg->lane_position);
  // impact_reduction_present
  // impact_reduction
  v2x_msgs__msg__ImpactReductionContainer__fini(&msg->impact_reduction);
  // external_temperature_present
  // external_temperature
  v2x_msgs__msg__Temperature__fini(&msg->external_temperature);
  // road_works_present
  // road_works
  v2x_msgs__msg__RoadWorksContainerExtended__fini(&msg->road_works);
  // positioning_solution_present
  // positioning_solution
  v2x_msgs__msg__PositioningSolutionType__fini(&msg->positioning_solution);
  // stationary_vehicle_present
  // stationary_vehicle
  v2x_msgs__msg__StationaryVehicleContainer__fini(&msg->stationary_vehicle);
}

bool
v2x_msgs__msg__AlacarteContainer__are_equal(const v2x_msgs__msg__AlacarteContainer * lhs, const v2x_msgs__msg__AlacarteContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_position_present
  if (lhs->lane_position_present != rhs->lane_position_present) {
    return false;
  }
  // lane_position
  if (!v2x_msgs__msg__LanePosition__are_equal(
      &(lhs->lane_position), &(rhs->lane_position)))
  {
    return false;
  }
  // impact_reduction_present
  if (lhs->impact_reduction_present != rhs->impact_reduction_present) {
    return false;
  }
  // impact_reduction
  if (!v2x_msgs__msg__ImpactReductionContainer__are_equal(
      &(lhs->impact_reduction), &(rhs->impact_reduction)))
  {
    return false;
  }
  // external_temperature_present
  if (lhs->external_temperature_present != rhs->external_temperature_present) {
    return false;
  }
  // external_temperature
  if (!v2x_msgs__msg__Temperature__are_equal(
      &(lhs->external_temperature), &(rhs->external_temperature)))
  {
    return false;
  }
  // road_works_present
  if (lhs->road_works_present != rhs->road_works_present) {
    return false;
  }
  // road_works
  if (!v2x_msgs__msg__RoadWorksContainerExtended__are_equal(
      &(lhs->road_works), &(rhs->road_works)))
  {
    return false;
  }
  // positioning_solution_present
  if (lhs->positioning_solution_present != rhs->positioning_solution_present) {
    return false;
  }
  // positioning_solution
  if (!v2x_msgs__msg__PositioningSolutionType__are_equal(
      &(lhs->positioning_solution), &(rhs->positioning_solution)))
  {
    return false;
  }
  // stationary_vehicle_present
  if (lhs->stationary_vehicle_present != rhs->stationary_vehicle_present) {
    return false;
  }
  // stationary_vehicle
  if (!v2x_msgs__msg__StationaryVehicleContainer__are_equal(
      &(lhs->stationary_vehicle), &(rhs->stationary_vehicle)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__AlacarteContainer__copy(
  const v2x_msgs__msg__AlacarteContainer * input,
  v2x_msgs__msg__AlacarteContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_position_present
  output->lane_position_present = input->lane_position_present;
  // lane_position
  if (!v2x_msgs__msg__LanePosition__copy(
      &(input->lane_position), &(output->lane_position)))
  {
    return false;
  }
  // impact_reduction_present
  output->impact_reduction_present = input->impact_reduction_present;
  // impact_reduction
  if (!v2x_msgs__msg__ImpactReductionContainer__copy(
      &(input->impact_reduction), &(output->impact_reduction)))
  {
    return false;
  }
  // external_temperature_present
  output->external_temperature_present = input->external_temperature_present;
  // external_temperature
  if (!v2x_msgs__msg__Temperature__copy(
      &(input->external_temperature), &(output->external_temperature)))
  {
    return false;
  }
  // road_works_present
  output->road_works_present = input->road_works_present;
  // road_works
  if (!v2x_msgs__msg__RoadWorksContainerExtended__copy(
      &(input->road_works), &(output->road_works)))
  {
    return false;
  }
  // positioning_solution_present
  output->positioning_solution_present = input->positioning_solution_present;
  // positioning_solution
  if (!v2x_msgs__msg__PositioningSolutionType__copy(
      &(input->positioning_solution), &(output->positioning_solution)))
  {
    return false;
  }
  // stationary_vehicle_present
  output->stationary_vehicle_present = input->stationary_vehicle_present;
  // stationary_vehicle
  if (!v2x_msgs__msg__StationaryVehicleContainer__copy(
      &(input->stationary_vehicle), &(output->stationary_vehicle)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__AlacarteContainer *
v2x_msgs__msg__AlacarteContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AlacarteContainer * msg = (v2x_msgs__msg__AlacarteContainer *)allocator.allocate(sizeof(v2x_msgs__msg__AlacarteContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__AlacarteContainer));
  bool success = v2x_msgs__msg__AlacarteContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__AlacarteContainer__destroy(v2x_msgs__msg__AlacarteContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__AlacarteContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__AlacarteContainer__Sequence__init(v2x_msgs__msg__AlacarteContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AlacarteContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__AlacarteContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__AlacarteContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__AlacarteContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__AlacarteContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__AlacarteContainer__Sequence__fini(v2x_msgs__msg__AlacarteContainer__Sequence * array)
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
      v2x_msgs__msg__AlacarteContainer__fini(&array->data[i]);
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

v2x_msgs__msg__AlacarteContainer__Sequence *
v2x_msgs__msg__AlacarteContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__AlacarteContainer__Sequence * array = (v2x_msgs__msg__AlacarteContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__AlacarteContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__AlacarteContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__AlacarteContainer__Sequence__destroy(v2x_msgs__msg__AlacarteContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__AlacarteContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__AlacarteContainer__Sequence__are_equal(const v2x_msgs__msg__AlacarteContainer__Sequence * lhs, const v2x_msgs__msg__AlacarteContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__AlacarteContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__AlacarteContainer__Sequence__copy(
  const v2x_msgs__msg__AlacarteContainer__Sequence * input,
  v2x_msgs__msg__AlacarteContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__AlacarteContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__AlacarteContainer * data =
      (v2x_msgs__msg__AlacarteContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__AlacarteContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__AlacarteContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__AlacarteContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
