#!/bin/bash

# For production in target 
docker run -it --rm --volume /tmp:/tmp --network host --name obu-ros-driver obu-ros-driver:V2.0-arm64