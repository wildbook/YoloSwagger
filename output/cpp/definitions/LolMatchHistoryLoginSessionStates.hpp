#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolMatchHistoryLoginSessionStates_t {
    IN_PROGRESS_E = 0,
    LOGGING_OUT_E = 2,
    SUCCEEDED_E = 1,
    ERROR_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryLoginSessionStates_t& v) {
    switch(v) {
      case LolMatchHistoryLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolMatchHistoryLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolMatchHistoryLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolMatchHistoryLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "IN_PROGRESS"){
      v = LolMatchHistoryLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolMatchHistoryLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolMatchHistoryLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "ERROR"){
      v = LolMatchHistoryLoginSessionStates_t::ERROR_E;
      return;
    }
  }
  inline std::string to_string(const LolMatchHistoryLoginSessionStates_t& v) {
    switch(v) {
      case LolMatchHistoryLoginSessionStates_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
      case LolMatchHistoryLoginSessionStates_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
      case LolMatchHistoryLoginSessionStates_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolMatchHistoryLoginSessionStates_t::ERROR_E:
        return "ERROR";
    }
  }

}
