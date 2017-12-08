#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t {
    None_E = 48,
    Declined_E = 50,
    Accepted_E = 49,
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t& v) {
    switch(v) {
      case LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t::None_E:
        j = "None";
      break;
      case LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t::Declined_E:
        j = "Declined";
      break;
      case LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t::Accepted_E:
        j = "Accepted";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "None"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t::None_E;
      return;
    }
    if(s == "Declined"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t::Declined_E;
      return;
    }
    if(s == "Accepted"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t::Accepted_E;
      return;
    }
  }
  inline std::string to_string(const LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t& v) {
    switch(v) {
      case LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t::None_E:
        return "None";
      case LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t::Declined_E:
        return "Declined";
      case LolLobbyTeamBuilderMatchmakingReadyCheckResponse_t::Accepted_E:
        return "Accepted";
    }
  }

}
