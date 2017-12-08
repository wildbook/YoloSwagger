#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderSpecifyPositionPreferencesV2_t {
    std::string secondPreference;
    std::string excludedPreference;
    std::string firstPreference;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderSpecifyPositionPreferencesV2_t& v) {
    j["secondPreference"] = v.secondPreference;
    j["excludedPreference"] = v.excludedPreference;
    j["firstPreference"] = v.firstPreference;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderSpecifyPositionPreferencesV2_t& v) {
    v.secondPreference = j.at("secondPreference").get<std::string>();
    v.excludedPreference = j.at("excludedPreference").get<std::string>();
    v.firstPreference = j.at("firstPreference").get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderSpecifyPositionPreferencesV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
