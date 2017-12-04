#ifndef SWAGGER_TYPES_LolAcsLoginSessionStates_HPP
#define SWAGGER_TYPES_LolAcsLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolAcsLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolAcsLoginSessionStates& v) {
    switch(v) {
      case LolAcsLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolAcsLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolAcsLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolAcsLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolAcsLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolAcsLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolAcsLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolAcsLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolAcsLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolAcsLoginSessionStates_HPP
