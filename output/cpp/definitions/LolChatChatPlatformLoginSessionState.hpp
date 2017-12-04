#ifndef SWAGGER_TYPES_LolChatChatPlatformLoginSessionState_HPP
#define SWAGGER_TYPES_LolChatChatPlatformLoginSessionState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolChatChatPlatformLoginSessionState {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolChatChatPlatformLoginSessionState& v) {
    switch(v) {
      case LolChatChatPlatformLoginSessionState::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolChatChatPlatformLoginSessionState::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolChatChatPlatformLoginSessionState::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolChatChatPlatformLoginSessionState::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatChatPlatformLoginSessionState& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolChatChatPlatformLoginSessionState::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolChatChatPlatformLoginSessionState::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolChatChatPlatformLoginSessionState::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolChatChatPlatformLoginSessionState::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolChatChatPlatformLoginSessionState_HPP
