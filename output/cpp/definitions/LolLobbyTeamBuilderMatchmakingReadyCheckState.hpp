#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingReadyCheckState_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingReadyCheckState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyTeamBuilderMatchmakingReadyCheckState {
    // 
    PartyNotReady = 4,
    // 
    StrangerNotReady = 3,
    // 
    EveryoneReady = 2,
    // 
    Invalid = 0,
    // 
    Error = 5,
    // 
    InProgress = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckState& v) {
    switch(v) {
      case LolLobbyTeamBuilderMatchmakingReadyCheckState::PartyNotReady:
        j = "PartyNotReady";
      break;
      case LolLobbyTeamBuilderMatchmakingReadyCheckState::StrangerNotReady:
        j = "StrangerNotReady";
      break;
      case LolLobbyTeamBuilderMatchmakingReadyCheckState::EveryoneReady:
        j = "EveryoneReady";
      break;
      case LolLobbyTeamBuilderMatchmakingReadyCheckState::Invalid:
        j = "Invalid";
      break;
      case LolLobbyTeamBuilderMatchmakingReadyCheckState::Error:
        j = "Error";
      break;
      case LolLobbyTeamBuilderMatchmakingReadyCheckState::InProgress:
        j = "InProgress";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingReadyCheckState& v) {
    const auto& s = j.get<std::string>();
    if(s == "PartyNotReady"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState::PartyNotReady;
      return;
    }
    if(s == "StrangerNotReady"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState::StrangerNotReady;
      return;
    }
    if(s == "EveryoneReady"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState::EveryoneReady;
      return;
    }
    if(s == "Invalid"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState::Invalid;
      return;
    }
    if(s == "Error"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState::Error;
      return;
    }
    if(s == "InProgress"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckState::InProgress;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingReadyCheckState_HPP
