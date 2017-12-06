#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolGameSettingsLoginSessionStates_t {
    LOGGING_OUT_E = 2,
    SUCCEEDED_E = 1,
    IN_PROGRESS_E = 0,
    ERROR_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolGameSettingsLoginSessionStates_t& v) {
    switch(v) {
      case LolGameSettingsLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolGameSettingsLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolGameSettingsLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolGameSettingsLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolGameSettingsLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolGameSettingsLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolGameSettingsLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolGameSettingsLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
    if(s == "ERROR"){
      v = LolGameSettingsLoginSessionStates_t::ERROR_E;
      return;
    }
  }
}
