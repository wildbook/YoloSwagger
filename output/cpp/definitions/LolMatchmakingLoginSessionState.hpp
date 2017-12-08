#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolMatchmakingLoginSessionState_t {
    IN_PROGRESS_E = 0,
    ERROR_E = 3,
    SUCCEEDED_E = 1,
    LOGGING_OUT_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingLoginSessionState_t& v) {
    switch(v) {
      case LolMatchmakingLoginSessionState_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolMatchmakingLoginSessionState_t::ERROR_E:
        j = "ERROR";
      break;
      case LolMatchmakingLoginSessionState_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolMatchmakingLoginSessionState_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingLoginSessionState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "IN_PROGRESS"){
      v = LolMatchmakingLoginSessionState_t::IN_PROGRESS_E;
      return;
    }
    if(s == "ERROR"){
      v = LolMatchmakingLoginSessionState_t::ERROR_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolMatchmakingLoginSessionState_t::SUCCEEDED_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolMatchmakingLoginSessionState_t::LOGGING_OUT_E;
      return;
    }
  }
  inline std::string to_string(const LolMatchmakingLoginSessionState_t& v) {
    switch(v) {
      case LolMatchmakingLoginSessionState_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
      case LolMatchmakingLoginSessionState_t::ERROR_E:
        return "ERROR";
      case LolMatchmakingLoginSessionState_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolMatchmakingLoginSessionState_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
    }
  }

}
