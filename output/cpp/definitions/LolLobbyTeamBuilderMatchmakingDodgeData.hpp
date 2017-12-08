#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderMatchmakingDodgeState.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingDodgeData_t {
    LolLobbyTeamBuilderMatchmakingDodgeState_t state;
    uint64_t dodgerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingDodgeData_t& v) {
    j["state"] = v.state;
    j["dodgerId"] = v.dodgerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingDodgeData_t& v) {
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingDodgeState_t>();
    v.dodgerId = j.at("dodgerId").get<uint64_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderMatchmakingDodgeData_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
