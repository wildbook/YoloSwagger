#ifndef SWAGGER_TYPES_LolChatChatPlatformLoginSessionState_HPP
#define SWAGGER_TYPES_LolChatChatPlatformLoginSessionState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChatChatPlatformLoginSessionState {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  inline void to_json(nlohmann::json& j, const LolChatChatPlatformLoginSessionState& v) {
    switch(v) {
      case LolChatChatPlatformLoginSessionState::ERROR:
        j = "ERROR";
      break;
      case LolChatChatPlatformLoginSessionState::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolChatChatPlatformLoginSessionState::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolChatChatPlatformLoginSessionState::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatChatPlatformLoginSessionState& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolChatChatPlatformLoginSessionState::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolChatChatPlatformLoginSessionState::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolChatChatPlatformLoginSessionState::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolChatChatPlatformLoginSessionState::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChatChatPlatformLoginSessionState_HPP
