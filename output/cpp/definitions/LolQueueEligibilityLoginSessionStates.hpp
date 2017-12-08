#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolQueueEligibilityLoginSessionStates_t {
    LOGGING_OUT_E = 2,
    IN_PROGRESS_E = 0,
    SUCCEEDED_E = 1,
    ERROR_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolQueueEligibilityLoginSessionStates_t& v) {
    switch(v) {
      case LolQueueEligibilityLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolQueueEligibilityLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolQueueEligibilityLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolQueueEligibilityLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolQueueEligibilityLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolQueueEligibilityLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolQueueEligibilityLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolQueueEligibilityLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "ERROR"){
      v = LolQueueEligibilityLoginSessionStates_t::ERROR_E;
      return;
    }
  }
  inline std::string to_string(const LolQueueEligibilityLoginSessionStates_t& v) {
    switch(v) {
      case LolQueueEligibilityLoginSessionStates_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
      case LolQueueEligibilityLoginSessionStates_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
      case LolQueueEligibilityLoginSessionStates_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolQueueEligibilityLoginSessionStates_t::ERROR_E:
        return "ERROR";
    }
  }

}
