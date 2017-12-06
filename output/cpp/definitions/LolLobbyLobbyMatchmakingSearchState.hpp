#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyLobbyMatchmakingSearchState_t {
    AbandonedLowPriorityQueue_E = 1,
    Canceled_E = 2,
    Error_E = 5,
    Found_E = 4,
    Invalid_E = 0,
    Searching_E = 3,
    ServiceError_E = 6,
    ServiceShutdown_E = 7,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyMatchmakingSearchState_t& v) {
    switch(v) {
      case LolLobbyLobbyMatchmakingSearchState_t::AbandonedLowPriorityQueue_E:
        j = "AbandonedLowPriorityQueue";
      break;
      case LolLobbyLobbyMatchmakingSearchState_t::Canceled_E:
        j = "Canceled";
      break;
      case LolLobbyLobbyMatchmakingSearchState_t::Error_E:
        j = "Error";
      break;
      case LolLobbyLobbyMatchmakingSearchState_t::Found_E:
        j = "Found";
      break;
      case LolLobbyLobbyMatchmakingSearchState_t::Invalid_E:
        j = "Invalid";
      break;
      case LolLobbyLobbyMatchmakingSearchState_t::Searching_E:
        j = "Searching";
      break;
      case LolLobbyLobbyMatchmakingSearchState_t::ServiceError_E:
        j = "ServiceError";
      break;
      case LolLobbyLobbyMatchmakingSearchState_t::ServiceShutdown_E:
        j = "ServiceShutdown";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyMatchmakingSearchState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "AbandonedLowPriorityQueue"){
      v = LolLobbyLobbyMatchmakingSearchState_t::AbandonedLowPriorityQueue_E;
      return;
    }
    if(s == "Canceled"){
      v = LolLobbyLobbyMatchmakingSearchState_t::Canceled_E;
      return;
    }
    if(s == "Error"){
      v = LolLobbyLobbyMatchmakingSearchState_t::Error_E;
      return;
    }
    if(s == "Found"){
      v = LolLobbyLobbyMatchmakingSearchState_t::Found_E;
      return;
    }
    if(s == "Invalid"){
      v = LolLobbyLobbyMatchmakingSearchState_t::Invalid_E;
      return;
    }
    if(s == "Searching"){
      v = LolLobbyLobbyMatchmakingSearchState_t::Searching_E;
      return;
    }
    if(s == "ServiceError"){
      v = LolLobbyLobbyMatchmakingSearchState_t::ServiceError_E;
      return;
    }
    if(s == "ServiceShutdown"){
      v = LolLobbyLobbyMatchmakingSearchState_t::ServiceShutdown_E;
      return;
    }
  }
}
