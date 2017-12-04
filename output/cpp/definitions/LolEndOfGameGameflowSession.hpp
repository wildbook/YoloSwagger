#ifndef SWAGGER_TYPES_LolEndOfGameGameflowSession_HPP
#define SWAGGER_TYPES_LolEndOfGameGameflowSession_HPP
#include <json.hpp>
#include "LolEndOfGameGameflowClient.hpp"
#include "LolEndOfGameGameflowPhase.hpp"
#include "LolEndOfGameGameflowGameData.hpp"
namespace leagueapi {
  // 
  struct LolEndOfGameGameflowSession {
    // 
    LolEndOfGameGameflowPhase phase;
    // 
    LolEndOfGameGameflowClient gameClient;
    // 
    LolEndOfGameGameflowGameData gameData;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameflowSession& v) {
    j["phase"] = v.phase;
    j["gameClient"] = v.gameClient;
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameflowSession& v) {
    v.phase = j.at("phase").get<LolEndOfGameGameflowPhase>;
    v.gameClient = j.at("gameClient").get<LolEndOfGameGameflowClient>;
    v.gameData = j.at("gameData").get<LolEndOfGameGameflowGameData>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameGameflowSession_HPP
