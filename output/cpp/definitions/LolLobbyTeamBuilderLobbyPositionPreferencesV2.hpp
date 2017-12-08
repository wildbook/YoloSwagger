#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyPositionPreferencesV2_t {
    std::string secondPreference;
    std::string firstPreference;
    std::string excludedPreference;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyPositionPreferencesV2_t& v) {
    j["secondPreference"] = v.secondPreference;
    j["firstPreference"] = v.firstPreference;
    j["excludedPreference"] = v.excludedPreference;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyPositionPreferencesV2_t& v) {
    v.secondPreference = j.at("secondPreference").get<std::string>();
    v.firstPreference = j.at("firstPreference").get<std::string>();
    v.excludedPreference = j.at("excludedPreference").get<std::string>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderLobbyPositionPreferencesV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
