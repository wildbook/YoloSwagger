#ifndef SWAGGER_TYPES_LolGameflowGameflowGameDodgeState_HPP
#define SWAGGER_TYPES_LolGameflowGameflowGameDodgeState_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolGameflowGameflowGameDodgeState {
'    // 
    Invalid = 48,
    // 
    PartyDodged = 49,
    // 
    StrangerDodged = 50,
    // 
    TournamentDodged = 51,
  };

  void to_json(nlohmann::json& j, const LolGameflowGameflowGameDodgeState& v) {
    switch(v) {
      case LolGameflowGameflowGameDodgeState::Invalid:
        j = "Invalid";
      break;
      case LolGameflowGameflowGameDodgeState::PartyDodged:
        j = "PartyDodged";
      break;
      case LolGameflowGameflowGameDodgeState::StrangerDodged:
        j = "StrangerDodged";
      break;
      case LolGameflowGameflowGameDodgeState::TournamentDodged:
        j = "TournamentDodged";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolGameflowGameflowGameDodgeState& v) {
    const auto s& = j.get<std::string>();
    if(s == "Invalid"){
      v = LolGameflowGameflowGameDodgeState::Invalid;
      return;
    }
    if(s == "PartyDodged"){
      v = LolGameflowGameflowGameDodgeState::PartyDodged;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolGameflowGameflowGameDodgeState::StrangerDodged;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolGameflowGameflowGameDodgeState::TournamentDodged;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolGameflowGameflowGameDodgeState_HPP
