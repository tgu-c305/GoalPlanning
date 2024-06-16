// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from car_msg:msg/CarState.idl
// generated code does not contain a copyright notice

#ifndef CAR_MSG__MSG__DETAIL__CAR_STATE__STRUCT_HPP_
#define CAR_MSG__MSG__DETAIL__CAR_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__car_msg__msg__CarState __attribute__((deprecated))
#else
# define DEPRECATED__car_msg__msg__CarState __declspec(deprecated)
#endif

namespace car_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarState_
{
  using Type = CarState_<ContainerAllocator>;

  explicit CarState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->yaw = 0l;
      this->v = 0l;
    }
  }

  explicit CarState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0l;
      this->y = 0l;
      this->yaw = 0l;
      this->v = 0l;
    }
  }

  // field types and members
  using _x_type =
    int32_t;
  _x_type x;
  using _y_type =
    int32_t;
  _y_type y;
  using _yaw_type =
    int32_t;
  _yaw_type yaw;
  using _v_type =
    int32_t;
  _v_type v;

  // setters for named parameter idiom
  Type & set__x(
    const int32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__yaw(
    const int32_t & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__v(
    const int32_t & _arg)
  {
    this->v = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    car_msg::msg::CarState_<ContainerAllocator> *;
  using ConstRawPtr =
    const car_msg::msg::CarState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<car_msg::msg::CarState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<car_msg::msg::CarState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      car_msg::msg::CarState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<car_msg::msg::CarState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      car_msg::msg::CarState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<car_msg::msg::CarState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<car_msg::msg::CarState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<car_msg::msg::CarState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__car_msg__msg__CarState
    std::shared_ptr<car_msg::msg::CarState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__car_msg__msg__CarState
    std::shared_ptr<car_msg::msg::CarState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarState_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->v != other.v) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarState_

// alias to use template instance with default allocator
using CarState =
  car_msg::msg::CarState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace car_msg

#endif  // CAR_MSG__MSG__DETAIL__CAR_STATE__STRUCT_HPP_
