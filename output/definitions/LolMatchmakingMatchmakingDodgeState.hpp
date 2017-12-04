#ifndef SWAGGER_TYPES_LolMatchmakingMatchmakingDodgeState_HPP
#define SWAGGER_TYPES_LolMatchmakingMatchmakingDodgeState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolMatchmakingMatchmakingDodgeState {
    // 
    Invalid = 48,
    // 
    PartyDodged = 49,
    // 
    StrangerDodged = 50,
    // 
    TournamentDodged = 51,
  };

  void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingDodgeState& v) {
    switch(v) {
      case LolMatchmakingMatchmakingDodgeState::Invalid:
        j = "Invalid";
      break;
      case LolMatchmakingMatchmakingDodgeState::PartyDodged:
        j = "PartyDodged";
      break;
      case LolMatchmakingMatchmakingDodgeState::StrangerDodged:
        j = "StrangerDodged";
      break;
      case LolMatchmakingMatchmakingDodgeState::TournamentDodged:
        j = "TournamentDodged";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingDodgeState& v) {
    const auto s& = j.get<std::string>();
    if(s == "Invalid"){
      v = LolMatchmakingMatchmakingDodgeState::Invalid;
      return;
    }
    if(s == "PartyDodged"){
      v = LolMatchmakingMatchmakingDodgeState::PartyDodged;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolMatchmakingMatchmakingDodgeState::StrangerDodged;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolMatchmakingMatchmakingDodgeState::TournamentDodged;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingMatchmakingDodgeState_HPP
