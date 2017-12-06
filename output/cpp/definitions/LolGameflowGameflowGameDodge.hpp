#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowGameflowPhase.hpp"
#include "LolGameflowGameflowGameDodgeState.hpp"
namespace leagueapi {
  struct LolGameflowGameflowGameDodge_t {
    LolGameflowGameflowGameDodgeState_t state;
    LolGameflowGameflowPhase_t phase;
    std::vector<uint64_t> dodgeIds;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameDodge_t& v) {
    j["state"] = v.state;
    j["phase"] = v.phase;
    j["dodgeIds"] = v.dodgeIds;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameDodge_t& v) {
    v.state = j.at("state").get<LolGameflowGameflowGameDodgeState_t>();
    v.phase = j.at("phase").get<LolGameflowGameflowPhase_t>();
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>();
  }
}
