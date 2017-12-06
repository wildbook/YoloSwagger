#pragma once
#include <json.hpp>
#include <optional>
#include "LolClashMatchmakingDodgeState.hpp"
namespace leagueapi {
  struct LolClashGameflowGameDodge_t {
    std::vector<uint64_t> dodgeIds;
    LolClashMatchmakingDodgeState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolClashGameflowGameDodge_t& v) {
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolClashGameflowGameDodge_t& v) {
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>();
    v.state = j.at("state").get<LolClashMatchmakingDodgeState_t>();
  }
}
