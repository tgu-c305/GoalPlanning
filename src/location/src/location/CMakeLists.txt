cmake_minimum_required(VERSION 3.5)
project(location)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(imu_msgs REQUIRED)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)
# Include ament_cmake functions to use ament_add_executable
# include(ament_cmake_core)
# include(ament_cmake_export_dependencies)
# include(ament_cmake_export_targets)

# if(BUILD_TESTING)
#   find_package(ament_lint_auto REQUIRED)
#   ament_lint_auto_find_test_dependencies()
# endif()
include_directories(include ${autopilot_msgs_INCLUDE_DIRS}
                                                          )
include_directories("/opt/ros/eloquent/include")#eloquent


# 添加可执行文件及其源文件
add_executable(location_node
  src/location_node.cpp
)

# 链接依赖库到可执行文件
ament_target_dependencies(location_node
  rclcpp
  imu_msgs
)

install(TARGETS
  location_node
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()