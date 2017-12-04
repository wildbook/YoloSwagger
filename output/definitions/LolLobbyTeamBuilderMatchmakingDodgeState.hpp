#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingDodgeState_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingDodgeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyTeamBuilderMatchmakingDodgeState {
    // 
    Invalid = 48,
    // 
    PartyDodged = 49,
    // 
    StrangerDodged = 50,
    // 
    TournamentDodged = 51,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingDodgeState& v) {
    switch(v) {
      case LolLobbyTeamBuilderMatchmakingDodgeState::Invalid:
        j = "Invalid";
      break;
      case LolLobbyTeamBuilderMatchmakingDodgeState::PartyDodged:
        j = "PartyDodged";
      break;
      case LolLobbyTeamBuilderMatchmakingDodgeState::StrangerDodged:
        j = "StrangerDodged";
      break;
      case LolLobbyTeamBuilderMatchmakingDodgeState::TournamentDodged:
        j = "TournamentDodged";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingDodgeState& v) {
    const auto s& = j.get<std::string>();
    if(s == "Invalid"){
      v = LolLobbyTeamBuilderMatchmakingDodgeState::Invalid;
      return;
    }
    if(s == "PartyDodged"){
      v = LolLobbyTeamBuilderMatchmakingDodgeState::PartyDodged;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolLobbyTeamBuilderMatchmakingDodgeState::StrangerDodged;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolLobbyTeamBuilderMatchmakingDodgeState::TournamentDodged;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingDodgeState_HPP
