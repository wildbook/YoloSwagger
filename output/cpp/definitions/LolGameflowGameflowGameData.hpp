#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowQueue.hpp"
namespace leagueapi {
  struct LolGameflowGameflowGameData_t {
    std::vector<nlohmann::json> teamOne;
    std::vector<nlohmann::json> playerChampionSelections;
    std::vector<nlohmann::json> teamTwo;
    uint64_t gameId;
    bool spectatorsAllowed;
    std::string gameName;
    bool isCustomGame;
    std::string password;
    LolGameflowQueue_t queue;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameData_t& v) {
    j["teamOne"] = v.teamOne;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["teamTwo"] = v.teamTwo;
    j["gameId"] = v.gameId;
    j["spectatorsAllowed"] = v.spectatorsAllowed;
    j["gameName"] = v.gameName;
    j["isCustomGame"] = v.isCustomGame;
    j["password"] = v.password;
    j["queue"] = v.queue;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameData_t& v) {
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<nlohmann::json>>();
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<bool>();
    v.gameName = j.at("gameName").get<std::string>();
    v.isCustomGame = j.at("isCustomGame").get<bool>();
    v.password = j.at("password").get<std::string>();
    v.queue = j.at("queue").get<LolGameflowQueue_t>();
  }
  inline std::string to_string(const LolGameflowGameflowGameData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
