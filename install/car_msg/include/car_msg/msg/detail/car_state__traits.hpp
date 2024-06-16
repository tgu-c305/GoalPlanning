// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from car_msg:msg/CarState.idl
// generated code does not contain a copyright notice

#ifndef CAR_MSG__MSG__DETAIL__CAR_STATE__TRAITS_HPP_
#define CAR_MSG__MSG__DETAIL__CAR_STATE__TRAITS_HPP_

#include "car_msg/msg/detail/car_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<car_msg::msg::CarState>()
{
  return "car_msg::msg::CarState";
}

template<>
inline const char * name<car_msg::msg::CarState>()
{
  return "car_msg/msg/CarState";
}

template<>
struct has_fixed_size<car_msg::msg::CarState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<car_msg::msg::CarState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<car_msg::msg::CarState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAR_MSG__MSG__DETAIL__CAR_STATE__TRAITS_HPP_
