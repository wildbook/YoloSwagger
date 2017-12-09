#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyMatchmakingDodgeState_t {
    Invalid_E = 48,
    PartyDodged_E = 49,
    StrangerDodged_E = 50,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyMatchmakingDodgeState_t& v) {
    switch(v) {
      case LolLobbyMatchmakingDodgeState_t::Invalid_E:
        j = "Invalid";
      break;
      case LolLobbyMatchmakingDodgeState_t::PartyDodged_E:
        j = "PartyDodged";
      break;
      case LolLobbyMatchmakingDodgeState_t::StrangerDodged_E:
        j = "StrangerDodged";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyMatchmakingDodgeState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Invalid"){
      v = LolLobbyMatchmakingDodgeState_t::Invalid_E;
      return;
    }
    if(s == "PartyDodged"){
      v = LolLobbyMatchmakingDodgeState_t::PartyDodged_E;
      return;
    }
    if(s == "StrangerDodged"){
      v = LolLobbyMatchmakingDodgeState_t::StrangerDodged_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyMatchmakingDodgeState_t& v) {
    switch(v) {
      case LolLobbyMatchmakingDodgeState_t::Invalid_E:
        return "Invalid";
      case LolLobbyMatchmakingDodgeState_t::PartyDodged_E:
        return "PartyDodged";
      case LolLobbyMatchmakingDodgeState_t::StrangerDodged_E:
        return "StrangerDodged";
    }
  }

}
