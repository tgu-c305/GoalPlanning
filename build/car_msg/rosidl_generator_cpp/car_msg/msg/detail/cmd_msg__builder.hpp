// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from car_msg:msg/CmdMsg.idl
// generated code does not contain a copyright notice

#ifndef CAR_MSG__MSG__DETAIL__CMD_MSG__BUILDER_HPP_
#define CAR_MSG__MSG__DETAIL__CMD_MSG__BUILDER_HPP_

#include "car_msg/msg/detail/cmd_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace car_msg
{

namespace msg
{

namespace builder
{

class Init_CmdMsg_led
{
public:
  explicit Init_CmdMsg_led(::car_msg::msg::CmdMsg & msg)
  : msg_(msg)
  {}
  ::car_msg::msg::CmdMsg led(::car_msg::msg::CmdMsg::_led_type arg)
  {
    msg_.led = std::move(arg);
    return std::move(msg_);
  }

private:
  ::car_msg::msg::CmdMsg msg_;
};

class Init_CmdMsg_gears
{
public:
  explicit Init_CmdMsg_gears(::car_msg::msg::CmdMsg & msg)
  : msg_(msg)
  {}
  Init_CmdMsg_led gears(::car_msg::msg::CmdMsg::_gears_type arg)
  {
    msg_.gears = std::move(arg);
    return Init_CmdMsg_led(msg_);
  }

private:
  ::car_msg::msg::CmdMsg msg_;
};

class Init_CmdMsg_brake
{
public:
  explicit Init_CmdMsg_brake(::car_msg::msg::CmdMsg & msg)
  : msg_(msg)
  {}
  Init_CmdMsg_gears brake(::car_msg::msg::CmdMsg::_brake_type arg)
  {
    msg_.brake = std::move(arg);
    return Init_CmdMsg_gears(msg_);
  }

private:
  ::car_msg::msg::CmdMsg msg_;
};

class Init_CmdMsg_steering
{
public:
  explicit Init_CmdMsg_steering(::car_msg::msg::CmdMsg & msg)
  : msg_(msg)
  {}
  Init_CmdMsg_brake steering(::car_msg::msg::CmdMsg::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return Init_CmdMsg_brake(msg_);
  }

private:
  ::car_msg::msg::CmdMsg msg_;
};

class Init_CmdMsg_velocity
{
public:
  Init_CmdMsg_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CmdMsg_steering velocity(::car_msg::msg::CmdMsg::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_CmdMsg_steering(msg_);
  }

private:
  ::car_msg::msg::CmdMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::car_msg::msg::CmdMsg>()
{
  return car_msg::msg::builder::Init_CmdMsg_velocity();
}

}  // namespace car_msg

#endif  // CAR_MSG__MSG__DETAIL__CMD_MSG__BUILDER_HPP_
