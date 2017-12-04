#ifndef SWAGGER_TYPES_RecofrienderNetworkConfig_HPP
#define SWAGGER_TYPES_RecofrienderNetworkConfig_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RecofrienderNetworkConfig {
    // 
    bool enabled;
    // 
    std::string linkUrlTemplate;
    // 
    std::string name;
    // 
    std::string unlinkUrlTemplate;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderNetworkConfig& v) {
    j["enabled"] = v.enabled;
    j["linkUrlTemplate"] = v.linkUrlTemplate;
    j["name"] = v.name;
    j["unlinkUrlTemplate"] = v.unlinkUrlTemplate;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderNetworkConfig& v) {
    v.enabled = j.at("enabled").get<bool>;
    v.linkUrlTemplate = j.at("linkUrlTemplate").get<std::string>;
    v.name = j.at("name").get<std::string>;
    v.unlinkUrlTemplate = j.at("unlinkUrlTemplate").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderNetworkConfig_HPP
