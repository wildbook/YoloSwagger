#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolInventoryLoginSessionStates_t {
    ERROR_E = 3,
    IN_PROGRESS_E = 0,
    LOGGING_OUT_E = 2,
    SUCCEEDED_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolInventoryLoginSessionStates_t& v) {
    switch(v) {
      case LolInventoryLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
      case LolInventoryLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolInventoryLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolInventoryLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolInventoryLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ERROR"){
      v = LolInventoryLoginSessionStates_t::ERROR_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolInventoryLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolInventoryLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolInventoryLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
  }
}
