#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderCellV1.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderCellsV1_t {
    std::vector<LolLobbyTeamBuilderCellV1_t> enemyTeam;
    std::vector<LolLobbyTeamBuilderCellV1_t> alliedTeam;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderCellsV1_t& v) {
    j["enemyTeam"] = v.enemyTeam;
    j["alliedTeam"] = v.alliedTeam;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderCellsV1_t& v) {
    v.enemyTeam = j.at("enemyTeam").get<std::vector<LolLobbyTeamBuilderCellV1_t>>();
    v.alliedTeam = j.at("alliedTeam").get<std::vector<LolLobbyTeamBuilderCellV1_t>>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderCellsV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
