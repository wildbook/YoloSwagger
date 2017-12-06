#pragma once
#include <json.hpp>
#include <optional>
#include "LolReplaysGameflowGameClient.hpp"
#include "LolReplaysGameflowPhase.hpp"
namespace leagueapi {
  struct LolReplaysGameflowSession_t {
    LolReplaysGameflowGameClient_t gameClient;
    LolReplaysGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysGameflowSession_t& v) {
    j["gameClient"] = v.gameClient;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysGameflowSession_t& v) {
    v.gameClient = j.at("gameClient").get<LolReplaysGameflowGameClient_t>();
    v.phase = j.at("phase").get<LolReplaysGameflowPhase_t>();
  }
}
