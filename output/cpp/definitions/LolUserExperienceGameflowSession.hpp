#pragma once
#include <json.hpp>
#include <optional>
#include "LolUserExperienceGameflowPhase.hpp"
namespace leagueapi {
  struct LolUserExperienceGameflowSession_t {
    LolUserExperienceGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolUserExperienceGameflowSession_t& v) {
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolUserExperienceGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolUserExperienceGameflowPhase_t>();
  }
}
