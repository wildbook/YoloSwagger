#ifndef SWAGGER_TYPES_LolLobbyLoginSessionStates_HPP
#define SWAGGER_TYPES_LolLobbyLoginSessionStates_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyLoginSessionStates {
    // 
    LOGGING_OUT = 2,
    // 
    IN_PROGRESS = 0,
    // 
    SUCCEEDED = 1,
    // 
    ERROR = 3,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLoginSessionStates& v) {
    switch(v) {
      case LolLobbyLoginSessionStates::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolLobbyLoginSessionStates::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolLobbyLoginSessionStates::SUCCEEDED:
        j = "SUCCEEDED";
      break;
      case LolLobbyLoginSessionStates::ERROR:
        j = "ERROR";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLoginSessionStates& v) {
    const auto& s = j.get<std::string>();
    if(s == "LOGGING_OUT"){
      v = LolLobbyLoginSessionStates::LOGGING_OUT;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolLobbyLoginSessionStates::IN_PROGRESS;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolLobbyLoginSessionStates::SUCCEEDED;
      return;
    }
    if(s == "ERROR"){
      v = LolLobbyLoginSessionStates::ERROR;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyLoginSessionStates_HPP
