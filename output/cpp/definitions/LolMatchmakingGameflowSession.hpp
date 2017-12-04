#ifndef SWAGGER_TYPES_LolMatchmakingGameflowSession_HPP
#define SWAGGER_TYPES_LolMatchmakingGameflowSession_HPP
#include <json.hpp>
#include "LolMatchmakingGameflowPhase.hpp"
#include "LolMatchmakingGameflowGameDodge.hpp"
#include "LolMatchmakingGameflowGameData.hpp"
namespace leagueapi {
  // 
  struct LolMatchmakingGameflowSession {
    // 
    LolMatchmakingGameflowPhase phase;
    // 
    LolMatchmakingGameflowGameDodge gameDodge;
    // 
    LolMatchmakingGameflowGameData gameData;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingGameflowSession& v) {
    j["phase"] = v.phase;
    j["gameDodge"] = v.gameDodge;
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingGameflowSession& v) {
    v.phase = j.at("phase").get<LolMatchmakingGameflowPhase>;
    v.gameDodge = j.at("gameDodge").get<LolMatchmakingGameflowGameDodge>;
    v.gameData = j.at("gameData").get<LolMatchmakingGameflowGameData>;
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingGameflowSession_HPP
