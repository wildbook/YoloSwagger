#ifndef SWAGGER_TYPES_CollectionsLcdsClientDynamicConfigurationNotification_HPP
#define SWAGGER_TYPES_CollectionsLcdsClientDynamicConfigurationNotification_HPP
#include <json.hpp>
namespace test {
  // 
  struct CollectionsLcdsClientDynamicConfigurationNotification {
'    // 
    std::string configs;
    // 
    bool delta;
  };

  void to_json(nlohmann::json& j, const CollectionsLcdsClientDynamicConfigurationNotification& v) {
    j["configs"] = v.configs;
    j["delta"] = v.delta;
  }

  void from_json(const nlohmann::json& j, CollectionsLcdsClientDynamicConfigurationNotification& v) {
    v.configs = j.at("configs").get<std::string>;
    v.delta = j.at("delta").get<bool>;
  }

}
#endif // SWAGGER_TYPES_CollectionsLcdsClientDynamicConfigurationNotification_HPP
