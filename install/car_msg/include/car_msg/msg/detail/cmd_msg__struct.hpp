// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_msg:msg/CmdMsg.idl
// generated code does not contain a copyright notice

#ifndef CAR_MSG__MSG__DETAIL__CMD_MSG__STRUCT_HPP_
#define CAR_MSG__MSG__DETAIL__CMD_MSG__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__car_msg__msg__CmdMsg __attribute__((deprecated))
#else
# define DEPRECATED__car_msg__msg__CmdMsg __declspec(deprecated)
#endif

namespace car_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CmdMsg_
{
  using Type = CmdMsg_<ContainerAllocator>;

  explicit CmdMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0l;
      this->steering = 0l;
      this->brake = 0l;
      this->gears = 0l;
      this->led = "";
    }
  }

  explicit CmdMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : led(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity = 0l;
      this->steering = 0l;
      this->brake = 0l;
      this->gears = 0l;
      this->led = "";
    }
  }

  // field types and members
  using _velocity_type =
    int32_t;
  _velocity_type velocity;
  using _steering_type =
    int32_t;
  _steering_type steering;
  using _brake_type =
    int32_t;
  _brake_type brake;
  using _gears_type =
    int32_t;
  _gears_type gears;
  using _led_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _led_type led;

  // setters for named parameter idiom
  Type & set__velocity(
    const int32_t & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__steering(
    const int32_t & _arg)
  {
    this->steering = _arg;
    return *this;
  }
  Type & set__brake(
    const int32_t & _arg)
  {
    this->brake = _arg;
    return *this;
  }
  Type & set__gears(
    const int32_t & _arg)
  {
    this->gears = _arg;
    return *this;
  }
  Type & set__led(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->led = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_msg::msg::CmdMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_msg::msg::CmdMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_msg::msg::CmdMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_msg::msg::CmdMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_msg::msg::CmdMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_msg::msg::CmdMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_msg::msg::CmdMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_msg::msg::CmdMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_msg::msg::CmdMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_msg::msg::CmdMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_msg__msg__CmdMsg
    std::shared_ptr<car_msg::msg::CmdMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_msg__msg__CmdMsg
    std::shared_ptr<car_msg::msg::CmdMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CmdMsg_ & other) const
  {
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->steering != other.steering) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    if (this->gears != other.gears) {
      return false;
    }
    if (this->led != other.led) {
      return false;
    }
    return true;
  }
  bool operator!=(const CmdMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CmdMsg_

// alias to use template instance with default allocator
using CmdMsg =
  car_msg::msg::CmdMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_msg

#endif  // CAR_MSG__MSG__DETAIL__CMD_MSG__STRUCT_HPP_
