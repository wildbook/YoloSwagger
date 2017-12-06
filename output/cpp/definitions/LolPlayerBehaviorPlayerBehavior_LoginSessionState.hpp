#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolPlayerBehaviorPlayerBehavior_LoginSessionState_t {
    LOGGING_OUT_E = 2,
    SUCCEEDED_E = 1,
    IN_PROGRESS_E = 0,
    ERROR_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorPlayerBehavior_LoginSessionState_t& v) {
    switch(v) {
      case LolPlayerBehaviorPlayerBehavior_LoginSessionState_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolPlayerBehaviorPlayerBehavior_LoginSessionState_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolPlayerBehaviorPlayerBehavior_LoginSessionState_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolPlayerBehaviorPlayerBehavior_LoginSessionState_t::ERROR_E:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorPlayerBehavior_LoginSessionState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolPlayerBehaviorPlayerBehavior_LoginSessionState_t::LOGGING_OUT_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolPlayerBehaviorPlayerBehavior_LoginSessionState_t::SUCCEEDED_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolPlayerBehaviorPlayerBehavior_LoginSessionState_t::IN_PROGRESS_E;
      return;
    }
    if(s == "ERROR"){
      v = LolPlayerBehaviorPlayerBehavior_LoginSessionState_t::ERROR_E;
      return;
    }
  }
}
