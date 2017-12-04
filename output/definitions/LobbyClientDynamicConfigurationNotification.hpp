#ifndef SWAGGER_TYPES_LobbyClientDynamicConfigurationNotification_HPP
#define SWAGGER_TYPES_LobbyClientDynamicConfigurationNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LobbyClientDynamicConfigurationNotification {
    // 
    std::string configs;
    // 
    bool delta;
  };

  void to_json(nlohmann::json& j, const LobbyClientDynamicConfigurationNotification& v) {
    j["configs"] = v.configs;
    j["delta"] = v.delta;
  }

  void from_json(const nlohmann::json& j, LobbyClientDynamicConfigurationNotification& v) {
    v.configs = j.at("configs").get<std::string>;
    v.delta = j.at("delta").get<bool>;
  }

}
#endif // SWAGGER_TYPES_LobbyClientDynamicConfigurationNotification_HPP
