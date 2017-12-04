#ifndef SWAGGER_TYPES_LolPftGameflowGameDodgeState_HPP
#define SWAGGER_TYPES_LolPftGameflowGameDodgeState_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolPftGameflowGameDodgeState {
'    // 
    Invalid = 48,
    // 
    PartyDodged = 49,
    // 
    StrangerDodged = 50,
    // 
    TournamentDodged = 51,
  };

  void to_json(nlohmann::json& j, const LolPftGameflowGameDodgeState& v) {
    switch(v) {
      case LolPftGameflowGameDodgeState::Invalid:
        j = "Invalid";
      break;
      case LolPftGameflowGameDodgeState::PartyDodged:
        j = "PartyDodged";
      break;
      case LolPftGameflowGameDodgeState::StrangerDodged:
        j = "StrangerDodged";
      break;
      case LolPftGameflowGameDodgeState::TournamentDodged:
        j = "TournamentDodged";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolPftGameflowGameDodgeState& v) {
    const auto s& = j.get<std::string>();
    if(s == "Invalid"){
      v = LolPftGameflowGameDodgeState::Invalid;
      return;
    }
    if(s == "PartyDodged"){
      v = LolPftGameflowGameDodgeState::PartyDodged;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolPftGameflowGameDodgeState::StrangerDodged;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolPftGameflowGameDodgeState::TournamentDodged;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPftGameflowGameDodgeState_HPP
