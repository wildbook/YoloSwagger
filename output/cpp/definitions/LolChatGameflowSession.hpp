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
    LolChatGameflowPhase phase;
    // 
    LolChatGameflowGameMap map;
    // 
    LolChatGameflowGameData gameData;
  };

  inline void to_json(nlohmann::json& j, const LolChatGameflowSession& v) {
    j["phase"] = v.phase;
    j["map"] = v.map;
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, LolChatGameflowSession& v) {
    v.phase = j.at("phase").get<LolChatGameflowPhase>;
    v.map = j.at("map").get<LolChatGameflowGameMap>;
    v.gameData = j.at("gameData").get<LolChatGameflowGameData>;
  }

}
#endif // SWAGGER_TYPES_LolChatGameflowSession_HPP
