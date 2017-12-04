#ifndef SWAGGER_TYPES_LolLeaguesGameflowSession_HPP
#define SWAGGER_TYPES_LolLeaguesGameflowSession_HPP
#include <json.hpp>
#include "LolLeaguesGameflowGameData.hpp"
#include "LolLeaguesGameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolLeaguesGameflowSession {
    // 
    LolLeaguesGameflowGameData gameData;
    // 
    LolLeaguesGameflowPhase phase;
  };

  void to_json(nlohmann::json& j, const LolLeaguesGameflowSession& v) {
    j["gameData"] = v.gameData;
    j["phase"] = v.phase;
  }

  void from_json(const nlohmann::json& j, LolLeaguesGameflowSession& v) {
    v.gameData = j.at("gameData").get<LolLeaguesGameflowGameData>;
    v.phase = j.at("phase").get<LolLeaguesGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolLeaguesGameflowSession_HPP
