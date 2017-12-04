#ifndef SWAGGER_TYPES_LolReplaysGameflowSession_HPP
#define SWAGGER_TYPES_LolReplaysGameflowSession_HPP
#include <json.hpp>
#include "LolReplaysGameflowPhase.hpp"
#include "LolReplaysGameflowGameClient.hpp"
namespace leagueapi {
  // 
  struct LolReplaysGameflowSession {
    // 
    LolReplaysGameflowPhase phase;
    // 
    LolReplaysGameflowGameClient gameClient;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysGameflowSession& v) {
    j["phase"] = v.phase;
    j["gameClient"] = v.gameClient;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysGameflowSession& v) {
    v.phase = j.at("phase").get<LolReplaysGameflowPhase>;
    v.gameClient = j.at("gameClient").get<LolReplaysGameflowGameClient>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysGameflowSession_HPP
