#ifndef SWAGGER_TYPES_LolLobbyLoginSessionStates_HPP
#define SWAGGER_TYPES_LolLobbyLoginSessionStates_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolLobbyLoginSessionStates {
'    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  void to_json(nlohmann::json& j, const LolLobbyLoginSessionStates& v) {
    switch(v) {
      case LolLobbyLoginSessionStates::ERROR:
        j = "ERROR";
      break;
      case LolLobbyLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolLobbyLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolLobbyLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLobbyLoginSessionStates& v) {
    const auto s& = j.get<std::string>();
    if(s == "ERROR"){
      v = LolLobbyLoginSessionStates::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolLobbyLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolLobbyLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolLobbyLoginSessionStates::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyLoginSessionStates_HPP
