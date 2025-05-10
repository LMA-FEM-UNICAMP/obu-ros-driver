cmake_minimum_required(VERSION 3.0)
project(obu_ros_driver)

find_package(Threads REQUIRED)

include_directories(include)

add_library(unix_socket_pub_sub
    include/unix_socket_pub_sub/publisher.c
    include/unix_socket_pub_sub/subscriber.c
)

add_executable(obu_ros_driver src/obu_ros_driver.c)

target_link_libraries(obu_ros_driver PRIVATE unix_socket_pub_sub)

target_link_libraries(obu_ros_driver PRIVATE Threads::Threads -lrt)
target_compile_options(obu_ros_driver PRIVATE -g)