/*
 * unix_socket_subscriber.c
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

/*

Subscriber

UNIX-Socket client

*/

#include "unix_socket_pub_sub.h"

/**
 * @brief
 *
 * @param socket_fd
 * @param socket_addr
 * @return int
 */
int configure_subscriber_socket(socket_subscriber_t *sub)
{
    sub->sock_fd = 0;

    // Create socket
    if ((sub->sock_fd = socket(AF_UNIX, SOCK_STREAM, 0)) == -1)
    {
        perror("Socket creation error");
        return -1;
    }

    // Initializing socket structure with zeros
    memset(&sub->sock_addr, 0, sizeof(sub->sock_addr));

    // Selection UNIX domain socket type
    sub->sock_addr.sun_family = AF_UNIX;

    // Setting socket address path
    strcpy(sub->sock_addr.sun_path, sub->socket_path);

    int i = 0;

    // Connect to the socket server (publisher)
    while (connect(sub->sock_fd, (struct sockaddr *)&sub->sock_addr, sizeof(sub->sock_addr)) == -1)
    {
        if (i < N_TRY_CONNECT_PUB)
        {
            printf("Trying to reconnect...\n");
            i++;
            sleep(1);
        }
        else
        {
            perror("Connection failed");
            return -1;
        }
    }
    printf("[Subscriber] Publisher connected. Waiting messages...\n");
}

/**
 * @brief Defining thread
 *
 * @param arg
 * @return void*
 */
void *subscriber_CAM_thread(void *arg)
{
    subscriber_args_t *args = (subscriber_args_t *)arg;
    v2x_msgs__msg__CAM buffer;
    v2x_msgs__msg__CAM__init(&buffer);

    // Read server sockets when they arrive
    while (read(args->sock_fd, &buffer, sizeof(buffer)) > 0)
    {
        if (args->callback)
        {
            args->callback(&buffer);
        }
    }
    v2x_msgs__msg__CAM__fini(&buffer);
}

/**
 * @brief Defining callback
 *
 * @param msg
 */
void subscriber_CAM_callback(const v2x_msgs__msg__CAM *msg)
{
    printf("\nNew message from publisher\n");
    printf("\nMessage ID: %ld\n", msg->header.message_id);
}

void subscriber_fini(socket_subscriber_t sub)
{
    // Need to wait the thread ends before close the socket.
    pthread_join(sub.thread_handler, NULL);
    close(sub.sock_fd);
}

int subscriber_thread_create(socket_subscriber_t *sub, void *callback)
{
    sub->thread_args.sock_fd = sub->sock_fd;
    return pthread_create(&sub->thread_handler, NULL, callback, &sub->thread_args);
}