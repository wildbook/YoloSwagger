#ifndef SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckState_HPP
#define SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckState_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolMatchmakingMatchmakingReadyCheckState {
'    // 
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

  void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingReadyCheckState& v) {
    switch(v) {
      case LolMatchmakingMatchmakingReadyCheckState::Error:
        j = "Error";
      break;
      case LolMatchmakingMatchmakingReadyCheckState::EveryoneReady:
        j = "EveryoneReady";
      break;
      case LolMatchmakingMatchmakingReadyCheckState::InProgress:
        j = "InProgress";
      break;
      case LolMatchmakingMatchmakingReadyCheckState::Invalid:
        j = "Invalid";
      break;
      case LolMatchmakingMatchmakingReadyCheckState::PartyNotReady:
        j = "PartyNotReady";
      break;
      case LolMatchmakingMatchmakingReadyCheckState::StrangerNotReady:
        j = "StrangerNotReady";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingReadyCheckState& v) {
    const auto s& = j.get<std::string>();
    if(s == "Error"){
      v = LolMatchmakingMatchmakingReadyCheckState::Error;
      return;
    }
    if(s == "EveryoneReady"){
      v = LolMatchmakingMatchmakingReadyCheckState::EveryoneReady;
      return;
    }
    if(s == "InProgress"){
      v = LolMatchmakingMatchmakingReadyCheckState::InProgress;
      return;
    }
    if(s == "Invalid"){
      v = LolMatchmakingMatchmakingReadyCheckState::Invalid;
      return;
    }
    if(s == "PartyNotReady"){
      v = LolMatchmakingMatchmakingReadyCheckState::PartyNotReady;
      return;
    }
    if(s == "StrangerNotReady"){
      v = LolMatchmakingMatchmakingReadyCheckState::StrangerNotReady;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingMatchmakingReadyCheckState_HPP
