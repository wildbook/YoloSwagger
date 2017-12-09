#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolPftGameflowGameDodgeState_t {
    PartyDodged_E = 49,
    StrangerDodged_E = 50,
    TournamentDodged_E = 51,
    Invalid_E = 48,
  };

  inline void to_json(nlohmann::json& j, const LolPftGameflowGameDodgeState_t& v) {
    switch(v) {
      case LolPftGameflowGameDodgeState_t::PartyDodged_E:
        j = "PartyDodged";
      break;
      case LolPftGameflowGameDodgeState_t::StrangerDodged_E:
        j = "StrangerDodged";
      break;
      case LolPftGameflowGameDodgeState_t::TournamentDodged_E:
        j = "TournamentDodged";
      break;
      case LolPftGameflowGameDodgeState_t::Invalid_E:
        j = "Invalid";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPftGameflowGameDodgeState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "PartyDodged"){
      v = LolPftGameflowGameDodgeState_t::PartyDodged_E;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolPftGameflowGameDodgeState_t::StrangerDodged_E;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolPftGameflowGameDodgeState_t::TournamentDodged_E;
      return;
    }
    if(s == "Invalid"){
      v = LolPftGameflowGameDodgeState_t::Invalid_E;
      return;
    }
  }
  inline std::string to_string(const LolPftGameflowGameDodgeState_t& v) {
    switch(v) {
      case LolPftGameflowGameDodgeState_t::PartyDodged_E:
        return "PartyDodged";
      case LolPftGameflowGameDodgeState_t::StrangerDodged_E:
        return "StrangerDodged";
      case LolPftGameflowGameDodgeState_t::TournamentDodged_E:
        return "TournamentDodged";
      case LolPftGameflowGameDodgeState_t::Invalid_E:
        return "Invalid";
    }
  }

}
