#ifndef SWAGGER_TYPES_LolGameflowGameflowGameData_HPP
#define SWAGGER_TYPES_LolGameflowGameflowGameData_HPP
#include <json.hpp>
#include "LolGameflowQueue.hpp"
namespace leagueapi {
  // 
  struct LolGameflowGameflowGameData {
    // 
    std::string password;
    // 
    std::vector<nlohmann::json> teamOne;
    // 
    bool isCustomGame;
    // 
    std::string gameName;
    // 
    LolGameflowQueue queue;
    // 
    uint64_t gameId;
    // 
    bool spectatorsAllowed;
    // 
    std::vector<nlohmann::json> teamTwo;
    // 
    std::vector<nlohmann::json> playerChampionSelections;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameData& v) {
    j["password"] = v.password;
    j["teamOne"] = v.teamOne;
    j["isCustomGame"] = v.isCustomGame;
    j["gameName"] = v.gameName;
    j["queue"] = v.queue;
    j["gameId"] = v.gameId;
    j["spectatorsAllowed"] = v.spectatorsAllowed;
    j["teamTwo"] = v.teamTwo;
    j["playerChampionSelections"] = v.playerChampionSelections;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameData& v) {
    v.password = j.at("password").get<std::string>;
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>;
    v.isCustomGame = j.at("isCustomGame").get<bool>;
    v.gameName = j.at("gameName").get<std::string>;
    v.queue = j.at("queue").get<LolGameflowQueue>;
    v.gameId = j.at("gameId").get<uint64_t>;
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<bool>;
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>;
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<nlohmann::json>>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowGameData_HPP
