#ifndef SWAGGER_TYPES_LolLoadoutsLoginSessionStates_HPP
#define SWAGGER_TYPES_LolLoadoutsLoginSessionStates_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolLoadoutsLoginSessionStates {
'    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  void to_json(nlohmann::json& j, const LolLoadoutsLoginSessionStates& v) {
    switch(v) {
      case LolLoadoutsLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolLoadoutsLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolLoadoutsLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolLoadoutsLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLoadoutsLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolLoadoutsLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolLoadoutsLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolLoadoutsLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolLoadoutsLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLoadoutsLoginSessionStates_HPP
