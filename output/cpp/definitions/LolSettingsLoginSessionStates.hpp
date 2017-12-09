#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolSettingsLoginSessionStates_t {
    ERROR_E = 3,
    LOGGING_OUT_E = 2,
    SUCCEEDED_E = 1,
    IN_PROGRESS_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolSettingsLoginSessionStates_t& v) {
    switch(v) {
      case LolSettingsLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
      case LolSettingsLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolSettingsLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolSettingsLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolSettingsLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ERROR"){
      v = LolSettingsLoginSessionStates_t::ERROR_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolSettingsLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolSettingsLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolSettingsLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
  }
  inline std::string to_string(const LolSettingsLoginSessionStates_t& v) {
    switch(v) {
      case LolSettingsLoginSessionStates_t::ERROR_E:
        return "ERROR";
      case LolSettingsLoginSessionStates_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
      case LolSettingsLoginSessionStates_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolSettingsLoginSessionStates_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
    }
  }

}
