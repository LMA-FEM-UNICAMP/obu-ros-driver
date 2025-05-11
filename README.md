# OBU ROS DRIVER

<div align="center">

[![Linux](https://img.shields.io/badge/os-ubuntu20.04-blue.svg)](https://www.linux.org/) [![ROS2humble](https://img.shields.io/badge/ros2-humble-blue.svg)](https://docs.ros.org/en/humble/index.html) ![Docker](https://img.shields.io/badge/Docker-blue.svg) ![arm64](https://img.shields.io/badge/architecture-arm64-blue.svg)

![alt](docs/figures/obu_ros_driver-objective.png)

</div>

---

Use `--recursive` to clone this repository.

```shell
git clone --recursive git@github.com:LMA-FEM-UNICAMP/obu-ros-driver.git
```

## Package Details

### Architecture

<div align="center">

![alt](docs/figures/obu_ros_driver-architecture.png)

</div>

### Data pipeline

<div align="center">

![alt](docs/figures/obu_ros_driver-pipeline.png)

</div>
## V2X messages library

Size of CAM message (`v2x_msgs__msg__CAM` [1]): **752 bytes**.

## References

[1] ROS2 V2X Library: ROS2 library for ETSI V2X messages. Available at [github.com/virtual-vehicle/v2x_msgs](https://github.com/virtual-vehicle/v2x_msgs).