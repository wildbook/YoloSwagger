#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolClashLoginSessionState_t {
    IN_PROGRESS_E = 0,
    ERROR_E = 3,
    SUCCEEDED_E = 1,
    LOGGING_OUT_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolClashLoginSessionState_t& v) {
    switch(v) {
      case LolClashLoginSessionState_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolClashLoginSessionState_t::ERROR_E:
        j = "ERROR";
      break;
      case LolClashLoginSessionState_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolClashLoginSessionState_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashLoginSessionState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "IN_PROGRESS"){
      v = LolClashLoginSessionState_t::IN_PROGRESS_E;
      return;
    }
    if(s == "ERROR"){
      v = LolClashLoginSessionState_t::ERROR_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolClashLoginSessionState_t::SUCCEEDED_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolClashLoginSessionState_t::LOGGING_OUT_E;
      return;
    }
  }
  inline std::string to_string(const LolClashLoginSessionState_t& v) {
    switch(v) {
      case LolClashLoginSessionState_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
      case LolClashLoginSessionState_t::ERROR_E:
        return "ERROR";
      case LolClashLoginSessionState_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolClashLoginSessionState_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
    }
  }

}
