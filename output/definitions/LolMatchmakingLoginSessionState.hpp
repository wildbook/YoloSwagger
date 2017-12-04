#ifndef SWAGGER_TYPES_LolMatchmakingLoginSessionState_HPP
#define SWAGGER_TYPES_LolMatchmakingLoginSessionState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolMatchmakingLoginSessionState {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingLoginSessionState& v) {
    switch(v) {
      case LolMatchmakingLoginSessionState::ERROR:
        j = "ERROR";
      break;
      case LolMatchmakingLoginSessionState::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolMatchmakingLoginSessionState::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolMatchmakingLoginSessionState::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingLoginSessionState& v) {
    const auto& s = j.get<std::string>();
    if(s == "ERROR"){
      v = LolMatchmakingLoginSessionState::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolMatchmakingLoginSessionState::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolMatchmakingLoginSessionState::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolMatchmakingLoginSessionState::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingLoginSessionState_HPP
