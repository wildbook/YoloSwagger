#ifndef SWAGGER_TYPES_LolLobbyLobbyMatchmakingSearchState_HPP
#define SWAGGER_TYPES_LolLobbyLobbyMatchmakingSearchState_HPP
#include <json.hpp>
namespace test {
  // 
  enum class LolLobbyLobbyMatchmakingSearchState {
'    // 
    AbandonedLowPriorityQueue = 1,
    // 
    Canceled = 2,
    // 
    Error = 5,
    // 
    Found = 4,
    // 
    Invalid = 0,
    // 
    Searching = 3,
    // 
    ServiceError = 6,
    // 
    ServiceShutdown = 7,
  };

  void to_json(nlohmann::json& j, const LolLobbyLobbyMatchmakingSearchState& v) {
    switch(v) {
      case LolLobbyLobbyMatchmakingSearchState::AbandonedLowPriorityQueue:
        j = "AbandonedLowPriorityQueue";
      break;
      case LolLobbyLobbyMatchmakingSearchState::Canceled:
        j = "Canceled";
      break;
      case LolLobbyLobbyMatchmakingSearchState::Error:
        j = "Error";
      break;
      case LolLobbyLobbyMatchmakingSearchState::Found:
        j = "Found";
      break;
      case LolLobbyLobbyMatchmakingSearchState::Invalid:
        j = "Invalid";
      break;
      case LolLobbyLobbyMatchmakingSearchState::Searching:
        j = "Searching";
      break;
      case LolLobbyLobbyMatchmakingSearchState::ServiceError:
        j = "ServiceError";
      break;
      case LolLobbyLobbyMatchmakingSearchState::ServiceShutdown:
        j = "ServiceShutdown";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLobbyLobbyMatchmakingSearchState& v) {
    const auto s& = j.get<std::string>();
    if(s == "AbandonedLowPriorityQueue"){
      v = LolLobbyLobbyMatchmakingSearchState::AbandonedLowPriorityQueue;
      return;
    }
    if(s == "Canceled"){
      v = LolLobbyLobbyMatchmakingSearchState::Canceled;
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
    if(s == "Invalid"){
      v = LolLobbyLobbyMatchmakingSearchState::Invalid;
      return;
    }
    if(s == "Searching"){
      v = LolLobbyLobbyMatchmakingSearchState::Searching;
      return;
    }
    if(s == "ServiceError"){
      v = LolLobbyLobbyMatchmakingSearchState::ServiceError;
      return;
    }
    if(s == "ServiceShutdown"){
      v = LolLobbyLobbyMatchmakingSearchState::ServiceShutdown;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyLobbyMatchmakingSearchState_HPP
