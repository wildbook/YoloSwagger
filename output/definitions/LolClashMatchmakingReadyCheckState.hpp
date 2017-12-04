#ifndef SWAGGER_TYPES_LolClashMatchmakingReadyCheckState_HPP
#define SWAGGER_TYPES_LolClashMatchmakingReadyCheckState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashMatchmakingReadyCheckState {
    // 
    Error = 5,
    // 
    EveryoneReady = 2,
    // 
    InProgress = 1,
    // 
    Invalid = 0,
    // 
    PartyNotReady = 4,
    // 
    StrangerNotReady = 3,
  };

  inline void to_json(nlohmann::json& j, const LolClashMatchmakingReadyCheckState& v) {
    switch(v) {
      case LolClashMatchmakingReadyCheckState::Error:
        j = "Error";
      break;
      case LolClashMatchmakingReadyCheckState::EveryoneReady:
        j = "EveryoneReady";
      break;
      case LolClashMatchmakingReadyCheckState::InProgress:
        j = "InProgress";
      break;
      case LolClashMatchmakingReadyCheckState::Invalid:
        j = "Invalid";
      break;
      case LolClashMatchmakingReadyCheckState::PartyNotReady:
        j = "PartyNotReady";
      break;
      case LolClashMatchmakingReadyCheckState::StrangerNotReady:
        j = "StrangerNotReady";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashMatchmakingReadyCheckState& v) {
    const auto s& = j.get<std::string>();
    if(s == "Error"){
      v = LolClashMatchmakingReadyCheckState::Error;
      return;
    }
    if(s == "EveryoneReady"){
      v = LolClashMatchmakingReadyCheckState::EveryoneReady;
      return;
    }
    if(s == "InProgress"){
      v = LolClashMatchmakingReadyCheckState::InProgress;
      return;
    }
    if(s == "Invalid"){
      v = LolClashMatchmakingReadyCheckState::Invalid;
      return;
    }
    if(s == "PartyNotReady"){
      v = LolClashMatchmakingReadyCheckState::PartyNotReady;
      return;
    }
    if(s == "StrangerNotReady"){
      v = LolClashMatchmakingReadyCheckState::StrangerNotReady;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashMatchmakingReadyCheckState_HPP
