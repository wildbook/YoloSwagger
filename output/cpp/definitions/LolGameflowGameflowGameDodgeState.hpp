#ifndef SWAGGER_TYPES_LolGameflowGameflowGameDodgeState_HPP
#define SWAGGER_TYPES_LolGameflowGameflowGameDodgeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolGameflowGameflowGameDodgeState {
    // 
    PartyDodged = 49,
    // 
    TournamentDodged = 51,
    // 
    Invalid = 48,
    // 
    StrangerDodged = 50,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameDodgeState& v) {
    switch(v) {
      case LolGameflowGameflowGameDodgeState::PartyDodged:
        j = "PartyDodged";
      break;
      case LolGameflowGameflowGameDodgeState::TournamentDodged:
        j = "TournamentDodged";
      break;
      case LolGameflowGameflowGameDodgeState::Invalid:
        j = "Invalid";
      break;
      case LolGameflowGameflowGameDodgeState::StrangerDodged:
        j = "StrangerDodged";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameDodgeState& v) {
    const auto& s = j.get<std::string>();
    if(s == "PartyDodged"){
      v = LolGameflowGameflowGameDodgeState::PartyDodged;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolGameflowGameflowGameDodgeState::TournamentDodged;
      return;
    }
    if(s == "Invalid"){
      v = LolGameflowGameflowGameDodgeState::Invalid;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolGameflowGameflowGameDodgeState::StrangerDodged;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowGameDodgeState_HPP
