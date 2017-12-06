#pragma once
#include <json.hpp>
#include <optional>
#include "LolHonorV2GameflowPhase.hpp"
namespace leagueapi {
  struct LolHonorV2GameflowSession_t {
    LolHonorV2GameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2GameflowSession_t& v) {
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2GameflowSession_t& v) {
    v.phase = j.at("phase").get<LolHonorV2GameflowPhase_t>();
  }
}
