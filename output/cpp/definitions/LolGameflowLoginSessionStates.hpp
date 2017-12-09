#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolGameflowLoginSessionStates_t {
    IN_PROGRESS_E = 0,
    LOGGING_OUT_E = 2,
    SUCCEEDED_E = 1,
    ERROR_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolGameflowLoginSessionStates_t& v) {
    switch(v) {
      case LolGameflowLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolGameflowLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolGameflowLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolGameflowLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameflowLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "IN_PROGRESS"){
      v = LolGameflowLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolGameflowLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolGameflowLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "ERROR"){
      v = LolGameflowLoginSessionStates_t::ERROR_E;
      return;
    }
  }
  inline std::string to_string(const LolGameflowLoginSessionStates_t& v) {
    switch(v) {
      case LolGameflowLoginSessionStates_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
      case LolGameflowLoginSessionStates_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
      case LolGameflowLoginSessionStates_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolGameflowLoginSessionStates_t::ERROR_E:
        return "ERROR";
    }
  }

}
