#ifndef SWAGGER_TYPES_LolChampSelectLegacyGameflowSession_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyGameflowSession_HPP
#include <json.hpp>
#include "LolChampSelectLegacyGameflowGameData.hpp"
#include "LolChampSelectLegacyGameflowGameClient.hpp"
#include "LolChampSelectLegacyGameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolChampSelectLegacyGameflowSession {
    // 
    LolChampSelectLegacyGameflowPhase phase;
    // 
    LolChampSelectLegacyGameflowGameClient gameClient;
    // 
    LolChampSelectLegacyGameflowGameData gameData;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowSession& v) {
    j["phase"] = v.phase;
    j["gameClient"] = v.gameClient;
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowSession& v) {
    v.phase = j.at("phase").get<LolChampSelectLegacyGameflowPhase>;
    v.gameClient = j.at("gameClient").get<LolChampSelectLegacyGameflowGameClient>;
    v.gameData = j.at("gameData").get<LolChampSelectLegacyGameflowGameData>;
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyGameflowSession_HPP
