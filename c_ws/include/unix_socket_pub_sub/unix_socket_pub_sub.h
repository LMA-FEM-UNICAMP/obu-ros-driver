#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>

#include <pthread.h>

#include <stdlib.h>
#include <string.h>
#include <unistd.h>


#include "v2x_msgs/msg/cam.h"


#define SOCKET_PATH "/tmp/unix_socket"
#define SOCKET_PATH_PUB "/tmp/socket_obu2ros"
#define SOCKET_PATH_SUB "/tmp/socket_ros2obu"

typedef struct sockaddr_un sockaddr_un_t;

// Creating typedef for function pointer
typedef void (*subscriber_callback_t)(const v2x_msgs__msg__CAM *msg);

// Creating struct with args for thread
typedef struct
{
    int sock_fd;
    subscriber_callback_t callback;
} subscriber_args_t;

int configure_subscriber_socket(int *, sockaddr_un_t *);
int configure_publisher_socket(int *, int *, sockaddr_un_t *);
void publish_socket(int socket_fd, void *msg, size_t size);

void *subscriber_thread(void *arg);
void subscriber_callback(const v2x_msgs__msg__CAM *msg);