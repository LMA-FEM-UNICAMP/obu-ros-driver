cmake_minimum_required(VERSION 3.8)
project(obu_ros_driver)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(v2x_msgs REQUIRED)

include_directories(include)

add_library(v2x_msg_converter
  src/v2x_msg_converter/v2x_msg_converter.cpp
)

ament_target_dependencies(v2x_msg_converter "v2x_msgs")

add_executable(obu_ros_driver_node src/obu_ros_driver/obu_ros_driver.cpp src/obu_ros_driver_node.cpp)


target_include_directories(obu_ros_driver_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  )

target_link_libraries(obu_ros_driver_node v2x_msg_converter)

target_compile_features(obu_ros_driver_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(
  obu_ros_driver_node
  "rclcpp"
  "std_msgs"
  "v2x_msgs"
)

install(TARGETS obu_ros_driver_node
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
