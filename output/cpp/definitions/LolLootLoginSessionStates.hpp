#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLootLoginSessionStates_t {
    SUCCEEDED_E = 1,
    LOGGING_OUT_E = 2,
    ERROR_E = 3,
    IN_PROGRESS_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolLootLoginSessionStates_t& v) {
    switch(v) {
      case LolLootLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolLootLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolLootLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
      case LolLootLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLootLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "SUCCEEDED"){
      v = LolLootLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolLootLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "ERROR"){
      v = LolLootLoginSessionStates_t::ERROR_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolLootLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
  }
  inline std::string to_string(const LolLootLoginSessionStates_t& v) {
    switch(v) {
      case LolLootLoginSessionStates_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolLootLoginSessionStates_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
      case LolLootLoginSessionStates_t::ERROR_E:
        return "ERROR";
      case LolLootLoginSessionStates_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
    }
  }

}
