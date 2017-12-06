#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderMatchmakingDodgeState.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingDodgeData_t {
    uint64_t dodgerId;
    LolLobbyTeamBuilderMatchmakingDodgeState_t state;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingDodgeData_t& v) {
    j["dodgerId"] = v.dodgerId;
    j["state"] = v.state;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingDodgeData_t& v) {
    v.dodgerId = j.at("dodgerId").get<uint64_t>();
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingDodgeState_t>();
  }
}
