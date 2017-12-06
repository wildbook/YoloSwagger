#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderCellV1.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderCellsV1_t {
    std::vector<LolLobbyTeamBuilderCellV1_t> alliedTeam;
    std::vector<LolLobbyTeamBuilderCellV1_t> enemyTeam;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderCellsV1_t& v) {
    j["alliedTeam"] = v.alliedTeam;
    j["enemyTeam"] = v.enemyTeam;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderCellsV1_t& v) {
    v.alliedTeam = j.at("alliedTeam").get<std::vector<LolLobbyTeamBuilderCellV1_t>>();
    v.enemyTeam = j.at("enemyTeam").get<std::vector<LolLobbyTeamBuilderCellV1_t>>();
  }
}
