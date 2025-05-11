cmake_minimum_required(VERSION 3.0)
project(obu_ros_driver)

find_package(Threads REQUIRED)

include_directories(include)

add_library(unix_socket_pub_sub
    include/unix_socket_pub_sub/unix_socket_publisher.c
    include/unix_socket_pub_sub/unix_socket_subscriber.c
)

add_executable(obu_ros_driver src/obu_ros_driver.c)

# Adding unix_socket_pub_sub library
target_link_libraries(obu_ros_driver PRIVATE unix_socket_pub_sub)

# Adding ROS2 V2X compiled messages and auxiliary functions
target_link_libraries(obu_ros_driver PRIVATE ${CMAKE_SOURCE_DIR}/lib/libv2x_msgs__rosidl_generator_c.so)
target_link_libraries(obu_ros_driver PRIVATE ${CMAKE_SOURCE_DIR}/lib/libv2x_msgs__rosidl_typesupport_c.so)
target_link_libraries(obu_ros_driver PRIVATE ${CMAKE_SOURCE_DIR}/lib/libv2x_msgs__rosidl_typesupport_introspection_c.so)

# Enabling multithread
target_link_libraries(obu_ros_driver PRIVATE Threads::Threads -lrt)

target_compile_options(obu_ros_driver PRIVATE -g)