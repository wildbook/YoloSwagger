#pragma once
#include <json.hpp>
#include <optional>
#include "LolPftGameflowGameDodgeState.hpp"
namespace leagueapi {
  struct LolPftGameflowGameDodge_t {
    std::vector<uint64_t> dodgeIds;
    LolPftGameflowGameDodgeState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolPftGameflowGameDodge_t& v) {
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolPftGameflowGameDodge_t& v) {
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>();
    v.state = j.at("state").get<LolPftGameflowGameDodgeState_t>();
  }
}
