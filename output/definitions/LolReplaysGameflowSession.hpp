#ifndef SWAGGER_TYPES_LolReplaysGameflowSession_HPP
#define SWAGGER_TYPES_LolReplaysGameflowSession_HPP
#include <json.hpp>
#include "LolReplaysGameflowPhase.hpp"
#include "LolReplaysGameflowGameClient.hpp"
namespace leagueapi {
  // 
  struct LolReplaysGameflowSession {
    // 
    LolReplaysGameflowGameClient gameClient;
    // 
    LolReplaysGameflowPhase phase;
  };

  inline void to_json(nlohmann::json& j, const LolReplaysGameflowSession& v) {
    j["gameClient"] = v.gameClient;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolReplaysGameflowSession& v) {
    v.gameClient = j.at("gameClient").get<LolReplaysGameflowGameClient>;
    v.phase = j.at("phase").get<LolReplaysGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolReplaysGameflowSession_HPP
