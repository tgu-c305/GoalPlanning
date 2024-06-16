// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_msg:msg/CarState.idl
// generated code does not contain a copyright notice

#ifndef CAR_MSG__MSG__DETAIL__CAR_STATE__STRUCT_H_
#define CAR_MSG__MSG__DETAIL__CAR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CarState in the package car_msg.
typedef struct car_msg__msg__CarState
{
  int32_t x;
  int32_t y;
  int32_t yaw;
  int32_t v;
} car_msg__msg__CarState;

// Struct for a sequence of car_msg__msg__CarState.
typedef struct car_msg__msg__CarState__Sequence
{
  car_msg__msg__CarState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_msg__msg__CarState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_MSG__MSG__DETAIL__CAR_STATE__STRUCT_H_
