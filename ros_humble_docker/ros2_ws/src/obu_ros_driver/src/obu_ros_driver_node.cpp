#include "obu_ros_driver/obu_ros_driver.hpp"

using namespace obu_ros_driver;

int main(int argc, char **argv)
{

  rclcpp::init(argc, argv);

  auto obu_ros_driver_node = std::make_shared<ObuRosDriver>();

  obu_ros_driver_node->configure_socket();

  rclcpp::spin(obu_ros_driver_node);

  rclcpp::shutdown();

  return 0;
}
