#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolGeoinfoLoginSessionState_t {
    IN_PROGRESS_E = 0,
    ERROR_E = 3,
    SUCCEEDED_E = 1,
    LOGGING_OUT_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolGeoinfoLoginSessionState_t& v) {
    switch(v) {
      case LolGeoinfoLoginSessionState_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolGeoinfoLoginSessionState_t::ERROR_E:
        j = "ERROR";
      break;
      case LolGeoinfoLoginSessionState_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolGeoinfoLoginSessionState_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGeoinfoLoginSessionState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "IN_PROGRESS"){
      v = LolGeoinfoLoginSessionState_t::IN_PROGRESS_E;
      return;
    }
    if(s == "ERROR"){
      v = LolGeoinfoLoginSessionState_t::ERROR_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolGeoinfoLoginSessionState_t::SUCCEEDED_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolGeoinfoLoginSessionState_t::LOGGING_OUT_E;
      return;
    }
  }
  inline std::string to_string(const LolGeoinfoLoginSessionState_t& v) {
    switch(v) {
      case LolGeoinfoLoginSessionState_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
      case LolGeoinfoLoginSessionState_t::ERROR_E:
        return "ERROR";
      case LolGeoinfoLoginSessionState_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolGeoinfoLoginSessionState_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
    }
  }

}
