#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyGameflowGameClient.hpp"
#include "LolChampSelectLegacyGameflowGameData.hpp"
#include "LolChampSelectLegacyGameflowPhase.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyGameflowSession_t {
    LolChampSelectLegacyGameflowGameClient_t gameClient;
    LolChampSelectLegacyGameflowGameData_t gameData;
    LolChampSelectLegacyGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowSession_t& v) {
    j["gameClient"] = v.gameClient;
    j["gameData"] = v.gameData;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowSession_t& v) {
    v.gameClient = j.at("gameClient").get<LolChampSelectLegacyGameflowGameClient_t>();
    v.gameData = j.at("gameData").get<LolChampSelectLegacyGameflowGameData_t>();
    v.phase = j.at("phase").get<LolChampSelectLegacyGameflowPhase_t>();
  }
}
