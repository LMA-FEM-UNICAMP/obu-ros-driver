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
    socket_subscriber_t CAM_sub;
    strcpy(CAM_sub.socket_path, "/tmp/socket_ros2obu"); 

    socket_publisher_t CAM_pub;
    strcpy(CAM_pub.socket_path,"/tmp/socket_obu2ros");

    if (configure_subscriber_socket(&CAM_sub) == -1)
    {
        return -1;
    }

    if (configure_publisher_socket(&CAM_pub) == -1)
    {
        return -1;
    }

    // Creating CAM message
    v2x_msgs__msg__CAM cam_to_ros;

    // Initializing CAM message
    memset(&cam_to_ros, 0, sizeof(cam_to_ros));
    v2x_msgs__msg__CAM__init(&cam_to_ros);

    // Setting thread args
    CAM_sub.thread_args.sock_fd = CAM_sub.sock_fd; // Socket fd
    CAM_sub.thread_args.callback = subscriber_CAM_callback; // Subscription callback

    // Creating and starting thread with args
    if (subscriber_thread_create(&CAM_sub, subscriber_CAM_thread) != 0)
    {
        perror("pthread_create");
        exit(EXIT_FAILURE);
    }

    // Publishing
    for (int i = 0; i < 255; i++)
    {
        cam_to_ros.header.message_id = i;
        publish_socket(CAM_pub, &cam_to_ros, sizeof(cam_to_ros));

        sleep(2);
    }

    v2x_msgs__msg__CAM__fini(&cam_to_ros);

    publisher_fini(CAM_pub);
    subscriber_fini(CAM_sub);

    return 0;
}