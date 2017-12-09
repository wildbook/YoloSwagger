#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingGameflowGameDodge.hpp"
#include "LolMatchmakingGameflowPhase.hpp"
#include "LolMatchmakingGameflowGameData.hpp"
namespace leagueapi {
  struct LolMatchmakingGameflowSession_t {
    LolMatchmakingGameflowGameData_t gameData;
    LolMatchmakingGameflowGameDodge_t gameDodge;
    LolMatchmakingGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingGameflowSession_t& v) {
    j["gameData"] = v.gameData;
    j["gameDodge"] = v.gameDodge;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingGameflowSession_t& v) {
    v.gameData = j.at("gameData").get<LolMatchmakingGameflowGameData_t>();
    v.gameDodge = j.at("gameDodge").get<LolMatchmakingGameflowGameDodge_t>();
    v.phase = j.at("phase").get<LolMatchmakingGameflowPhase_t>();
  }
  inline std::string to_string(const LolMatchmakingGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
