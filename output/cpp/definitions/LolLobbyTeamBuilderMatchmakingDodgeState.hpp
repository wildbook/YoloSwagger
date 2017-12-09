#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderMatchmakingDodgeState_t {
    Invalid_E = 48,
    PartyDodged_E = 49,
    StrangerDodged_E = 50,
    TournamentDodged_E = 51,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingDodgeState_t& v) {
    switch(v) {
      case LolLobbyTeamBuilderMatchmakingDodgeState_t::Invalid_E:
        j = "Invalid";
      break;
      case LolLobbyTeamBuilderMatchmakingDodgeState_t::PartyDodged_E:
        j = "PartyDodged";
      break;
      case LolLobbyTeamBuilderMatchmakingDodgeState_t::StrangerDodged_E:
        j = "StrangerDodged";
      break;
      case LolLobbyTeamBuilderMatchmakingDodgeState_t::TournamentDodged_E:
        j = "TournamentDodged";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingDodgeState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Invalid"){
      v = LolLobbyTeamBuilderMatchmakingDodgeState_t::Invalid_E;
      return;
    }
    if(s == "PartyDodged"){
      v = LolLobbyTeamBuilderMatchmakingDodgeState_t::PartyDodged_E;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolLobbyTeamBuilderMatchmakingDodgeState_t::StrangerDodged_E;
      return;
    }
    if(s == "TournamentDodged"){
      v = LolLobbyTeamBuilderMatchmakingDodgeState_t::TournamentDodged_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyTeamBuilderMatchmakingDodgeState_t& v) {
    switch(v) {
      case LolLobbyTeamBuilderMatchmakingDodgeState_t::Invalid_E:
        return "Invalid";
      case LolLobbyTeamBuilderMatchmakingDodgeState_t::PartyDodged_E:
        return "PartyDodged";
      case LolLobbyTeamBuilderMatchmakingDodgeState_t::StrangerDodged_E:
        return "StrangerDodged";
      case LolLobbyTeamBuilderMatchmakingDodgeState_t::TournamentDodged_E:
        return "TournamentDodged";
    }
  }

}
