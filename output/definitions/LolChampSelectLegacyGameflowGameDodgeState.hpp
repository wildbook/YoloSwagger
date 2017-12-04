#ifndef SWAGGER_TYPES_LolChampSelectLegacyGameflowGameDodgeState_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyGameflowGameDodgeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChampSelectLegacyGameflowGameDodgeState {
    // 
    Invalid = 48,
    // 
    PartyDodged = 49,
    // 
    StrangerDodged = 50,
    // 
    TournamentDodged = 51,
  };

  void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowGameDodgeState& v) {
    switch(v) {
      case LolChampSelectLegacyGameflowGameDodgeState::Invalid:
        j = "Invalid";
      break;
      case LolChampSelectLegacyGameflowGameDodgeState::PartyDodged:
        j = "PartyDodged";
      break;
      case LolChampSelectLegacyGameflowGameDodgeState::StrangerDodged:
        j = "StrangerDodged";
      break;
      case LolChampSelectLegacyGameflowGameDodgeState::TournamentDodged:
        j = "TournamentDodged";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowGameDodgeState& v) {
    const auto s& = j.get<std::string>();
    if(s == "Invalid"){
      v = LolChampSelectLegacyGameflowGameDodgeState::Invalid;
      return;
    }
    if(s == "PartyDodged"){
      v = LolChampSelectLegacyGameflowGameDodgeState::PartyDodged;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolChampSelectLegacyGameflowGameDodgeState::StrangerDodged;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolChampSelectLegacyGameflowGameDodgeState::TournamentDodged;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyGameflowGameDodgeState_HPP
