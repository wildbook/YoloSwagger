#ifndef SWAGGER_TYPES_LolEndOfGameGameflowSession_HPP
#define SWAGGER_TYPES_LolEndOfGameGameflowSession_HPP
#include <json.hpp>
#include "LolEndOfGameGameflowPhase.hpp"
#include "LolEndOfGameGameflowGameData.hpp"
#include "LolEndOfGameGameflowClient.hpp"
namespace test {
  // 
  struct LolEndOfGameGameflowSession {
'    // 
    LolEndOfGameGameflowClient gameClient;
    // 
    LolEndOfGameGameflowGameData gameData;
    // 
    LolEndOfGameGameflowPhase phase;
  };

  void to_json(nlohmann::json& j, const LolEndOfGameGameflowSession& v) {
    j["gameClient"] = v.gameClient;
    j["gameData"] = v.gameData;
    j["phase"] = v.phase;
  }

  void from_json(const nlohmann::json& j, LolEndOfGameGameflowSession& v) {
    v.gameClient = j.at("gameClient").get<LolEndOfGameGameflowClient>;
    v.gameData = j.at("gameData").get<LolEndOfGameGameflowGameData>;
    v.phase = j.at("phase").get<LolEndOfGameGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolEndOfGameGameflowSession_HPP
