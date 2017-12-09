#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameGameflowGameData.hpp"
#include "LolEndOfGameGameflowClient.hpp"
#include "LolEndOfGameGameflowPhase.hpp"
namespace leagueapi {
  struct LolEndOfGameGameflowSession_t {
    LolEndOfGameGameflowPhase_t phase;
    LolEndOfGameGameflowClient_t gameClient;
    LolEndOfGameGameflowGameData_t gameData;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameflowSession_t& v) {
    j["phase"] = v.phase;
    j["gameClient"] = v.gameClient;
    j["gameData"] = v.gameData;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolEndOfGameGameflowPhase_t>();
    v.gameClient = j.at("gameClient").get<LolEndOfGameGameflowClient_t>();
    v.gameData = j.at("gameData").get<LolEndOfGameGameflowGameData_t>();
  }
  inline std::string to_string(const LolEndOfGameGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
