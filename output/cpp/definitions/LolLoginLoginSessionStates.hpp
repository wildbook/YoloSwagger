#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLoginLoginSessionStates_t {
    ERROR_E = 3,
    LOGGING_OUT_E = 2,
    SUCCEEDED_E = 1,
    IN_PROGRESS_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginSessionStates_t& v) {
    switch(v) {
      case LolLoginLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
      case LolLoginLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolLoginLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolLoginLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ERROR"){
      v = LolLoginLoginSessionStates_t::ERROR_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolLoginLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolLoginLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolLoginLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
  }
  inline std::string to_string(const LolLoginLoginSessionStates_t& v) {
    switch(v) {
      case LolLoginLoginSessionStates_t::ERROR_E:
        return "ERROR";
      case LolLoginLoginSessionStates_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
      case LolLoginLoginSessionStates_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolLoginLoginSessionStates_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
    }
  }

}
