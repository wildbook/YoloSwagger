#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolPftGameflowGameDodgeState_t {
    TournamentDodged_E = 51,
    Invalid_E = 48,
    PartyDodged_E = 49,
    StrangerDodged_E = 50,
  };

  inline void to_json(nlohmann::json& j, const LolPftGameflowGameDodgeState_t& v) {
    switch(v) {
      case LolPftGameflowGameDodgeState_t::TournamentDodged_E:
        j = "TournamentDodged";
      break;
      case LolPftGameflowGameDodgeState_t::Invalid_E:
        j = "Invalid";
      break;
      case LolPftGameflowGameDodgeState_t::PartyDodged_E:
        j = "PartyDodged";
      break;
      case LolPftGameflowGameDodgeState_t::StrangerDodged_E:
        j = "StrangerDodged";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPftGameflowGameDodgeState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "TournamentDodged"){
      v = LolPftGameflowGameDodgeState_t::TournamentDodged_E;
      return;
    }
    if(s == "Invalid"){
      v = LolPftGameflowGameDodgeState_t::Invalid_E;
      return;
    }
    if(s == "PartyDodged"){
      v = LolPftGameflowGameDodgeState_t::PartyDodged_E;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolPftGameflowGameDodgeState_t::StrangerDodged_E;
      return;
    }
  }
}
