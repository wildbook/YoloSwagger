#ifndef SWAGGER_TYPES_LolLobbyMatchmakingDodgeState_HPP
#define SWAGGER_TYPES_LolLobbyMatchmakingDodgeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyMatchmakingDodgeState {
    // 
    Invalid = 48,
    // 
    PartyDodged = 49,
    // 
    StrangerDodged = 50,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyMatchmakingDodgeState& v) {
    switch(v) {
      case LolLobbyMatchmakingDodgeState::Invalid:
        j = "Invalid";
      break;
      case LolLobbyMatchmakingDodgeState::PartyDodged:
        j = "PartyDodged";
      break;
      case LolLobbyMatchmakingDodgeState::StrangerDodged:
        j = "StrangerDodged";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyMatchmakingDodgeState& v) {
    const auto s& = j.get<std::string>();
    if(s == "Invalid"){
      v = LolLobbyMatchmakingDodgeState::Invalid;
      return;
    }
    if(s == "PartyDodged"){
      v = LolLobbyMatchmakingDodgeState::PartyDodged;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolLobbyMatchmakingDodgeState::StrangerDodged;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyMatchmakingDodgeState_HPP
