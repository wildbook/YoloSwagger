#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowGameflowGameDodge.hpp"
#include "LolGameflowGameflowGameData.hpp"
#include "LolGameflowGameflowPhase.hpp"
#include "LolGameflowGameflowGameClient.hpp"
#include "LolGameflowGameflowGameMap.hpp"
namespace leagueapi {
  struct LolGameflowGameflowSession_t {
    LolGameflowGameflowPhase_t phase;
    LolGameflowGameflowGameClient_t gameClient;
    LolGameflowGameflowGameDodge_t gameDodge;
    LolGameflowGameflowGameData_t gameData;
    LolGameflowGameflowGameMap_t map;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowSession_t& v) {
    j["phase"] = v.phase;
    j["gameClient"] = v.gameClient;
    j["gameDodge"] = v.gameDodge;
    j["gameData"] = v.gameData;
    j["map"] = v.map;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolGameflowGameflowPhase_t>();
    v.gameClient = j.at("gameClient").get<LolGameflowGameflowGameClient_t>();
    v.gameDodge = j.at("gameDodge").get<LolGameflowGameflowGameDodge_t>();
    v.gameData = j.at("gameData").get<LolGameflowGameflowGameData_t>();
    v.map = j.at("map").get<LolGameflowGameflowGameMap_t>();
  }
  inline std::string to_string(const LolGameflowGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
