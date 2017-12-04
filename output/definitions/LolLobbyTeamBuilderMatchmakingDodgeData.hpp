#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingDodgeData_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingDodgeData_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderMatchmakingDodgeState.hpp"
namespace test {
  // 
  struct LolLobbyTeamBuilderMatchmakingDodgeData {
'    // 
    uint64_t dodgerId;
    // 
    LolLobbyTeamBuilderMatchmakingDodgeState state;
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingDodgeData& v) {
    j["dodgerId"] = v.dodgerId;
    j["state"] = v.state;
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingDodgeData& v) {
    v.dodgerId = j.at("dodgerId").get<uint64_t>;
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingDodgeState>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingDodgeData_HPP
