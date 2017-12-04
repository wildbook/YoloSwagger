#ifndef SWAGGER_TYPES_LolPftGameflowSession_HPP
#define SWAGGER_TYPES_LolPftGameflowSession_HPP
#include <json.hpp>
#include "LolPftGameflowPhase.hpp"
#include "LolPftGameflowGameDodge.hpp"
namespace leagueapi {
  // 
  struct LolPftGameflowSession {
    // 
    LolPftGameflowPhase phase;
    // 
    LolPftGameflowGameDodge gameDodge;
  };

  inline void to_json(nlohmann::json& j, const LolPftGameflowSession& v) {
    j["phase"] = v.phase;
    j["gameDodge"] = v.gameDodge;
  }

  inline void from_json(const nlohmann::json& j, LolPftGameflowSession& v) {
    v.phase = j.at("phase").get<LolPftGameflowPhase>;
    v.gameDodge = j.at("gameDodge").get<LolPftGameflowGameDodge>;
  }

}
#endif // SWAGGER_TYPES_LolPftGameflowSession_HPP
