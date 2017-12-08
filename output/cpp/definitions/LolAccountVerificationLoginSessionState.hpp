#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolAccountVerificationLoginSessionState_t {
    LOGGING_OUT_E = 2,
    IN_PROGRESS_E = 0,
    SUCCEEDED_E = 1,
    ERROR_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolAccountVerificationLoginSessionState_t& v) {
    switch(v) {
      case LolAccountVerificationLoginSessionState_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolAccountVerificationLoginSessionState_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolAccountVerificationLoginSessionState_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolAccountVerificationLoginSessionState_t::ERROR_E:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolAccountVerificationLoginSessionState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolAccountVerificationLoginSessionState_t::LOGGING_OUT_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolAccountVerificationLoginSessionState_t::IN_PROGRESS_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolAccountVerificationLoginSessionState_t::SUCCEEDED_E;
      return;
    }
    if(s == "ERROR"){
      v = LolAccountVerificationLoginSessionState_t::ERROR_E;
      return;
    }
  }
  inline std::string to_string(const LolAccountVerificationLoginSessionState_t& v) {
    switch(v) {
      case LolAccountVerificationLoginSessionState_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
      case LolAccountVerificationLoginSessionState_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
      case LolAccountVerificationLoginSessionState_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolAccountVerificationLoginSessionState_t::ERROR_E:
        return "ERROR";
    }
  }

}
