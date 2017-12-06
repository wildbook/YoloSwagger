#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatQueue.hpp"
#include "LolChatChampSelection.hpp"
#include "LolChatTeamPlayerEntry.hpp"
namespace leagueapi {
  struct LolChatGameflowGameData_t {
    std::vector<LolChatChampSelection_t> playerChampionSelections;
    LolChatQueue_t queue;
    std::vector<LolChatTeamPlayerEntry_t> teamOne;
    std::vector<LolChatTeamPlayerEntry_t> teamTwo;
  };

  inline void to_json(nlohmann::json& j, const LolChatGameflowGameData_t& v) {
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["queue"] = v.queue;
    j["teamOne"] = v.teamOne;
    j["teamTwo"] = v.teamTwo;
  }

  inline void from_json(const nlohmann::json& j, LolChatGameflowGameData_t& v) {
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<LolChatChampSelection_t>>();
    v.queue = j.at("queue").get<LolChatQueue_t>();
    v.teamOne = j.at("teamOne").get<std::vector<LolChatTeamPlayerEntry_t>>();
    v.teamTwo = j.at("teamTwo").get<std::vector<LolChatTeamPlayerEntry_t>>();
  }
}
