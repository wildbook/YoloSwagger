#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingGameflowPhase.hpp"
#include "LolMatchmakingGameflowGameDodge.hpp"
#include "LolMatchmakingGameflowGameData.hpp"
namespace leagueapi {
  struct LolMatchmakingGameflowSession_t {
    LolMatchmakingGameflowPhase_t phase;
    LolMatchmakingGameflowGameDodge_t gameDodge;
    LolMatchmakingGameflowGameData_t gameData;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingGameflowSession_t& v) {
    j["phase"] = v.phase;
    j["gameDodge"] = v.gameDodge;
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolMatchmakingGameflowPhase_t>();
    v.gameDodge = j.at("gameDodge").get<LolMatchmakingGameflowGameDodge_t>();
    v.gameData = j.at("gameData").get<LolMatchmakingGameflowGameData_t>();
  }
  inline std::string to_string(const LolMatchmakingGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
