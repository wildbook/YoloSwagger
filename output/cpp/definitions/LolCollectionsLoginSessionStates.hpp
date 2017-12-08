#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolCollectionsLoginSessionStates_t {
    LOGGING_OUT_E = 2,
    IN_PROGRESS_E = 0,
    SUCCEEDED_E = 1,
    ERROR_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsLoginSessionStates_t& v) {
    switch(v) {
      case LolCollectionsLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolCollectionsLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolCollectionsLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolCollectionsLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolCollectionsLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolCollectionsLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolCollectionsLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "ERROR"){
      v = LolCollectionsLoginSessionStates_t::ERROR_E;
      return;
    }
  }
  inline std::string to_string(const LolCollectionsLoginSessionStates_t& v) {
    switch(v) {
      case LolCollectionsLoginSessionStates_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
      case LolCollectionsLoginSessionStates_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
      case LolCollectionsLoginSessionStates_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolCollectionsLoginSessionStates_t::ERROR_E:
        return "ERROR";
    }
  }

}
