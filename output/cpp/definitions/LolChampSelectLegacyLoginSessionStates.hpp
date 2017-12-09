#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolChampSelectLegacyLoginSessionStates_t {
    SUCCEEDED_E = 1,
    LOGGING_OUT_E = 2,
    ERROR_E = 3,
    IN_PROGRESS_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectLegacyLoginSessionStates_t& v) {
    switch(v) {
      case LolChampSelectLegacyLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolChampSelectLegacyLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolChampSelectLegacyLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
      case LolChampSelectLegacyLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectLegacyLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "SUCCEEDED"){
      v = LolChampSelectLegacyLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolChampSelectLegacyLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "ERROR"){
      v = LolChampSelectLegacyLoginSessionStates_t::ERROR_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolChampSelectLegacyLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
  }
  inline std::string to_string(const LolChampSelectLegacyLoginSessionStates_t& v) {
    switch(v) {
      case LolChampSelectLegacyLoginSessionStates_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolChampSelectLegacyLoginSessionStates_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
      case LolChampSelectLegacyLoginSessionStates_t::ERROR_E:
        return "ERROR";
      case LolChampSelectLegacyLoginSessionStates_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
    }
  }

}
