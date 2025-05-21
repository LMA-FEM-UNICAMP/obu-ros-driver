/*
 * unix_socket_pub_sub.h
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


// UNIX-Domain Socket includes
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>

// C includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Multithreading includes
#include <pthread.h>

// V2X messages
#include "v2x_msgs/msg/cam.h"

#define N_TRY_CONNECT_PUB 300

typedef struct sockaddr_un sockaddr_un_t;

// Creating typedef for function pointer
typedef void (*subscriber_callback_t)(const v2x_msgs__msg__CAM *msg);

// Creating struct with args for thread
typedef struct
{
    int sock_fd;
    subscriber_callback_t callback;
} subscriber_args_t;

typedef struct socket_subscriber{
    char socket_path[32];
    int sock_fd;
    sockaddr_un_t sock_addr;
    pthread_t thread_handler;
    subscriber_args_t thread_args;
} socket_subscriber_t;

typedef struct socket_publisher{
    char socket_path[32];
    int server_sock_fd;
    int sock_fd;
    sockaddr_un_t sock_addr;
} socket_publisher_t;

int configure_subscriber_socket(socket_subscriber_t *);
int configure_publisher_socket(socket_publisher_t *);
void publish_socket(socket_publisher_t pub, void *msg, size_t size);
int subscriber_thread_create(socket_subscriber_t * sub, void * callback);
void publisher_fini(socket_publisher_t);
void subscriber_fini(socket_subscriber_t);

void *subscriber_CAM_thread(void *arg);
void subscriber_CAM_callback(const v2x_msgs__msg__CAM *msg);