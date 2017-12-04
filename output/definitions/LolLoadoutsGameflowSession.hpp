#ifndef SWAGGER_TYPES_LolLoadoutsGameflowSession_HPP
#define SWAGGER_TYPES_LolLoadoutsGameflowSession_HPP
#include <json.hpp>
#include "LolLoadoutsGameflowGameData.hpp"
#include "LolLoadoutsGameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolLoadoutsGameflowSession {
    // 
    LolLoadoutsGameflowGameData gameData;
    // 
    LolLoadoutsGameflowPhase phase;
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsGameflowSession& v) {
    j["gameData"] = v.gameData;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsGameflowSession& v) {
    v.gameData = j.at("gameData").get<LolLoadoutsGameflowGameData>;
    v.phase = j.at("phase").get<LolLoadoutsGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsGameflowSession_HPP
