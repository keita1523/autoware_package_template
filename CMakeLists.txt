cmake_minimum_required(VERSION 3.14)
project(autoware_package_template)

find_package(autoware_cmake REQUIRED)
autoware_package()

ament_auto_add_library(autoware_package_template SHARED
  src/autoware_package_template_node.cpp
)

target_link_libraries(autoware_package_template)

rclcpp_components_register_node(autoware_package_template
  PLUGIN "sample_module::AutowarePackageTemplate"
  EXECUTABLE autoware_package_template_node
)

ament_auto_package(
  INSTALL_TO_SHARE
  launch
  config
)