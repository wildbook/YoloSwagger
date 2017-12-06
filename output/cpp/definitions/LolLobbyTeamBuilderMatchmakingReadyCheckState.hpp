#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderMatchmakingReadyCheckState_t {
    Error_E = 5,
    EveryoneReady_E = 2,
    InProgress_E = 1,
    Invalid_E = 0,
    PartyNotReady_E = 4,
    StrangerNotReady_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckState_t& v) {
    switch(v) {
      case LolLobbyTeamBuilderMatchmakingReadyCheckState_t::Error_E:
        j = "Error";
      break;
      case LolLobbyTeamBuilderMatchmakingReadyCheckState_t::EveryoneReady_E:
        j = "EveryoneReady";
      break;
      case LolLobbyTeamBuilderMatchmakingReadyCheckState_t::InProgress_E:
        j = "InProgress";
      break;
      case LolLobbyTeamBuilderMatchmakingReadyCheckState_t::Invalid_E:
        j = "Invalid";
      break;
      case LolLobbyTeamBuilderMatchmakingReadyCheckState_t::PartyNotReady_E:
        j = "PartyNotReady";
      break;
      case LolLobbyTeamBuilderMatchmakingReadyCheckState_t::StrangerNotReady_E:
        j = "StrangerNotReady";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingReadyCheckState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Error"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState_t::Error_E;
      return;
    }
    if(s == "EveryoneReady"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState_t::EveryoneReady_E;
      return;
    }
    if(s == "InProgress"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState_t::InProgress_E;
      return;
    }
    if(s == "Invalid"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState_t::Invalid_E;
      return;
    }
    if(s == "PartyNotReady"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState_t::PartyNotReady_E;
      return;
    }
    if(s == "StrangerNotReady"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState_t::StrangerNotReady_E;
      return;
    }
  }
}
