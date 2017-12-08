#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderMatchmakingSearchState_t {
    Found_E = 4,
    Invalid_E = 0,
    Error_E = 5,
    AbandonedLowPriorityQueue_E = 1,
    ServiceShutdown_E = 7,
    Searching_E = 3,
    ServiceError_E = 6,
    Canceled_E = 2,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingSearchState_t& v) {
    switch(v) {
      case LolLobbyTeamBuilderMatchmakingSearchState_t::Found_E:
        j = "Found";
      break;
      case LolLobbyTeamBuilderMatchmakingSearchState_t::Invalid_E:
        j = "Invalid";
      break;
      case LolLobbyTeamBuilderMatchmakingSearchState_t::Error_E:
        j = "Error";
      break;
      case LolLobbyTeamBuilderMatchmakingSearchState_t::AbandonedLowPriorityQueue_E:
        j = "AbandonedLowPriorityQueue";
      break;
      case LolLobbyTeamBuilderMatchmakingSearchState_t::ServiceShutdown_E:
        j = "ServiceShutdown";
      break;
      case LolLobbyTeamBuilderMatchmakingSearchState_t::Searching_E:
        j = "Searching";
      break;
      case LolLobbyTeamBuilderMatchmakingSearchState_t::ServiceError_E:
        j = "ServiceError";
      break;
      case LolLobbyTeamBuilderMatchmakingSearchState_t::Canceled_E:
        j = "Canceled";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingSearchState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "Found"){
      v = LolLobbyTeamBuilderMatchmakingSearchState_t::Found_E;
      return;
    }
    if(s == "Invalid"){
      v = LolLobbyTeamBuilderMatchmakingSearchState_t::Invalid_E;
      return;
    }
    if(s == "Error"){
      v = LolLobbyTeamBuilderMatchmakingSearchState_t::Error_E;
      return;
    }
    if(s == "AbandonedLowPriorityQueue"){
      v = LolLobbyTeamBuilderMatchmakingSearchState_t::AbandonedLowPriorityQueue_E;
      return;
    }
    if(s == "ServiceShutdown"){
      v = LolLobbyTeamBuilderMatchmakingSearchState_t::ServiceShutdown_E;
      return;
    }
    if(s == "Searching"){
      v = LolLobbyTeamBuilderMatchmakingSearchState_t::Searching_E;
      return;
    }
    if(s == "ServiceError"){
      v = LolLobbyTeamBuilderMatchmakingSearchState_t::ServiceError_E;
      return;
    }
    if(s == "Canceled"){
      v = LolLobbyTeamBuilderMatchmakingSearchState_t::Canceled_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyTeamBuilderMatchmakingSearchState_t& v) {
    switch(v) {
      case LolLobbyTeamBuilderMatchmakingSearchState_t::Found_E:
        return "Found";
      case LolLobbyTeamBuilderMatchmakingSearchState_t::Invalid_E:
        return "Invalid";
      case LolLobbyTeamBuilderMatchmakingSearchState_t::Error_E:
        return "Error";
      case LolLobbyTeamBuilderMatchmakingSearchState_t::AbandonedLowPriorityQueue_E:
        return "AbandonedLowPriorityQueue";
      case LolLobbyTeamBuilderMatchmakingSearchState_t::ServiceShutdown_E:
        return "ServiceShutdown";
      case LolLobbyTeamBuilderMatchmakingSearchState_t::Searching_E:
        return "Searching";
      case LolLobbyTeamBuilderMatchmakingSearchState_t::ServiceError_E:
        return "ServiceError";
      case LolLobbyTeamBuilderMatchmakingSearchState_t::Canceled_E:
        return "Canceled";
    }
  }

}
