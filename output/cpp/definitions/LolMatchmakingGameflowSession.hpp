#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingGameflowPhase.hpp"
#include "LolMatchmakingGameflowGameData.hpp"
#include "LolMatchmakingGameflowGameDodge.hpp"
namespace leagueapi {
  struct LolMatchmakingGameflowSession_t {
    LolMatchmakingGameflowPhase_t phase;
    LolMatchmakingGameflowGameData_t gameData;
    LolMatchmakingGameflowGameDodge_t gameDodge;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingGameflowSession_t& v) {
    j["phase"] = v.phase;
    j["gameData"] = v.gameData;
    j["gameDodge"] = v.gameDodge;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolMatchmakingGameflowPhase_t>();
    v.gameData = j.at("gameData").get<LolMatchmakingGameflowGameData_t>();
    v.gameDodge = j.at("gameDodge").get<LolMatchmakingGameflowGameDodge_t>();
  }
  inline std::string to_string(const LolMatchmakingGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
