#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolMatchmakingMatchmakingDodgeState_t {
    PartyDodged_E = 49,
    TournamentDodged_E = 51,
    Invalid_E = 48,
    StrangerDodged_E = 50,
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingDodgeState_t& v) {
    switch(v) {
      case LolMatchmakingMatchmakingDodgeState_t::PartyDodged_E:
        j = "PartyDodged";
      break;
      case LolMatchmakingMatchmakingDodgeState_t::TournamentDodged_E:
        j = "TournamentDodged";
      break;
      case LolMatchmakingMatchmakingDodgeState_t::Invalid_E:
        j = "Invalid";
      break;
      case LolMatchmakingMatchmakingDodgeState_t::StrangerDodged_E:
        j = "StrangerDodged";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingDodgeState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "PartyDodged"){
      v = LolMatchmakingMatchmakingDodgeState_t::PartyDodged_E;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolMatchmakingMatchmakingDodgeState_t::TournamentDodged_E;
      return;
    }
    if(s == "Invalid"){
      v = LolMatchmakingMatchmakingDodgeState_t::Invalid_E;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolMatchmakingMatchmakingDodgeState_t::StrangerDodged_E;
      return;
    }
  }
  inline std::string to_string(const LolMatchmakingMatchmakingDodgeState_t& v) {
    switch(v) {
      case LolMatchmakingMatchmakingDodgeState_t::PartyDodged_E:
        return "PartyDodged";
      case LolMatchmakingMatchmakingDodgeState_t::TournamentDodged_E:
        return "TournamentDodged";
      case LolMatchmakingMatchmakingDodgeState_t::Invalid_E:
        return "Invalid";
      case LolMatchmakingMatchmakingDodgeState_t::StrangerDodged_E:
        return "StrangerDodged";
    }
  }

}
