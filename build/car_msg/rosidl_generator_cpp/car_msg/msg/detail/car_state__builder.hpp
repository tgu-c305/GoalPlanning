// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_msg:msg/CarState.idl
// generated code does not contain a copyright notice

#ifndef CAR_MSG__MSG__DETAIL__CAR_STATE__BUILDER_HPP_
#define CAR_MSG__MSG__DETAIL__CAR_STATE__BUILDER_HPP_

#include "car_msg/msg/detail/car_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_msg
{

namespace msg
{

namespace builder
{

class Init_CarState_v
{
public:
  explicit Init_CarState_v(::car_msg::msg::CarState & msg)
  : msg_(msg)
  {}
  ::car_msg::msg::CarState v(::car_msg::msg::CarState::_v_type arg)
  {
    msg_.v = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_msg::msg::CarState msg_;
};

class Init_CarState_yaw
{
public:
  explicit Init_CarState_yaw(::car_msg::msg::CarState & msg)
  : msg_(msg)
  {}
  Init_CarState_v yaw(::car_msg::msg::CarState::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_CarState_v(msg_);
  }

private:
  ::car_msg::msg::CarState msg_;
};

class Init_CarState_y
{
public:
  explicit Init_CarState_y(::car_msg::msg::CarState & msg)
  : msg_(msg)
  {}
  Init_CarState_yaw y(::car_msg::msg::CarState::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_CarState_yaw(msg_);
  }

private:
  ::car_msg::msg::CarState msg_;
};

class Init_CarState_x
{
public:
  Init_CarState_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarState_y x(::car_msg::msg::CarState::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CarState_y(msg_);
  }

private:
  ::car_msg::msg::CarState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_msg::msg::CarState>()
{
  return car_msg::msg::builder::Init_CarState_x();
}

}  // namespace car_msg

#endif  // CAR_MSG__MSG__DETAIL__CAR_STATE__BUILDER_HPP_
