#ifndef SWAGGER_TYPES_LolAcsLoginSessionStates_HPP
#define SWAGGER_TYPES_LolAcsLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolAcsLoginSessionStates {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  void to_json(nlohmann::json& j, const LolAcsLoginSessionStates& v) {
    switch(v) {
      case LolAcsLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolAcsLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolAcsLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolAcsLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolAcsLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolAcsLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolAcsLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolAcsLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolAcsLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolAcsLoginSessionStates_HPP
