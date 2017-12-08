#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyGameflowGameClient.hpp"
#include "LolLobbyGameflowGameDodge.hpp"
#include "LolLobbyGameflowPhase.hpp"
namespace leagueapi {
  struct LolLobbyGameflowSession_t {
    LolLobbyGameflowPhase_t phase;
    LolLobbyGameflowGameClient_t gameClient;
    LolLobbyGameflowGameDodge_t gameDodge;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyGameflowSession_t& v) {
    j["phase"] = v.phase;
    j["gameClient"] = v.gameClient;
    j["gameDodge"] = v.gameDodge;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyGameflowSession_t& v) {
    v.phase = j.at("phase").get<LolLobbyGameflowPhase_t>();
    v.gameClient = j.at("gameClient").get<LolLobbyGameflowGameClient_t>();
    v.gameDodge = j.at("gameDodge").get<LolLobbyGameflowGameDodge_t>();
  }
  inline std::string to_string(const LolLobbyGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
