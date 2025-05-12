#ifndef obu_ros_driver_HPP_
#define obu_ros_driver_HPP_

// ROS includes
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/u_int8.hpp"

// V2X messages
#include "v2x_msg_converter/v2x_msg_converter.hpp"

#include "v2x_msgs/msg/cam.hpp"

extern "C"
{
#include "v2x_msgs/msg/cam.h"
}

// C++ includes
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <iostream>
#include <memory>
#include <string>

// Socket includes
extern "C"
{
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <thread>
}


/**
 * @brief
 *
 */
typedef struct sockaddr_un sockaddr_un_t;

// Creating struct with args for thread
/**
 * @brief
 *
 */
typedef struct
{
    int sock_fd;
} subscriber_args_t;

namespace obu_ros_driver
{
    /**
     * @brief
     *
     */
    class ObuRosDriver : public rclcpp::Node
    {
    public:
        ObuRosDriver();
        ~ObuRosDriver();

        void configure_socket();

    private:
        // UNIX-Socket attributes
        int socket_server_fd_;
        int socket_pub_fd_;
        int socket_sub_fd_;

        std::string socket_path_sub_;
        std::string socket_path_pub_;

        int n_try_connect_pub_;

        sockaddr_un_t socket_pub_addr_;
        sockaddr_un_t socket_sub_addr_;

        std::thread socket_sub_thread_handler;
        subscriber_args_t socket_sub_thread_args;

        // ROS2

        rclcpp::Publisher<v2x_msgs::msg::CAM>::SharedPtr cam_pub_;
        rclcpp::Subscription<v2x_msgs::msg::CAM>::SharedPtr cam_sub_;

        /**
         * @brief
         *
         */
        void pub_timer_callback();

        /**
         * @brief
         *
         * @param cam_from_ros
         */
        void cam_sub_callback(const v2x_msgs::msg::CAM::SharedPtr cam_from_ros);

        /// UNIX-Domain Socket IPC

        /**
         * @brief Create a unix socket sub object
         *
         * @param socket_fd
         * @param socket_addr
         * @param socket_path
         * @return int
         */
        int create_unix_socket_sub(int &socket_fd, sockaddr_un_t &socket_addr, const char *socket_path);

        /**
         * @brief Create a unix socket pub object
         *
         * @param socket_server_fd
         * @param socket_pub_fd
         * @param socket_addr
         * @param socket_path
         * @return int
         */
        int create_unix_socket_pub(int &socket_server_fd, int &socket_pub_fd, sockaddr_un_t &socket_addr, const char *socket_path);

        /**
         * @brief
         *
         * @param socket_fd
         * @param socket_addr
         */
        void socket_sub_thread(int socket_fd, sockaddr_un_t socket_addr);

        /**
         * @brief
         *
         * @param cam_to_obu
         * @param socket_pub_fd
         */
        void publish_socket_pub(v2x_msgs__msg__CAM *cam_to_obu, int socket_pub_fd);
    };
} // namespace obu_ros_driver
#endif // obu_ros_driver_HPP_
