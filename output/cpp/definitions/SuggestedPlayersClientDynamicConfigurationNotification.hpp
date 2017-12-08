#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SuggestedPlayersClientDynamicConfigurationNotification_t {
    std::string_t configs;
    bool_t delta;
  };

  inline void to_json(nlohmann::json& j, const SuggestedPlayersClientDynamicConfigurationNotification_t& v) {
    j["configs"] = v.configs;
    j["delta"] = v.delta;
  }

  inline void from_json(const nlohmann::json& j, SuggestedPlayersClientDynamicConfigurationNotification_t& v) {
    v.configs = j.at("configs").get<std::string_t>();
    v.delta = j.at("delta").get<bool_t>();
  }
  inline std::string to_string(const SuggestedPlayersClientDynamicConfigurationNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
