#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameGameflowClient.hpp"
#include "LolEndOfGameGameflowGameData.hpp"
#include "LolEndOfGameGameflowPhase.hpp"
namespace leagueapi {
  struct LolEndOfGameGameflowSession_t {
    LolEndOfGameGameflowClient_t gameClient;
    LolEndOfGameGameflowGameData_t gameData;
    LolEndOfGameGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameflowSession_t& v) {
    j["gameClient"] = v.gameClient;
    j["gameData"] = v.gameData;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameflowSession_t& v) {
    v.gameClient = j.at("gameClient").get<LolEndOfGameGameflowClient_t>();
    v.gameData = j.at("gameData").get<LolEndOfGameGameflowGameData_t>();
    v.phase = j.at("phase").get<LolEndOfGameGameflowPhase_t>();
  }
  inline std::string to_string(const LolEndOfGameGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
