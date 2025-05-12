// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_msgs:msg/DetectionArea.idl
// generated code does not contain a copyright notice
#include "v2x_msgs/msg/detail/detection_area__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vehicle_sensor`
#include "v2x_msgs/msg/detail/vehicle_sensor__functions.h"
// Member `stationary_sensor_radial`
#include "v2x_msgs/msg/detail/area_radial__functions.h"
// Member `stationary_sensor_polygon`
#include "v2x_msgs/msg/detail/area_polygon__functions.h"
// Member `stationary_sensor_circular`
#include "v2x_msgs/msg/detail/area_circular__functions.h"
// Member `stationary_sensor_ellipse`
#include "v2x_msgs/msg/detail/area_ellipse__functions.h"
// Member `stationary_sensor_rectangle`
#include "v2x_msgs/msg/detail/area_rectangle__functions.h"

bool
v2x_msgs__msg__DetectionArea__init(v2x_msgs__msg__DetectionArea * msg)
{
  if (!msg) {
    return false;
  }
  // detection_area_container_select
  msg->detection_area_container_select = 0ll;
  // vehicle_sensor
  if (!v2x_msgs__msg__VehicleSensor__init(&msg->vehicle_sensor)) {
    v2x_msgs__msg__DetectionArea__fini(msg);
    return false;
  }
  // stationary_sensor_radial
  if (!v2x_msgs__msg__AreaRadial__init(&msg->stationary_sensor_radial)) {
    v2x_msgs__msg__DetectionArea__fini(msg);
    return false;
  }
  // stationary_sensor_polygon
  if (!v2x_msgs__msg__AreaPolygon__init(&msg->stationary_sensor_polygon)) {
    v2x_msgs__msg__DetectionArea__fini(msg);
    return false;
  }
  // stationary_sensor_circular
  if (!v2x_msgs__msg__AreaCircular__init(&msg->stationary_sensor_circular)) {
    v2x_msgs__msg__DetectionArea__fini(msg);
    return false;
  }
  // stationary_sensor_ellipse
  if (!v2x_msgs__msg__AreaEllipse__init(&msg->stationary_sensor_ellipse)) {
    v2x_msgs__msg__DetectionArea__fini(msg);
    return false;
  }
  // stationary_sensor_rectangle
  if (!v2x_msgs__msg__AreaRectangle__init(&msg->stationary_sensor_rectangle)) {
    v2x_msgs__msg__DetectionArea__fini(msg);
    return false;
  }
  return true;
}

void
v2x_msgs__msg__DetectionArea__fini(v2x_msgs__msg__DetectionArea * msg)
{
  if (!msg) {
    return;
  }
  // detection_area_container_select
  // vehicle_sensor
  v2x_msgs__msg__VehicleSensor__fini(&msg->vehicle_sensor);
  // stationary_sensor_radial
  v2x_msgs__msg__AreaRadial__fini(&msg->stationary_sensor_radial);
  // stationary_sensor_polygon
  v2x_msgs__msg__AreaPolygon__fini(&msg->stationary_sensor_polygon);
  // stationary_sensor_circular
  v2x_msgs__msg__AreaCircular__fini(&msg->stationary_sensor_circular);
  // stationary_sensor_ellipse
  v2x_msgs__msg__AreaEllipse__fini(&msg->stationary_sensor_ellipse);
  // stationary_sensor_rectangle
  v2x_msgs__msg__AreaRectangle__fini(&msg->stationary_sensor_rectangle);
}

bool
v2x_msgs__msg__DetectionArea__are_equal(const v2x_msgs__msg__DetectionArea * lhs, const v2x_msgs__msg__DetectionArea * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // detection_area_container_select
  if (lhs->detection_area_container_select != rhs->detection_area_container_select) {
    return false;
  }
  // vehicle_sensor
  if (!v2x_msgs__msg__VehicleSensor__are_equal(
      &(lhs->vehicle_sensor), &(rhs->vehicle_sensor)))
  {
    return false;
  }
  // stationary_sensor_radial
  if (!v2x_msgs__msg__AreaRadial__are_equal(
      &(lhs->stationary_sensor_radial), &(rhs->stationary_sensor_radial)))
  {
    return false;
  }
  // stationary_sensor_polygon
  if (!v2x_msgs__msg__AreaPolygon__are_equal(
      &(lhs->stationary_sensor_polygon), &(rhs->stationary_sensor_polygon)))
  {
    return false;
  }
  // stationary_sensor_circular
  if (!v2x_msgs__msg__AreaCircular__are_equal(
      &(lhs->stationary_sensor_circular), &(rhs->stationary_sensor_circular)))
  {
    return false;
  }
  // stationary_sensor_ellipse
  if (!v2x_msgs__msg__AreaEllipse__are_equal(
      &(lhs->stationary_sensor_ellipse), &(rhs->stationary_sensor_ellipse)))
  {
    return false;
  }
  // stationary_sensor_rectangle
  if (!v2x_msgs__msg__AreaRectangle__are_equal(
      &(lhs->stationary_sensor_rectangle), &(rhs->stationary_sensor_rectangle)))
  {
    return false;
  }
  return true;
}

