#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolSummonerLoginSessionStates_t {
    ERROR_E = 3,
    LOGGING_OUT_E = 2,
    SUCCEEDED_E = 1,
    IN_PROGRESS_E = 0,
  };

  inline void to_json(nlohmann::json& j, const LolSummonerLoginSessionStates_t& v) {
    switch(v) {
      case LolSummonerLoginSessionStates_t::ERROR_E:
        j = "ERROR";
      break;
      case LolSummonerLoginSessionStates_t::LOGGING_OUT_E:
        j = "LOGGING_OUT";
      break;
      case LolSummonerLoginSessionStates_t::SUCCEEDED_E:
        j = "SUCCEEDED";
      break;
      case LolSummonerLoginSessionStates_t::IN_PROGRESS_E:
        j = "IN_PROGRESS";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolSummonerLoginSessionStates_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "ERROR"){
      v = LolSummonerLoginSessionStates_t::ERROR_E;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolSummonerLoginSessionStates_t::LOGGING_OUT_E;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolSummonerLoginSessionStates_t::SUCCEEDED_E;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolSummonerLoginSessionStates_t::IN_PROGRESS_E;
      return;
    }
  }
  inline std::string to_string(const LolSummonerLoginSessionStates_t& v) {
    switch(v) {
      case LolSummonerLoginSessionStates_t::ERROR_E:
        return "ERROR";
      case LolSummonerLoginSessionStates_t::LOGGING_OUT_E:
        return "LOGGING_OUT";
      case LolSummonerLoginSessionStates_t::SUCCEEDED_E:
        return "SUCCEEDED";
      case LolSummonerLoginSessionStates_t::IN_PROGRESS_E:
        return "IN_PROGRESS";
    }
  }

}
