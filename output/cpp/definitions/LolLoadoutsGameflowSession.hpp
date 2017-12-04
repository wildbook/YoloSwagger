#ifndef SWAGGER_TYPES_LolLoadoutsGameflowSession_HPP
#define SWAGGER_TYPES_LolLoadoutsGameflowSession_HPP
#include <json.hpp>
#include "LolLoadoutsGameflowPhase.hpp"
#include "LolLoadoutsGameflowGameData.hpp"
namespace leagueapi {
  // 
  struct LolLoadoutsGameflowSession {
    // 
    LolLoadoutsGameflowPhase phase;
    // 
    LolLoadoutsGameflowGameData gameData;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsGameflowSession& v) {
    j["phase"] = v.phase;
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsGameflowSession& v) {
    v.phase = j.at("phase").get<LolLoadoutsGameflowPhase>;
    v.gameData = j.at("gameData").get<LolLoadoutsGameflowGameData>;
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsGameflowSession_HPP
