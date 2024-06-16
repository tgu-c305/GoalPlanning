// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from car_msg:msg/CmdMsg.idl
// generated code does not contain a copyright notice
#include "car_msg/msg/detail/cmd_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `led`
#include "rosidl_runtime_c/string_functions.h"

bool
car_msg__msg__CmdMsg__init(car_msg__msg__CmdMsg * msg)
{
  if (!msg) {
    return false;
  }
  // velocity
  // steering
  // brake
  // gears
  // led
  if (!rosidl_runtime_c__String__init(&msg->led)) {
    car_msg__msg__CmdMsg__fini(msg);
    return false;
  }
  return true;
}

void
car_msg__msg__CmdMsg__fini(car_msg__msg__CmdMsg * msg)
{
  if (!msg) {
    return;
  }
  // velocity
  // steering
  // brake
  // gears
  // led
  rosidl_runtime_c__String__fini(&msg->led);
}

bool
car_msg__msg__CmdMsg__are_equal(const car_msg__msg__CmdMsg * lhs, const car_msg__msg__CmdMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // steering
  if (lhs->steering != rhs->steering) {
    return false;
  }
  // brake
  if (lhs->brake != rhs->brake) {
    return false;
  }
  // gears
  if (lhs->gears != rhs->gears) {
    return false;
  }
  // led
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->led), &(rhs->led)))
  {
    return false;
  }
  return true;
}

bool
car_msg__msg__CmdMsg__copy(
  const car_msg__msg__CmdMsg * input,
  car_msg__msg__CmdMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // velocity
  output->velocity = input->velocity;
  // steering
  output->steering = input->steering;
  // brake
  output->brake = input->brake;
  // gears
  output->gears = input->gears;
  // led
  if (!rosidl_runtime_c__String__copy(
      &(input->led), &(output->led)))
  {
    return false;
  }
  return true;
}

car_msg__msg__CmdMsg *
car_msg__msg__CmdMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_msg__msg__CmdMsg * msg = (car_msg__msg__CmdMsg *)allocator.allocate(sizeof(car_msg__msg__CmdMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(car_msg__msg__CmdMsg));
  bool success = car_msg__msg__CmdMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
car_msg__msg__CmdMsg__destroy(car_msg__msg__CmdMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    car_msg__msg__CmdMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
car_msg__msg__CmdMsg__Sequence__init(car_msg__msg__CmdMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_msg__msg__CmdMsg * data = NULL;

  if (size) {
    data = (car_msg__msg__CmdMsg *)allocator.zero_allocate(size, sizeof(car_msg__msg__CmdMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = car_msg__msg__CmdMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        car_msg__msg__CmdMsg__fini(&data[i - 1]);
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
car_msg__msg__CmdMsg__Sequence__fini(car_msg__msg__CmdMsg__Sequence * array)
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
      car_msg__msg__CmdMsg__fini(&array->data[i]);
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

car_msg__msg__CmdMsg__Sequence *
car_msg__msg__CmdMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  car_msg__msg__CmdMsg__Sequence * array = (car_msg__msg__CmdMsg__Sequence *)allocator.allocate(sizeof(car_msg__msg__CmdMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = car_msg__msg__CmdMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
car_msg__msg__CmdMsg__Sequence__destroy(car_msg__msg__CmdMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    car_msg__msg__CmdMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
car_msg__msg__CmdMsg__Sequence__are_equal(const car_msg__msg__CmdMsg__Sequence * lhs, const car_msg__msg__CmdMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!car_msg__msg__CmdMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
car_msg__msg__CmdMsg__Sequence__copy(
  const car_msg__msg__CmdMsg__Sequence * input,
  car_msg__msg__CmdMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(car_msg__msg__CmdMsg);
    car_msg__msg__CmdMsg * data =
      (car_msg__msg__CmdMsg *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!car_msg__msg__CmdMsg__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          car_msg__msg__CmdMsg__fini(&data[i]);
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
    if (!car_msg__msg__CmdMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
