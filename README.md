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

## How-to

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

## References

[1] ROS2 V2X Library: ROS2 library for ETSI V2X messages. Available at [github.com/virtual-vehicle/v2x_msgs](https://github.com/virtual-vehicle/v2x_msgs).
