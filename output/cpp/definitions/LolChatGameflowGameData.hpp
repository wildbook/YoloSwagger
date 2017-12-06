#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChampSelection.hpp"
#include "LolChatTeamPlayerEntry.hpp"
#include "LolChatQueue.hpp"
namespace leagueapi {
  struct LolChatGameflowGameData_t {
    std::vector<LolChatTeamPlayerEntry_t> teamTwo;
    std::vector<LolChatChampSelection_t> playerChampionSelections;
    std::vector<LolChatTeamPlayerEntry_t> teamOne;
    LolChatQueue_t queue;
  };

  inline void to_json(nlohmann::json& j, const LolChatGameflowGameData_t& v) {
    j["teamTwo"] = v.teamTwo;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["teamOne"] = v.teamOne;
    j["queue"] = v.queue;
  }

  inline void from_json(const nlohmann::json& j, LolChatGameflowGameData_t& v) {
    v.teamTwo = j.at("teamTwo").get<std::vector<LolChatTeamPlayerEntry_t>>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<LolChatChampSelection_t>>();
    v.teamOne = j.at("teamOne").get<std::vector<LolChatTeamPlayerEntry_t>>();
    v.queue = j.at("queue").get<LolChatQueue_t>();
  }
}
