#ifndef SWAGGER_TYPES_LolPlayerBehaviorPlayerBehavior_GameflowSessionResource_HPP
#define SWAGGER_TYPES_LolPlayerBehaviorPlayerBehavior_GameflowSessionResource_HPP
#include <json.hpp>
#include "LolPlayerBehaviorGameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolPlayerBehaviorPlayerBehavior_GameflowSessionResource {
    // 
    LolPlayerBehaviorGameflowPhase phase;
  };

  void to_json(nlohmann::json& j, const LolPlayerBehaviorPlayerBehavior_GameflowSessionResource& v) {
    j["phase"] = v.phase;
  }

  void from_json(const nlohmann::json& j, LolPlayerBehaviorPlayerBehavior_GameflowSessionResource& v) {
    v.phase = j.at("phase").get<LolPlayerBehaviorGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolPlayerBehaviorPlayerBehavior_GameflowSessionResource_HPP
