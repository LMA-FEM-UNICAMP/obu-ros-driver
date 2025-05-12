// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/ImpactReductionContainer.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/impact_reduction_container__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `height_lon_carr_left`
// Member `height_lon_carr_right`
#include "v2x_msgs/msg/detail/height_lon_carr__functions.h"
// Member `pos_lon_carr_left`
// Member `pos_lon_carr_right`
#include "v2x_msgs/msg/detail/pos_lon_carr__functions.h"
// Member `position_of_pillars`
#include "v2x_msgs/msg/detail/position_of_pillars__functions.h"
// Member `pos_cent_mass`
#include "v2x_msgs/msg/detail/pos_cent_mass__functions.h"
// Member `wheel_base_vehicle`
#include "v2x_msgs/msg/detail/wheel_base_vehicle__functions.h"
// Member `turning_radius`
#include "v2x_msgs/msg/detail/turning_radius__functions.h"
// Member `pos_front_ax`
#include "v2x_msgs/msg/detail/pos_front_ax__functions.h"
// Member `position_of_occupants`
#include "v2x_msgs/msg/detail/position_of_occupants__functions.h"
// Member `vehicle_mass`
#include "v2x_msgs/msg/detail/vehicle_mass__functions.h"
// Member `request_response_indication`
#include "v2x_msgs/msg/detail/request_response_indication__functions.h"

bool
v2x_msgs__msg__ImpactReductionContainer__init(v2x_msgs__msg__ImpactReductionContainer * msg)
{
  if (!msg) {
    return false;
  }
  // height_lon_carr_left
  if (!v2x_msgs__msg__HeightLonCarr__init(&msg->height_lon_carr_left)) {
    v2x_msgs__msg__ImpactReductionContainer__fini(msg);
    return false;
  }
  // height_lon_carr_right
  if (!v2x_msgs__msg__HeightLonCarr__init(&msg->height_lon_carr_right)) {
    v2x_msgs__msg__ImpactReductionContainer__fini(msg);
    return false;
  }
  // pos_lon_carr_left
  if (!v2x_msgs__msg__PosLonCarr__init(&msg->pos_lon_carr_left)) {
    v2x_msgs__msg__ImpactReductionContainer__fini(msg);
    return false;
  }
  // pos_lon_carr_right
  if (!v2x_msgs__msg__PosLonCarr__init(&msg->pos_lon_carr_right)) {
    v2x_msgs__msg__ImpactReductionContainer__fini(msg);
    return false;
  }
  // position_of_pillars
  if (!v2x_msgs__msg__PositionOfPillars__init(&msg->position_of_pillars)) {
    v2x_msgs__msg__ImpactReductionContainer__fini(msg);
    return false;
  }
  // pos_cent_mass
  if (!v2x_msgs__msg__PosCentMass__init(&msg->pos_cent_mass)) {
    v2x_msgs__msg__ImpactReductionContainer__fini(msg);
    return false;
  }
  // wheel_base_vehicle
  if (!v2x_msgs__msg__WheelBaseVehicle__init(&msg->wheel_base_vehicle)) {
    v2x_msgs__msg__ImpactReductionContainer__fini(msg);
    return false;
  }
  // turning_radius
  if (!v2x_msgs__msg__TurningRadius__init(&msg->turning_radius)) {
    v2x_msgs__msg__ImpactReductionContainer__fini(msg);
    return false;
  }
  // pos_front_ax
  if (!v2x_msgs__msg__PosFrontAx__init(&msg->pos_front_ax)) {
    v2x_msgs__msg__ImpactReductionContainer__fini(msg);
    return false;
  }
  // position_of_occupants
  if (!v2x_msgs__msg__PositionOfOccupants__init(&msg->position_of_occupants)) {
    v2x_msgs__msg__ImpactReductionContainer__fini(msg);
    return false;
  }
  // vehicle_mass
  if (!v2x_msgs__msg__VehicleMass__init(&msg->vehicle_mass)) {
    v2x_msgs__msg__ImpactReductionContainer__fini(msg);
    return false;
  }
  // request_response_indication
  if (!v2x_msgs__msg__RequestResponseIndication__init(&msg->request_response_indication)) {
    v2x_msgs__msg__ImpactReductionContainer__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__ImpactReductionContainer__fini(v2x_msgs__msg__ImpactReductionContainer * msg)
{
  if (!msg) {
    return;
  }
  // height_lon_carr_left
  v2x_msgs__msg__HeightLonCarr__fini(&msg->height_lon_carr_left);
  // height_lon_carr_right
  v2x_msgs__msg__HeightLonCarr__fini(&msg->height_lon_carr_right);
  // pos_lon_carr_left
  v2x_msgs__msg__PosLonCarr__fini(&msg->pos_lon_carr_left);
  // pos_lon_carr_right
  v2x_msgs__msg__PosLonCarr__fini(&msg->pos_lon_carr_right);
  // position_of_pillars
  v2x_msgs__msg__PositionOfPillars__fini(&msg->position_of_pillars);
  // pos_cent_mass
  v2x_msgs__msg__PosCentMass__fini(&msg->pos_cent_mass);
  // wheel_base_vehicle
  v2x_msgs__msg__WheelBaseVehicle__fini(&msg->wheel_base_vehicle);
  // turning_radius
  v2x_msgs__msg__TurningRadius__fini(&msg->turning_radius);
  // pos_front_ax
  v2x_msgs__msg__PosFrontAx__fini(&msg->pos_front_ax);
  // position_of_occupants
  v2x_msgs__msg__PositionOfOccupants__fini(&msg->position_of_occupants);
  // vehicle_mass
  v2x_msgs__msg__VehicleMass__fini(&msg->vehicle_mass);
  // request_response_indication
  v2x_msgs__msg__RequestResponseIndication__fini(&msg->request_response_indication);
}

bool
v2x_msgs__msg__ImpactReductionContainer__are_equal(const v2x_msgs__msg__ImpactReductionContainer * lhs, const v2x_msgs__msg__ImpactReductionContainer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // height_lon_carr_left
  if (!v2x_msgs__msg__HeightLonCarr__are_equal(
      &(lhs->height_lon_carr_left), &(rhs->height_lon_carr_left)))
  {
    return false;
  }
  // height_lon_carr_right
  if (!v2x_msgs__msg__HeightLonCarr__are_equal(
      &(lhs->height_lon_carr_right), &(rhs->height_lon_carr_right)))
  {
    return false;
  }
  // pos_lon_carr_left
  if (!v2x_msgs__msg__PosLonCarr__are_equal(
      &(lhs->pos_lon_carr_left), &(rhs->pos_lon_carr_left)))
  {
    return false;
  }
  // pos_lon_carr_right
  if (!v2x_msgs__msg__PosLonCarr__are_equal(
      &(lhs->pos_lon_carr_right), &(rhs->pos_lon_carr_right)))
  {
    return false;
  }
  // position_of_pillars
  if (!v2x_msgs__msg__PositionOfPillars__are_equal(
      &(lhs->position_of_pillars), &(rhs->position_of_pillars)))
  {
    return false;
  }
  // pos_cent_mass
  if (!v2x_msgs__msg__PosCentMass__are_equal(
      &(lhs->pos_cent_mass), &(rhs->pos_cent_mass)))
  {
    return false;
  }
  // wheel_base_vehicle
  if (!v2x_msgs__msg__WheelBaseVehicle__are_equal(
      &(lhs->wheel_base_vehicle), &(rhs->wheel_base_vehicle)))
  {
    return false;
  }
  // turning_radius
  if (!v2x_msgs__msg__TurningRadius__are_equal(
      &(lhs->turning_radius), &(rhs->turning_radius)))
  {
    return false;
  }
  // pos_front_ax
  if (!v2x_msgs__msg__PosFrontAx__are_equal(
      &(lhs->pos_front_ax), &(rhs->pos_front_ax)))
  {
    return false;
  }
  // position_of_occupants
  if (!v2x_msgs__msg__PositionOfOccupants__are_equal(
      &(lhs->position_of_occupants), &(rhs->position_of_occupants)))
  {
    return false;
  }
  // vehicle_mass
  if (!v2x_msgs__msg__VehicleMass__are_equal(
      &(lhs->vehicle_mass), &(rhs->vehicle_mass)))
  {
    return false;
  }
  // request_response_indication
  if (!v2x_msgs__msg__RequestResponseIndication__are_equal(
      &(lhs->request_response_indication), &(rhs->request_response_indication)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__ImpactReductionContainer__copy(
  const v2x_msgs__msg__ImpactReductionContainer * input,
  v2x_msgs__msg__ImpactReductionContainer * output)
{
  if (!input || !output) {
    return false;
  }
  // height_lon_carr_left
  if (!v2x_msgs__msg__HeightLonCarr__copy(
      &(input->height_lon_carr_left), &(output->height_lon_carr_left)))
  {
    return false;
  }
  // height_lon_carr_right
  if (!v2x_msgs__msg__HeightLonCarr__copy(
      &(input->height_lon_carr_right), &(output->height_lon_carr_right)))
  {
    return false;
  }
  // pos_lon_carr_left
  if (!v2x_msgs__msg__PosLonCarr__copy(
      &(input->pos_lon_carr_left), &(output->pos_lon_carr_left)))
  {
    return false;
  }
  // pos_lon_carr_right
  if (!v2x_msgs__msg__PosLonCarr__copy(
      &(input->pos_lon_carr_right), &(output->pos_lon_carr_right)))
  {
    return false;
  }
  // position_of_pillars
  if (!v2x_msgs__msg__PositionOfPillars__copy(
      &(input->position_of_pillars), &(output->position_of_pillars)))
  {
    return false;
  }
  // pos_cent_mass
  if (!v2x_msgs__msg__PosCentMass__copy(
      &(input->pos_cent_mass), &(output->pos_cent_mass)))
  {
    return false;
  }
  // wheel_base_vehicle
  if (!v2x_msgs__msg__WheelBaseVehicle__copy(
      &(input->wheel_base_vehicle), &(output->wheel_base_vehicle)))
  {
    return false;
  }
  // turning_radius
  if (!v2x_msgs__msg__TurningRadius__copy(
      &(input->turning_radius), &(output->turning_radius)))
  {
    return false;
  }
  // pos_front_ax
  if (!v2x_msgs__msg__PosFrontAx__copy(
      &(input->pos_front_ax), &(output->pos_front_ax)))
  {
    return false;
  }
  // position_of_occupants
  if (!v2x_msgs__msg__PositionOfOccupants__copy(
      &(input->position_of_occupants), &(output->position_of_occupants)))
  {
    return false;
  }
  // vehicle_mass
  if (!v2x_msgs__msg__VehicleMass__copy(
      &(input->vehicle_mass), &(output->vehicle_mass)))
  {
    return false;
  }
  // request_response_indication
  if (!v2x_msgs__msg__RequestResponseIndication__copy(
      &(input->request_response_indication), &(output->request_response_indication)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__ImpactReductionContainer *
v2x_msgs__msg__ImpactReductionContainer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ImpactReductionContainer * msg = (v2x_msgs__msg__ImpactReductionContainer *)allocator.allocate(sizeof(v2x_msgs__msg__ImpactReductionContainer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__ImpactReductionContainer));
  bool success = v2x_msgs__msg__ImpactReductionContainer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__ImpactReductionContainer__destroy(v2x_msgs__msg__ImpactReductionContainer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__ImpactReductionContainer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__ImpactReductionContainer__Sequence__init(v2x_msgs__msg__ImpactReductionContainer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ImpactReductionContainer * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__ImpactReductionContainer *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__ImpactReductionContainer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__ImpactReductionContainer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__ImpactReductionContainer__fini(&data[i - 1]);
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
v2x_msgs__msg__ImpactReductionContainer__Sequence__fini(v2x_msgs__msg__ImpactReductionContainer__Sequence * array)
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
      v2x_msgs__msg__ImpactReductionContainer__fini(&array->data[i]);
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

v2x_msgs__msg__ImpactReductionContainer__Sequence *
v2x_msgs__msg__ImpactReductionContainer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__ImpactReductionContainer__Sequence * array = (v2x_msgs__msg__ImpactReductionContainer__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__ImpactReductionContainer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__ImpactReductionContainer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__ImpactReductionContainer__Sequence__destroy(v2x_msgs__msg__ImpactReductionContainer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__ImpactReductionContainer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__ImpactReductionContainer__Sequence__are_equal(const v2x_msgs__msg__ImpactReductionContainer__Sequence * lhs, const v2x_msgs__msg__ImpactReductionContainer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__ImpactReductionContainer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__ImpactReductionContainer__Sequence__copy(
  const v2x_msgs__msg__ImpactReductionContainer__Sequence * input,
  v2x_msgs__msg__ImpactReductionContainer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__ImpactReductionContainer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__ImpactReductionContainer * data =
      (v2x_msgs__msg__ImpactReductionContainer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__ImpactReductionContainer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__ImpactReductionContainer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__ImpactReductionContainer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
