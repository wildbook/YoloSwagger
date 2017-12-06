#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChatChatPlatformLoginSessionState_t {
    LOGGING_OUT_E = 2,
    SUCCEEDED_E = 1,
    IN_PROGRESS_E = 0,
    ERROR_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolChatChatPlatformLoginSessionState_t& v) {
    switch(v) {
      case LolChatChatPlatformLoginSessionState_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolChatChatPlatformLoginSessionState_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolChatChatPlatformLoginSessionState_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolChatChatPlatformLoginSessionState_t::ERROR_E:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatChatPlatformLoginSessionState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolChatChatPlatformLoginSessionState_t::LOGGING_OUT_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolChatChatPlatformLoginSessionState_t::SUCCEEDED_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolChatChatPlatformLoginSessionState_t::IN_PROGRESS_E;
      return;
    }
    if(s == "ERROR"){
      v = LolChatChatPlatformLoginSessionState_t::ERROR_E;
      return;
    }
  }
}
