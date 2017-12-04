#ifndef SWAGGER_TYPES_RecofrienderNetworkConfig_HPP
#define SWAGGER_TYPES_RecofrienderNetworkConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RecofrienderNetworkConfig {
    // 
    std::string linkUrlTemplate;
    // 
    bool enabled;
    // 
    std::string name;
    // 
    std::string unlinkUrlTemplate;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderNetworkConfig& v) {
    j["linkUrlTemplate"] = v.linkUrlTemplate;
    j["enabled"] = v.enabled;
    j["name"] = v.name;
    j["unlinkUrlTemplate"] = v.unlinkUrlTemplate;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderNetworkConfig& v) {
    v.linkUrlTemplate = j.at("linkUrlTemplate").get<std::string>;
    v.enabled = j.at("enabled").get<bool>;
    v.name = j.at("name").get<std::string>;
    v.unlinkUrlTemplate = j.at("unlinkUrlTemplate").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderNetworkConfig_HPP
