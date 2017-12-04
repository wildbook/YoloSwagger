#ifndef SWAGGER_TYPES_LolChatGameflowSession_HPP
#define SWAGGER_TYPES_LolChatGameflowSession_HPP
#include <json.hpp>
#include "LolChatGameflowGameData.hpp"
#include "LolChatGameflowPhase.hpp"
#include "LolChatGameflowGameMap.hpp"
namespace leagueapi {
  // 
  struct LolChatGameflowSession {
    // 
    LolChatGameflowGameData gameData;
    // 
    LolChatGameflowGameMap map;
    // 
    LolChatGameflowPhase phase;
  };

  inline void to_json(nlohmann::json& j, const LolChatGameflowSession& v) {
    j["gameData"] = v.gameData;
    j["map"] = v.map;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolChatGameflowSession& v) {
    v.gameData = j.at("gameData").get<LolChatGameflowGameData>;
    v.map = j.at("map").get<LolChatGameflowGameMap>;
    v.phase = j.at("phase").get<LolChatGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolChatGameflowSession_HPP
