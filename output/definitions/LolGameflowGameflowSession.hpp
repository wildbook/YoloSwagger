#ifndef SWAGGER_TYPES_LolGameflowGameflowSession_HPP
#define SWAGGER_TYPES_LolGameflowGameflowSession_HPP
#include <json.hpp>
#include "LolGameflowGameflowGameClient.hpp"
#include "LolGameflowGameflowGameMap.hpp"
#include "LolGameflowGameflowPhase.hpp"
#include "LolGameflowGameflowGameDodge.hpp"
#include "LolGameflowGameflowGameData.hpp"
namespace leagueapi {
  // 
  struct LolGameflowGameflowSession {
    // 
    LolGameflowGameflowGameClient gameClient;
    // 
    LolGameflowGameflowGameData gameData;
    // 
    LolGameflowGameflowGameDodge gameDodge;
    // 
    LolGameflowGameflowGameMap map;
    // 
    LolGameflowGameflowPhase phase;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowSession& v) {
    j["gameClient"] = v.gameClient;
    j["gameData"] = v.gameData;
    j["gameDodge"] = v.gameDodge;
    j["map"] = v.map;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowSession& v) {
    v.gameClient = j.at("gameClient").get<LolGameflowGameflowGameClient>;
    v.gameData = j.at("gameData").get<LolGameflowGameflowGameData>;
    v.gameDodge = j.at("gameDodge").get<LolGameflowGameflowGameDodge>;
    v.map = j.at("map").get<LolGameflowGameflowGameMap>;
    v.phase = j.at("phase").get<LolGameflowGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowSession_HPP
