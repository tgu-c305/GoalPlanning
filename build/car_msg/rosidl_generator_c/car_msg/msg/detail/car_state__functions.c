// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_msg:msg/CarState.idl
// generated code does not contain a copyright notice
#include "car_msg/msg/detail/car_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
car_msg__msg__CarState__init(car_msg__msg__CarState * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // yaw
  // v
  return true;
}

void
car_msg__msg__CarState__fini(car_msg__msg__CarState * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // yaw
  // v
}

bool
car_msg__msg__CarState__are_equal(const car_msg__msg__CarState * lhs, const car_msg__msg__CarState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // v
  if (lhs->v != rhs->v) {
    return false;
  }
  return true;
}

bool
car_msg__msg__CarState__copy(
  const car_msg__msg__CarState * input,
  car_msg__msg__CarState * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // yaw
  output->yaw = input->yaw;
  // v
  output->v = input->v;
  return true;
}

car_msg__msg__CarState *
car_msg__msg__CarState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_msg__msg__CarState * msg = (car_msg__msg__CarState *)allocator.allocate(sizeof(car_msg__msg__CarState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_msg__msg__CarState));
  bool success = car_msg__msg__CarState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
car_msg__msg__CarState__destroy(car_msg__msg__CarState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    car_msg__msg__CarState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
car_msg__msg__CarState__Sequence__init(car_msg__msg__CarState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_msg__msg__CarState * data = NULL;

  if (size) {
    data = (car_msg__msg__CarState *)allocator.zero_allocate(size, sizeof(car_msg__msg__CarState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_msg__msg__CarState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_msg__msg__CarState__fini(&data[i - 1]);
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
car_msg__msg__CarState__Sequence__fini(car_msg__msg__CarState__Sequence * array)
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
      car_msg__msg__CarState__fini(&array->data[i]);
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

car_msg__msg__CarState__Sequence *
car_msg__msg__CarState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_msg__msg__CarState__Sequence * array = (car_msg__msg__CarState__Sequence *)allocator.allocate(sizeof(car_msg__msg__CarState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = car_msg__msg__CarState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
car_msg__msg__CarState__Sequence__destroy(car_msg__msg__CarState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    car_msg__msg__CarState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
car_msg__msg__CarState__Sequence__are_equal(const car_msg__msg__CarState__Sequence * lhs, const car_msg__msg__CarState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_msg__msg__CarState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_msg__msg__CarState__Sequence__copy(
  const car_msg__msg__CarState__Sequence * input,
  car_msg__msg__CarState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_msg__msg__CarState);
    car_msg__msg__CarState * data =
      (car_msg__msg__CarState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_msg__msg__CarState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          car_msg__msg__CarState__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!car_msg__msg__CarState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
