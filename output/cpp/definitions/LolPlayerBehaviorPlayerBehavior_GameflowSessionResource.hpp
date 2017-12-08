#pragma once
#include <json.hpp>
#include <optional>
#include "LolPlayerBehaviorGameflowPhase.hpp"
namespace leagueapi {
  struct LolPlayerBehaviorPlayerBehavior_GameflowSessionResource_t {
    LolPlayerBehaviorGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorPlayerBehavior_GameflowSessionResource_t& v) {
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorPlayerBehavior_GameflowSessionResource_t& v) {
    v.phase = j.at("phase").get<LolPlayerBehaviorGameflowPhase_t>();
  }
  inline std::string to_string(const LolPlayerBehaviorPlayerBehavior_GameflowSessionResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
