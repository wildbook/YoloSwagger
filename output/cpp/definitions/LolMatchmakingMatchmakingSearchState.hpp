#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolMatchmakingMatchmakingSearchState_t {
    Invalid_E = 0,
    Found_E = 4,
    Canceled_E = 2,
    Error_E = 5,
    ServiceError_E = 6,
    Searching_E = 3,
    ServiceShutdown_E = 7,
    AbandonedLowPriorityQueue_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingMatchmakingSearchState_t& v) {
    switch(v) {
      case LolMatchmakingMatchmakingSearchState_t::Invalid_E:
        j = "Invalid";
      break;
      case LolMatchmakingMatchmakingSearchState_t::Found_E:
        j = "Found";
      break;
      case LolMatchmakingMatchmakingSearchState_t::Canceled_E:
        j = "Canceled";
      break;
      case LolMatchmakingMatchmakingSearchState_t::Error_E:
        j = "Error";
      break;
      case LolMatchmakingMatchmakingSearchState_t::ServiceError_E:
        j = "ServiceError";
      break;
      case LolMatchmakingMatchmakingSearchState_t::Searching_E:
        j = "Searching";
      break;
      case LolMatchmakingMatchmakingSearchState_t::ServiceShutdown_E:
        j = "ServiceShutdown";
      break;
      case LolMatchmakingMatchmakingSearchState_t::AbandonedLowPriorityQueue_E:
        j = "AbandonedLowPriorityQueue";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingMatchmakingSearchState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Invalid"){
      v = LolMatchmakingMatchmakingSearchState_t::Invalid_E;
      return;
    }
    if(s == "Found"){
      v = LolMatchmakingMatchmakingSearchState_t::Found_E;
      return;
    }
    if(s == "Canceled"){
      v = LolMatchmakingMatchmakingSearchState_t::Canceled_E;
      return;
    }
    if(s == "Error"){
      v = LolMatchmakingMatchmakingSearchState_t::Error_E;
      return;
    }
    if(s == "ServiceError"){
      v = LolMatchmakingMatchmakingSearchState_t::ServiceError_E;
      return;
    }
    if(s == "Searching"){
      v = LolMatchmakingMatchmakingSearchState_t::Searching_E;
      return;
    }
    if(s == "ServiceShutdown"){
      v = LolMatchmakingMatchmakingSearchState_t::ServiceShutdown_E;
      return;
    }
    if(s == "AbandonedLowPriorityQueue"){
      v = LolMatchmakingMatchmakingSearchState_t::AbandonedLowPriorityQueue_E;
      return;
    }
  }
}
