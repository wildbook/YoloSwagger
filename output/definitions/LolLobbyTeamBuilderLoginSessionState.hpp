#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderLoginSessionState_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderLoginSessionState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyTeamBuilderLoginSessionState {
    // 
    ERROR = 3,
    // 
    IN_PROGRESS = 0,
    // 
    LOGGING_OUT = 2,
    // 
    SUCCEEDED = 1,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderLoginSessionState& v) {
    switch(v) {
      case LolLobbyTeamBuilderLoginSessionState::ERROR:
        j = "ERROR";
      break;
      case LolLobbyTeamBuilderLoginSessionState::IN_PROGRESS:
        j = "IN_PROGRESS";
      break;
      case LolLobbyTeamBuilderLoginSessionState::LOGGING_OUT:
        j = "LOGGING_OUT";
      break;
      case LolLobbyTeamBuilderLoginSessionState::SUCCEEDED:
        j = "SUCCEEDED";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderLoginSessionState& v) {
    const auto& s = j.get<std::string>();
    if(s == "ERROR"){
      v = LolLobbyTeamBuilderLoginSessionState::ERROR;
      return;
    }
    if(s == "IN_PROGRESS"){
      v = LolLobbyTeamBuilderLoginSessionState::IN_PROGRESS;
      return;
    }
    if(s == "LOGGING_OUT"){
      v = LolLobbyTeamBuilderLoginSessionState::LOGGING_OUT;
      return;
    }
    if(s == "SUCCEEDED"){
      v = LolLobbyTeamBuilderLoginSessionState::SUCCEEDED;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderLoginSessionState_HPP
