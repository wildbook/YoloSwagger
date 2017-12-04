#ifndef SWAGGER_TYPES_LolClashMatchmakingDodgeState_HPP
#define SWAGGER_TYPES_LolClashMatchmakingDodgeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashMatchmakingDodgeState {
    // 
    Invalid = 48,
    // 
    PartyDodged = 49,
    // 
    StrangerDodged = 50,
    // 
    TournamentDodged = 51,
  };

  void to_json(nlohmann::json& j, const LolClashMatchmakingDodgeState& v) {
    switch(v) {
      case LolClashMatchmakingDodgeState::Invalid:
        j = "Invalid";
      break;
      case LolClashMatchmakingDodgeState::PartyDodged:
        j = "PartyDodged";
      break;
      case LolClashMatchmakingDodgeState::StrangerDodged:
        j = "StrangerDodged";
      break;
      case LolClashMatchmakingDodgeState::TournamentDodged:
        j = "TournamentDodged";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolClashMatchmakingDodgeState& v) {
    const auto s& = j.get<std::string>();
    if(s == "Invalid"){
      v = LolClashMatchmakingDodgeState::Invalid;
      return;
    }
    if(s == "PartyDodged"){
      v = LolClashMatchmakingDodgeState::PartyDodged;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolClashMatchmakingDodgeState::StrangerDodged;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolClashMatchmakingDodgeState::TournamentDodged;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashMatchmakingDodgeState_HPP
