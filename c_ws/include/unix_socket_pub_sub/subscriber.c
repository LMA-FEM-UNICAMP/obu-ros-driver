/*

Subscriber

UNIX-Socket client

*/

#include "unix_socket_pub_sub.h"


int configure_subscriber_socket(int *socket_fd, sockaddr_un_t *socket_addr)
{
    // Create socket
    if ((*socket_fd = socket(AF_UNIX, SOCK_STREAM, 0)) == -1)
    {
        perror("Socket creation error");
        return -1;
    }

    // Initializing socket structure with zeros
    memset(socket_addr, 0, sizeof(*socket_addr));

    // Selection UNIX domain socket type
    socket_addr->sun_family = AF_UNIX;

    // Setting socket address path
    strncpy(socket_addr->sun_path, SOCKET_PATH_SUB, strlen(SOCKET_PATH_SUB));

    printf("%s\n", SOCKET_PATH_SUB);

    int i = 0;

    // Connect to the socket server (publisher)
    while (connect(*socket_fd, (struct sockaddr *)socket_addr, sizeof(*socket_addr)) == -1)
    {
        if (i < 300)
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

// Defining thread
void *subscriber_thread(void *arg)
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


// Defining callback
void subscriber_callback(const v2x_msgs__msg__CAM *msg)
{
    printf("\nNew message from publisher\n");
}
