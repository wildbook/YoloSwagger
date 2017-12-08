#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChatChatPlatformLoginSessionState_t {
    IN_PROGRESS_E = 0,
    ERROR_E = 3,
    SUCCEEDED_E = 1,
    LOGGING_OUT_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolChatChatPlatformLoginSessionState_t& v) {
    switch(v) {
      case LolChatChatPlatformLoginSessionState_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolChatChatPlatformLoginSessionState_t::ERROR_E:
        j = "ERROR";
      break;
      case LolChatChatPlatformLoginSessionState_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolChatChatPlatformLoginSessionState_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChatChatPlatformLoginSessionState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "IN_PROGRESS"){
      v = LolChatChatPlatformLoginSessionState_t::IN_PROGRESS_E;
      return;
    }
    if(s == "ERROR"){
      v = LolChatChatPlatformLoginSessionState_t::ERROR_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolChatChatPlatformLoginSessionState_t::SUCCEEDED_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolChatChatPlatformLoginSessionState_t::LOGGING_OUT_E;
      return;
    }
  }
  inline std::string to_string(const LolChatChatPlatformLoginSessionState_t& v) {
    switch(v) {
      case LolChatChatPlatformLoginSessionState_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
      case LolChatChatPlatformLoginSessionState_t::ERROR_E:
        return "ERROR";
      case LolChatChatPlatformLoginSessionState_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolChatChatPlatformLoginSessionState_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
    }
  }

}
