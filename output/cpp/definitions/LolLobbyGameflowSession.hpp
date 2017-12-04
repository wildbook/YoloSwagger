#ifndef SWAGGER_TYPES_LolLobbyGameflowSession_HPP
#define SWAGGER_TYPES_LolLobbyGameflowSession_HPP
#include <json.hpp>
#include "LolLobbyGameflowGameClient.hpp"
#include "LolLobbyGameflowGameDodge.hpp"
#include "LolLobbyGameflowPhase.hpp"
namespace leagueapi {
  // 
  struct LolLobbyGameflowSession {
    // 
    LolLobbyGameflowPhase phase;
    // 
    LolLobbyGameflowGameClient gameClient;
    // 
    LolLobbyGameflowGameDodge gameDodge;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameflowSession& v) {
    j["phase"] = v.phase;
    j["gameClient"] = v.gameClient;
    j["gameDodge"] = v.gameDodge;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameflowSession& v) {
    v.phase = j.at("phase").get<LolLobbyGameflowPhase>;
    v.gameClient = j.at("gameClient").get<LolLobbyGameflowGameClient>;
    v.gameDodge = j.at("gameDodge").get<LolLobbyGameflowGameDodge>;
  }

}
#endif // SWAGGER_TYPES_LolLobbyGameflowSession_HPP
