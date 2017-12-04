#ifndef SWAGGER_TYPES_LolChatGameflowGameData_HPP
#define SWAGGER_TYPES_LolChatGameflowGameData_HPP
#include <json.hpp>
#include "LolChatQueue.hpp"
#include "LolChatChampSelection.hpp"
#include "LolChatTeamPlayerEntry.hpp"
namespace leagueapi {
  // 
  struct LolChatGameflowGameData {
    // 
    LolChatQueue queue;
    // 
    std::vector<LolChatTeamPlayerEntry> teamTwo;
    // 
    std::vector<LolChatChampSelection> playerChampionSelections;
    // 
    std::vector<LolChatTeamPlayerEntry> teamOne;
  };

  inline void to_json(nlohmann::json& j, const LolChatGameflowGameData& v) {
    j["queue"] = v.queue;
    j["teamTwo"] = v.teamTwo;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["teamOne"] = v.teamOne;
  }

  inline void from_json(const nlohmann::json& j, LolChatGameflowGameData& v) {
    v.queue = j.at("queue").get<LolChatQueue>;
    v.teamTwo = j.at("teamTwo").get<std::vector<LolChatTeamPlayerEntry>>;
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<LolChatChampSelection>>;
    v.teamOne = j.at("teamOne").get<std::vector<LolChatTeamPlayerEntry>>;
  }

}
#endif // SWAGGER_TYPES_LolChatGameflowGameData_HPP
