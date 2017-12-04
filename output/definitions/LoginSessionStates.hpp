#ifndef SWAGGER_TYPES_LoginSessionStates_HPP
#define SWAGGER_TYPES_LoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LoginSessionStates {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  inline void to_json(nlohmann::json& j, const LoginSessionStates& v) {
    switch(v) {
      case LoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "ERROR"){
      v = LoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LoginSessionStates_HPP
