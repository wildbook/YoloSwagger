#ifndef SWAGGER_TYPES_LolLeaguesGameflowSession_HPP
#define SWAGGER_TYPES_LolLeaguesGameflowSession_HPP
#include <json.hpp>
#include "LolLeaguesGameflowGameData.hpp"
#include "LolLeaguesGameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesGameflowSession {
    // 
    LolLeaguesGameflowPhase phase;
    // 
    LolLeaguesGameflowGameData gameData;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesGameflowSession& v) {
    j["phase"] = v.phase;
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesGameflowSession& v) {
    v.phase = j.at("phase").get<LolLeaguesGameflowPhase>;
    v.gameData = j.at("gameData").get<LolLeaguesGameflowGameData>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesGameflowSession_HPP
