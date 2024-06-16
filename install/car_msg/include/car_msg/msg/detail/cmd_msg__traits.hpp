// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_msg:msg/CmdMsg.idl
// generated code does not contain a copyright notice

#ifndef CAR_MSG__MSG__DETAIL__CMD_MSG__TRAITS_HPP_
#define CAR_MSG__MSG__DETAIL__CMD_MSG__TRAITS_HPP_

#include "car_msg/msg/detail/cmd_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<car_msg::msg::CmdMsg>()
{
  return "car_msg::msg::CmdMsg";
}

template<>
inline const char * name<car_msg::msg::CmdMsg>()
{
  return "car_msg/msg/CmdMsg";
}

template<>
struct has_fixed_size<car_msg::msg::CmdMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<car_msg::msg::CmdMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<car_msg::msg::CmdMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_MSG__MSG__DETAIL__CMD_MSG__TRAITS_HPP_
