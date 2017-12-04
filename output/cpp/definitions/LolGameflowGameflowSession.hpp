#ifndef SWAGGER_TYPES_LolGameflowGameflowSession_HPP
#define SWAGGER_TYPES_LolGameflowGameflowSession_HPP
#include <json.hpp>
#include "LolGameflowGameflowGameDodge.hpp"
#include "LolGameflowGameflowGameData.hpp"
#include "LolGameflowGameflowPhase.hpp"
#include "LolGameflowGameflowGameClient.hpp"
#include "LolGameflowGameflowGameMap.hpp"
namespace leagueapi {
  // 
  struct LolGameflowGameflowSession {
    // 
    LolGameflowGameflowPhase phase;
    // 
    LolGameflowGameflowGameClient gameClient;
    // 
    LolGameflowGameflowGameDodge gameDodge;
    // 
    LolGameflowGameflowGameData gameData;
    // 
    LolGameflowGameflowGameMap map;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowSession& v) {
    j["phase"] = v.phase;
    j["gameClient"] = v.gameClient;
    j["gameDodge"] = v.gameDodge;
    j["gameData"] = v.gameData;
    j["map"] = v.map;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowSession& v) {
    v.phase = j.at("phase").get<LolGameflowGameflowPhase>;
    v.gameClient = j.at("gameClient").get<LolGameflowGameflowGameClient>;
    v.gameDodge = j.at("gameDodge").get<LolGameflowGameflowGameDodge>;
    v.gameData = j.at("gameData").get<LolGameflowGameflowGameData>;
    v.map = j.at("map").get<LolGameflowGameflowGameMap>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowSession_HPP
