#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LoginSessionStates_t {
    SUCCEEDED_E = 1,
    LOGGING_OUT_E = 2,
    ERROR_E = 3,
    IN_PROGRESS_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LoginSessionStates_t& v) {
    switch(v) {
      case LoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
      case LoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "SUCCEEDED"){
      v = LoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "ERROR"){
      v = LoginSessionStates_t::ERROR_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
  }
  inline std::string to_string(const LoginSessionStates_t& v) {
    switch(v) {
      case LoginSessionStates_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LoginSessionStates_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
      case LoginSessionStates_t::ERROR_E:
        return "ERROR";
      case LoginSessionStates_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
    }
  }

}
