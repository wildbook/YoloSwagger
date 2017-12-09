#pragma once
#include <json.hpp>
#include <optional>
#include "LolReplaysGameflowPhase.hpp"
#include "LolReplaysGameflowGameClient.hpp"
namespace leagueapi {
  struct LolReplaysGameflowSession_t {
    LolReplaysGameflowPhase_t phase;
    LolReplaysGameflowGameClient_t gameClient;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysGameflowSession_t& v) {
    j["phase"] = v.phase;
    j["gameClient"] = v.gameClient;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolReplaysGameflowPhase_t>();
    v.gameClient = j.at("gameClient").get<LolReplaysGameflowGameClient_t>();
  }
  inline std::string to_string(const LolReplaysGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
