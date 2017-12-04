#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderGatekeeperRestricted_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderGatekeeperRestricted_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderGatekeeperRestriction.hpp"
namespace test {
  // 
  struct LolLobbyTeamBuilderGatekeeperRestricted {
'    // 
    std::vector<LolLobbyTeamBuilderGatekeeperRestriction> gatekeeperRestrictions;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderGatekeeperRestricted& v) {
    j["gatekeeperRestrictions"] = v.gatekeeperRestrictions;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderGatekeeperRestricted& v) {
    v.gatekeeperRestrictions = j.at("gatekeeperRestrictions").get<std::vector<LolLobbyTeamBuilderGatekeeperRestriction>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderGatekeeperRestricted_HPP