bool
v2x_msgs__msg__DetectionArea__copy(
  const v2x_msgs__msg__DetectionArea * input,
  v2x_msgs__msg__DetectionArea * output)
{
  if (!input || !output) {
    return false;
  }
  // detection_area_container_select
  output->detection_area_container_select = input->detection_area_container_select;
  // vehicle_sensor
  if (!v2x_msgs__msg__VehicleSensor__copy(
      &(input->vehicle_sensor), &(output->vehicle_sensor)))
  {
    return false;
  }
  // stationary_sensor_radial
  if (!v2x_msgs__msg__AreaRadial__copy(
      &(input->stationary_sensor_radial), &(output->stationary_sensor_radial)))
  {
    return false;
  }
  // stationary_sensor_polygon
  if (!v2x_msgs__msg__AreaPolygon__copy(
      &(input->stationary_sensor_polygon), &(output->stationary_sensor_polygon)))
  {
    return false;
  }
  // stationary_sensor_circular
  if (!v2x_msgs__msg__AreaCircular__copy(
      &(input->stationary_sensor_circular), &(output->stationary_sensor_circular)))
  {
    return false;
  }
  // stationary_sensor_ellipse
  if (!v2x_msgs__msg__AreaEllipse__copy(
      &(input->stationary_sensor_ellipse), &(output->stationary_sensor_ellipse)))
  {
    return false;
  }
  // stationary_sensor_rectangle
  if (!v2x_msgs__msg__AreaRectangle__copy(
      &(input->stationary_sensor_rectangle), &(output->stationary_sensor_rectangle)))
  {
    return false;
  }
  return true;
}

v2x_msgs__msg__DetectionArea *
v2x_msgs__msg__DetectionArea__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DetectionArea * msg = (v2x_msgs__msg__DetectionArea *)allocator.allocate(sizeof(v2x_msgs__msg__DetectionArea), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_msgs__msg__DetectionArea));
  bool success = v2x_msgs__msg__DetectionArea__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_msgs__msg__DetectionArea__destroy(v2x_msgs__msg__DetectionArea * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_msgs__msg__DetectionArea__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_msgs__msg__DetectionArea__Sequence__init(v2x_msgs__msg__DetectionArea__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DetectionArea * data = NULL;

  if (size) {
    data = (v2x_msgs__msg__DetectionArea *)allocator.zero_allocate(size, sizeof(v2x_msgs__msg__DetectionArea), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_msgs__msg__DetectionArea__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_msgs__msg__DetectionArea__fini(&data[i - 1]);
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
v2x_msgs__msg__DetectionArea__Sequence__fini(v2x_msgs__msg__DetectionArea__Sequence * array)
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
      v2x_msgs__msg__DetectionArea__fini(&array->data[i]);
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

v2x_msgs__msg__DetectionArea__Sequence *
v2x_msgs__msg__DetectionArea__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_msgs__msg__DetectionArea__Sequence * array = (v2x_msgs__msg__DetectionArea__Sequence *)allocator.allocate(sizeof(v2x_msgs__msg__DetectionArea__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_msgs__msg__DetectionArea__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_msgs__msg__DetectionArea__Sequence__destroy(v2x_msgs__msg__DetectionArea__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_msgs__msg__DetectionArea__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_msgs__msg__DetectionArea__Sequence__are_equal(const v2x_msgs__msg__DetectionArea__Sequence * lhs, const v2x_msgs__msg__DetectionArea__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_msgs__msg__DetectionArea__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_msgs__msg__DetectionArea__Sequence__copy(
  const v2x_msgs__msg__DetectionArea__Sequence * input,
  v2x_msgs__msg__DetectionArea__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_msgs__msg__DetectionArea);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_msgs__msg__DetectionArea * data =
      (v2x_msgs__msg__DetectionArea *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_msgs__msg__DetectionArea__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_msgs__msg__DetectionArea__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_msgs__msg__DetectionArea__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
