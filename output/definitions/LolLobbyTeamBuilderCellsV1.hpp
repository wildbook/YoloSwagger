#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderCellsV1_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderCellsV1_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderCellV1.hpp"
namespace test {
  // 
  struct LolLobbyTeamBuilderCellsV1 {
'    // 
    std::vector<LolLobbyTeamBuilderCellV1> alliedTeam;
    // 
    std::vector<LolLobbyTeamBuilderCellV1> enemyTeam;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderCellsV1& v) {
    j["alliedTeam"] = v.alliedTeam;
    j["enemyTeam"] = v.enemyTeam;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderCellsV1& v) {
    v.alliedTeam = j.at("alliedTeam").get<std::vector<LolLobbyTeamBuilderCellV1>>;
    v.enemyTeam = j.at("enemyTeam").get<std::vector<LolLobbyTeamBuilderCellV1>>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderCellsV1_HPP
