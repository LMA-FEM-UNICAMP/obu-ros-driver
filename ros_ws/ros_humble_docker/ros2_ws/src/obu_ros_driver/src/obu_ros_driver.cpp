#include "obu_ros_driver/obu_ros_driver.hpp"

namespace obu_ros_driver
{
    ObuRosDriver::ObuRosDriver() : Node("obu_ros_driver")
    {
        i = 0;

        cam_pub_ = this->create_publisher<v2x_msgs::msg::CAM>("/cam", 1);

        using std::placeholders::_1;
        cam_sub_ = this->create_subscription<v2x_msgs::msg::CAM>(
            "/cam_to_obu", 10, std::bind(&ObuRosDriver::cam_sub_callback, this, _1));
    }

    ObuRosDriver::~ObuRosDriver()
    {
        if (socket_sub_thread_handler.joinable())
        {
            socket_sub_thread_handler.join(); // Ensure thread cleanup
        }
        close(socket_server_fd);
        close(socket_pub_fd);
        close(socket_sub_fd);
        unlink(SOCKET_PATH_PUB);
    }

    void ObuRosDriver::configure_socket()
    {
        create_unix_socket_sub(socket_sub_fd, socket_sub_addr, SOCKET_PATH_SUB);

        create_unix_socket_pub(socket_server_fd, socket_pub_fd, socket_pub_addr, SOCKET_PATH_PUB);
    }

    int ObuRosDriver::create_unix_socket_pub(int &socket_server_fd, int &socket_pub_fd, sockaddr_un_t &socket_addr, char *socket_path)
    {
        // Create socket
        if ((socket_server_fd = socket(AF_UNIX, SOCK_STREAM, 0)) == -1)
        {
            perror("socket failed");
            exit(EXIT_FAILURE);
        }

        // Initializing socket structure with zeros
        memset(&socket_addr, 0, sizeof(socket_addr));

        // Selection UNIX domain socket type
        socket_addr.sun_family = AF_UNIX;

        // Setting socket address path
        strncpy(socket_addr.sun_path, socket_path, strlen(socket_path));

        // Remove any socket file before start
        unlink(socket_path);

        // Bind the socket file descriptor with the socket address
        if (bind(socket_server_fd, (struct sockaddr *)&socket_addr, sizeof(socket_addr)) == -1)
        {
            perror("bind failed");
            exit(EXIT_FAILURE);
        }

        // Listen for a connection
        if (listen(socket_server_fd, 1) == -1)
        {
            perror("listen failed");
            exit(EXIT_FAILURE);
        }

        // Waiting subscriber connection
        RCLCPP_INFO(this->get_logger(), "[UNIX-Socket [Publisher] Waiting for subscriber to connect..");
        if ((socket_pub_fd = accept(socket_server_fd, NULL, NULL)) == -1)
        {
            perror("accept failed");
            exit(EXIT_FAILURE);
        }

        return 1;
    }

    int ObuRosDriver::create_unix_socket_sub(int &socket_fd, sockaddr_un_t &socket_addr, char *socket_path)
    {
        // Create socket
        if ((socket_fd = socket(AF_UNIX, SOCK_STREAM, 0)) == -1)
        {
            perror("Socket creation error");
            return -1;
        }

        // Initializing socket structure with zeros
        memset(&socket_addr, 0, sizeof(socket_addr));

        // Selection UNIX domain socket type
        socket_addr.sun_family = AF_UNIX;

        // Setting socket address path
        strncpy(socket_addr.sun_path, socket_path, strlen(socket_path));

        // Calling socket subscriber thread
        socket_sub_thread_handler = std::thread(&ObuRosDriver::socket_sub_thread, this, socket_fd, socket_addr);

        return 1;
    }

    void ObuRosDriver::socket_sub_thread(int socket_fd, sockaddr_un_t socket_addr)
    {
        // Connect to the socket server (publisher)
        while (connect(socket_fd, (struct sockaddr *)&socket_addr, sizeof(socket_addr)) == -1)
        {
            if (i < N_TRY_CONNECT_PUB)
            {
                RCLCPP_WARN(this->get_logger(), "[UNIX-Socket Subscriber] Waiting publisher...\n");
                i++;
                sleep(1);
            }
            else
            {
                perror("Connection failed");
                return;
            }
        }

        i = 0;

        RCLCPP_INFO(this->get_logger(), "[UNIX-Socket Subscriber] Publisher connected. Waiting messages...");

        v2x_msgs__msg__CAM buffer_cam_c;
        v2x_msgs__msg__CAM__init(&buffer_cam_c);

        // Read server sockets when they arrive
        while (read(socket_fd, &buffer_cam_c, sizeof(buffer_cam_c)) > 0)
        {
            // * Call callback function or execute code...

            RCLCPP_INFO(this->get_logger(), "[UNIX-Socket Subscriber] New CAM from OBU");

            v2x_msgs::msg::CAM cam_cpp;
            V2xMsgConverter::cam__c_to_cpp(&buffer_cam_c, &cam_cpp);

            cam_pub_->publish(cam_cpp);
        }

        v2x_msgs__msg__CAM__fini(&buffer_cam_c);

        return;
    }

    void ObuRosDriver::publish_socket_pub(v2x_msgs__msg__CAM *msg, int socket_pub_fd)
    {
        RCLCPP_INFO(this->get_logger(), "[UNIX-Socket Sending CAM to OBU\n");
        write(socket_pub_fd, msg, sizeof(*msg));
    }

    void ObuRosDriver::cam_sub_callback(const v2x_msgs::msg::CAM::SharedPtr cam_from_ros)
    {
        v2x_msgs__msg__CAM msg;
        v2x_msgs__msg__CAM__init(&msg);

        V2xMsgConverter::cam__cpp_to_c(cam_from_ros, &msg);

        publish_socket_pub(&msg, socket_pub_fd);

        v2x_msgs__msg__CAM__fini(&msg);
    }

} // namespace obu_ros_driver
