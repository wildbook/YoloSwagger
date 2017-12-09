#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowGameflowGameData.hpp"
#include "LolGameflowGameflowPhase.hpp"
#include "LolGameflowGameflowGameMap.hpp"
#include "LolGameflowGameflowGameDodge.hpp"
#include "LolGameflowGameflowGameClient.hpp"
namespace leagueapi {
  struct LolGameflowGameflowSession_t {
    LolGameflowGameflowGameData_t gameData;
    LolGameflowGameflowGameMap_t map;
    LolGameflowGameflowGameClient_t gameClient;
    LolGameflowGameflowGameDodge_t gameDodge;
    LolGameflowGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowSession_t& v) {
    j["gameData"] = v.gameData;
    j["map"] = v.map;
    j["gameClient"] = v.gameClient;
    j["gameDodge"] = v.gameDodge;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowSession_t& v) {
    v.gameData = j.at("gameData").get<LolGameflowGameflowGameData_t>();
    v.map = j.at("map").get<LolGameflowGameflowGameMap_t>();
    v.gameClient = j.at("gameClient").get<LolGameflowGameflowGameClient_t>();
    v.gameDodge = j.at("gameDodge").get<LolGameflowGameflowGameDodge_t>();
    v.phase = j.at("phase").get<LolGameflowGameflowPhase_t>();
  }
  inline std::string to_string(const LolGameflowGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
