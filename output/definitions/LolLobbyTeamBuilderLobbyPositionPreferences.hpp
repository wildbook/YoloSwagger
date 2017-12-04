#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderLobbyPositionPreferences_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderLobbyPositionPreferences_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderLobbyPositionPreferences {
    // 
    std::string firstPreference;
    // 
    std::string secondPreference;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLobbyPositionPreferences& v) {
    j["firstPreference"] = v.firstPreference;
    j["secondPreference"] = v.secondPreference;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLobbyPositionPreferences& v) {
    v.firstPreference = j.at("firstPreference").get<std::string>;
    v.secondPreference = j.at("secondPreference").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderLobbyPositionPreferences_HPP
