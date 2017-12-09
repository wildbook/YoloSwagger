#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashMatchmakingDodgeState_t {
    Invalid_E = 48,
    PartyDodged_E = 49,
    StrangerDodged_E = 50,
    TournamentDodged_E = 51,
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingDodgeState_t& v) {
    switch(v) {
      case LolClashMatchmakingDodgeState_t::Invalid_E:
        j = "Invalid";
      break;
      case LolClashMatchmakingDodgeState_t::PartyDodged_E:
        j = "PartyDodged";
      break;
      case LolClashMatchmakingDodgeState_t::StrangerDodged_E:
        j = "StrangerDodged";
      break;
      case LolClashMatchmakingDodgeState_t::TournamentDodged_E:
        j = "TournamentDodged";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingDodgeState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Invalid"){
      v = LolClashMatchmakingDodgeState_t::Invalid_E;
      return;
    }
    if(s == "PartyDodged"){
      v = LolClashMatchmakingDodgeState_t::PartyDodged_E;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolClashMatchmakingDodgeState_t::StrangerDodged_E;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolClashMatchmakingDodgeState_t::TournamentDodged_E;
      return;
    }
  }
  inline std::string to_string(const LolClashMatchmakingDodgeState_t& v) {
    switch(v) {
      case LolClashMatchmakingDodgeState_t::Invalid_E:
        return "Invalid";
      case LolClashMatchmakingDodgeState_t::PartyDodged_E:
        return "PartyDodged";
      case LolClashMatchmakingDodgeState_t::StrangerDodged_E:
        return "StrangerDodged";
      case LolClashMatchmakingDodgeState_t::TournamentDodged_E:
        return "TournamentDodged";
    }
  }

}
