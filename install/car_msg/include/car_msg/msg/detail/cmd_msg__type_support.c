// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from car_msg:msg/CmdMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "car_msg/msg/detail/cmd_msg__rosidl_typesupport_introspection_c.h"
#include "car_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "car_msg/msg/detail/cmd_msg__functions.h"
#include "car_msg/msg/detail/cmd_msg__struct.h"


// Include directives for member types
// Member `led`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CmdMsg__rosidl_typesupport_introspection_c__CmdMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  car_msg__msg__CmdMsg__init(message_memory);
}

void CmdMsg__rosidl_typesupport_introspection_c__CmdMsg_fini_function(void * message_memory)
{
  car_msg__msg__CmdMsg__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CmdMsg__rosidl_typesupport_introspection_c__CmdMsg_message_member_array[5] = {
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_msg__msg__CmdMsg, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_msg__msg__CmdMsg, steering),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brake",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_msg__msg__CmdMsg, brake),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gears",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_msg__msg__CmdMsg, gears),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "led",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(car_msg__msg__CmdMsg, led),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CmdMsg__rosidl_typesupport_introspection_c__CmdMsg_message_members = {
  "car_msg__msg",  // message namespace
  "CmdMsg",  // message name
  5,  // number of fields
  sizeof(car_msg__msg__CmdMsg),
  CmdMsg__rosidl_typesupport_introspection_c__CmdMsg_message_member_array,  // message members
  CmdMsg__rosidl_typesupport_introspection_c__CmdMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  CmdMsg__rosidl_typesupport_introspection_c__CmdMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CmdMsg__rosidl_typesupport_introspection_c__CmdMsg_message_type_support_handle = {
  0,
  &CmdMsg__rosidl_typesupport_introspection_c__CmdMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_car_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, car_msg, msg, CmdMsg)() {
  if (!CmdMsg__rosidl_typesupport_introspection_c__CmdMsg_message_type_support_handle.typesupport_identifier) {
    CmdMsg__rosidl_typesupport_introspection_c__CmdMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CmdMsg__rosidl_typesupport_introspection_c__CmdMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif