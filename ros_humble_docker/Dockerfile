FROM --platform=$BUILDPLATFORM ros:humble-ros-core-jammy

RUN apt update 

# # Installing colcon build
RUN apt install ros-dev-tools -y

WORKDIR /ros2_ws

COPY ros2_ws/src src/

RUN mkdir install

ADD ros2_ws/v2x_msgs_arm64.tar.gz install/

# Build package
RUN . "/opt/ros/$ROS_DISTRO/setup.sh"  && \
    colcon build --cmake-args=-DCMAKE_BUILD_TYPE=Release --packages-select obu_ros_driver

# Cleaning up
WORKDIR /ros2_ws

RUN rm -rf build/ log/ src/ && apt remove ros-dev-tools -y && rm -rf /var/cache/apt/archives /var/lib/apt/lists/*

# Setup entrypoint
COPY --chmod=755 ./ros_entrypoint.sh /

RUN useradd -ms /bin/bash toffanetto

USER toffanetto

ENTRYPOINT ["/ros_entrypoint.sh"]