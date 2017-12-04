#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingReadyCheckResponse_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingReadyCheckResponse_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolLobbyTeamBuilderMatchmakingReadyCheckResponse {
    // 
    Accepted = 49,
    // 
    Declined = 50,
    // 
    None = 48,
  };

  void to_json(nlohmann::json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResponse& v) {
    switch(v) {
      case LolLobbyTeamBuilderMatchmakingReadyCheckResponse::Accepted:
        j = "Accepted";
      break;
      case LolLobbyTeamBuilderMatchmakingReadyCheckResponse::Declined:
        j = "Declined";
      break;
      case LolLobbyTeamBuilderMatchmakingReadyCheckResponse::None:
        j = "None";
      break;
    }
  }

  void from_json(const nlohmann::json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResponse& v) {
    const auto s& = j.get<std::string>();
    if(s == "Accepted"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckResponse::Accepted;
      return;
    }
    if(s == "Declined"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckResponse::Declined;
      return;
    }
    if(s == "None"){
      v = LolLobbyTeamBuilderMatchmakingReadyCheckResponse::None;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderMatchmakingReadyCheckResponse_HPP
