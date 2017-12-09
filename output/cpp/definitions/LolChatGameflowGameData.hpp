#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatQueue.hpp"
#include "LolChatTeamPlayerEntry.hpp"
#include "LolChatChampSelection.hpp"
namespace leagueapi {
  struct LolChatGameflowGameData_t {
    LolChatQueue_t queue;
    std::vector<LolChatChampSelection_t> playerChampionSelections;
    std::vector<LolChatTeamPlayerEntry_t> teamOne;
    std::vector<LolChatTeamPlayerEntry_t> teamTwo;
  };

  inline void to_json(nlohmann::json& j, const LolChatGameflowGameData_t& v) {
    j["queue"] = v.queue;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["teamOne"] = v.teamOne;
    j["teamTwo"] = v.teamTwo;
  }

  inline void from_json(const nlohmann::json& j, LolChatGameflowGameData_t& v) {
    v.queue = j.at("queue").get<LolChatQueue_t>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<LolChatChampSelection_t>>();
    v.teamOne = j.at("teamOne").get<std::vector<LolChatTeamPlayerEntry_t>>();
    v.teamTwo = j.at("teamTwo").get<std::vector<LolChatTeamPlayerEntry_t>>();
  }
  inline std::string to_string(const LolChatGameflowGameData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
