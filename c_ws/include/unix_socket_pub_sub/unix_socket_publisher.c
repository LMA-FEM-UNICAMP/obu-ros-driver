/*
 * unix_socket_publisher.c
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

Publisher

UNIX-Socket server

*/

#include "unix_socket_pub_sub.h"

/**
 * @brief
 *
 * @param socket_server_fd
 * @param socket_fub_fd
 * @param socket_addr
 * @return int
 */
int configure_publisher_socket(socket_publisher_t *pub)
{
    pub->server_sock_fd = 0;
    pub->sock_fd = 0;

    // Create socket
    if ((pub->server_sock_fd = socket(AF_UNIX, SOCK_STREAM, 0)) == -1)
    {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }
    
    // Initializing socket structure with zeros
    memset(&pub->sock_addr, 0, sizeof(pub->sock_addr));

    // Selection UNIX domain socket type
    pub->sock_addr.sun_family = AF_UNIX;

    // Setting socket address path
    strcpy(pub->sock_addr.sun_path, pub->socket_path);

    // Remove any socket file before start
    unlink(pub->socket_path);

    // Bind the socket file descriptor with the socket address
    if (bind(pub->server_sock_fd, (struct sockaddr *)&pub->sock_addr, sizeof(pub->sock_addr)) == -1)
    {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }

    // Listen for a connection
    if (listen(pub->server_sock_fd, 1) == -1)
    {
        perror("listen failed");
        exit(EXIT_FAILURE);
    }

    // Waiting subscriber connection
    printf("[Publisher] Waiting for subscriber to connect...\n");
    if ((pub->sock_fd = accept(pub->server_sock_fd, NULL, NULL)) == -1)
    {
        perror("accept failed");
        exit(EXIT_FAILURE);
    }
    printf("[Publisher] Subscriber connected. Ready for send messages...\n");

    return 0;
}

/**
 * @brief
 *
 * @param socket_fd
 * @param msg
 * @param size
 */
void publish_socket(socket_publisher_t pub, void *msg, size_t size)
{
    write(pub.sock_fd, msg, size);
}

/**
 * @brief
 *
 * @param socket_server_fd
 * @param socket_fub_fd
 * @param socket_path
 */
void publisher_fini(socket_publisher_t pub)
{
    close(pub.server_sock_fd);
    close(pub.sock_fd);
    unlink(pub.socket_path);
}