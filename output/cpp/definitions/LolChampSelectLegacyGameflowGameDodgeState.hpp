#ifndef SWAGGER_TYPES_LolChampSelectLegacyGameflowGameDodgeState_HPP
#define SWAGGER_TYPES_LolChampSelectLegacyGameflowGameDodgeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChampSelectLegacyGameflowGameDodgeState {
    // 
    PartyDodged = 49,
    // 
    TournamentDodged = 51,
    // 
    Invalid = 48,
    // 
    StrangerDodged = 50,
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowGameDodgeState& v) {
    switch(v) {
      case LolChampSelectLegacyGameflowGameDodgeState::PartyDodged:
        j = "PartyDodged";
      break;
      case LolChampSelectLegacyGameflowGameDodgeState::TournamentDodged:
        j = "TournamentDodged";
      break;
      case LolChampSelectLegacyGameflowGameDodgeState::Invalid:
        j = "Invalid";
      break;
      case LolChampSelectLegacyGameflowGameDodgeState::StrangerDodged:
        j = "StrangerDodged";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowGameDodgeState& v) {
    const auto& s = j.get<std::string>();
    if(s == "PartyDodged"){
      v = LolChampSelectLegacyGameflowGameDodgeState::PartyDodged;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolChampSelectLegacyGameflowGameDodgeState::TournamentDodged;
      return;
    }
    if(s == "Invalid"){
      v = LolChampSelectLegacyGameflowGameDodgeState::Invalid;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolChampSelectLegacyGameflowGameDodgeState::StrangerDodged;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChampSelectLegacyGameflowGameDodgeState_HPP
