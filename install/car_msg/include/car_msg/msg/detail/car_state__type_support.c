// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from car_msg:msg/CarState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "car_msg/msg/detail/car_state__rosidl_typesupport_introspection_c.h"
#include "car_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "car_msg/msg/detail/car_state__functions.h"
#include "car_msg/msg/detail/car_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CarState__rosidl_typesupport_introspection_c__CarState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  car_msg__msg__CarState__init(message_memory);
}

void CarState__rosidl_typesupport_introspection_c__CarState_fini_function(void * message_memory)
{
  car_msg__msg__CarState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CarState__rosidl_typesupport_introspection_c__CarState_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_msg__msg__CarState, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_msg__msg__CarState, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_msg__msg__CarState, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_msg__msg__CarState, v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CarState__rosidl_typesupport_introspection_c__CarState_message_members = {
  "car_msg__msg",  // message namespace
  "CarState",  // message name
  4,  // number of fields
  sizeof(car_msg__msg__CarState),
  CarState__rosidl_typesupport_introspection_c__CarState_message_member_array,  // message members
  CarState__rosidl_typesupport_introspection_c__CarState_init_function,  // function to initialize message memory (memory has to be allocated)
  CarState__rosidl_typesupport_introspection_c__CarState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CarState__rosidl_typesupport_introspection_c__CarState_message_type_support_handle = {
  0,
  &CarState__rosidl_typesupport_introspection_c__CarState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_msg, msg, CarState)() {
  if (!CarState__rosidl_typesupport_introspection_c__CarState_message_type_support_handle.typesupport_identifier) {
    CarState__rosidl_typesupport_introspection_c__CarState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CarState__rosidl_typesupport_introspection_c__CarState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
