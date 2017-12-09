#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLeaguesLoginSessionStates_t {
    ERROR_E = 3,
    LOGGING_OUT_E = 2,
    SUCCEEDED_E = 1,
    IN_PROGRESS_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesLoginSessionStates_t& v) {
    switch(v) {
      case LolLeaguesLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
      case LolLeaguesLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolLeaguesLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolLeaguesLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ERROR"){
      v = LolLeaguesLoginSessionStates_t::ERROR_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolLeaguesLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolLeaguesLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolLeaguesLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
  }
  inline std::string to_string(const LolLeaguesLoginSessionStates_t& v) {
    switch(v) {
      case LolLeaguesLoginSessionStates_t::ERROR_E:
        return "ERROR";
      case LolLeaguesLoginSessionStates_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
      case LolLeaguesLoginSessionStates_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolLeaguesLoginSessionStates_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
    }
  }

}
