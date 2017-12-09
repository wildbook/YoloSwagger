#pragma once
#include <json.hpp>
#include <optional>
#include "LolChampSelectLegacyGameflowGameClient.hpp"
#include "LolChampSelectLegacyGameflowPhase.hpp"
#include "LolChampSelectLegacyGameflowGameData.hpp"
namespace leagueapi {
  struct LolChampSelectLegacyGameflowSession_t {
    LolChampSelectLegacyGameflowGameData_t gameData;
    LolChampSelectLegacyGameflowGameClient_t gameClient;
    LolChampSelectLegacyGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowSession_t& v) {
    j["gameData"] = v.gameData;
    j["gameClient"] = v.gameClient;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowSession_t& v) {
    v.gameData = j.at("gameData").get<LolChampSelectLegacyGameflowGameData_t>();
    v.gameClient = j.at("gameClient").get<LolChampSelectLegacyGameflowGameClient_t>();
    v.phase = j.at("phase").get<LolChampSelectLegacyGameflowPhase_t>();
  }
  inline std::string to_string(const LolChampSelectLegacyGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
