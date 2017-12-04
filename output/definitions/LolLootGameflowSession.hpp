#ifndef SWAGGER_TYPES_LolLootGameflowSession_HPP
#define SWAGGER_TYPES_LolLootGameflowSession_HPP
#include <json.hpp>
#include "LolLootGameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolLootGameflowSession {
    // 
    LolLootGameflowPhase phase;
  };

  void to_json(nlohmann::json& j, const LolLootGameflowSession& v) {
    j["phase"] = v.phase;
  }

  void from_json(const nlohmann::json& j, LolLootGameflowSession& v) {
    v.phase = j.at("phase").get<LolLootGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolLootGameflowSession_HPP
