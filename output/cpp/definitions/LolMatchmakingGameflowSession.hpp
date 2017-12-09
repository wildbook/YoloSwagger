#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingGameflowPhase.hpp"
#include "LolMatchmakingGameflowGameData.hpp"
#include "LolMatchmakingGameflowGameDodge.hpp"
namespace leagueapi {
  struct LolMatchmakingGameflowSession_t {
    LolMatchmakingGameflowGameDodge_t gameDodge;
    LolMatchmakingGameflowPhase_t phase;
    LolMatchmakingGameflowGameData_t gameData;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingGameflowSession_t& v) {
    j["gameDodge"] = v.gameDodge;
    j["phase"] = v.phase;
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingGameflowSession_t& v) {
    v.gameDodge = j.at("gameDodge").get<LolMatchmakingGameflowGameDodge_t>();
    v.phase = j.at("phase").get<LolMatchmakingGameflowPhase_t>();
    v.gameData = j.at("gameData").get<LolMatchmakingGameflowGameData_t>();
  }
  inline std::string to_string(const LolMatchmakingGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
