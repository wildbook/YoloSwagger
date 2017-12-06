#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingMatchmakingDodgeState.hpp"
namespace leagueapi {
  struct LolMatchmakingGameflowGameDodge_t {
    LolMatchmakingMatchmakingDodgeState_t state;
    std::vector<uint64_t> dodgeIds;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingGameflowGameDodge_t& v) {
    j["state"] = v.state;
    j["dodgeIds"] = v.dodgeIds;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingGameflowGameDodge_t& v) {
    v.state = j.at("state").get<LolMatchmakingMatchmakingDodgeState_t>();
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>();
  }
}
