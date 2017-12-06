#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingMatchmakingDodgeState.hpp"
namespace leagueapi {
  struct LolMatchmakingGameflowGameDodge_t {
    std::vector<uint64_t> dodgeIds;
    LolMatchmakingMatchmakingDodgeState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingGameflowGameDodge_t& v) {
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingGameflowGameDodge_t& v) {
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>();
    v.state = j.at("state").get<LolMatchmakingMatchmakingDodgeState_t>();
  }
}
