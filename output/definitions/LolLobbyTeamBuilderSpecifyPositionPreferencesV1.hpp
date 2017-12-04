#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderSpecifyPositionPreferencesV1_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderSpecifyPositionPreferencesV1_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderSpecifyPositionPreferencesV1 {
    // 
    std::string firstPreference;
    // 
    std::string secondPreference;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderSpecifyPositionPreferencesV1& v) {
    j["firstPreference"] = v.firstPreference;
    j["secondPreference"] = v.secondPreference;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderSpecifyPositionPreferencesV1& v) {
    v.firstPreference = j.at("firstPreference").get<std::string>;
    v.secondPreference = j.at("secondPreference").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderSpecifyPositionPreferencesV1_HPP
