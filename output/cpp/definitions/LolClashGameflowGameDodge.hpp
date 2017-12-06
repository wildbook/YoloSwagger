#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashMatchmakingDodgeState.hpp"
namespace leagueapi {
  struct LolClashGameflowGameDodge_t {
    LolClashMatchmakingDodgeState_t state;
    std::vector<uint64_t> dodgeIds;
  };

  inline void to_json(nlohmann::json& j, const LolClashGameflowGameDodge_t& v) {
    j["state"] = v.state;
    j["dodgeIds"] = v.dodgeIds;
  }

  inline void from_json(const nlohmann::json& j, LolClashGameflowGameDodge_t& v) {
    v.state = j.at("state").get<LolClashMatchmakingDodgeState_t>();
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>();
  }
}
