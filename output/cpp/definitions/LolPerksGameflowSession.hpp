#ifndef SWAGGER_TYPES_LolPerksGameflowSession_HPP
#define SWAGGER_TYPES_LolPerksGameflowSession_HPP
#include <json.hpp>
#include "LolPerksGameflowGameData.hpp"
#include "LolPerksGameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolPerksGameflowSession {
    // 
    LolPerksGameflowPhase phase;
    // 
    LolPerksGameflowGameData gameData;
  };

  inline void to_json(nlohmann::json& j, const LolPerksGameflowSession& v) {
    j["phase"] = v.phase;
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, LolPerksGameflowSession& v) {
    v.phase = j.at("phase").get<LolPerksGameflowPhase>;
    v.gameData = j.at("gameData").get<LolPerksGameflowGameData>;
  }

}
#endif // SWAGGER_TYPES_LolPerksGameflowSession_HPP
