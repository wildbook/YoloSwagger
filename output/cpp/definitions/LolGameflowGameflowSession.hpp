#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowGameflowGameData.hpp"
#include "LolGameflowGameflowPhase.hpp"
#include "LolGameflowGameflowGameClient.hpp"
#include "LolGameflowGameflowGameMap.hpp"
#include "LolGameflowGameflowGameDodge.hpp"
namespace leagueapi {
  struct LolGameflowGameflowSession_t {
    LolGameflowGameflowGameClient_t gameClient;
    LolGameflowGameflowGameData_t gameData;
    LolGameflowGameflowGameDodge_t gameDodge;
    LolGameflowGameflowGameMap_t map;
    LolGameflowGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowSession_t& v) {
    j["gameClient"] = v.gameClient;
    j["gameData"] = v.gameData;
    j["gameDodge"] = v.gameDodge;
    j["map"] = v.map;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowSession_t& v) {
    v.gameClient = j.at("gameClient").get<LolGameflowGameflowGameClient_t>();
    v.gameData = j.at("gameData").get<LolGameflowGameflowGameData_t>();
    v.gameDodge = j.at("gameDodge").get<LolGameflowGameflowGameDodge_t>();
    v.map = j.at("map").get<LolGameflowGameflowGameMap_t>();
    v.phase = j.at("phase").get<LolGameflowGameflowPhase_t>();
  }
}
