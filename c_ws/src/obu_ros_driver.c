/*
 * obu_driver_ros.c
 *
 *  Created on: May, 10 2025
 *
 *  Author: Gabriel Toffanetto França da Rocha
 *
 *  Laboratory of Autonomous Mobility (LMA)
 *  School of Mechanical Engineering (FEM)
 *  University of Campinas (Unicamp)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include "obu_driver_ros.h"

int main()
{

    int sock_fd_sub = 0;
    sockaddr_un_t sock_addr_sub;

    int server_socket_fd_pub;
    int publisher_socket;
    sockaddr_un_t sock_addr_pub;

    if (configure_subscriber_socket(&sock_fd_sub, &sock_addr_sub) == -1)
    {
        return -1;
    }

    if (configure_publisher_socket(&server_socket_fd_pub, &publisher_socket, &sock_addr_pub) == -1)
    {
        return -1;
    }

    v2x_msgs__msg__CAM cam_to_ros;
    v2x_msgs__msg__CAM__init(&cam_to_ros);

    // Creating thread handler
    pthread_t subscriber_thread_handler;

    // Creating thread args
    subscriber_args_t subscriber_thread_args = {.sock_fd = sock_fd_sub, .callback = subscriber_callback};

    // Creating and starting thread with args
    if (pthread_create(&subscriber_thread_handler, NULL, subscriber_thread, &subscriber_thread_args) != 0)
    {
        perror("pthread_create");
        exit(EXIT_FAILURE);
    }

    // Publishing
    for (int i = 0; i < 255; i++)
    {
        
        publish_socket(publisher_socket, &cam_to_ros, sizeof(cam_to_ros));

        sleep(2);
    }

    v2x_msgs__msg__CAM__fini(&cam_to_ros);

    // Need to wait the thread ends before close the socket.
    pthread_join(subscriber_thread_handler, NULL);

    close(sock_fd_sub);
    close(server_socket_fd_pub);
    close(publisher_socket);

    unlink(SOCKET_PATH_PUB);
    
    return 0;
}