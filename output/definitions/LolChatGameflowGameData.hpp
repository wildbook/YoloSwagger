#ifndef SWAGGER_TYPES_LolChatGameflowGameData_HPP
#define SWAGGER_TYPES_LolChatGameflowGameData_HPP
#include <json.hpp>
#include "LolChatQueue.hpp"
#include "LolChatTeamPlayerEntry.hpp"
#include "LolChatChampSelection.hpp"
namespace leagueapi {
  // 
  struct LolChatGameflowGameData {
    // 
    std::vector<LolChatChampSelection> playerChampionSelections;
    // 
    LolChatQueue queue;
    // 
    std::vector<LolChatTeamPlayerEntry> teamOne;
    // 
    std::vector<LolChatTeamPlayerEntry> teamTwo;
  };

  inline void to_json(nlohmann::json& j, const LolChatGameflowGameData& v) {
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["queue"] = v.queue;
    j["teamOne"] = v.teamOne;
    j["teamTwo"] = v.teamTwo;
  }

  inline void from_json(const nlohmann::json& j, LolChatGameflowGameData& v) {
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<LolChatChampSelection>>;
    v.queue = j.at("queue").get<LolChatQueue>;
    v.teamOne = j.at("teamOne").get<std::vector<LolChatTeamPlayerEntry>>;
    v.teamTwo = j.at("teamTwo").get<std::vector<LolChatTeamPlayerEntry>>;
  }

}
#endif // SWAGGER_TYPES_LolChatGameflowGameData_HPP
