#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolGameQueuesLoginSessionStates_t {
    SUCCEEDED_E = 1,
    LOGGING_OUT_E = 2,
    ERROR_E = 3,
    IN_PROGRESS_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesLoginSessionStates_t& v) {
    switch(v) {
      case LolGameQueuesLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolGameQueuesLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolGameQueuesLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
      case LolGameQueuesLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "SUCCEEDED"){
      v = LolGameQueuesLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolGameQueuesLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "ERROR"){
      v = LolGameQueuesLoginSessionStates_t::ERROR_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolGameQueuesLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
  }
  inline std::string to_string(const LolGameQueuesLoginSessionStates_t& v) {
    switch(v) {
      case LolGameQueuesLoginSessionStates_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolGameQueuesLoginSessionStates_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
      case LolGameQueuesLoginSessionStates_t::ERROR_E:
        return "ERROR";
      case LolGameQueuesLoginSessionStates_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
    }
  }

}
