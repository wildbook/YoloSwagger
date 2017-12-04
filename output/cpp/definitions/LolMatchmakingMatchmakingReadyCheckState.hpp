#ifndef SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckState_HPP
#define SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolMatchmakingMatchmakingReadyCheckState {
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

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingReadyCheckState& v) {
    switch(v) {
      case LolMatchmakingMatchmakingReadyCheckState::PartyNotReady:
        j = "PartyNotReady";
      break;
      case LolMatchmakingMatchmakingReadyCheckState::StrangerNotReady:
        j = "StrangerNotReady";
      break;
      case LolMatchmakingMatchmakingReadyCheckState::EveryoneReady:
        j = "EveryoneReady";
      break;
      case LolMatchmakingMatchmakingReadyCheckState::Invalid:
        j = "Invalid";
      break;
      case LolMatchmakingMatchmakingReadyCheckState::Error:
        j = "Error";
      break;
      case LolMatchmakingMatchmakingReadyCheckState::InProgress:
        j = "InProgress";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingReadyCheckState& v) {
    const auto& s = j.get<std::string>();
    if(s == "PartyNotReady"){
      v = LolMatchmakingMatchmakingReadyCheckState::PartyNotReady;
      return;
    }
    if(s == "StrangerNotReady"){
      v = LolMatchmakingMatchmakingReadyCheckState::StrangerNotReady;
      return;
    }
    if(s == "EveryoneReady"){
      v = LolMatchmakingMatchmakingReadyCheckState::EveryoneReady;
      return;
    }
    if(s == "Invalid"){
      v = LolMatchmakingMatchmakingReadyCheckState::Invalid;
      return;
    }
    if(s == "Error"){
      v = LolMatchmakingMatchmakingReadyCheckState::Error;
      return;
    }
    if(s == "InProgress"){
      v = LolMatchmakingMatchmakingReadyCheckState::InProgress;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckState_HPP
