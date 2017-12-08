#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class RecofrienderLoginSessionStates_t {
    IN_PROGRESS_E = 0,
    ERROR_E = 3,
    SUCCEEDED_E = 1,
    LOGGING_OUT_E = 2,
  };

  inline void to_json(nlohmann::json& j, const RecofrienderLoginSessionStates_t& v) {
    switch(v) {
      case RecofrienderLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case RecofrienderLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
      case RecofrienderLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case RecofrienderLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, RecofrienderLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "IN_PROGRESS"){
      v = RecofrienderLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
    if(s == "ERROR"){
      v = RecofrienderLoginSessionStates_t::ERROR_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = RecofrienderLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = RecofrienderLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
  }
  inline std::string to_string(const RecofrienderLoginSessionStates_t& v) {
    switch(v) {
      case RecofrienderLoginSessionStates_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
      case RecofrienderLoginSessionStates_t::ERROR_E:
        return "ERROR";
      case RecofrienderLoginSessionStates_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case RecofrienderLoginSessionStates_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
    }
  }

}
