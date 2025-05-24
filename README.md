# OBU ROS DRIVER

<div align="center">

[![Linux](https://img.shields.io/badge/os-ubuntu20.04-blue.svg)](https://www.linux.org/) [![ROS2humble](https://img.shields.io/badge/ros2-humble-blue.svg)](https://docs.ros.org/en/humble/index.html) ![Docker](https://img.shields.io/badge/Docker-blue.svg) ![arm64](https://img.shields.io/badge/architecture-arm64-blue.svg)

![objective](docs/figures/obu_ros_driver-objective.png)

</div>

---

Use `--recursive` to clone this repository.

```shell
git clone --recursive git@github.com:LMA-FEM-UNICAMP/obu-ros-driver.git
```

## Package Details

### Architecture

<div align="center">

![architecture](docs/figures/obu_ros_driver-architecture.png)

</div>

### Data pipeline

<div align="center">

![pipeline](docs/figures/obu_ros_driver-pipeline.png)

</div>

## V2X messages library

Size of CAM message (`v2x_msgs__msg__CAM` [1]): **752 bytes**.

# How-to

## Use UNIX-Socket pub/sub library

In the `main` header file:

```C
#include "unix_socket_pub_sub/unix_socket_pub_sub.h"
```

### Publisher

In `main()`function:

1. Create publisher control struct

    ```C
    socket_publisher_t CAM_pub;
    ```

2. Configure socket path

    ```C
    strcpy(CAM_pub.socket_path,"/tmp/socket_obu2ros");
    ```

3. Configure publisher

    ```C
    if (configure_publisher_socket(&CAM_pub) == -1)
    {
        return -1;
    }
    ```

4. Create CAM message in ROS standard

    ```C
    // Creating CAM message
    v2x_msgs__msg__CAM cam_to_ros;
    // Initializing CAM message
    memset(&cam_to_ros, 0, sizeof(cam_to_ros));
    v2x_msgs__msg__CAM__init(&cam_to_ros)
    ```

5. Fill and send CAM message

    ```C
    cam_to_ros.header.message_id = i;
    publish_socket(CAM_pub, &cam_to_ros, sizeof(cam_to_ros));
    ``` 

6. Close socket in end of `main()`

    ```C
    publisher_fini(CAM_pub);
    ``` 


### Subscriber

In `main()`function:

1. Create subscriber control struct

    ```C
    socket_subscriber_t CAM_sub;
    ``` 

2. Configure socket path

    ```C
    strcpy(CAM_sub.socket_path, "/tmp/socket_ros2obu")
    ``` 

3. Configure subscriber

    ```C
    if (configure_subscriber_socket(&CAM_sub) == -1)
    {
        return -1;
    }
    ``` 

4. Set subscriber callback

    ```C
    CAM_sub.thread_args.callback = subscriber_CAM_callback;
    ``` 

5. Customize subscriber callback in `unix_socket_subscriber.c` or define a custom callback and assing in the step above

    ```C
    void subscriber_CAM_callback(const v2x_msgs__msg__CAM *msg)
    {
        // Callback code, e.g:
        printf("\nMessage ID: %ld\n", msg->header.message_id);
    }
    ``` 

6. Customize subscriber thread in`unix_socket_subscriber.c` for desired data type or define a custom thread and assing in the step below

    ```C
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
    ``` 

7. Configure and start subscriber thread

    ```C
    if (subscriber_thread_create(&CAM_sub, subscriber_CAM_thread) != 0)
    {
        perror("pthread_create");
        exit(EXIT_FAILURE);
    }
    ``` 

8. Close subscriber

    ```C
    subscriber_fini(CAM_sub);
    ``` 





## Execute example

### ROS2

#### Build Docker

```shell
# From obu-ros-driver/
cd ros_humble_docker

docker buildx build --platform linux/arm64 -t obu-ros-driver:VX.X-arm64 .

docker save -o obu-ros-driver-VX.X-arm64.tar obu-ros-driver:VX.X-arm64
```

#### Send Docker image to target

```shell
# From obu-ros-driver/ros_humble_docker/
scp obu-ros-driver-V1.0_arm64.tar toffanetto@192.168.140.50:obu-ros-driver
```

#### Load Docker image in target

```shell
# From obu-ros-driver/
docker load -i  obu-ros-driver-VX.X-arm64.tar 
```

#### Run Docker

```shell
docker run -it --rm --volume /tmp:/tmp --network host --name obu-ros-driver obu-ros-driver:VX.X-arm64
```
Or

```shell
# From obu-ros-driver/
source ros_humble_docker/obu-ros-driver-docker.sh
```

### C Library

#### Build C library

```shell
# From obu-ros-driver/
cd c_ws

cmake .
make
```

### Run C library example

```shell
# From obu-ros-driver/c_ws
./obu_ros_driver
```

# References

[1] ROS2 V2X Library: ROS2 library for ETSI V2X messages. Available at [github.com/virtual-vehicle/v2x_msgs](https://github.com/virtual-vehicle/v2x_msgs).
