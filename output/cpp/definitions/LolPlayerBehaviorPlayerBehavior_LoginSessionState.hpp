#ifndef SWAGGER_TYPES_LolPlayerBehaviorPlayerBehavior_LoginSessionState_HPP
#define SWAGGER_TYPES_LolPlayerBehaviorPlayerBehavior_LoginSessionState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolPlayerBehaviorPlayerBehavior_LoginSessionState {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorPlayerBehavior_LoginSessionState& v) {
    switch(v) {
      case LolPlayerBehaviorPlayerBehavior_LoginSessionState::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolPlayerBehaviorPlayerBehavior_LoginSessionState::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolPlayerBehaviorPlayerBehavior_LoginSessionState::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolPlayerBehaviorPlayerBehavior_LoginSessionState::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorPlayerBehavior_LoginSessionState& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolPlayerBehaviorPlayerBehavior_LoginSessionState::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolPlayerBehaviorPlayerBehavior_LoginSessionState::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolPlayerBehaviorPlayerBehavior_LoginSessionState::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolPlayerBehaviorPlayerBehavior_LoginSessionState::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolPlayerBehaviorPlayerBehavior_LoginSessionState_HPP
