#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowGameflowGameDodge.hpp"
#include "LolGameflowGameflowGameData.hpp"
#include "LolGameflowGameflowGameClient.hpp"
#include "LolGameflowGameflowPhase.hpp"
#include "LolGameflowGameflowGameMap.hpp"
namespace leagueapi {
  struct LolGameflowGameflowSession_t {
    LolGameflowGameflowGameData_t gameData;
    LolGameflowGameflowGameDodge_t gameDodge;
    LolGameflowGameflowGameClient_t gameClient;
    LolGameflowGameflowPhase_t phase;
    LolGameflowGameflowGameMap_t map;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowSession_t& v) {
    j["gameData"] = v.gameData;
    j["gameDodge"] = v.gameDodge;
    j["gameClient"] = v.gameClient;
    j["phase"] = v.phase;
    j["map"] = v.map;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowSession_t& v) {
    v.gameData = j.at("gameData").get<LolGameflowGameflowGameData_t>();
    v.gameDodge = j.at("gameDodge").get<LolGameflowGameflowGameDodge_t>();
    v.gameClient = j.at("gameClient").get<LolGameflowGameflowGameClient_t>();
    v.phase = j.at("phase").get<LolGameflowGameflowPhase_t>();
    v.map = j.at("map").get<LolGameflowGameflowGameMap_t>();
  }
  inline std::string to_string(const LolGameflowGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
