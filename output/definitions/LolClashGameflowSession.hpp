#ifndef SWAGGER_TYPES_LolClashGameflowSession_HPP
#define SWAGGER_TYPES_LolClashGameflowSession_HPP
#include <json.hpp>
#include "LolClashGameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolClashGameflowSession {
    // 
    LolClashGameflowPhase phase;
  };

  void to_json(nlohmann::json& j, const LolClashGameflowSession& v) {
    j["phase"] = v.phase;
  }

  void from_json(const nlohmann::json& j, LolClashGameflowSession& v) {
    v.phase = j.at("phase").get<LolClashGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolClashGameflowSession_HPP
