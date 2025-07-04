FROM ros:humble-ros-core-jammy

RUN apt update 

# Installing colcon build
RUN apt install ros-dev-tools -y

# Installing CycloneDDS
RUN apt-get install ros-humble-rmw-cyclonedds-cpp -y --no-install-recommends 

ENV RMW_IMPLEMENTATION=rmw_cyclonedds_cpp

WORKDIR /ros2_ws

COPY ros2_ws/src src/

RUN mkdir install

# Adding v2x_msgs compiled ROS2 package to save compilation time
ADD ros2_ws/lib/v2x_msgs_arm64.tar.gz install

# Build package
RUN . "/opt/ros/$ROS_DISTRO/setup.sh" && \
    colcon build --cmake-args=-DCMAKE_BUILD_TYPE=Release --packages-select obu_ros_driver

# Cleaning up
WORKDIR /ros2_ws

RUN rm -rf build/ log/ src/ && apt remove ros-dev-tools -y && rm -rf /var/cache/apt/archives /var/lib/apt/lists/*

# Setup entrypoint
COPY --chmod=755 ./ros_entrypoint.sh /

# Adding common user
RUN useradd -ms /bin/bash toffanetto

# Changing from root to user
USER toffanetto

ENTRYPOINT ["/ros_entrypoint.sh"]