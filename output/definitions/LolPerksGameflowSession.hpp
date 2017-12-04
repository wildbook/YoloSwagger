#ifndef SWAGGER_TYPES_LolPerksGameflowSession_HPP
#define SWAGGER_TYPES_LolPerksGameflowSession_HPP
#include <json.hpp>
#include "LolPerksGameflowPhase.hpp"
#include "LolPerksGameflowGameData.hpp"
namespace test {
  // 
  struct LolPerksGameflowSession {
'    // 
    LolPerksGameflowGameData gameData;
    // 
    LolPerksGameflowPhase phase;
  };

  void to_json(nlohmann::json& j, const LolPerksGameflowSession& v) {
    j["gameData"] = v.gameData;
    j["phase"] = v.phase;
  }

  void from_json(const nlohmann::json& j, LolPerksGameflowSession& v) {
    v.gameData = j.at("gameData").get<LolPerksGameflowGameData>;
    v.phase = j.at("phase").get<LolPerksGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolPerksGameflowSession_HPP
