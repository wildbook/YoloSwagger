#ifndef SWAGGER_TYPES_LolMatchmakingMatchmakingSearchState_HPP
#define SWAGGER_TYPES_LolMatchmakingMatchmakingSearchState_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolMatchmakingMatchmakingSearchState {
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

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingSearchState& v) {
    switch(v) {
      case LolMatchmakingMatchmakingSearchState::ServiceShutdown:
        j = "ServiceShutdown";
      break;
      case LolMatchmakingMatchmakingSearchState::Searching:
        j = "Searching";
      break;
      case LolMatchmakingMatchmakingSearchState::Invalid:
        j = "Invalid";
      break;
      case LolMatchmakingMatchmakingSearchState::Canceled:
        j = "Canceled";
      break;
      case LolMatchmakingMatchmakingSearchState::ServiceError:
        j = "ServiceError";
      break;
      case LolMatchmakingMatchmakingSearchState::AbandonedLowPriorityQueue:
        j = "AbandonedLowPriorityQueue";
      break;
      case LolMatchmakingMatchmakingSearchState::Error:
        j = "Error";
      break;
      case LolMatchmakingMatchmakingSearchState::Found:
        j = "Found";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingSearchState& v) {
    const auto& s = j.get<std::string>();
    if(s == "ServiceShutdown"){
      v = LolMatchmakingMatchmakingSearchState::ServiceShutdown;
      return;
    }
    if(s == "Searching"){
      v = LolMatchmakingMatchmakingSearchState::Searching;
      return;
    }
    if(s == "Invalid"){
      v = LolMatchmakingMatchmakingSearchState::Invalid;
      return;
    }
    if(s == "Canceled"){
      v = LolMatchmakingMatchmakingSearchState::Canceled;
      return;
    }
    if(s == "ServiceError"){
      v = LolMatchmakingMatchmakingSearchState::ServiceError;
      return;
    }
    if(s == "AbandonedLowPriorityQueue"){
      v = LolMatchmakingMatchmakingSearchState::AbandonedLowPriorityQueue;
      return;
    }
    if(s == "Error"){
      v = LolMatchmakingMatchmakingSearchState::Error;
      return;
    }
    if(s == "Found"){
      v = LolMatchmakingMatchmakingSearchState::Found;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolMatchmakingMatchmakingSearchState_HPP
