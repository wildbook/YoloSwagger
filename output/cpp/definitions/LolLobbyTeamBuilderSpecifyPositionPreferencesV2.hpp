#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderSpecifyPositionPreferencesV2_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderSpecifyPositionPreferencesV2_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderSpecifyPositionPreferencesV2 {
    // 
    std::string secondPreference;
    // 
    std::string firstPreference;
    // 
    std::string excludedPreference;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderSpecifyPositionPreferencesV2& v) {
    j["secondPreference"] = v.secondPreference;
    j["firstPreference"] = v.firstPreference;
    j["excludedPreference"] = v.excludedPreference;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderSpecifyPositionPreferencesV2& v) {
    v.secondPreference = j.at("secondPreference").get<std::string>;
    v.firstPreference = j.at("firstPreference").get<std::string>;
    v.excludedPreference = j.at("excludedPreference").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderSpecifyPositionPreferencesV2_HPP
