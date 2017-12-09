#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowGameflowGameClient.hpp"
#include "LolGameflowGameflowGameMap.hpp"
#include "LolGameflowGameflowPhase.hpp"
#include "LolGameflowGameflowGameData.hpp"
#include "LolGameflowGameflowGameDodge.hpp"
namespace leagueapi {
  struct LolGameflowGameflowSession_t {
    LolGameflowGameflowGameDodge_t gameDodge;
    LolGameflowGameflowGameMap_t map;
    LolGameflowGameflowPhase_t phase;
    LolGameflowGameflowGameClient_t gameClient;
    LolGameflowGameflowGameData_t gameData;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowSession_t& v) {
    j["gameDodge"] = v.gameDodge;
    j["map"] = v.map;
    j["phase"] = v.phase;
    j["gameClient"] = v.gameClient;
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowSession_t& v) {
    v.gameDodge = j.at("gameDodge").get<LolGameflowGameflowGameDodge_t>();
    v.map = j.at("map").get<LolGameflowGameflowGameMap_t>();
    v.phase = j.at("phase").get<LolGameflowGameflowPhase_t>();
    v.gameClient = j.at("gameClient").get<LolGameflowGameflowGameClient_t>();
    v.gameData = j.at("gameData").get<LolGameflowGameflowGameData_t>();
  }
  inline std::string to_string(const LolGameflowGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
