#ifndef SWAGGER_TYPES_LolEndOfGameGameflowSession_HPP
#define SWAGGER_TYPES_LolEndOfGameGameflowSession_HPP
#include <json.hpp>
#include "LolEndOfGameGameflowGameData.hpp"
#include "LolEndOfGameGameflowPhase.hpp"
#include "LolEndOfGameGameflowClient.hpp"
namespace leagueapi {
  // 
  struct LolEndOfGameGameflowSession {
    // 
    LolEndOfGameGameflowClient gameClient;
    // 
    LolEndOfGameGameflowGameData gameData;
    // 
    LolEndOfGameGameflowPhase phase;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameflowSession& v) {
    j["gameClient"] = v.gameClient;
    j["gameData"] = v.gameData;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameflowSession& v) {
    v.gameClient = j.at("gameClient").get<LolEndOfGameGameflowClient>;
    v.gameData = j.at("gameData").get<LolEndOfGameGameflowGameData>;
    v.phase = j.at("phase").get<LolEndOfGameGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameGameflowSession_HPP
