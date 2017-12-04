#ifndef SWAGGER_TYPES_LolLobbyTeamBuilderGameflowSession_HPP
#define SWAGGER_TYPES_LolLobbyTeamBuilderGameflowSession_HPP
#include <json.hpp>
#include "LolLobbyTeamBuilderGameflowGameClient.hpp"
namespace leagueapi {
  // 
  struct LolLobbyTeamBuilderGameflowSession {
    // 
    LolLobbyTeamBuilderGameflowGameClient gameClient;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderGameflowSession& v) {
    j["gameClient"] = v.gameClient;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderGameflowSession& v) {
    v.gameClient = j.at("gameClient").get<LolLobbyTeamBuilderGameflowGameClient>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyTeamBuilderGameflowSession_HPP
