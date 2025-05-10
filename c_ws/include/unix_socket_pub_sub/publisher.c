/*

Publisher

UNIX-Socket server

*/

#include "unix_socket_pub_sub.h"

int configure_publisher_socket(int *socket_server_fd, int *socket_fub_fd, sockaddr_un_t *socket_addr)
{
    // Create socket
    if ((*socket_server_fd = socket(AF_UNIX, SOCK_STREAM, 0)) == -1)
    {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }

    // Initializing socket structure with zeros
    memset(socket_addr, 0, sizeof(*socket_addr));

    // Selection UNIX domain socket type
    socket_addr->sun_family = AF_UNIX;

    // Setting socket address path
    strncpy(socket_addr->sun_path, SOCKET_PATH_PUB, strlen(SOCKET_PATH_PUB));

    // Remove any socket file before start
    unlink(SOCKET_PATH_PUB);

    // Bind the socket file descriptor with the socket address
    if (bind(*socket_server_fd, (struct sockaddr *)socket_addr, sizeof(*socket_addr)) == -1)
    {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }

    // Listen for a connection
    if (listen(*socket_server_fd, 1) == -1)
    {
        perror("listen failed");
        exit(EXIT_FAILURE);
    }

    // Waiting subscriber connection
    printf("[Publisher] Waiting for subscriber to connect...\n");
    if ((*socket_fub_fd = accept(*socket_server_fd, NULL, NULL)) == -1)
    {
        perror("accept failed");
        exit(EXIT_FAILURE);
    }
    printf("[Publisher] Subscriber connected. Ready for send messages...\n");

    return 0;
}

void publish_socket(int socket_fd, void *msg, size_t size)
{
    write(socket_fd, msg, size);
}