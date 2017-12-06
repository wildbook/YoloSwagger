#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolRankedStatsLoginSessionStates_t {
    LOGGING_OUT_E = 2,
    SUCCEEDED_E = 1,
    IN_PROGRESS_E = 0,
    ERROR_E = 3,
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsLoginSessionStates_t& v) {
    switch(v) {
      case LolRankedStatsLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolRankedStatsLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolRankedStatsLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
      case LolRankedStatsLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolRankedStatsLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolRankedStatsLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolRankedStatsLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
    if(s == "ERROR"){
      v = LolRankedStatsLoginSessionStates_t::ERROR_E;
      return;
    }
  }
}
