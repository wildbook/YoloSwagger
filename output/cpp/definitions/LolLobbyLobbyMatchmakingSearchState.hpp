#ifndef SWAGGER_TYPES_LolLobbyLobbyMatchmakingSearchState_HPP
#define SWAGGER_TYPES_LolLobbyLobbyMatchmakingSearchState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyLobbyMatchmakingSearchState {
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

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMatchmakingSearchState& v) {
    switch(v) {
      case LolLobbyLobbyMatchmakingSearchState::ServiceShutdown:
        j = "ServiceShutdown";
      break;
      case LolLobbyLobbyMatchmakingSearchState::Searching:
        j = "Searching";
      break;
      case LolLobbyLobbyMatchmakingSearchState::Invalid:
        j = "Invalid";
      break;
      case LolLobbyLobbyMatchmakingSearchState::Canceled:
        j = "Canceled";
      break;
      case LolLobbyLobbyMatchmakingSearchState::ServiceError:
        j = "ServiceError";
      break;
      case LolLobbyLobbyMatchmakingSearchState::AbandonedLowPriorityQueue:
        j = "AbandonedLowPriorityQueue";
      break;
      case LolLobbyLobbyMatchmakingSearchState::Error:
        j = "Error";
      break;
      case LolLobbyLobbyMatchmakingSearchState::Found:
        j = "Found";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMatchmakingSearchState& v) {
    const auto& s = j.get<std::string>();
    if(s == "ServiceShutdown"){
      v = LolLobbyLobbyMatchmakingSearchState::ServiceShutdown;
      return;
    }
    if(s == "Searching"){
      v = LolLobbyLobbyMatchmakingSearchState::Searching;
      return;
    }
    if(s == "Invalid"){
      v = LolLobbyLobbyMatchmakingSearchState::Invalid;
      return;
    }
    if(s == "Canceled"){
      v = LolLobbyLobbyMatchmakingSearchState::Canceled;
      return;
    }
    if(s == "ServiceError"){
      v = LolLobbyLobbyMatchmakingSearchState::ServiceError;
      return;
    }
    if(s == "AbandonedLowPriorityQueue"){
      v = LolLobbyLobbyMatchmakingSearchState::AbandonedLowPriorityQueue;
      return;
    }
    if(s == "Error"){
      v = LolLobbyLobbyMatchmakingSearchState::Error;
      return;
    }
    if(s == "Found"){
      v = LolLobbyLobbyMatchmakingSearchState::Found;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyMatchmakingSearchState_HPP
