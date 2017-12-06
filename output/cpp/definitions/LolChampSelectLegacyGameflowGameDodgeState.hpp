#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChampSelectLegacyGameflowGameDodgeState_t {
    Invalid_E = 48,
    PartyDodged_E = 49,
    StrangerDodged_E = 50,
    TournamentDodged_E = 51,
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyGameflowGameDodgeState_t& v) {
    switch(v) {
      case LolChampSelectLegacyGameflowGameDodgeState_t::Invalid_E:
        j = "Invalid";
      break;
      case LolChampSelectLegacyGameflowGameDodgeState_t::PartyDodged_E:
        j = "PartyDodged";
      break;
      case LolChampSelectLegacyGameflowGameDodgeState_t::StrangerDodged_E:
        j = "StrangerDodged";
      break;
      case LolChampSelectLegacyGameflowGameDodgeState_t::TournamentDodged_E:
        j = "TournamentDodged";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyGameflowGameDodgeState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Invalid"){
      v = LolChampSelectLegacyGameflowGameDodgeState_t::Invalid_E;
      return;
    }
    if(s == "PartyDodged"){
      v = LolChampSelectLegacyGameflowGameDodgeState_t::PartyDodged_E;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolChampSelectLegacyGameflowGameDodgeState_t::StrangerDodged_E;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolChampSelectLegacyGameflowGameDodgeState_t::TournamentDodged_E;
      return;
    }
  }
}
