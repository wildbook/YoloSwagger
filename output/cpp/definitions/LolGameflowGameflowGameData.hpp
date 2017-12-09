#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowQueue.hpp"
namespace leagueapi {
  struct LolGameflowGameflowGameData_t {
    LolGameflowQueue_t queue;
    std::vector<nlohmann::json> playerChampionSelections;
    bool spectatorsAllowed;
    std::string gameName;
    uint64_t gameId;
    std::string password;
    bool isCustomGame;
    std::vector<nlohmann::json> teamOne;
    std::vector<nlohmann::json> teamTwo;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameData_t& v) {
    j["queue"] = v.queue;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["spectatorsAllowed"] = v.spectatorsAllowed;
    j["gameName"] = v.gameName;
    j["gameId"] = v.gameId;
    j["password"] = v.password;
    j["isCustomGame"] = v.isCustomGame;
    j["teamOne"] = v.teamOne;
    j["teamTwo"] = v.teamTwo;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameData_t& v) {
    v.queue = j.at("queue").get<LolGameflowQueue_t>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<nlohmann::json>>();
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<bool>();
    v.gameName = j.at("gameName").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.password = j.at("password").get<std::string>();
    v.isCustomGame = j.at("isCustomGame").get<bool>();
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>();
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>();
  }
  inline std::string to_string(const LolGameflowGameflowGameData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
