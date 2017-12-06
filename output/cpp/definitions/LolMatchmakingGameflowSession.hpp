#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingGameflowGameData.hpp"
#include "LolMatchmakingGameflowGameDodge.hpp"
#include "LolMatchmakingGameflowPhase.hpp"
namespace leagueapi {
  struct LolMatchmakingGameflowSession_t {
    LolMatchmakingGameflowGameDodge_t gameDodge;
    LolMatchmakingGameflowGameData_t gameData;
    LolMatchmakingGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingGameflowSession_t& v) {
    j["gameDodge"] = v.gameDodge;
    j["gameData"] = v.gameData;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingGameflowSession_t& v) {
    v.gameDodge = j.at("gameDodge").get<LolMatchmakingGameflowGameDodge_t>();
    v.gameData = j.at("gameData").get<LolMatchmakingGameflowGameData_t>();
    v.phase = j.at("phase").get<LolMatchmakingGameflowPhase_t>();
  }
}
