<h5>Aim</h5>

This package takes a map as pgm file and implements A* algorithm to find a root with two options. It also draws found path on the given map.
First, it is performed without direction by finding an obstacle-free minimum distance.
Second, it is performed with direction by adjusting "_directions" and "_direction_cost".

It is the modified version of [astar-gridmap-2d](https://github.com/Eurecat/astar-gridmap-2d).

<h5>Implementation</h5>
  
  ```
/ros1_cpp_ws$ mkdir src
/ros1_cpp_ws$ catkin_make
/ros1_cpp_ws/src$ catkin_init_workspace
/ros1_cpp_ws/src$ catkin_create_pkg ros_navigation std_msgs roscpp
/ros1_cpp_ws$ catkin_make
/ros1_cpp_ws$ source devel/setup.bash
/ros1_cpp_ws$ rosrun ros_navigation run_pkg

 ```


 <h5>Requirements</h5>
 
 * Opencv
 * Ubuntu 20.04
 * ROS Noetic
 
