#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PersonalizedOffersLcdsClientDynamicConfigurationNotification_t {
    bool delta;
    std::string configs;
  };

  inline void to_json(nlohmann::json& j, const PersonalizedOffersLcdsClientDynamicConfigurationNotification_t& v) {
    j["delta"] = v.delta;
    j["configs"] = v.configs;
  }

  inline void from_json(const nlohmann::json& j, PersonalizedOffersLcdsClientDynamicConfigurationNotification_t& v) {
    v.delta = j.at("delta").get<bool>();
    v.configs = j.at("configs").get<std::string>();
  }
  inline std::string to_string(const PersonalizedOffersLcdsClientDynamicConfigurationNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
