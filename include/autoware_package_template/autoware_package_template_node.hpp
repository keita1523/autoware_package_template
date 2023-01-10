# include <rclcpp/rclcpp.hpp>

namespace sample_module
{

class AutowarePackageTemplate : public rclcpp::Node
{
public:
  explicit AutowarePackageTemplate(const rclcpp::NodeOptions & node_options);

};

} // namespace sample_module