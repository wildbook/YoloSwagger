#ifndef SWAGGER_TYPES_PersonalizedOffersLcdsClientDynamicConfigurationNotification_HPP
#define SWAGGER_TYPES_PersonalizedOffersLcdsClientDynamicConfigurationNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct PersonalizedOffersLcdsClientDynamicConfigurationNotification {
    // 
    std::string configs;
    // 
    bool delta;
  };

  inline void to_json(nlohmann::json& j, const PersonalizedOffersLcdsClientDynamicConfigurationNotification& v) {
    j["configs"] = v.configs;
    j["delta"] = v.delta;
  }

  inline void from_json(const nlohmann::json& j, PersonalizedOffersLcdsClientDynamicConfigurationNotification& v) {
    v.configs = j.at("configs").get<std::string>;
    v.delta = j.at("delta").get<bool>;
  }

}
#endif // SWAGGER_TYPES_PersonalizedOffersLcdsClientDynamicConfigurationNotification_HPP
