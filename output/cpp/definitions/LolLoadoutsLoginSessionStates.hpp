#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLoadoutsLoginSessionStates_t {
    IN_PROGRESS_E = 0,
    ERROR_E = 3,
    SUCCEEDED_E = 1,
    LOGGING_OUT_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsLoginSessionStates_t& v) {
    switch(v) {
      case LolLoadoutsLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolLoadoutsLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
      case LolLoadoutsLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolLoadoutsLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "IN_PROGRESS"){
      v = LolLoadoutsLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
    if(s == "ERROR"){
      v = LolLoadoutsLoginSessionStates_t::ERROR_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolLoadoutsLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolLoadoutsLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
  }
  inline std::string to_string(const LolLoadoutsLoginSessionStates_t& v) {
    switch(v) {
      case LolLoadoutsLoginSessionStates_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
      case LolLoadoutsLoginSessionStates_t::ERROR_E:
        return "ERROR";
      case LolLoadoutsLoginSessionStates_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolLoadoutsLoginSessionStates_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
    }
  }

}
