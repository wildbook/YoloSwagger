#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyGameflowGameClient.hpp"
#include "LolLobbyGameflowGameDodge.hpp"
#include "LolLobbyGameflowPhase.hpp"
namespace leagueapi {
  struct LolLobbyGameflowSession_t {
    LolLobbyGameflowGameClient_t gameClient;
    LolLobbyGameflowGameDodge_t gameDodge;
    LolLobbyGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameflowSession_t& v) {
    j["gameClient"] = v.gameClient;
    j["gameDodge"] = v.gameDodge;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameflowSession_t& v) {
    v.gameClient = j.at("gameClient").get<LolLobbyGameflowGameClient_t>();
    v.gameDodge = j.at("gameDodge").get<LolLobbyGameflowGameDodge_t>();
    v.phase = j.at("phase").get<LolLobbyGameflowPhase_t>();
  }
}
