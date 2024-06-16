// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from car_msg:msg/CmdMsg.idl
// generated code does not contain a copyright notice

#ifndef CAR_MSG__MSG__DETAIL__CMD_MSG__STRUCT_H_
#define CAR_MSG__MSG__DETAIL__CMD_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'led'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/CmdMsg in the package car_msg.
typedef struct car_msg__msg__CmdMsg
{
  int32_t velocity;
  int32_t steering;
  int32_t brake;
  int32_t gears;
  rosidl_runtime_c__String led;
} car_msg__msg__CmdMsg;

// Struct for a sequence of car_msg__msg__CmdMsg.
typedef struct car_msg__msg__CmdMsg__Sequence
{
  car_msg__msg__CmdMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} car_msg__msg__CmdMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAR_MSG__MSG__DETAIL__CMD_MSG__STRUCT_H_
