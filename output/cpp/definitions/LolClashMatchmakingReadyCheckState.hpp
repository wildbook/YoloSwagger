#ifndef SWAGGER_TYPES_LolClashMatchmakingReadyCheckState_HPP
#define SWAGGER_TYPES_LolClashMatchmakingReadyCheckState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashMatchmakingReadyCheckState {
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

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingReadyCheckState& v) {
    switch(v) {
      case LolClashMatchmakingReadyCheckState::PartyNotReady:
        j = "PartyNotReady";
      break;
      case LolClashMatchmakingReadyCheckState::StrangerNotReady:
        j = "StrangerNotReady";
      break;
      case LolClashMatchmakingReadyCheckState::EveryoneReady:
        j = "EveryoneReady";
      break;
      case LolClashMatchmakingReadyCheckState::Invalid:
        j = "Invalid";
      break;
      case LolClashMatchmakingReadyCheckState::Error:
        j = "Error";
      break;
      case LolClashMatchmakingReadyCheckState::InProgress:
        j = "InProgress";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingReadyCheckState& v) {
    const auto& s = j.get<std::string>();
    if(s == "PartyNotReady"){
      v = LolClashMatchmakingReadyCheckState::PartyNotReady;
      return;
    }
    if(s == "StrangerNotReady"){
      v = LolClashMatchmakingReadyCheckState::StrangerNotReady;
      return;
    }
    if(s == "EveryoneReady"){
      v = LolClashMatchmakingReadyCheckState::EveryoneReady;
      return;
    }
    if(s == "Invalid"){
      v = LolClashMatchmakingReadyCheckState::Invalid;
      return;
    }
    if(s == "Error"){
      v = LolClashMatchmakingReadyCheckState::Error;
      return;
    }
    if(s == "InProgress"){
      v = LolClashMatchmakingReadyCheckState::InProgress;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashMatchmakingReadyCheckState_HPP
