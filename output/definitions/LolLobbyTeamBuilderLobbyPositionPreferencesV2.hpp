#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderLobbyPositionPreferencesV2_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderLobbyPositionPreferencesV2_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderLobbyPositionPreferencesV2 {
    // 
    std::string excludedPreference;
    // 
    std::string firstPreference;
    // 
    std::string secondPreference;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyPositionPreferencesV2& v) {
    j["excludedPreference"] = v.excludedPreference;
    j["firstPreference"] = v.firstPreference;
    j["secondPreference"] = v.secondPreference;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyPositionPreferencesV2& v) {
    v.excludedPreference = j.at("excludedPreference").get<std::string>;
    v.firstPreference = j.at("firstPreference").get<std::string>;
    v.secondPreference = j.at("secondPreference").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderLobbyPositionPreferencesV2_HPP
