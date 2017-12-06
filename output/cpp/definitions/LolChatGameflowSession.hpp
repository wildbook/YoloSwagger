#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatGameflowGameMap.hpp"
#include "LolChatGameflowPhase.hpp"
#include "LolChatGameflowGameData.hpp"
namespace leagueapi {
  struct LolChatGameflowSession_t {
    LolChatGameflowGameData_t gameData;
    LolChatGameflowPhase_t phase;
    LolChatGameflowGameMap_t map;
  };

  inline void to_json(nlohmann::json& j, const LolChatGameflowSession_t& v) {
    j["gameData"] = v.gameData;
    j["phase"] = v.phase;
    j["map"] = v.map;
  }

  inline void from_json(const nlohmann::json& j, LolChatGameflowSession_t& v) {
    v.gameData = j.at("gameData").get<LolChatGameflowGameData_t>();
    v.phase = j.at("phase").get<LolChatGameflowPhase_t>();
    v.map = j.at("map").get<LolChatGameflowGameMap_t>();
  }
}
