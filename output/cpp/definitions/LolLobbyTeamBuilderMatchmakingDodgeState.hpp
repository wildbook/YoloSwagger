#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingDodgeState_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingDodgeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyTeamBuilderMatchmakingDodgeState {
    // 
    PartyDodged = 49,
    // 
    TournamentDodged = 51,
    // 
    Invalid = 48,
    // 
    StrangerDodged = 50,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingDodgeState& v) {
    switch(v) {
      case LolLobbyTeamBuilderMatchmakingDodgeState::PartyDodged:
        j = "PartyDodged";
      break;
      case LolLobbyTeamBuilderMatchmakingDodgeState::TournamentDodged:
        j = "TournamentDodged";
      break;
      case LolLobbyTeamBuilderMatchmakingDodgeState::Invalid:
        j = "Invalid";
      break;
      case LolLobbyTeamBuilderMatchmakingDodgeState::StrangerDodged:
        j = "StrangerDodged";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingDodgeState& v) {
    const auto& s = j.get<std::string>();
    if(s == "PartyDodged"){
      v = LolLobbyTeamBuilderMatchmakingDodgeState::PartyDodged;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolLobbyTeamBuilderMatchmakingDodgeState::TournamentDodged;
      return;
    }
    if(s == "Invalid"){
      v = LolLobbyTeamBuilderMatchmakingDodgeState::Invalid;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolLobbyTeamBuilderMatchmakingDodgeState::StrangerDodged;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingDodgeState_HPP
