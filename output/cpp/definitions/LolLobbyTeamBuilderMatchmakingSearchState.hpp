#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingSearchState_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingSearchState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyTeamBuilderMatchmakingSearchState {
    // 
    ServiceShutdown = 7,
    // 
    Searching = 3,
    // 
    Invalid = 0,
    // 
    Canceled = 2,
    // 
    ServiceError = 6,
    // 
    AbandonedLowPriorityQueue = 1,
    // 
    Error = 5,
    // 
    Found = 4,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingSearchState& v) {
    switch(v) {
      case LolLobbyTeamBuilderMatchmakingSearchState::ServiceShutdown:
        j = "ServiceShutdown";
      break;
      case LolLobbyTeamBuilderMatchmakingSearchState::Searching:
        j = "Searching";
      break;
      case LolLobbyTeamBuilderMatchmakingSearchState::Invalid:
        j = "Invalid";
      break;
      case LolLobbyTeamBuilderMatchmakingSearchState::Canceled:
        j = "Canceled";
      break;
      case LolLobbyTeamBuilderMatchmakingSearchState::ServiceError:
        j = "ServiceError";
      break;
      case LolLobbyTeamBuilderMatchmakingSearchState::AbandonedLowPriorityQueue:
        j = "AbandonedLowPriorityQueue";
      break;
      case LolLobbyTeamBuilderMatchmakingSearchState::Error:
        j = "Error";
      break;
      case LolLobbyTeamBuilderMatchmakingSearchState::Found:
        j = "Found";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingSearchState& v) {
    const auto& s = j.get<std::string>();
    if(s == "ServiceShutdown"){
      v = LolLobbyTeamBuilderMatchmakingSearchState::ServiceShutdown;
      return;
    }
    if(s == "Searching"){
      v = LolLobbyTeamBuilderMatchmakingSearchState::Searching;
      return;
    }
    if(s == "Invalid"){
      v = LolLobbyTeamBuilderMatchmakingSearchState::Invalid;
      return;
    }
    if(s == "Canceled"){
      v = LolLobbyTeamBuilderMatchmakingSearchState::Canceled;
      return;
    }
    if(s == "ServiceError"){
      v = LolLobbyTeamBuilderMatchmakingSearchState::ServiceError;
      return;
    }
    if(s == "AbandonedLowPriorityQueue"){
      v = LolLobbyTeamBuilderMatchmakingSearchState::AbandonedLowPriorityQueue;
      return;
    }
    if(s == "Error"){
      v = LolLobbyTeamBuilderMatchmakingSearchState::Error;
      return;
    }
    if(s == "Found"){
      v = LolLobbyTeamBuilderMatchmakingSearchState::Found;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingSearchState_HPP
