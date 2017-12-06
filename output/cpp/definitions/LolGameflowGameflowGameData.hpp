#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowQueue.hpp"
namespace leagueapi {
  struct LolGameflowGameflowGameData_t {
    std::vector<nlohmann::json> teamTwo;
    bool isCustomGame;
    std::vector<nlohmann::json> playerChampionSelections;
    std::vector<nlohmann::json> teamOne;
    std::string gameName;
    uint64_t gameId;
    LolGameflowQueue_t queue;
    std::string password;
    bool spectatorsAllowed;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameData_t& v) {
    j["teamTwo"] = v.teamTwo;
    j["isCustomGame"] = v.isCustomGame;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["teamOne"] = v.teamOne;
    j["gameName"] = v.gameName;
    j["gameId"] = v.gameId;
    j["queue"] = v.queue;
    j["password"] = v.password;
    j["spectatorsAllowed"] = v.spectatorsAllowed;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameData_t& v) {
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>();
    v.isCustomGame = j.at("isCustomGame").get<bool>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<nlohmann::json>>();
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>();
    v.gameName = j.at("gameName").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.queue = j.at("queue").get<LolGameflowQueue_t>();
    v.password = j.at("password").get<std::string>();
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<bool>();
  }
}
