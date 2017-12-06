#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolGameflowGameflowGameDodgeState_t {
    TournamentDodged_E = 51,
    Invalid_E = 48,
    PartyDodged_E = 49,
    StrangerDodged_E = 50,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowGameflowGameDodgeState_t& v) {
    switch(v) {
      case LolGameflowGameflowGameDodgeState_t::TournamentDodged_E:
        j = "TournamentDodged";
      break;
      case LolGameflowGameflowGameDodgeState_t::Invalid_E:
        j = "Invalid";
      break;
      case LolGameflowGameflowGameDodgeState_t::PartyDodged_E:
        j = "PartyDodged";
      break;
      case LolGameflowGameflowGameDodgeState_t::StrangerDodged_E:
        j = "StrangerDodged";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowGameflowGameDodgeState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "TournamentDodged"){
      v = LolGameflowGameflowGameDodgeState_t::TournamentDodged_E;
      return;
    }
    if(s == "Invalid"){
      v = LolGameflowGameflowGameDodgeState_t::Invalid_E;
      return;
    }
    if(s == "PartyDodged"){
      v = LolGameflowGameflowGameDodgeState_t::PartyDodged_E;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolGameflowGameflowGameDodgeState_t::StrangerDodged_E;
      return;
    }
  }
}
