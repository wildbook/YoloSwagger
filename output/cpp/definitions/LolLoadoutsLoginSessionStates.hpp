#ifndef SWAGGER_TYPES_LolLoadoutsLoginSessionStates_HPP
#define SWAGGER_TYPES_LolLoadoutsLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLoadoutsLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolLoadoutsLoginSessionStates& v) {
    switch(v) {
      case LolLoadoutsLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolLoadoutsLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolLoadoutsLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolLoadoutsLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLoadoutsLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolLoadoutsLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolLoadoutsLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolLoadoutsLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolLoadoutsLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsLoginSessionStates_HPP
