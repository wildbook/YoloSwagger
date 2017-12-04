#ifndef SWAGGER_TYPES_LolMatchmakingMatchmakingDodgeState_HPP
#define SWAGGER_TYPES_LolMatchmakingMatchmakingDodgeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolMatchmakingMatchmakingDodgeState {
    // 
    PartyDodged = 49,
    // 
    TournamentDodged = 51,
    // 
    Invalid = 48,
    // 
    StrangerDodged = 50,
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingDodgeState& v) {
    switch(v) {
      case LolMatchmakingMatchmakingDodgeState::PartyDodged:
        j = "PartyDodged";
      break;
      case LolMatchmakingMatchmakingDodgeState::TournamentDodged:
        j = "TournamentDodged";
      break;
      case LolMatchmakingMatchmakingDodgeState::Invalid:
        j = "Invalid";
      break;
      case LolMatchmakingMatchmakingDodgeState::StrangerDodged:
        j = "StrangerDodged";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingDodgeState& v) {
    const auto& s = j.get<std::string>();
    if(s == "PartyDodged"){
      v = LolMatchmakingMatchmakingDodgeState::PartyDodged;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolMatchmakingMatchmakingDodgeState::TournamentDodged;
      return;
    }
    if(s == "Invalid"){
      v = LolMatchmakingMatchmakingDodgeState::Invalid;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolMatchmakingMatchmakingDodgeState::StrangerDodged;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingMatchmakingDodgeState_HPP
