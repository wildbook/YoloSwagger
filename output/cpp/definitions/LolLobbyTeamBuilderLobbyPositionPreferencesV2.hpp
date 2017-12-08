#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyPositionPreferencesV2_t {
    std::string_t secondPreference;
    std::string_t firstPreference;
    std::string_t excludedPreference;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyPositionPreferencesV2_t& v) {
    j["secondPreference"] = v.secondPreference;
    j["firstPreference"] = v.firstPreference;
    j["excludedPreference"] = v.excludedPreference;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyPositionPreferencesV2_t& v) {
    v.secondPreference = j.at("secondPreference").get<std::string_t>();
    v.firstPreference = j.at("firstPreference").get<std::string_t>();
    v.excludedPreference = j.at("excludedPreference").get<std::string_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderLobbyPositionPreferencesV2_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
