#ifndef SWAGGER_TYPES_LolSummonerLoginSessionStates_HPP
#define SWAGGER_TYPES_LolSummonerLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolSummonerLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolSummonerLoginSessionStates& v) {
    switch(v) {
      case LolSummonerLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolSummonerLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolSummonerLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolSummonerLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolSummonerLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolSummonerLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolSummonerLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolSummonerLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolSummonerLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolSummonerLoginSessionStates_HPP
