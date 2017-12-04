#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingDodgeData_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingDodgeData_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderMatchmakingDodgeState.hpp"
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderMatchmakingDodgeData {
    // 
    LolLobbyTeamBuilderMatchmakingDodgeState state;
    // 
    uint64_t dodgerId;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingDodgeData& v) {
    j["state"] = v.state;
    j["dodgerId"] = v.dodgerId;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingDodgeData& v) {
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingDodgeState>;
    v.dodgerId = j.at("dodgerId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingDodgeData_HPP
