#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderSpecifyPositionPreferencesV2_t {
    std::string excludedPreference;
    std::string firstPreference;
    std::string secondPreference;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderSpecifyPositionPreferencesV2_t& v) {
    j["excludedPreference"] = v.excludedPreference;
    j["firstPreference"] = v.firstPreference;
    j["secondPreference"] = v.secondPreference;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderSpecifyPositionPreferencesV2_t& v) {
    v.excludedPreference = j.at("excludedPreference").get<std::string>();
    v.firstPreference = j.at("firstPreference").get<std::string>();
    v.secondPreference = j.at("secondPreference").get<std::string>();
  }
}
