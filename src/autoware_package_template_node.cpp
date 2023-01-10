#include "autoware_package_template/autoware_package_template_node.hpp"

namespace sample_module // need to change
{

AutowarePackageTemplate::AutowarePackageTemplate(const rclcpp::NodeOptions & node_options)
: Node("autoware_package_template", node_options)
{
  RCLCPP_INFO(this->get_logger(), "Template launched.");
}


} // namespace sample_module

#include <rclcpp_components/register_node_macro.hpp>
RCLCPP_COMPONENTS_REGISTER_NODE(sample_module::AutowarePackageTemplate)