#ifndef SWAGGER_TYPES_LolClashMatchmakingDodgeState_HPP
#define SWAGGER_TYPES_LolClashMatchmakingDodgeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashMatchmakingDodgeState {
    // 
    PartyDodged = 49,
    // 
    TournamentDodged = 51,
    // 
    Invalid = 48,
    // 
    StrangerDodged = 50,
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingDodgeState& v) {
    switch(v) {
      case LolClashMatchmakingDodgeState::PartyDodged:
        j = "PartyDodged";
      break;
      case LolClashMatchmakingDodgeState::TournamentDodged:
        j = "TournamentDodged";
      break;
      case LolClashMatchmakingDodgeState::Invalid:
        j = "Invalid";
      break;
      case LolClashMatchmakingDodgeState::StrangerDodged:
        j = "StrangerDodged";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingDodgeState& v) {
    const auto& s = j.get<std::string>();
    if(s == "PartyDodged"){
      v = LolClashMatchmakingDodgeState::PartyDodged;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolClashMatchmakingDodgeState::TournamentDodged;
      return;
    }
    if(s == "Invalid"){
      v = LolClashMatchmakingDodgeState::Invalid;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolClashMatchmakingDodgeState::StrangerDodged;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashMatchmakingDodgeState_HPP
