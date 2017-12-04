#ifndef SWAGGER_TYPES_LolPftGameflowSession_HPP
#define SWAGGER_TYPES_LolPftGameflowSession_HPP
#include <json.hpp>
#include "LolPftGameflowPhase.hpp"
#include "LolPftGameflowGameDodge.hpp"
namespace leagueapi {
  // 
  struct LolPftGameflowSession {
    // 
    LolPftGameflowGameDodge gameDodge;
    // 
    LolPftGameflowPhase phase;
  };

  void to_json(nlohmann::json& j, const LolPftGameflowSession& v) {
    j["gameDodge"] = v.gameDodge;
    j["phase"] = v.phase;
  }

  void from_json(const nlohmann::json& j, LolPftGameflowSession& v) {
    v.gameDodge = j.at("gameDodge").get<LolPftGameflowGameDodge>;
    v.phase = j.at("phase").get<LolPftGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolPftGameflowSession_HPP
