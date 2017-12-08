#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyGameflowGameData.hpp"
#include "LolChampSelectLegacyGameflowGameClient.hpp"
#include "LolChampSelectLegacyGameflowPhase.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyGameflowSession_t {
    LolChampSelectLegacyGameflowPhase_t phase;
    LolChampSelectLegacyGameflowGameClient_t gameClient;
    LolChampSelectLegacyGameflowGameData_t gameData;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowSession_t& v) {
    j["phase"] = v.phase;
    j["gameClient"] = v.gameClient;
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolChampSelectLegacyGameflowPhase_t>();
    v.gameClient = j.at("gameClient").get<LolChampSelectLegacyGameflowGameClient_t>();
    v.gameData = j.at("gameData").get<LolChampSelectLegacyGameflowGameData_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
