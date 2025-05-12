cmake_minimum_required(VERSION 3.0)
project(obu_ros_driver)

find_package(Threads REQUIRED)

include_directories(include)

file(GLOB SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/include/v2x_msgs/v2x_msgs/msg/detail/*.c" "${CMAKE_CURRENT_SOURCE_DIR}/include/v2x_msgs/rosidl_runtime_c/*.c" ${CMAKE_CURRENT_SOURCE_DIR}/include/rcutils/allocator.c )

add_library(v2x_msgs_aux_lib ${SRC_FILES})

target_include_directories(v2x_msgs_aux_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/v2x_msgs)

add_library(unix_socket_pub_sub
    include/unix_socket_pub_sub/unix_socket_publisher.c
    include/unix_socket_pub_sub/unix_socket_subscriber.c
)

target_include_directories(unix_socket_pub_sub PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/v2x_msgs)

add_executable(obu_ros_driver src/obu_ros_driver.c)

target_include_directories(obu_ros_driver PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/v2x_msgs)

# Adding unix_socket_pub_sub library
target_link_libraries(obu_ros_driver PRIVATE unix_socket_pub_sub)
target_link_libraries(obu_ros_driver PRIVATE v2x_msgs_aux_lib )

# Enabling multithread
target_link_libraries(obu_ros_driver PRIVATE Threads::Threads -lrt)

target_compile_options(obu_ros_driver PRIVATE -g)