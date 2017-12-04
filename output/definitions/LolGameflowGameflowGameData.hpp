#ifndef SWAGGER_TYPES_LolGameflowGameflowGameData_HPP
#define SWAGGER_TYPES_LolGameflowGameflowGameData_HPP
#include <json.hpp>
#include "LolGameflowQueue.hpp"
namespace test {
  // 
  struct LolGameflowGameflowGameData {
'    // 
    uint64_t gameId;
    // 
    std::string gameName;
    // 
    bool isCustomGame;
    // 
    std::string password;
    // 
    std::vector<nlohmann::json> playerChampionSelections;
    // 
    LolGameflowQueue queue;
    // 
    bool spectatorsAllowed;
    // 
    std::vector<nlohmann::json> teamOne;
    // 
    std::vector<nlohmann::json> teamTwo;
  };

  void to_json(nlohmann::json& j, const LolGameflowGameflowGameData& v) {
    j["gameId"] = v.gameId;
    j["gameName"] = v.gameName;
    j["isCustomGame"] = v.isCustomGame;
    j["password"] = v.password;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["queue"] = v.queue;
    j["spectatorsAllowed"] = v.spectatorsAllowed;
    j["teamOne"] = v.teamOne;
    j["teamTwo"] = v.teamTwo;
  }

  void from_json(const nlohmann::json& j, LolGameflowGameflowGameData& v) {
    v.gameId = j.at("gameId").get<uint64_t>;
    v.gameName = j.at("gameName").get<std::string>;
    v.isCustomGame = j.at("isCustomGame").get<bool>;
    v.password = j.at("password").get<std::string>;
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<nlohmann::json>>;
    v.queue = j.at("queue").get<LolGameflowQueue>;
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<bool>;
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>;
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowGameData_HPP
