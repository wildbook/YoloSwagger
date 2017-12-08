#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyTeamBuilderLobbyPositionPreferences_t {
    std::string_t firstPreference;
    std::string_t secondPreference;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyPositionPreferences_t& v) {
    j["firstPreference"] = v.firstPreference;
    j["secondPreference"] = v.secondPreference;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyPositionPreferences_t& v) {
    v.firstPreference = j.at("firstPreference").get<std::string_t>();
    v.secondPreference = j.at("secondPreference").get<std::string_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderLobbyPositionPreferences_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
