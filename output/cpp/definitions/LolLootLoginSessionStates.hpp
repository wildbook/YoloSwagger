#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLootLoginSessionStates_t {
    ERROR_E = 3,
    IN_PROGRESS_E = 0,
    LOGGING_OUT_E = 2,
    SUCCEEDED_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLootLoginSessionStates_t& v) {
    switch(v) {
      case LolLootLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
      case LolLootLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolLootLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolLootLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLootLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ERROR"){
      v = LolLootLoginSessionStates_t::ERROR_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolLootLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolLootLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolLootLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
  }
}
