#ifndef SWAGGER_TYPES_LolPftGameflowGameDodgeState_HPP
#define SWAGGER_TYPES_LolPftGameflowGameDodgeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPftGameflowGameDodgeState {
    // 
    PartyDodged = 49,
    // 
    TournamentDodged = 51,
    // 
    Invalid = 48,
    // 
    StrangerDodged = 50,
  };

  inline void to_json(nlohmann::json& j, const LolPftGameflowGameDodgeState& v) {
    switch(v) {
      case LolPftGameflowGameDodgeState::PartyDodged:
        j = "PartyDodged";
      break;
      case LolPftGameflowGameDodgeState::TournamentDodged:
        j = "TournamentDodged";
      break;
      case LolPftGameflowGameDodgeState::Invalid:
        j = "Invalid";
      break;
      case LolPftGameflowGameDodgeState::StrangerDodged:
        j = "StrangerDodged";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPftGameflowGameDodgeState& v) {
    const auto& s = j.get<std::string>();
    if(s == "PartyDodged"){
      v = LolPftGameflowGameDodgeState::PartyDodged;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolPftGameflowGameDodgeState::TournamentDodged;
      return;
    }
    if(s == "Invalid"){
      v = LolPftGameflowGameDodgeState::Invalid;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolPftGameflowGameDodgeState::StrangerDodged;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPftGameflowGameDodgeState_HPP
