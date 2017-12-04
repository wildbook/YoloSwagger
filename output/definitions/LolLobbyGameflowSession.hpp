#ifndef SWAGGER_TYPES_LolLobbyGameflowSession_HPP
#define SWAGGER_TYPES_LolLobbyGameflowSession_HPP
#include <json.hpp>
#include "LolLobbyGameflowPhase.hpp"
#include "LolLobbyGameflowGameDodge.hpp"
#include "LolLobbyGameflowGameClient.hpp"
namespace leagueapi {
  // 
  struct LolLobbyGameflowSession {
    // 
    LolLobbyGameflowGameClient gameClient;
    // 
    LolLobbyGameflowGameDodge gameDodge;
    // 
    LolLobbyGameflowPhase phase;
  };

  void to_json(nlohmann::json& j, const LolLobbyGameflowSession& v) {
    j["gameClient"] = v.gameClient;
    j["gameDodge"] = v.gameDodge;
    j["phase"] = v.phase;
  }

  void from_json(const nlohmann::json& j, LolLobbyGameflowSession& v) {
    v.gameClient = j.at("gameClient").get<LolLobbyGameflowGameClient>;
    v.gameDodge = j.at("gameDodge").get<LolLobbyGameflowGameDodge>;
    v.phase = j.at("phase").get<LolLobbyGameflowPhase>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyGameflowSession_HPP
